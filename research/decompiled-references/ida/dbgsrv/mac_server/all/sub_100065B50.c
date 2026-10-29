/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065B50
// Address: 0x0000000100065B50

//----- (0000000100065B50) ----------------------------------------------------
__int64 __fastcall sub_100065B50(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  char *v6; // rax
  char *v7; // r15
  __int64 v8; // rcx
  char *v9; // r12
  char *v10; // rcx
  char *v11; // rdx
  size_t v13; // rax
  unsigned __int64 v14; // r13
  void *v15; // rax
  size_t __len; // [rsp+8h] [rbp-48h]
  char *__s; // [rsp+10h] [rbp-40h] BYREF
  char *v19; // [rsp+18h] [rbp-38h]

  v6 = (char *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 16LL))(
                 a1,
                 *(unsigned __int8 *)(*(_QWORD *)a2 + 4LL),
                 a2);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(unsigned int *)v6;
    __s = v6 + 5;
    v19 = &v6[v8 + 5];
    a3 = unpack_dd((unsigned __int64 *)&__s, (unsigned __int64)v19);
    if ( a4 && a3 < 0 )
    {
      v9 = __s;
      v10 = __s;
      do
      {
        if ( v10 >= v19 )
          goto LABEL_12;
        v11 = v10 + 1;
      }
      while ( *v10++ != 0 );
      __s = v11;
      if ( !v9 || (v13 = strlen(v9)) == 0 )
      {
LABEL_12:
        *(_QWORD *)(a4 + 8) = 0;
        goto LABEL_13;
      }
      __len = v13;
      v14 = v13 + 1;
      v15 = *(void **)a4;
      if ( *(_QWORD *)(a4 + 16) < v14 )
      {
        v15 = qvector_reserve(a4, *(void **)a4, v14, 1u);
        *(_QWORD *)a4 = v15;
      }
      *(_QWORD *)(a4 + 8) = v14;
      memmove(v15, v9, __len);
      *(_BYTE *)(*(_QWORD *)a4 + __len) = 0;
    }
LABEL_13:
    qfree(v7);
  }
  return (unsigned int)a3;
}
