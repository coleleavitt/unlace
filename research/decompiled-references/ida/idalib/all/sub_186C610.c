void __fastcall sub_186C610(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  char v8; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r15d
  __m128 v20; // xmm0
  unsigned int *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdi
  int v24; // edx
  __int64 v25; // rsi
  signed __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  void (*v34)(); // rdx
  __int64 v35; // [rsp+0h] [rbp-160h] BYREF
  unsigned int *v36; // [rsp+8h] [rbp-158h]
  signed __int64 v37; // [rsp+10h] [rbp-150h]
  __int64 v38; // [rsp+20h] [rbp-140h] BYREF
  _QWORD v39[6]; // [rsp+28h] [rbp-138h] BYREF
  _BYTE v40[16]; // [rsp+58h] [rbp-108h] BYREF
  __m128 v41; // [rsp+68h] [rbp-F8h] BYREF
  __int64 v42; // [rsp+78h] [rbp-E8h]
  char v43; // [rsp+80h] [rbp-E0h]
  void *ptr; // [rsp+88h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+90h] [rbp-D0h]
  _DWORD v46[50]; // [rsp+98h] [rbp-C8h] BYREF

  if ( (*(_BYTE *)(a3 + 84) & 0x40) == 0 && *(char *)(a3 + 28) >= 0 )
  {
    v8 = a4;
    sub_183ABA0((__int64)v39, a1, a3 + 72, a4, a5, a6);
    sub_1837F10(v39, v40, a2);
    v38 = *(_QWORD *)(**(_QWORD **)(a3 + 120) + 48LL);
    v14 = sub_C1BEF0((__int64)&v38, (__int64)v40, v12, v13);
    v35 = (__int64)sub_F63270(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v40, v15, v16, v17, v18);
    if ( (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3) >> 32 )
      v19 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3) >> 32;
    else
      v19 = *(_DWORD *)(a3 + 24);
    v36 = (unsigned int *)a1;
    v43 = v8;
    v20 = _mm_loadh_ps((const double *)&v35);
    v42 = a3;
    v41 = v20;
    ptr = v46;
    v35 = (__int64)v46;
    v45 = 0x1000000000LL;
    v21 = (unsigned int *)sub_B74920(a3);
    if ( v21 )
    {
      v22 = *v21;
      v23 = 0;
      v24 = 0;
      LODWORD(v45) = 0;
      v25 = v35;
      v26 = 8 * v22;
      v27 = v26 >> 3;
      if ( v26 >> 3 > (unsigned __int64)HIDWORD(v45) )
      {
        v37 = v26;
        v36 = v21;
        v35 = v26 >> 3;
        sub_2237220(&ptr, v25, v26 >> 3, 8);
        v26 = v37;
        v21 = v36;
        v24 = v45;
        v27 = v35;
        v23 = 8LL * (unsigned int)v45;
      }
      if ( v26 )
      {
        v35 = v27;
        memcpy((char *)ptr + v23, v21 + 2, v26);
        v24 = v45;
        LODWORD(v27) = v35;
      }
      LODWORD(v45) = v24 + v27;
    }
    v46[32] = v19;
    v46[33] = 0;
    v28 = sub_186BF80(&v41, *(double *)v20.m128_u64, a8);
    if ( ptr != v46 )
      free(ptr);
    if ( v28 == 1 )
    {
      sub_B88650(a3, 1);
      sub_185CCD0(v39, 1);
    }
    else
    {
      sub_B74930(a3, v28 & 0xFFFFFFFFFFFFFFFELL);
      v29 = *(_QWORD *)(a1 + 248);
      sub_B8C4D0(a3, v29);
      v31 = (_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v31 + 16LL) != 26 )
        sub_F63050(*v31, v29, *v31, v30);
      v32 = a2;
      sub_18B0530(a1, a2);
      v33 = sub_15F1120(a1);
      if ( v33 )
      {
        v34 = *(void (**)())(*(_QWORD *)v33 + 88LL);
        if ( v34 != nullsub_438 )
        {
          v32 = a3;
          ((void (__fastcall *)(__int64, __int64))v34)(v33, a3);
        }
      }
      sub_185CCD0(v39, v32);
    }
  }
}
