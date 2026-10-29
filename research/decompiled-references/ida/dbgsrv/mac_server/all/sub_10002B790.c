/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B790
// Address: 0x000000010002B790

//----- (000000010002B790) ----------------------------------------------------
__int64 __fastcall sub_10002B790(_QWORD *a1)
{
  __int64 v1; // r15
  int v2; // eax
  __int64 v3; // rcx
  int *v4; // r14
  const char *v5; // rsi
  __int64 v6; // rax
  int *v7; // r14
  __int64 v8; // rax

  sub_10002B980(a1);
  v1 = a1[23];
  while ( *(_DWORD *)(v1 + 24) )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1[13] + 64LL) + 8LL * *(int *)(a1[23] + 24LL));
    v2 = sub_10003B410(v1, v1 + 32);
    v3 = a1[44];
    v4 = *(int **)(a1[43] + 8 * v3 - 8);
    if ( v2 != 0x7FFFFFFF )
    {
      if ( v3 )
        a1[44] = v3 - 1;
      ((void (__fastcall *)(_QWORD *, int *, _QWORD, _QWORD))loc_10002C5D0)(a1, v4, 0, 0);
      if ( v4 )
      {
        sub_10002AE90(v4);
        operator delete(v4);
      }
      return set_qerrno();
    }
    if ( v4[6] > 0 )
    {
      if ( *(_QWORD *)(v1 + 40) )
        v5 = *(const char **)(v1 + 32);
      else
        v5 = _s1;
      set_error_string(0, v5);
      return set_qerrno();
    }
  }
  v6 = a1[44];
  v7 = *(int **)(a1[43] + 8 * v6 - 8);
  if ( v6 )
  {
    v8 = v6 - 1;
    a1[44] = v8;
    if ( !v7 )
      goto LABEL_10;
    goto LABEL_9;
  }
  v8 = 0;
  if ( v7 )
  {
LABEL_9:
    sub_10002AE90(v7);
    operator delete(v7);
    v8 = a1[44];
  }
LABEL_10:
  if ( !v8 )
    return 0;
  if ( under_debugger == 1 )
    BUG();
  interr(0x10Eu);
  return sub_10002B8E0(270);
}
// 1000AE23D: using guessed type char under_debugger;
