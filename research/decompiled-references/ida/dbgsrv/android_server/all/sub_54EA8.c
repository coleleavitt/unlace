/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54EA8
// Address: 0x0000000000054EA8

//----- (0000000000054EA8) ----------------------------------------------------
__int64 __fastcall sub_54EA8(__int64 a1, __int64 a2, __int64 *a3, int8x16x2_t a4)
{
  unsigned __int64 v4; // x8
  int v5; // w9
  __int64 v6; // x21
  __int64 v8; // x22
  _QWORD *v10; // x8
  __int64 v11; // x9
  _OWORD *v12; // x0
  _QWORD v14[5]; // [xsp+0h] [xbp-C0h] BYREF
  void *ptr; // [xsp+28h] [xbp-98h]
  __int64 v16; // [xsp+30h] [xbp-90h]
  __int64 v17; // [xsp+38h] [xbp-88h]
  __int64 v18; // [xsp+40h] [xbp-80h]
  __int64 v19; // [xsp+48h] [xbp-78h]
  unsigned __int64 v20; // [xsp+50h] [xbp-70h] BYREF
  _OWORD *v21; // [xsp+58h] [xbp-68h] BYREF
  __int128 v22; // [xsp+60h] [xbp-60h]
  __int64 v23; // [xsp+78h] [xbp-48h]

  v23 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = a3[2];
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(a1 + 400);
  v6 = *a3;
  if ( !v5 )
    v5 = 1;
  v8 = v5;
  v20 = v4 / v5;
  sub_54DA8(*(_QWORD *)(a1 + 472), &v20, v5, "Dynamic info size", v6, -1, a4);
  if ( !v20 )
    return 0;
  v14[0] = off_1569E8;
  v14[1] = a1;
  v14[2] = v6;
  v14[3] = v20;
  v14[4] = v8;
  ptr = nullptr;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  do
  {
    if ( (sub_5502C((unsigned __int64)v14, &v21) & 1) == 0 )
      break;
    v10 = v21;
    v22 = *v21;
    v11 = *(_QWORD *)(a2 + 8);
    if ( *(_QWORD *)(a2 + 16) >= (unsigned __int64)(v11 + 1) )
    {
      v12 = *(_OWORD **)a2;
    }
    else
    {
      v12 = qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, v11 + 1, 0x10u);
      *(_QWORD *)a2 = v12;
      v11 = *(_QWORD *)(a2 + 8);
      v10 = v21;
    }
    v12[v11] = v22;
    ++*(_QWORD *)(a2 + 8);
  }
  while ( *v10 );
  v14[0] = off_1569E8;
  if ( ptr )
  {
    v16 = 0;
    qfree(ptr);
    ptr = nullptr;
    v17 = 0;
  }
  return 1;
}
// 1569E8: using guessed type __int64 (__fastcall *off_1569E8[3])();
