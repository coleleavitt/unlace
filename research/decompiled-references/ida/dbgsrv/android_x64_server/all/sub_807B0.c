/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807B0
// Address: 0x00000000000807B0

//----- (00000000000807B0) ----------------------------------------------------
_QWORD *__fastcall sub_807B0(__int64 **a1, unsigned __int64 *a2, __int64 a3, _QWORD **a4)
{
  void **v5; // rbx
  void **v6; // r13
  unsigned __int64 v7; // rax
  void *v8; // rcx
  void **v9; // rcx
  _QWORD *v10; // r12
  __int64 *v11; // rax
  __int64 *v12; // rsi

  v5 = (void **)a1[1];
  if ( v5 )
  {
    v6 = (void **)(a1 + 1);
    v7 = *a2;
    while ( 1 )
    {
      v8 = v5[4];
      if ( v7 >= (unsigned __int64)v8 )
      {
        if ( (unsigned __int64)v8 >= v7 )
          goto LABEL_12;
        v6 = v5 + 1;
        v9 = (void **)v5[1];
        if ( !v9 )
          goto LABEL_12;
      }
      else
      {
        v9 = (void **)*v5;
        v6 = v5;
        if ( !*v5 )
          goto LABEL_11;
      }
      v5 = v9;
    }
  }
  v5 = (void **)(a1 + 1);
LABEL_11:
  v6 = v5;
LABEL_12:
  v10 = *v6;
  if ( !*v6 )
  {
    v10 = operator new(0x48u);
    v10[4] = **a4;
    *((_BYTE *)v10 + 40) = 2;
    *(_OWORD *)v10 = 0;
    *((_OWORD *)v10 + 3) = 0;
    v10[8] = 0;
    v10[2] = v5;
    *v6 = v10;
    v11 = (__int64 *)**a1;
    if ( v11 )
    {
      *a1 = v11;
      v12 = (__int64 *)*v6;
    }
    else
    {
      v12 = v10;
    }
    sub_4A450(a1[1], v12);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
  }
  return v10;
}
