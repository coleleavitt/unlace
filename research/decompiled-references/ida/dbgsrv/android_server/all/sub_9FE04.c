/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9FE04
// Address: 0x000000000009FE04

//----- (000000000009FE04) ----------------------------------------------------
__int64 __fastcall sub_9FE04(pthread_mutex_t *a1, unsigned __int64 *a2)
{
  __int64 result; // x0
  unsigned __int64 v5; // x8
  __int64 v6; // x21
  char *align; // x0
  __int64 v8; // x23
  __int64 v9; // x24
  _OWORD v10[2]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v11; // [xsp+28h] [xbp-48h]

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = unpack_dd(a2, a2[1]);
  v5 = *(&a1->__align + 1);
  v6 = (int)result;
  if ( v5 >= (int)result )
  {
    if ( v5 != (int)result )
    {
      memset(v10, 0, sizeof(v10));
      result = (__int64)sub_A09D8(a1, (int)result, (char *)v10);
      if ( (int)v6 < 1 )
        return result;
      goto LABEL_10;
    }
  }
  else
  {
    if ( *(&a1->__align + 2) >= (unsigned __int64)(int)result )
    {
      align = (char *)a1->__align;
    }
    else
    {
      align = (char *)qvector_reserve(a1, (void *)a1->__align, (int)result, 0x20u);
      v5 = *(&a1->__align + 1);
      a1->__align = (__int64)align;
    }
    result = (__int64)memset(&align[32 * v5], 0, 32 * (v6 - v5));
    *(&a1->__align + 1) = v6;
  }
  if ( (int)v6 < 1 )
    return result;
LABEL_10:
  v8 = 0;
  v6 = (unsigned int)v6;
  do
  {
    v9 = a1->__align + v8;
    *(_QWORD *)v9 = unpack_dq(a2, a2[1]) - 1;
    *(_QWORD *)(v9 + 8) = unpack_dq(a2, a2[1]) - 1;
    *(_QWORD *)(v9 + 16) = unpack_dq(a2, a2[1]) - 1;
    result = unpack_dd(a2, a2[1]);
    --v6;
    v8 += 32;
    *(_BYTE *)(v9 + 24) = (_DWORD)result != 0;
  }
  while ( v6 );
  return result;
}
