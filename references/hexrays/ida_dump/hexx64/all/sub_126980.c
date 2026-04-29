__int64 __fastcall sub_126980(__int64 a1, unsigned int a2, int a3, char a4)
{
  unsigned int v4; // r14d
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ebp
  __int64 v9; // rdi
  __int64 v10; // r8
  int v11; // r9d
  char v12; // al
  __int64 v13; // rax
  int v14; // r15d
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  __int64 v19; // r15
  __int64 v20; // r13
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // r15
  __int64 v25; // rdx
  unsigned __int8 v26; // al
  char v27; // dl
  char v28; // cl
  __int16 v29; // cx
  __int64 v30; // rsi
  char tinfo_property; // al
  char v32; // cl
  char v33; // dl
  char v34; // cl
  bool v35; // zf
  char v36; // al
  __int64 v37; // rdi
  char v39; // [rsp+Ch] [rbp-8Ch]
  unsigned __int8 v40; // [rsp+Ch] [rbp-8Ch]
  __int64 v41; // [rsp+10h] [rbp-88h]
  unsigned __int64 v42; // [rsp+20h] [rbp-78h]
  __int64 v43; // [rsp+28h] [rbp-70h]
  __int64 v44; // [rsp+30h] [rbp-68h] BYREF
  __int64 v45; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v46; // [rsp+40h] [rbp-58h] BYREF
  __int128 v47; // [rsp+48h] [rbp-50h]
  unsigned __int64 v48; // [rsp+58h] [rbp-40h]

  v4 = a2 + a3;
  v48 = __readfsqword(0x28u);
  result = 0;
  if ( (signed int)(a2 + a3) <= *(_DWORD *)(a1 + 4) )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = a1;
    v44 = 0;
    v8 = a3;
    if ( (get_tinfo_property(*(_QWORD *)(v6 + 48), 2) & 0x2F) != 0xD )
      goto LABEL_21;
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(int *)(v7 + 4);
    v45 = (int)a2;
    if ( !(unsigned __int8)sub_1C50C0(v9, *(_QWORD *)(*(_QWORD *)(v9 + 16) + 1496LL), &v45, v8, v10) )
    {
LABEL_4:
      v12 = 0;
LABEL_36:
      v40 = v12;
      clear_tinfo_t(&v44);
      return v40;
    }
    v13 = *(_QWORD *)(v7 + 8);
    v47 = 0;
    v46 = 0;
    sub_3349B0((unsigned int)&v46, v13 + 48, v45, 0, 3, v11);
    if ( (_QWORD)v47 )
    {
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        v16 = v46 + (v15 << 6);
        if ( v8 == get_tinfo_size(0, *(_QWORD *)(v16 + 56), 0)
          && (get_tinfo_property(*(_QWORD *)(v16 + 56), 2) & 0xF) != 0xE )
        {
          break;
        }
        v15 = ++v14;
        if ( v14 >= (unsigned __int64)v47 )
          goto LABEL_11;
      }
      v17 = *(_QWORD *)(v16 + 56);
      *(_QWORD *)(v16 + 56) = v44;
      v44 = v17;
LABEL_11:
      v18 = v46;
      if ( !v46 )
        goto LABEL_21;
      if ( (_QWORD)v47 )
      {
        v41 = v7;
        v19 = 0;
        v20 = v47;
        do
        {
          v21 = (_QWORD *)(v18 + (v19 << 6));
          clear_tinfo_t(v21 + 7);
          v22 = v21[4];
          if ( v22 )
          {
            v21[5] = 0;
            qfree(v22);
          }
          v23 = v21[1];
          if ( v23 )
          {
            v21[2] = 0;
            qfree(v23);
          }
          ++v19;
          v18 = v46;
        }
        while ( v20 != v19 );
        v7 = v41;
      }
    }
    else
    {
      v18 = v46;
      if ( !v46 )
      {
LABEL_21:
        if ( !(_BYTE)v44 && (a4 & 2) == 0 && (v8 > 16 || (v8 & (v8 - 1)) != 0) )
          goto LABEL_4;
        *(_QWORD *)&v47 = 0;
        sub_123A40((__int64)&v46, (unsigned __int8 *)v7);
        v24 = v47;
        v25 = *(unsigned int *)(v7 + 4);
        v42 = v46;
        v43 = *(_QWORD *)(*(_QWORD *)(v47 + 16) + 1504LL);
        if ( v4 != (_DWORD)v25 && !(unsigned __int8)sub_1C28A0(v47, v43, v25, v4) )
          goto LABEL_38;
        if ( *(_DWORD *)v24 != 2 )
        {
          if ( !under_debugger )
            sub_383060(51698);
          BUG();
        }
        if ( !a2 )
          goto LABEL_28;
        if ( !(unsigned __int8)sub_1C55E0(v24, v43, a2, v4, a4 & 1) )
        {
LABEL_38:
          v8 = HIDWORD(v42);
          v36 = 0;
LABEL_35:
          v39 = v36;
          v46 = __PAIR64__(v8, v42);
          *(_QWORD *)&v47 = v24;
          sub_11CDA0((__int64)&v46);
          v12 = v39;
          goto LABEL_36;
        }
        if ( *(_DWORD *)v24 == 2 )
        {
LABEL_28:
          if ( (a4 & 1) != 0 )
          {
            HIDWORD(v46) = v8;
            sub_1267B0((__int64)&v46);
            v24 = v47;
            v42 = v46;
          }
          else
          {
            HIDWORD(v42) = v8;
          }
          if ( (_BYTE)v42 == 15 )
          {
            if ( (_BYTE)v44 )
            {
              v45 = 0;
              copy_tinfo_t(&v45, &v44);
            }
            else
            {
              sub_32C270(&v45, v43, (unsigned int)v8);
            }
            copy_tinfo_t(v24 + 48, &v45);
            clear_tinfo_t(&v45);
            v37 = *(_QWORD *)(v24 + 24);
            if ( v37 )
            {
              *(_QWORD *)(v24 + 32) = 0;
              qfree(v37);
              *(_QWORD *)(v24 + 24) = 0;
              *(_QWORD *)(v24 + 40) = 0;
            }
          }
          v26 = *(_BYTE *)v7;
          v27 = *(_BYTE *)(v7 + 1);
          *(_BYTE *)v7 = v42;
          v28 = BYTE1(v42);
          v8 = *(_DWORD *)(v7 + 4);
          BYTE1(v42) = v27;
          *(_BYTE *)(v7 + 1) = v28;
          v29 = *(_WORD *)(v7 + 2);
          *(_WORD *)(v7 + 2) = WORD1(v42);
          WORD1(v42) = v29;
          *(_DWORD *)(v7 + 4) = HIDWORD(v42);
          v30 = *(_QWORD *)(v7 + 8);
          LOBYTE(v42) = v26;
          *(_QWORD *)(v7 + 8) = v24;
          v24 = v30;
        }
        else
        {
          sub_126420(v7, *(_QWORD *)(v24 + 16), v24, v8);
        }
        tinfo_property = get_tinfo_property(v44, 2);
        v32 = *(_BYTE *)(v7 + 1);
        v33 = v32 & 0xFD;
        v34 = v32 | 2;
        v35 = (tinfo_property & 0x2F) == 13;
        v36 = 1;
        if ( v35 )
          v33 = v34;
        *(_BYTE *)(v7 + 1) = v33;
        goto LABEL_35;
      }
    }
    *(_QWORD *)&v47 = 0;
    qfree(v18);
    goto LABEL_21;
  }
  return result;
}
