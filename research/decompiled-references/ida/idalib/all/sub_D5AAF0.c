__int64 __fastcall sub_D5AAF0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v6; // eax
  unsigned int v7; // r15d
  const __m128i *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __m128i v15; // xmm0
  __int8 v16; // al
  __int64 v17; // rax
  __int32 v19; // eax
  __int32 v20; // r10d
  void *v21; // r9
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned int v27; // eax
  void *v28; // rax
  __int64 v29; // [rsp-8h] [rbp-130h]
  __m128i v30; // [rsp+0h] [rbp-128h] BYREF
  __int64 v31; // [rsp+10h] [rbp-118h]
  void *v32; // [rsp+18h] [rbp-110h]
  void *v33; // [rsp+20h] [rbp-108h]
  __int64 v34; // [rsp+28h] [rbp-100h]
  void *v35; // [rsp+30h] [rbp-F8h] BYREF
  int v36; // [rsp+38h] [rbp-F0h]
  void *v37; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v38; // [rsp+48h] [rbp-E0h]
  __int8 v39; // [rsp+4Ch] [rbp-DCh]
  void *v40; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v41; // [rsp+58h] [rbp-D0h]
  __int8 v42; // [rsp+5Ch] [rbp-CCh]
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  signed __int64 v44; // [rsp+68h] [rbp-C0h]
  __int64 v45; // [rsp+70h] [rbp-B8h]
  _BYTE v46[40]; // [rsp+78h] [rbp-B0h] BYREF
  void *v47[2]; // [rsp+A0h] [rbp-88h] BYREF

  v31 = a2;
  v6 = sub_E21C70(a1);
  if ( (_BYTE)v6 || (v7 = v6, !(unsigned __int8)sub_DC7D30(a3)) )
  {
    v36 = 0;
    v35 = nullptr;
    v8 = (const __m128i *)sub_D0E1E0(a3);
    v33 = (void *)sub_D45A20((_QWORD *)a1, v8->m128i_u32[2], v9, v10, v11, v12);
    v34 = v13;
    v35 = v33;
    v36 = v13;
    v14 = v8->m128i_u32[2];
    v15 = _mm_loadu_si128(v8);
    LODWORD(v47[1]) = v14;
    if ( v14 > 0x40 )
    {
      v30 = v15;
      sub_2205470(v47, 1, 0);
      v20 = (__int32)v47[1];
      v21 = v47[0];
      *(__m128i *)v47 = _mm_load_si128(&v30);
      LODWORD(v44) = v20;
      v30.m128i_i32[0] = v20;
      ptr = v21;
      v32 = v21;
      v16 = sub_D59A80((__int64 *)v47, (__int64 *)&ptr, v14 + 1, &v35);
      if ( v30.m128i_i32[0] > 0x40u && v32 )
      {
        v30.m128i_i8[0] = v16;
        operator delete[](v32);
        v16 = v30.m128i_i8[0];
      }
    }
    else
    {
      LODWORD(v44) = v14;
      *(__m128i *)v47 = v15;
      ptr = &dword_0 + 1;
      v16 = sub_D59A80((__int64 *)v47, (__int64 *)&ptr, v14 + 1, &v35);
    }
    if ( a4 && v16 )
    {
      v19 = v8->m128i_i32[2];
      v39 = 0;
      v38 = 1;
      v37 = nullptr;
      sub_D47D10((__int64)v47, (__int64)v8, v19 + 1);
      sub_2205950(v47);
      sub_C20980((__int64)&v37, (__int64 *)v47);
      if ( LODWORD(v47[1]) > 0x40 && v47[0] )
        operator delete[](v47[0]);
      v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
      if ( (_BYTE)v7 )
      {
        v22 = sub_E1EF60(*(_QWORD *)(a1 + 400));
        v23 = *(_QWORD *)(v22 + 8);
        v44 = 0;
        v45 = 32;
        v31 = v23;
        ptr = v46;
        v30.m128i_i8[0] = v39;
        sub_2206A40(v47, &v37);
        v42 = v30.m128i_i8[0];
        v41 = (unsigned int)v47[1];
        v40 = v47[0];
        sub_220BA90((unsigned int)&v40, (unsigned int)&ptr, 10, 0, 0, 1, 1);
        v26 = v29;
        if ( v41 > 0x40 && v40 )
          operator delete[](v40);
        v27 = sub_C00A40(v22, (__int64)&ptr, v26, v24, v25);
        sub_E32200(v47, a1, v27, 2561);
        sub_AEC220((unsigned __int8 **)v47, ptr, v44);
        sub_AE9DF0((unsigned __int8 **)v47, v31, 8u);
        v28 = (void *)sub_EEC8C0(v22);
        LOBYTE(v41) = 1;
        v40 = v28;
        sub_AEC610((__int64 *)v47, (__int64 *)&v40);
        sub_AEA040((__int64)v47);
        if ( ptr != v46 )
          free(ptr);
      }
      else
      {
        v7 = sub_CF8AC0(a1, v31, (__int64)&v37);
      }
      if ( v38 > 0x40 && v37 )
        operator delete[](v37);
    }
    else
    {
      v7 = 1;
      v17 = sub_D0E1E0(a3);
      *(_QWORD *)v17 = v35;
      *(_DWORD *)(v17 + 8) = v36;
    }
  }
  return v7;
}
