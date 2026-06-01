__int64 __fastcall sub_CC55C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int8 v5; // al
  char v7; // r13
  void *v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // r15
  int v16; // ebx
  unsigned __int64 v17; // r14
  unsigned int v18; // ebx
  _QWORD *v19; // rdx
  __int64 v20; // rsi
  unsigned int v21; // r13d
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // r13d
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int64 v28; // r13
  unsigned int v29; // r14d
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r13
  unsigned int v32; // esi
  bool v33; // zf
  unsigned __int64 v34; // rax
  unsigned __int8 v35; // al
  __int64 v36; // rbx
  __int64 v37; // r13
  char v38; // cl
  int v39; // ecx
  _DWORD *v40; // rax
  __int64 *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v45[4]; // [rsp+10h] [rbp-C8h] BYREF
  void *v46; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+38h] [rbp-A0h]
  char v48; // [rsp+40h] [rbp-98h] BYREF
  __m128 v49[7]; // [rsp+60h] [rbp-78h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 584);
  v44 = a2;
  v43 = a3;
  if ( (_BYTE)v3 )
    return v3;
  v5 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v5 == 33 )
  {
    v7 = *(_BYTE *)(a2 + 80);
    v8 = *(void **)(a2 + 56);
    v9 = *(unsigned int *)(a2 + 64);
    v10 = (unsigned __int64)(v9 + 63) >> 6;
    if ( v10 > 1 )
    {
      sub_2205610(v49, v9, v10, v8);
      v8 = (void *)v49[0].m128_u64[0];
      LODWORD(v9) = v49[0].m128_i32[2];
    }
    else
    {
      v49[0].m128_i32[2] = v9;
      if ( (unsigned int)v9 > 0x40 )
      {
        sub_2205470(v49, v8, 0);
        v8 = (void *)v49[0].m128_u64[0];
        LODWORD(v9) = v49[0].m128_i32[2];
      }
    }
    LODWORD(v47) = v9;
    v46 = v8;
    BYTE4(v47) = v7;
    v3 = sub_CB7C70(a1, (__int64)&v46, a3);
    if ( (unsigned int)v47 > 0x40 )
    {
      if ( v46 )
        operator delete[](v46);
    }
    return v3;
  }
  if ( (unsigned int)v5 - 34 <= 5 )
  {
    v12 = sub_CB12B0(a1);
    if ( v12 )
    {
      v49[0].m128_u64[0] = v43 | 4;
      return (unsigned int)sub_CA76C0((_QWORD *)a1, v12, (__int64 *)v49);
    }
    return v3;
  }
  if ( v5 == 30 )
  {
    v13 = sub_E2FAD0(*(_QWORD *)(a1 + 496), a2, 0);
    if ( BYTE4(v13) )
    {
      v49[0].m128_u64[0] = v43 | 4;
      if ( (unsigned __int8)sub_CA4B70(a1, v13, (__int64 *)v49) )
      {
        v14 = a2 + 64;
        v15 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(v43 + 8));
        if ( BYTE4(v15) )
        {
          if ( (unsigned __int8)sub_CC6080(a1, v14, (unsigned int)v15, v43) )
          {
            v49[0].m128_u64[0] = v43 | 4;
            return (unsigned int)sub_CA50E0(a1, v15, v13, (__int64 *)v49);
          }
        }
        else
        {
          return (unsigned int)sub_CC65C0(a1, v14, v43, *(_QWORD *)(a2 + 48));
        }
      }
    }
    return v3;
  }
  v16 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  v17 = sub_CBD660(a1 + 504, a2);
  v18 = v16 - 43;
  v19 = (_QWORD *)(*(_QWORD *)(a1 + 504) + 24LL * *(unsigned int *)(a1 + 520));
  sub_CBBC50(v49, v19, v19, a1 + 504, 1);
  if ( v49[0].m128_u64[0] == v17 )
  {
    v24 = sub_E2F250(*(_QWORD *)(a1 + 496), v44);
    v25 = v24;
    if ( BYTE4(v24) )
    {
      if ( v18 > 1 )
      {
        v49[0].m128_u64[0] = v43 | 4;
        return (unsigned int)sub_CA4B70(a1, v24, (__int64 *)v49);
      }
      v20 = v43;
      if ( (*(_BYTE *)(sub_CE6170(*(_QWORD *)(a1 + 488)) + 1) & 0x10) != 0 )
      {
        v49[0].m128_u64[0] = v43 | 4;
        v34 = sub_CB13E0(a1, v43);
        v23 = HIDWORD(v34);
        if ( BYTE4(v34) )
          return (unsigned int)sub_CA47B0(a1, v34, v25, (__int64 *)v49);
      }
      else
      {
        v49[0].m128_u64[0] = v43 | 4;
        v26 = sub_CB13E0(a1, v43);
        v23 = HIDWORD(v26);
        if ( BYTE4(v26) )
          return (unsigned int)sub_CA46A0(a1, v26, v25, (__int64 *)v49);
      }
      return sub_CC5D90(a1, v20, v23);
    }
    v27 = v44;
    if ( (*(_BYTE *)(v44 + 28) & 0x7F) == 0x2B )
    {
      v28 = sub_CBD760(a1 + 8, v44);
      if ( sub_CBD730(a1 + 8) != v28 )
      {
        v20 = v43;
        v29 = *(_DWORD *)(v28 + 8);
        if ( v18 > 1 && *(_BYTE *)(v28 + 12) )
        {
          v49[0].m128_u64[0] = v43 | 4;
          return (unsigned int)sub_CA4BD0(a1, v29, (__int64 *)v49);
        }
        v49[0].m128_u64[0] = v43 | 4;
        v30 = sub_CB13E0(a1, v43);
        v23 = HIDWORD(v30);
        if ( BYTE4(v30) )
          return (unsigned int)sub_CA49D0(a1, v30, v29, (__int64 *)v49);
        return sub_CC5D90(a1, v20, v23);
      }
      v27 = v44;
    }
    v45[0] = a1;
    v45[1] = (__int64)&v43;
    v45[2] = (__int64)&v44;
    v31 = sub_CBDDF0(a1 + 32, v27);
    if ( v31 != sub_CBDDC0(a1 + 32) )
    {
      v32 = *(_DWORD *)(v31 + 8);
      v33 = *(_BYTE *)(v31 + 12) == 0;
      v49[0].m128_u64[0] = v43 | 4;
      if ( v33 )
        return (unsigned int)sub_CA4C30(a1, v32, (__int64 *)v49);
      else
        return (unsigned int)sub_CA4C60(a1, v32, (__int64 *)v49);
    }
    v35 = *(_BYTE *)(v44 + 28) & 0x7F;
    if ( (*(_WORD *)v43 & 0x1FF) == 0x47
      && *(char *)(v43 + 2) < 0
      && (unsigned int)v35 - 40 <= 6
      && v35 != 43
      && (*(_BYTE *)(v44 + 98) & 1) != 0 )
    {
      return (unsigned int)sub_CC5510(v45, v44);
    }
    if ( v35 == 52 )
      return (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, *(_QWORD *)(v44 + 64));
    if ( *(_QWORD *)(a1 + 592) == v44 )
      goto LABEL_86;
    if ( (*(_BYTE *)(sub_CE6170(*(_QWORD *)(a1 + 488)) + 1) & 8) == 0 )
    {
      v36 = v44;
      if ( (*(_BYTE *)(v44 + 28) & 0x7Fu) - 40 <= 6 )
      {
        if ( sub_B7D120(v44, (__int64 *)v49)
          && (unsigned __int8)sub_F56AE0(*(_QWORD *)(v36 + 48), **(_QWORD **)(a1 + 488))
          && !(unsigned __int8)sub_B79700(v36) )
        {
          return (unsigned int)sub_CC5510(v45, v36);
        }
        v36 = v44;
      }
      v49[0].m128_u64[0] = v36 & 0xFFFFFFFFFFFFFFFDLL;
      return (unsigned int)sub_CB2640(a1, (__int64)v49, v43);
    }
    v37 = v44;
    if ( (*(_BYTE *)(v44 + 28) & 0x7Fu) - 40 > 6 )
    {
      v49[0].m128_u64[0] = v44 & 0xFFFFFFFFFFFFFFFDLL;
      return (unsigned int)sub_CB2640(a1, (__int64)v49, v43);
    }
    if ( !sub_9B48E0(v44) )
      goto LABEL_91;
    if ( (*(_BYTE *)(v37 + 28) & 0x7F) == 0x2B )
    {
LABEL_65:
      v49[0].m128_u64[0] = v44 & 0xFFFFFFFFFFFFFFFDLL;
      return (unsigned int)sub_CB2640(a1, (__int64)v49, v43);
    }
    if ( sub_CAE920(v37) )
    {
LABEL_91:
      if ( sub_CAEA50(a1, *(_QWORD *)(v37 + 48)) )
      {
        v40 = (_DWORD *)sub_B7D120(v37, (__int64 *)v49);
        if ( v40 && (*v40 & 0x20000) == 0 )
        {
          v46 = &v48;
          v41 = *(__int64 **)(a1 + 488);
          v47 = 0x100000000LL;
          v42 = *v41;
          v49[0].m128_i8[4] &= ~1u;
          v49[0].m128_i32[0] = 0;
          sub_C828B0((__int64)v40, (unsigned int *)v49, v42, v37, (__int64)&v46, 1);
          v3 = sub_CC55C0(a1, v44, v43);
          sub_CB7910((__int64)&v46);
          if ( v49[0].m128_i32[0] > 1u )
            sub_A4F8E0((int *)v49);
          return v3;
        }
        return (unsigned int)sub_CC5510(v45, v37);
      }
      v38 = *(_BYTE *)(v37 + 28);
    }
    v39 = v38 & 0x7F;
    if ( (v39 == 40 || v39 == 46)
      && sub_CAE950(v37)
      && sub_CAEA50(a1, *(_QWORD *)(v37 + 48))
      && sub_B73640(v37)
      && (*(_DWORD *)sub_B73640(v37) & 0x20000) == 0 )
    {
      if ( sub_B7C110(v37) )
        return (unsigned int)sub_CC5510(v45, v37);
      if ( v18 <= 1 )
      {
        v49[0].m128_u64[0] = v43 | 4;
        return (unsigned int)sub_CA9E50((_QWORD *)a1, v43, 1, (__int64 *)v49);
      }
LABEL_86:
      v49[0].m128_u64[0] = v44 & 0xFFFFFFFFFFFFFFFDLL;
      return (unsigned int)sub_CB2640(a1, (__int64)v49, v43);
    }
    goto LABEL_65;
  }
  v20 = v43;
  v21 = *(_DWORD *)(v17 + 8);
  v49[0].m128_u64[0] = v43 | 4;
  if ( v18 > 1 )
    return (unsigned int)sub_CA4BA0(a1, v21, (__int64 *)v49);
  v22 = sub_CB13E0(a1, v43);
  v23 = HIDWORD(v22);
  if ( BYTE4(v22) )
    return (unsigned int)sub_CA48C0(a1, v22, v21, (__int64 *)v49);
  return sub_CC5D90(a1, v20, v23);
}
