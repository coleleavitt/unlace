/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qpipe_read_n
// Address: 0x00000000000C76A0

//----- (00000000000C76A0) ----------------------------------------------------
ssize_t __fastcall qpipe_read_n(int a1, pthread_mutex_t *a2, size_t a3)
{
  size_t v4; // x19
  size_t v6; // x24
  unsigned __int64 v7; // x22
  char *align; // x0
  __int64 v9; // x8
  char *v10; // x21
  ssize_t result; // x0
  int v12; // w8
  char v13[4]; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v14; // [xsp+8h] [xbp-48h]

  v4 = a3;
  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(&a2->__align + 1);
  v7 = v6 + a3;
  if ( v6 >= v6 + a3 )
  {
    if ( a3 )
    {
      v13[0] = 0;
      sub_5BBF4(a2, v7, v13);
      goto LABEL_8;
    }
    return 1;
  }
  if ( *(&a2->__align + 2) >= v7 )
  {
    align = (char *)a2->__align;
    v9 = *(&a2->__align + 1);
  }
  else
  {
    align = (char *)qvector_reserve(a2, (void *)a2->__align, v6 + a3, 1u);
    v9 = *(&a2->__align + 1);
    a2->__align = (__int64)align;
  }
  memset(&align[v9], 0, v7 - v9);
  *(&a2->__align + 1) = v7;
  if ( !v4 )
    return 1;
LABEL_8:
  v10 = (char *)(a2->__align + v6);
  while ( 1 )
  {
    result = read(a1, v10, v4);
    if ( !result )
      break;
    if ( result < 0 )
    {
      v12 = *(_DWORD *)__errno(result);
      if ( v12 != 4 && v12 != 11 )
        return 0;
    }
    else
    {
      v10 += result;
      v4 -= result;
      result = 1;
      if ( !v4 )
        return result;
    }
  }
  return result;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
