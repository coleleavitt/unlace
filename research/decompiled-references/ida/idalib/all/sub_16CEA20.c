__int64 __fastcall sub_16CEA20(
        __int64 a1,
        unsigned __int64 a2,
        _DWORD *a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // r12d
  __int64 v13; // rax
  unsigned int v15; // eax
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // eax
  void *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // [rsp+8h] [rbp-140h]
  __int64 v29; // [rsp+18h] [rbp-130h] BYREF
  __int64 *v30; // [rsp+20h] [rbp-128h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-120h]
  unsigned __int8 v32; // [rsp+2Ch] [rbp-11Ch]
  unsigned __int8 v33; // [rsp+30h] [rbp-118h]
  void *ptr; // [rsp+40h] [rbp-108h] BYREF
  __m128i si128; // [rsp+48h] [rbp-100h]
  _BYTE v36[40]; // [rsp+58h] [rbp-F0h] BYREF
  __int64 (__fastcall **v37)(); // [rsp+80h] [rbp-C8h] BYREF
  int v38; // [rsp+88h] [rbp-C0h]
  __int128 v39; // [rsp+90h] [rbp-B8h]
  unsigned __int8 *v40; // [rsp+A0h] [rbp-A8h] BYREF
  char v41; // [rsp+A8h] [rbp-A0h]
  int v42; // [rsp+ACh] [rbp-9Ch]
  void **p_ptr; // [rsp+B0h] [rbp-98h]
  char v44; // [rsp+F8h] [rbp-50h]
  unsigned int v45; // [rsp+100h] [rbp-48h]
  char v46; // [rsp+104h] [rbp-44h]

  sub_C3EB00((__int64)&v30, a2, *(_QWORD *)(a1 + 248), nullptr, a6, a7);
  v12 = v33;
  if ( v33 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64 **))(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 17448LL) + 696LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL),
           &v30) )
    {
      LODWORD(v13) = (_DWORD)v30;
      if ( v31 > 0x40 )
        v13 = *v30;
      *a3 = v13;
      v12 = 0;
    }
    else
    {
      v38 = 2;
      ptr = v36;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
      v39 = 0;
      v37 = &off_2BEBEE0;
      v41 = 0;
      v42 = 1;
      v40 = nullptr;
      p_ptr = &ptr;
      sub_227B8B0(&v37, 0, 0, 0);
      sub_220C370(&v30, &v37, v32 ^ 1u);
      v37 = (__int64 (__fastcall **)())&unk_2C76288;
      sub_227B7A0(&v37);
      v20 = sub_C00A40(a2, (__int64)&v37, v17, v18, v19);
      v21 = (void *)(a1 + 8);
      sub_168B9F0((__int64)&v37, (__int64 *)(a1 + 8), v20, 0x130Au, 0);
      if ( v44 )
      {
        v21 = ptr;
        sub_AEC220(&v40, ptr, si128.m128i_i64[0]);
      }
      else if ( v46 )
      {
        v22 = sub_168B9E0(&v37);
        v26 = v39;
        if ( (_QWORD)v39 )
        {
          v28 = v22;
          v26 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v39 + 32LL))(v39);
          v22 = v28;
        }
        v29 = v26;
        v27 = sub_1587BC0(v22, &v29, v22, v23, v24, v25);
        v21 = ptr;
        sub_AEC220((unsigned __int8 **)(*v27 + 32LL * v45 + 8), ptr, si128.m128i_i64[0]);
      }
      v29 = sub_EEC8C0(a2, (__int64)v21, 0.0);
      sub_1587DB0((__int64)&v37, &v29);
      sub_15F7200(&v37);
      if ( ptr != v36 )
        free(ptr);
    }
  }
  else
  {
    v15 = sub_C00A40(a2, a2, v9, v10, v11);
    sub_168B9F0((__int64)&v37, (__int64 *)(a1 + 8), v15, 0xED5u, 0);
    LODWORD(v29) = 0;
    v16 = sub_1587D10((__int64)&v37, (int *)&v29);
    ptr = (void *)sub_EEC8C0(a2, (__int64)&v29, a4);
    sub_1587DB0(v16, (__int64 *)&ptr);
    v12 = 1;
    sub_15F7200(&v37);
  }
  sub_98E4B0((__int64)&v30);
  return v12;
}
