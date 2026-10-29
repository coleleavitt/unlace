/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004F510
// Address: 0x000000010004F510

//----- (000000010004F510) ----------------------------------------------------
char __fastcall sub_10004F510(__int64 a1, int a2)
{
  unsigned __int16 *v3; // r14
  unsigned __int16 *i; // r15
  int v5; // eax
  unsigned int (__fastcall *v6)(_QWORD); // rax
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(_QWORD); // rax
  _QWORD *v12; // rdi
  int v13; // eax
  __int64 v14; // rax
  const char *v15; // rsi

  v3 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 16) + 8LL * a2);
  for ( i = v3; ; i += 3 )
  {
    while ( 1 )
    {
      v5 = *i;
      if ( *i )
        break;
LABEL_12:
      if ( (__int16)i[1] != -1 && !(unsigned __int8)sub_10004F510(a1) )
        return 0;
      v8 = *((unsigned __int8 *)i + 5);
      if ( v8 == 255 )
        goto LABEL_20;
      v9 = *(_QWORD *)(a1 + 24);
      v10 = (unsigned int)(16 * v8);
      v11 = *(__int64 (__fastcall **)(_QWORD))(v9 + v10);
      v12 = (_QWORD *)(a1 + *(_QWORD *)(v9 + v10 + 8));
      if ( ((unsigned __int8)v11 & 1) != 0 )
        v11 = *(__int64 (__fastcall **)(_QWORD))((char *)v11 + *v12 - 1);
      v13 = v11(v12);
      if ( !v13 )
      {
LABEL_20:
        v14 = *((unsigned __int8 *)i + 4);
        if ( v14 == 255 )
          return 1;
        i = &v3[3 * v14];
      }
      else
      {
        if ( v13 != 1507 )
          return 0;
        *(_BYTE *)(a1 + 32) = 1;
        i += 3;
      }
    }
    if ( v5 == 0xFFFF )
      break;
    if ( !*(_BYTE *)(a1 + 32) )
    {
      v6 = *(unsigned int (__fastcall **)(_QWORD))a1;
      v7 = (_QWORD *)(a1 + *(_QWORD *)(a1 + 8));
      if ( (*(_QWORD *)a1 & 1) != 0 )
        v6 = *(unsigned int (__fastcall **)(_QWORD))((char *)v6 + *v7 - 1);
      if ( v6(v7) )
        return 0;
      *(_BYTE *)(a1 + 32) = 1;
      LOWORD(v5) = *i;
    }
    if ( (__int16)v5 == *(unsigned __int16 *)(a1 + 64) )
    {
      *(_BYTE *)(a1 + 32) = 0;
      goto LABEL_12;
    }
  }
  if ( !i[1] )
    return 1;
  if ( i[1] == 67 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      v15 = *(const char **)(a1 + 40);
    else
      v15 = _s1;
    set_error_string(0, v15);
  }
  set_qerrno();
  return 0;
}
