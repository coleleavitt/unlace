/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5502C
// Address: 0x000000000005502C

//----- (000000000005502C) ----------------------------------------------------
unsigned __int64 __fastcall sub_5502C(unsigned __int64 result, _QWORD *a2)
{
  unsigned __int64 v2; // x19
  unsigned int v4; // w8
  __int64 v5; // x8
  __int64 v6; // x9
  unsigned __int64 v7; // x21
  unsigned __int64 v8; // x8
  pthread_mutex_t *v9; // x0
  __int64 align; // x0
  _QWORD v11[3]; // [xsp+8h] [xbp-48h] BYREF

  v2 = result;
  v11[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_DWORD *)(result + 72);
  LODWORD(result) = *(_DWORD *)(result + 76);
  if ( v4 < (unsigned int)result )
  {
LABEL_12:
    if ( v4 < (unsigned int)result )
    {
      *a2 = *(_QWORD *)(v2 + 40) + 16LL * v4;
      ++*(_DWORD *)(v2 + 72);
      return 1;
    }
    return 0;
  }
  v5 = *(_QWORD *)(v2 + 24);
  v6 = *(_QWORD *)(v2 + 64);
  v7 = v5 - v6;
  if ( v5 == v6 )
    return 0;
  v8 = *(_QWORD *)(v2 + 48);
  v9 = (pthread_mutex_t *)(v2 + 40);
  if ( v8 >= v7 )
  {
    if ( v8 != v7 )
    {
      v11[0] = 0;
      v11[1] = 0;
      sub_5C54C(v9, v7, (char *)v11);
    }
  }
  else
  {
    if ( *(_QWORD *)(v2 + 56) >= v7 )
    {
      align = v9->__align;
    }
    else
    {
      align = (__int64)qvector_reserve(v9, *(void **)(v2 + 40), v7, 0x10u);
      v8 = *(_QWORD *)(v2 + 48);
      *(_QWORD *)(v2 + 40) = align;
    }
    memset((void *)(align + 16 * v8), 0, 16 * (v7 - v8));
    *(_QWORD *)(v2 + 48) = v7;
  }
  *(_DWORD *)(v2 + 72) = 0;
  result = sub_5C42C((_QWORD *)v2, v7);
  *(_DWORD *)(v2 + 76) = result;
  if ( (_DWORD)result )
  {
    v4 = *(_DWORD *)(v2 + 72);
    *(_QWORD *)(v2 + 64) += (unsigned int)result;
    goto LABEL_12;
  }
  return result;
}
