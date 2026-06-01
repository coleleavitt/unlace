__int64 __fastcall sub_D35E20(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v7; // eax
  unsigned int v8; // r15d
  const __m128i *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __m128i v18; // xmm0
  __int8 v19; // al
  __int64 v20; // rax
  __int32 v22; // eax
  __int32 v23; // r10d
  void *v24; // r9
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30; // eax
  void *v31; // rax
  __int64 v32; // [rsp-8h] [rbp-130h]
  __m128i v33; // [rsp+0h] [rbp-128h] BYREF
  __int64 v34; // [rsp+10h] [rbp-118h]
  void *v35; // [rsp+18h] [rbp-110h]
  void *v36; // [rsp+20h] [rbp-108h]
  __int64 v37; // [rsp+28h] [rbp-100h]
  void *v38; // [rsp+30h] [rbp-F8h] BYREF
  int v39; // [rsp+38h] [rbp-F0h]
  void *v40; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-E0h]
  __int8 v42; // [rsp+4Ch] [rbp-DCh]
  void *v43; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v44; // [rsp+58h] [rbp-D0h]
  __int8 v45; // [rsp+5Ch] [rbp-CCh]
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  signed __int64 v47; // [rsp+68h] [rbp-C0h]
  __int64 v48; // [rsp+70h] [rbp-B8h]
  _BYTE v49[40]; // [rsp+78h] [rbp-B0h] BYREF
  void *v50[2]; // [rsp+A0h] [rbp-88h] BYREF

  v34 = a2;
  v7 = sub_DFDF30(a1);
  if ( (_BYTE)v7 || (v8 = v7, !(unsigned __int8)sub_DA3FF0(a3)) )
  {
    v39 = 0;
    v38 = nullptr;
    v9 = (const __m128i *)sub_CEA4A0(a3);
    v14 = (void *)sub_D21CE0((_QWORD *)a1, v9->m128i_u32[2], v10, v11, v12, v13);
    v15 = *(_QWORD *)(a1 + 176);
    v36 = v14;
    v37 = v16;
    v38 = v14;
    v39 = v16;
    *(__m128i *)sub_DFD980(v15, 16) = _mm_loadu_si128(v9);
    v17 = v9->m128i_u32[2];
    v18 = _mm_loadu_si128(v9);
    LODWORD(v50[1]) = v17;
    if ( v17 > 0x40 )
    {
      v33 = v18;
      sub_21E1730(v50, 1, 0);
      v23 = (__int32)v50[1];
      v24 = v50[0];
      *(__m128i *)v50 = _mm_load_si128(&v33);
      LODWORD(v47) = v23;
      v33.m128i_i32[0] = v23;
      ptr = v24;
      v35 = v24;
      v19 = sub_D35D40((__int64 *)v50, (__int64 *)&ptr, v17 + 1, &v38);
      if ( v33.m128i_i32[0] > 0x40u && v35 )
      {
        v33.m128i_i8[0] = v19;
        operator delete[](v35);
        v19 = v33.m128i_i8[0];
      }
    }
    else
    {
      LODWORD(v47) = v17;
      *(__m128i *)v50 = v18;
      ptr = &dword_0 + 1;
      v19 = sub_D35D40((__int64 *)v50, (__int64 *)&ptr, v17 + 1, &v38);
    }
    if ( a4 && v19 )
    {
      v22 = v9->m128i_i32[2];
      v42 = 0;
      v41 = 1;
      v40 = nullptr;
      sub_D23FD0((__int64)v50, (__int64)v9, v22 + 1);
      sub_21E1C10(v50);
      sub_BFCC40((__int64)&v40, (__int64 *)v50);
      if ( LODWORD(v50[1]) > 0x40 && v50[0] )
        operator delete[](v50[0]);
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
      if ( (_BYTE)v8 )
      {
        v25 = sub_DFB220(*(_QWORD *)(a1 + 400));
        v26 = *(_QWORD *)(v25 + 8);
        v47 = 0;
        v48 = 32;
        v34 = v26;
        ptr = v49;
        v33.m128i_i8[0] = v42;
        sub_21E2D00(v50, &v40);
        v45 = v33.m128i_i8[0];
        v44 = (unsigned int)v50[1];
        v43 = v50[0];
        sub_21E7D50((unsigned int)&v43, (unsigned int)&ptr, 10, 0, 0, 1, 1);
        v29 = v32;
        if ( v44 > 0x40 && v43 )
          operator delete[](v43);
        v30 = sub_BDCD00(v25, (__int64)&ptr, v29, v27, v28);
        sub_E0E4C0(v50, a1, v30, 2561);
        sub_AC84E0((unsigned __int8 **)v50, ptr, v47);
        sub_AC60B0((unsigned __int8 **)v50, v34, 8u);
        v31 = (void *)sub_EC8B80(v25);
        LOBYTE(v44) = 1;
        v43 = v31;
        sub_AC88D0((__int64 *)v50, (__int64 *)&v43);
        sub_AC6300((__int64)v50);
        if ( ptr != v49 )
          free(ptr);
      }
      else
      {
        v8 = sub_CD4D80(a1, v34, (__int64)&v40);
      }
      if ( v41 > 0x40 && v40 )
        operator delete[](v40);
    }
    else
    {
      v8 = 1;
      v20 = sub_CEA4A0(a3);
      *(_QWORD *)v20 = v38;
      *(_DWORD *)(v20 + 8) = v39;
    }
  }
  return v8;
}

