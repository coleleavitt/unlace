/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044730
// Address: 0x0000000100044730

//----- (0000000100044730) ----------------------------------------------------
__int64 **__fastcall sub_100044730(__int64 **a1, __int64 a2, __int64 a3, __int64 ***a4)
{
  __int64 *v4; // rax
  const char *v5; // r12
  __int64 **v6; // r13
  __int64 **v7; // r14
  const char *v8; // r13
  __int64 *v9; // r15
  __int64 **v10; // rax
  __int64 *v11; // rax
  __int64 *v12; // rsi

  v4 = a1[1];
  if ( v4 )
  {
    v5 = _s1;
    if ( *(_QWORD *)(a2 + 8) )
      v5 = *(const char **)a2;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = (__int64 **)v4;
        v8 = _s1;
        if ( v4[5] )
          v8 = (const char *)v4[4];
        if ( strcmp(v5, v8) >= 0 )
          break;
        v4 = *v7;
        v6 = v7;
        if ( !*v7 )
          goto LABEL_12;
      }
      if ( strcmp(v8, v5) >= 0 )
        break;
      v4 = v7[1];
      if ( !v4 )
      {
        v6 = v7 + 1;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v6 = a1 + 1;
    v7 = a1 + 1;
LABEL_12:
    v9 = (__int64 *)v7;
    v7 = (__int64 **)operator new(0x58u);
    v10 = *a4;
    v7[4] = **a4;
    *v10 = nullptr;
    v7[5] = v10[1];
    v10[1] = nullptr;
    v7[6] = v10[2];
    v10[2] = nullptr;
    *((_BYTE *)v7 + 56) = 2;
    *((_OWORD *)v7 + 4) = 0;
    v7[10] = nullptr;
    *(_OWORD *)v7 = 0;
    v7[2] = v9;
    *v6 = (__int64 *)v7;
    v11 = (__int64 *)**a1;
    v12 = (__int64 *)v7;
    if ( v11 )
    {
      *a1 = v11;
      v12 = *v6;
    }
    sub_10000C830(a1[1], v12);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
  }
  return v7;
}
