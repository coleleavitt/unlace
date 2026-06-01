__int64 __fastcall sub_FAF50(_QWORD *a1, __int64 *a2, __int64 a3, __int64 *a4, __int64 a5, char a6)
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
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v22; // [rsp+18h] [rbp-78h] BYREF
  __int128 v23; // [rsp+20h] [rbp-70h]
  __int128 v24; // [rsp+30h] [rbp-60h]
  __int64 v25; // [rsp+40h] [rbp-50h]
  int v26; // [rsp+48h] [rbp-48h]
  unsigned __int64 v27; // [rsp+50h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v26 = 1;
  v22 = 0;
  v25 = 0;
  v23 = 0;
  v24 = 0;
  v8 = sub_D7B00(a1, &v22, a3, a4);
  if ( !(_BYTE)v8 )
    goto LABEL_9;
  v9 = v23;
  if ( (_QWORD)v23 == 1 )
  {
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      v19 = v22;
      v20 = *a2;
      *a2 = *(_QWORD *)(v22 + 64);
      *(_QWORD *)(v19 + 64) = v20;
      if ( !a3 )
        goto LABEL_9;
      goto LABEL_8;
    }
    v9 = v23;
  }
  v11 = HIDWORD(v25);
  v10 = HIDWORD(v25);
  BYTE1(v11) = BYTE5(v25) & 0xF7;
  if ( v9 >= 2 )
  {
    BYTE1(v10) = BYTE5(v25) | 8;
    v11 = v10;
  }
  HIDWORD(v25) = v11;
  if ( !(unsigned __int8)create_tinfo() )
  {
    if ( !under_debugger )
      sub_383060(52858);
    BUG();
  }
  if ( a5 == -1 )
  {
    if ( !a3 )
      goto LABEL_9;
  }
  else
  {
    sub_FAB90((__int64)a1, a2, -1, a5, a6);
    if ( !a3 )
      goto LABEL_9;
  }
LABEL_8:
  if ( *(_DWORD *)a3 == 2 && *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL) == 1 )
  {
    copy_argloc();
    copy_argloc();
    cleanup_argloc();
  }
LABEL_9:
  v12 = v22;
  if ( v22 )
  {
    v13 = v23;
    if ( (_QWORD)v23 )
    {
      v14 = 0;
      do
      {
        v15 = (_QWORD *)(v12 + 144 * v14);
        clear_tinfo_t();
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
        v12 = v22;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v23 = 0;
    qfree(v12);
  }
  return v8;
}
