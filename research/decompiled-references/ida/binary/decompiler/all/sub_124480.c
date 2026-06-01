__int64 __fastcall sub_124480(__int64 a1, unsigned int a2, int a3, char a4)
{
  unsigned int v4; // r14d
  __int64 result; // rax
  __int64 v6; // rbx
  int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // r8
  int v10; // r9d
  char v11; // al
  __int64 v12; // rax
  int v13; // r15d
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  __int64 v18; // r15
  __int64 v19; // r13
  _QWORD *v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rdx
  unsigned __int8 v23; // al
  char v24; // dl
  char v25; // cl
  __int16 v26; // cx
  __int64 v27; // rsi
  char v28; // al
  char v29; // al
  char v31; // [rsp+Ch] [rbp-8Ch]
  unsigned __int8 v32; // [rsp+Ch] [rbp-8Ch]
  char v33; // [rsp+Ch] [rbp-8Ch]
  __int64 v34; // [rsp+10h] [rbp-88h]
  unsigned __int64 v35; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+28h] [rbp-70h]
  char v37; // [rsp+30h] [rbp-68h]
  __int64 v38; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v39; // [rsp+40h] [rbp-58h] BYREF
  __int128 v40; // [rsp+48h] [rbp-50h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v4 = a2 + a3;
  v41 = __readfsqword(0x28u);
  result = 0;
  if ( (signed int)(a2 + a3) <= *(_DWORD *)(a1 + 4) )
  {
    v6 = a1;
    v37 = 0;
    v7 = a3;
    if ( (get_tinfo_property() & 0x2F) == 0xD )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = *(int *)(v6 + 4);
      v38 = (int)a2;
      if ( !(unsigned __int8)sub_1C2640(v8, *(_QWORD *)(*(_QWORD *)(v8 + 16) + 1496LL), &v38, v7, v9) )
      {
LABEL_4:
        v11 = 0;
LABEL_33:
        v32 = v11;
        clear_tinfo_t();
        return v32;
      }
      v12 = *(_QWORD *)(v6 + 8);
      v40 = 0;
      v39 = 0;
      sub_331530((unsigned int)&v39, v12 + 48, v38, 0, 3, v10);
      if ( !(_QWORD)v40 )
      {
        if ( !v39 )
          goto LABEL_21;
        goto LABEL_20;
      }
      v13 = 0;
      v14 = 0;
      while ( 1 )
      {
        v15 = v39 + (v14 << 6);
        if ( v7 == get_tinfo_size() && (get_tinfo_property() & 0xF) != 0xE )
          break;
        v14 = ++v13;
        if ( v13 >= (unsigned __int64)v40 )
          goto LABEL_11;
      }
      v16 = *(_QWORD *)(v15 + 56);
      *(_QWORD *)(v15 + 56) = 0;
      v37 = v16;
LABEL_11:
      v17 = v39;
      if ( v39 )
      {
        if ( (_QWORD)v40 )
        {
          v34 = v6;
          v18 = 0;
          v19 = v40;
          do
          {
            v20 = (_QWORD *)(v17 + (v18 << 6));
            clear_tinfo_t();
            if ( v20[4] )
            {
              v20[5] = 0;
              qfree();
            }
            if ( v20[1] )
            {
              v20[2] = 0;
              qfree();
            }
            ++v18;
            v17 = v39;
          }
          while ( v19 != v18 );
          v6 = v34;
        }
LABEL_20:
        *(_QWORD *)&v40 = 0;
        qfree();
      }
    }
LABEL_21:
    if ( !v37 && (a4 & 2) == 0 && (v7 > 16 || (v7 & (v7 - 1)) != 0) )
      goto LABEL_4;
    *(_QWORD *)&v40 = 0;
    sub_121540((__int64)&v39, (unsigned __int8 *)v6);
    v21 = v40;
    v22 = *(unsigned int *)(v6 + 4);
    v35 = v39;
    v36 = *(_QWORD *)(*(_QWORD *)(v40 + 16) + 1504LL);
    if ( v4 != (_DWORD)v22 && !(unsigned __int8)sub_1BFEA0(v40, v36, v22, v4) )
      goto LABEL_35;
    if ( *(_DWORD *)v21 != 2 )
    {
      if ( !under_debugger )
        sub_37EA20(51698);
      BUG();
    }
    if ( a2 )
    {
      v29 = sub_1C2B60(v21, v36, a2, v4, a4 & 1);
      if ( !v29 )
      {
LABEL_35:
        v7 = HIDWORD(v35);
        v28 = 0;
LABEL_32:
        v31 = v28;
        v39 = __PAIR64__(v7, v35);
        *(_QWORD *)&v40 = v21;
        sub_11A960((__int64)&v39);
        v11 = v31;
        goto LABEL_33;
      }
      if ( *(_DWORD *)v21 != 2 )
      {
        v33 = v29;
        sub_123F20(v6, *(_QWORD *)(v21 + 16), v21, v7);
        v28 = v33;
        goto LABEL_32;
      }
    }
    if ( (a4 & 1) != 0 )
    {
      HIDWORD(v39) = v7;
      sub_1242B0((__int64)&v39);
      v21 = v40;
      v35 = v39;
    }
    else
    {
      HIDWORD(v35) = v7;
    }
    if ( (_BYTE)v35 == 15 )
    {
      if ( v37 )
      {
        v38 = 0;
        copy_tinfo_t();
      }
      else
      {
        sub_328E20(&v38, v36, (unsigned int)v7);
      }
      copy_tinfo_t();
      clear_tinfo_t();
      if ( *(_QWORD *)(v21 + 24) )
      {
        *(_QWORD *)(v21 + 32) = 0;
        qfree();
        *(_QWORD *)(v21 + 24) = 0;
        *(_QWORD *)(v21 + 40) = 0;
      }
    }
    v23 = *(_BYTE *)v6;
    v24 = *(_BYTE *)(v6 + 1);
    *(_BYTE *)v6 = v35;
    v25 = BYTE1(v35);
    v7 = *(_DWORD *)(v6 + 4);
    BYTE1(v35) = v24;
    *(_BYTE *)(v6 + 1) = v25;
    v26 = *(_WORD *)(v6 + 2);
    *(_WORD *)(v6 + 2) = WORD1(v35);
    WORD1(v35) = v26;
    *(_DWORD *)(v6 + 4) = HIDWORD(v35);
    v27 = *(_QWORD *)(v6 + 8);
    LOBYTE(v35) = v23;
    v28 = 1;
    *(_QWORD *)(v6 + 8) = v21;
    v21 = v27;
    goto LABEL_32;
  }
  return result;
}
