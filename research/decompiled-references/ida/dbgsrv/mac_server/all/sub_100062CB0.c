/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100062CB0
// Address: 0x0000000100062CB0

//----- (0000000100062CB0) ----------------------------------------------------
char *__fastcall sub_100062CB0(__int64 **a1, int *a2)
{
  char *v2; // rax
  int v3; // r15d
  __int64 **v4; // r12
  char *v5; // r14
  int v6; // eax
  char *v7; // r13
  __int64 *v8; // rax
  __int64 *v9; // rsi

  v2 = (char *)a1[1];
  v3 = *a2;
  if ( v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = v2;
        v6 = *((_DWORD *)v2 + 8);
        if ( v3 >= v6 )
          break;
        v2 = *(char **)v5;
        v4 = (__int64 **)v5;
        if ( !*(_QWORD *)v5 )
          goto LABEL_8;
      }
      if ( v3 <= v6 )
        break;
      v2 = *((char **)v5 + 1);
      if ( !v2 )
      {
        v4 = (__int64 **)(v5 + 8);
        goto LABEL_8;
      }
    }
  }
  else
  {
    v4 = a1 + 1;
    v5 = (char *)(a1 + 1);
LABEL_8:
    v7 = v5;
    v5 = (char *)operator new(0x48u);
    *((_DWORD *)v5 + 8) = v3;
    *((_DWORD *)v5 + 10) = -2;
    *(_OWORD *)(v5 + 56) = 0;
    *((_QWORD *)v5 + 6) = -1;
    *(_OWORD *)v5 = 0;
    *((_QWORD *)v5 + 2) = v7;
    *v4 = (__int64 *)v5;
    v8 = (__int64 *)**a1;
    v9 = (__int64 *)v5;
    if ( v8 )
    {
      *a1 = v8;
      v9 = *v4;
    }
    sub_10000C830(a1[1], v9);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
  }
  return v5 + 40;
}
