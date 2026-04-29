__int64 __fastcall sub_F7510(_QWORD *a1, __int64 *a2, __int64 a3, __int64 *a4, __int64 a5, char a6)
{
  unsigned int v8; // ebp
  unsigned __int64 v9; // rdx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // r12
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  _DWORD v24[4]; // [rsp+8h] [rbp-88h] BYREF
  __int64 v25; // [rsp+18h] [rbp-78h] BYREF
  __int128 v26; // [rsp+20h] [rbp-70h]
  __int128 v27; // [rsp+30h] [rbp-60h]
  __int64 v28; // [rsp+40h] [rbp-50h]
  int v29; // [rsp+48h] [rbp-48h]
  unsigned __int64 v30; // [rsp+50h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v29 = 1;
  v25 = 0;
  v28 = 0;
  v26 = 0;
  v27 = 0;
  v8 = sub_D40C0(a1, &v25, a3, a4);
  if ( !(_BYTE)v8 )
    goto LABEL_9;
  v9 = v26;
  if ( (_QWORD)v26 == 1 )
  {
    if ( (get_tinfo_property(*(_QWORD *)(v25 + 64), 2) & 0xF) != 0xB )
    {
      v21 = v25;
      v22 = *a2;
      *a2 = *(_QWORD *)(v25 + 64);
      *(_QWORD *)(v21 + 64) = v22;
      if ( !a3 )
        goto LABEL_9;
      goto LABEL_8;
    }
    v9 = v26;
  }
  v11 = HIDWORD(v28);
  v10 = HIDWORD(v28);
  BYTE1(v11) = BYTE5(v28) & 0xF7;
  if ( v9 >= 2 )
  {
    BYTE1(v10) = BYTE5(v28) | 8;
    v11 = v10;
  }
  HIDWORD(v28) = v11;
  if ( !(unsigned __int8)create_tinfo(a2, 13, 13, &v25) )
  {
    if ( !under_debugger )
      sub_37EEE0(52858);
    BUG();
  }
  if ( a5 == -1 )
  {
    if ( !a3 )
      goto LABEL_9;
  }
  else
  {
    sub_F7150((__int64)a1, a2, -1, a5, a6);
    if ( !a3 )
      goto LABEL_9;
  }
LABEL_8:
  if ( *(_DWORD *)a3 == 2 )
  {
    v19 = *(__int64 **)(a3 + 8);
    if ( v19[1] == 1 )
    {
      v20 = *v19;
      v24[0] = 0;
      copy_argloc(v24, v20);
      copy_argloc(a3, v24);
      cleanup_argloc(v24);
    }
  }
LABEL_9:
  v12 = v25;
  if ( v25 )
  {
    v13 = v26;
    if ( (_QWORD)v26 )
    {
      v14 = 0;
      do
      {
        v15 = (_QWORD *)(v12 + 144 * v14);
        clear_tinfo_t(v15 + 8);
        v16 = v15[5];
        if ( v16 )
        {
          v15[6] = 0;
          qfree(v16);
        }
        v17 = v15[2];
        if ( v17 )
        {
          v15[3] = 0;
          qfree(v17);
        }
        ++v14;
        v12 = v25;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v26 = 0;
    qfree(v12);
  }
  return v8;
}
