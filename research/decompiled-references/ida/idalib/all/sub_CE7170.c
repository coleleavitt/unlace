__int64 __fastcall sub_CE7170(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __m128 v6; // xmm0
  unsigned int v7; // eax
  bool v8; // zf
  unsigned int v9; // r12d
  unsigned int v10; // eax
  _QWORD *v11; // rax
  __int64 v13; // [rsp+0h] [rbp-738h] BYREF
  __int64 v14; // [rsp+8h] [rbp-730h]
  __int64 v15; // [rsp+10h] [rbp-728h] BYREF
  __int64 v16; // [rsp+18h] [rbp-720h] BYREF
  _QWORD *v17; // [rsp+28h] [rbp-710h] BYREF
  _QWORD v18[6]; // [rsp+30h] [rbp-708h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-6D8h] BYREF
  char v20; // [rsp+64h] [rbp-6D4h]
  _QWORD *v21; // [rsp+68h] [rbp-6D0h]
  unsigned int v22; // [rsp+70h] [rbp-6C8h]
  char v23[64]; // [rsp+A0h] [rbp-698h] BYREF
  unsigned __int8 v24; // [rsp+E0h] [rbp-658h]
  int v25; // [rsp+E8h] [rbp-650h]
  _QWORD v26[158]; // [rsp+100h] [rbp-638h] BYREF
  __m128 v27; // [rsp+5F0h] [rbp-148h]
  __int64 v28; // [rsp+600h] [rbp-138h]
  __int64 v29; // [rsp+608h] [rbp-130h]
  unsigned int v30; // [rsp+610h] [rbp-128h]
  __int64 v31; // [rsp+618h] [rbp-120h]
  __int64 v32; // [rsp+620h] [rbp-118h]
  unsigned int v33; // [rsp+628h] [rbp-110h]
  __int64 v34; // [rsp+630h] [rbp-108h]
  char v35; // [rsp+640h] [rbp-F8h]
  __int64 v36; // [rsp+648h] [rbp-F0h]
  __int16 v37; // [rsp+650h] [rbp-E8h]
  char v38; // [rsp+652h] [rbp-E6h]
  __int64 v39; // [rsp+658h] [rbp-E0h]
  void *ptr; // [rsp+660h] [rbp-D8h]
  __int64 v41; // [rsp+668h] [rbp-D0h]
  _BYTE v42[64]; // [rsp+670h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+6B0h] [rbp-88h]
  __int64 v44; // [rsp+6B8h] [rbp-80h]
  unsigned int v45; // [rsp+6C0h] [rbp-78h]
  __int64 v46; // [rsp+6C8h] [rbp-70h]
  char v47; // [rsp+6D4h] [rbp-64h]
  __int64 v48; // [rsp+6D8h] [rbp-60h]
  char v49; // [rsp+6E4h] [rbp-54h]
  char v50; // [rsp+6ECh] [rbp-4Ch]
  __int64 v51; // [rsp+6F0h] [rbp-48h]

  v5 = *(_QWORD *)(a1 + 24);
  v16 = a3;
  v15 = a4;
  v14 = a5;
  sub_CFEF80(v26, a1, v5, a2, a1 + 8);
  v13 = v5;
  v28 = 0;
  v29 = 0;
  v26[0] = &off_2C04B80;
  v6 = _mm_loadh_ps((const double *)&v13);
  v37 = 0;
  ptr = v42;
  v27 = v6;
  v41 = 0x300000000LL;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v38 = 0;
  v39 = 0;
  v42[48] = 0;
  v42[56] = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v19 = 0;
  v20 &= ~1u;
  v7 = sub_CE56F0(a1, a2, v16, (__int64)&v19);
  v8 = (_BYTE)v7 == 0;
  v9 = v7;
  v10 = v19;
  if ( !v8 )
  {
    if ( v19 == 2 )
    {
      v11 = v21;
      if ( v22 > 0x40 )
        v11 = (_QWORD *)*v21;
      v17 = v11;
      v18[0] = &v17;
      v18[2] = &v16;
      v18[3] = &v15;
      v18[4] = a1;
      v18[1] = a2;
      v18[5] = v14;
      sub_CFF1C0(v23, v26, v15, sub_CE8270, v18);
      if ( v25 == 3 )
      {
        v9 = 0;
        sub_CFF0C0(v26);
        sub_E215D0(a1 + 8);
      }
      if ( v24 != 0xFF )
        funcs_CE58F6[v24]();
      v10 = v19;
    }
    else
    {
      v9 = 0;
    }
  }
  if ( v10 > 1 )
    sub_A4F8E0((int *)&v19);
  v26[0] = &off_2C04B80;
  operator delete(v43, 16LL * v45, 8);
  if ( ptr != v42 )
    free(ptr);
  operator delete(v31, 16LL * v33, 8);
  operator delete(v28, 24LL * v30, 8);
  sub_D898B0(v26);
  return v9;
}
