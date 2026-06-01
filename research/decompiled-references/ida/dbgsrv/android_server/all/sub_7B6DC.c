/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B6DC
// Address: 0x000000000007B6DC

//----- (000000000007B6DC) ----------------------------------------------------
void __fastcall sub_7B6DC(__int64 a1, __int64 a2, char *a3, int a4)
{
  __int64 v7; // x8
  __int64 v9; // x25
  _BYTE *v10; // x0
  __int64 *v11; // [xsp+0h] [xbp-80h] BYREF
  _QWORD *v12[2]; // [xsp+8h] [xbp-78h] BYREF
  unsigned __int8 v13[8]; // [xsp+18h] [xbp-68h] BYREF
  void *ptr; // [xsp+20h] [xbp-60h]
  __int64 v15; // [xsp+28h] [xbp-58h]
  __int64 v16; // [xsp+30h] [xbp-50h]
  __int64 v17; // [xsp+38h] [xbp-48h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 )
    v9 = v7 - 1;
  else
    v9 = 0;
  if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v9 + 2) )
  {
    v10 = *(_BYTE **)a1;
  }
  else
  {
    v10 = qvector_reserve((pthread_mutex_t *)a1, *(void **)a1, v9 + 2, 1u);
    *(_QWORD *)a1 = v10;
  }
  *(_QWORD *)(a1 + 8) = v9 + 2;
  v10[v9] = 10;
  *(_BYTE *)(*(_QWORD *)a1 + v9 + 1) = 0;
  v13[0] = 2;
  v15 = 0;
  v16 = 0;
  ptr = nullptr;
  get_idcv_attr((__int64)v13, a2, a3, 1);
  v12[0] = nullptr;
  v12[1] = nullptr;
  v11 = (__int64 *)v12;
  sub_6E40C((pthread_mutex_t *)a1, v13, a3, a4, &v11);
  sub_7BA1C((__int64)&v11, v12[0]);
  if ( v13[0] == 5 )
  {
    sub_6F17C((__int64)ptr, v13);
  }
  else if ( v13[0] == 7 )
  {
    if ( ptr )
    {
      v15 = 0;
      qfree(ptr);
      ptr = nullptr;
      v16 = 0;
    }
  }
}
