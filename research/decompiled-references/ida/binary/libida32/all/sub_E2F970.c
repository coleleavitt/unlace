void __fastcall sub_E2F970(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, char a5, __int64 a6)
{
  __m128 v10; // xmm0
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rdi
  double v17[2]; // [rsp+0h] [rbp-168h] BYREF
  __m128 v18; // [rsp+10h] [rbp-158h] BYREF
  __int16 v19; // [rsp+20h] [rbp-148h]
  char v20; // [rsp+22h] [rbp-146h]
  __int64 v21; // [rsp+28h] [rbp-140h]
  unsigned int v22; // [rsp+30h] [rbp-138h]
  int v23; // [rsp+34h] [rbp-134h]
  __int64 v24; // [rsp+38h] [rbp-130h]
  void **v25; // [rsp+40h] [rbp-128h] BYREF
  void *v26; // [rsp+48h] [rbp-120h] BYREF
  __int64 v27; // [rsp+50h] [rbp-118h]
  _BYTE v28[64]; // [rsp+58h] [rbp-110h] BYREF
  void *ptr; // [rsp+98h] [rbp-D0h]
  __int64 v30; // [rsp+A0h] [rbp-C8h]
  _BYTE v31[64]; // [rsp+A8h] [rbp-C0h] BYREF
  void ***v32; // [rsp+E8h] [rbp-80h]
  __int64 *v33; // [rsp+F0h] [rbp-78h]
  __int64 v34; // [rsp+F8h] [rbp-70h]
  __int64 v35; // [rsp+100h] [rbp-68h]
  int v36; // [rsp+108h] [rbp-60h]
  __int64 v37; // [rsp+110h] [rbp-58h]
  __int64 v38; // [rsp+118h] [rbp-50h]
  int v39; // [rsp+120h] [rbp-48h]

  *(_QWORD *)&v17[0] = a6;
  *(_QWORD *)&v17[1] = a1;
  v19 = 0;
  v10 = _mm_loadh_ps(v17);
  v20 = 0;
  v18 = v10;
  v11 = sub_B53DB0(a2);
  v12 = a2;
  if ( v11 )
    v12 = *(_QWORD *)(v11 + 48);
  v13 = v18.m128_u64[1];
  v21 = v12;
  v22 = a3;
  v26 = v28;
  v27 = 0x400000000LL;
  v30 = 0x400000000LL;
  v32 = &v25;
  v23 = 0;
  v24 = 0;
  v33 = nullptr;
  ptr = v31;
  v14 = *(_QWORD *)(v18.m128_u64[1] + 32);
  v25 = &v26;
  v15 = *(_QWORD *)(v18.m128_u64[1] + 24);
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  if ( (unsigned __int64)(v15 - v14) > 2 )
  {
    *(_BYTE *)(v14 + 2) = 84;
    *(_WORD *)v14 = 23135;
    *(_QWORD *)(v13 + 32) += 3LL;
  }
  else
  {
    sub_22581D0(v18.m128_u64[1], "_ZT", 3);
  }
  sub_E158E0((__int64)&v18, *a4, a4[1]);
  sub_E2ED50((__int64)&v18, a2 & 0xFFFFFFFFFFFFFFF8LL | a3, 0, v10);
  if ( !a5 )
    sub_E16840((__int64)&v18, *(_QWORD *)(a1 + 8), a4[6]);
  operator delete();
  operator delete();
  v16 = v33;
  if ( v33 )
  {
    sub_E16EB0(
      v33,
      (char *)(*v33 + 16LL * *((unsigned int *)v33 + 2)),
      (char *)v26,
      (char *)v26 + 16 * (unsigned int)v27);
    sub_E16EB0(
      v33 + 10,
      (char *)(v33[10] + 16LL * *((unsigned int *)v33 + 22)),
      (char *)ptr,
      (char *)ptr + 16 * (unsigned int)v30);
    v16 = v33;
  }
  *v32 = (void **)v16;
  if ( ptr != v31 )
    free(ptr);
  if ( v26 != v28 )
    free(v26);
}

