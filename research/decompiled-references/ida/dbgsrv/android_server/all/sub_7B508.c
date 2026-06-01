/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B508
// Address: 0x000000000007B508

//----- (000000000007B508) ----------------------------------------------------
_QWORD *__fastcall sub_7B508(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v5; // x8
  _BYTE *v6; // x21
  _BYTE *v7; // x0
  _QWORD *v8; // x20
  unsigned __int8 v10[8]; // [xsp+8h] [xbp-58h] BYREF
  void *ptr; // [xsp+10h] [xbp-50h]
  __int64 v12; // [xsp+18h] [xbp-48h]
  __int64 v13; // [xsp+20h] [xbp-40h]
  __int64 v14; // [xsp+28h] [xbp-38h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v10[0] = 2;
  v12 = 0;
  v13 = 0;
  ptr = nullptr;
  copy_idcv(v10, a3);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_BYTE **)a1;
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v5 + 1) )
  {
    v7 = *(_BYTE **)a1;
  }
  else
  {
    v7 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v5 + 1, 0x20u);
    v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v7;
  }
  v8 = &v7[a2 - (_QWORD)v6];
  memmove(v8 + 4, v8, &v7[32 * v5] - (_BYTE *)v8);
  *(_BYTE *)v8 = 2;
  v8[2] = 0;
  v8[3] = 0;
  v8[1] = 0;
  copy_idcv((unsigned __int8 *)v8, v10);
  ++*(_QWORD *)(a1 + 8);
  if ( v10[0] == 5 )
  {
    sub_6F17C((__int64)ptr, v10);
  }
  else if ( v10[0] == 7 && ptr )
  {
    v12 = 0;
    qfree(ptr);
    ptr = nullptr;
    v13 = 0;
  }
  return v8;
}
