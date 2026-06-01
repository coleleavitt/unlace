__int64 __fastcall sub_CD87D0(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v24; // r13
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // r13
  unsigned int v28; // r14d
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r13
  __int64 v31; // rsi
  bool v32; // zf
  unsigned __int64 v33; // rax
  unsigned __int8 v34; // al
  __int64 v35; // rbx
  __int64 v36; // r13
  char v37; // cl
  int v38; // ecx
  _DWORD *v39; // rax
  __int64 *v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v44[4]; // [rsp+10h] [rbp-C8h] BYREF
  void *v45; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+38h] [rbp-A0h]
  char v47; // [rsp+40h] [rbp-98h] BYREF
  __m128 v48[7]; // [rsp+60h] [rbp-78h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 1360);
  v43 = a2;
  v42 = a3;
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
      sub_2205610(v48, v9, v10, v8);
      v8 = (void *)v48[0].m128_u64[0];
      LODWORD(v9) = v48[0].m128_i32[2];
    }
    else
    {
      v48[0].m128_i32[2] = v9;
      if ( (unsigned int)v9 > 0x40 )
      {
        sub_2205470(v48, v8, 0);
        v8 = (void *)v48[0].m128_u64[0];
        LODWORD(v9) = v48[0].m128_i32[2];
      }
    }
    LODWORD(v46) = v9;
    v45 = v8;
    BYTE4(v46) = v7;
    v3 = sub_CB8DF0(a1, (__int64)&v45, a3);
    if ( (unsigned int)v46 > 0x40 )
    {
      if ( v45 )
        operator delete[](v45);
    }
    return v3;
  }
  if ( (unsigned int)v5 - 34 <= 5 )
  {
    v12 = sub_CB4B10(a1);
    if ( v12 )
    {
      v48[0].m128_u64[0] = v42 | 4;
      return (unsigned int)sub_D05AE0(a1, v12, v48);
    }
    return v3;
  }
  if ( v5 == 30 )
  {
    v13 = sub_E2FAD0(*(_QWORD *)(a1 + 1272), a2, 0);
    if ( BYTE4(v13) )
    {
      v48[0].m128_u64[0] = v42 | 4;
      if ( (unsigned __int8)sub_D06300(a1, (unsigned int)v13, v48) )
      {
        v14 = a2 + 64;
        v15 = sub_CE6180(*(_QWORD *)(a1 + 1264), *(_QWORD *)(v42 + 8));
        if ( BYTE4(v15) )
        {
          if ( (unsigned __int8)sub_CD9290(a1, v14, (unsigned int)v15, v42) )
          {
            v48[0].m128_u64[0] = v42 | 4;
            return (unsigned int)sub_D474E0(a1, (unsigned int)v15, (unsigned int)v13, v48);
          }
        }
        else
        {
          return (unsigned int)sub_CD97D0(a1, v14, v42, *(_QWORD *)(a2 + 48));
        }
      }
    }
    return v3;
  }
  v16 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  v17 = sub_CBD660(a1 + 1280, a2);
  v18 = v16 - 43;
  v19 = (_QWORD *)(*(_QWORD *)(a1 + 1280) + 24LL * *(unsigned int *)(a1 + 1296));
  sub_CBBC50(v48, v19, v19, a1 + 1280, 1);
  if ( v48[0].m128_u64[0] == v17 )
  {
    v24 = sub_E2F250(*(_QWORD *)(a1 + 1272), v43);
    if ( BYTE4(v24) )
    {
      if ( v18 > 1 )
      {
        v48[0].m128_u64[0] = v42 | 4;
        return (unsigned int)sub_D06300(a1, (unsigned int)v24, v48);
      }
      v20 = v42;
      if ( (*(_BYTE *)(sub_CE6170(*(_QWORD *)(a1 + 1264)) + 1) & 0x10) != 0 )
      {
        v48[0].m128_u64[0] = v42 | 4;
        v33 = sub_CB4C40(a1, v42);
        v23 = HIDWORD(v33);
        if ( BYTE4(v33) )
          return (unsigned int)sub_D340D0(a1, (unsigned int)v33, (unsigned int)v24, v48);
      }
      else
      {
        v48[0].m128_u64[0] = v42 | 4;
        v25 = sub_CB4C40(a1, v42);
        v23 = HIDWORD(v25);
        if ( BYTE4(v25) )
          return (unsigned int)sub_D357D0(a1, (unsigned int)v25, (unsigned int)v24, v48);
      }
      return sub_CD8FA0(a1, v20, v23);
    }
    v26 = v43;
    if ( (*(_BYTE *)(v43 + 28) & 0x7F) == 0x2B )
    {
      v27 = sub_CBD760(a1 + 8, v43);
      if ( sub_CBD730(a1 + 8) != v27 )
      {
        v20 = v42;
        v28 = *(_DWORD *)(v27 + 8);
        if ( v18 > 1 && *(_BYTE *)(v27 + 12) )
        {
          v48[0].m128_u64[0] = v42 | 4;
          return (unsigned int)sub_D06380(a1, v28, v48);
        }
        v48[0].m128_u64[0] = v42 | 4;
        v29 = sub_CB4C40(a1, v42);
        v23 = HIDWORD(v29);
        if ( BYTE4(v29) )
          return (unsigned int)sub_D88CE0(a1, (unsigned int)v29, v28, v48);
        return sub_CD8FA0(a1, v20, v23);
      }
      v26 = v43;
    }
    v44[0] = a1;
    v44[1] = (__int64)&v42;
    v44[2] = (__int64)&v43;
    v30 = sub_CBDDF0(a1 + 32, v26);
    if ( v30 != sub_CBDDC0(a1 + 32) )
    {
      v31 = *(unsigned int *)(v30 + 8);
      v32 = *(_BYTE *)(v30 + 12) == 0;
      v48[0].m128_u64[0] = v42 | 4;
      if ( v32 )
        return (unsigned int)sub_D06510(a1, v31, v48);
      else
        return (unsigned int)sub_D0ED00(a1, v31, v48);
    }
    v34 = *(_BYTE *)(v43 + 28) & 0x7F;
    if ( (*(_WORD *)v42 & 0x1FF) == 0x47
      && *(char *)(v42 + 2) < 0
      && (unsigned int)v34 - 40 <= 6
      && v34 != 43
      && (*(_BYTE *)(v43 + 98) & 1) != 0 )
    {
      return (unsigned int)sub_CD8720(v44, v43);
    }
    if ( v34 == 52 )
      return (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, *(_QWORD *)(v43 + 64));
    if ( *(_QWORD *)(a1 + 1368) == v43 )
      goto LABEL_86;
    if ( (*(_BYTE *)(sub_CE6170(*(_QWORD *)(a1 + 1264)) + 1) & 8) == 0 )
    {
      v35 = v43;
      if ( (*(_BYTE *)(v43 + 28) & 0x7Fu) - 40 <= 6 )
      {
        if ( sub_B7D120(v43, (__int64 *)v48)
          && (unsigned __int8)sub_F56AE0(*(_QWORD *)(v35 + 48), **(_QWORD **)(a1 + 1264))
          && !(unsigned __int8)sub_B79700(v35) )
        {
          return (unsigned int)sub_CD8720(v44, v35);
        }
        v35 = v43;
      }
      v48[0].m128_u64[0] = v35 & 0xFFFFFFFFFFFFFFFDLL;
      return (unsigned int)sub_CB5EC0(a1, (__int64)v48, v42);
    }
    v36 = v43;
    if ( (*(_BYTE *)(v43 + 28) & 0x7Fu) - 40 > 6 )
    {
      v48[0].m128_u64[0] = v43 & 0xFFFFFFFFFFFFFFFDLL;
      return (unsigned int)sub_CB5EC0(a1, (__int64)v48, v42);
    }
    if ( !sub_9B48E0(v43) )
      goto LABEL_91;
    if ( (*(_BYTE *)(v36 + 28) & 0x7F) == 0x2B )
    {
LABEL_65:
      v48[0].m128_u64[0] = v43 & 0xFFFFFFFFFFFFFFFDLL;
      return (unsigned int)sub_CB5EC0(a1, (__int64)v48, v42);
    }
    if ( sub_CAE920(v36) )
    {
LABEL_91:
      if ( sub_CAEA90(a1, *(_QWORD *)(v36 + 48)) )
      {
        v39 = (_DWORD *)sub_B7D120(v36, (__int64 *)v48);
        if ( v39 && (*v39 & 0x20000) == 0 )
        {
          v45 = &v47;
          v40 = *(__int64 **)(a1 + 1264);
          v46 = 0x100000000LL;
          v41 = *v40;
          v48[0].m128_i8[4] &= ~1u;
          v48[0].m128_i32[0] = 0;
          sub_C828B0((__int64)v39, (unsigned int *)v48, v41, v36, (__int64)&v45, 1);
          v3 = sub_CD87D0(a1, v43, v42);
          sub_CB7910((__int64)&v45);
          if ( v48[0].m128_i32[0] > 1u )
            sub_A4F8E0((int *)v48);
          return v3;
        }
        return (unsigned int)sub_CD8720(v44, v36);
      }
      v37 = *(_BYTE *)(v36 + 28);
    }
    v38 = v37 & 0x7F;
    if ( (v38 == 40 || v38 == 46)
      && sub_CAE950(v36)
      && sub_CAEA90(a1, *(_QWORD *)(v36 + 48))
      && sub_B73640(v36)
      && (*(_DWORD *)sub_B73640(v36) & 0x20000) == 0 )
    {
      if ( sub_B7C110(v36) )
        return (unsigned int)sub_CD8720(v44, v36);
      if ( v18 <= 1 )
      {
        v48[0].m128_u64[0] = v42 | 4;
        return (unsigned int)sub_D06C80(a1, v42, 1, v48);
      }
LABEL_86:
      v48[0].m128_u64[0] = v43 & 0xFFFFFFFFFFFFFFFDLL;
      return (unsigned int)sub_CB5EC0(a1, (__int64)v48, v42);
    }
    goto LABEL_65;
  }
  v20 = v42;
  v21 = *(_DWORD *)(v17 + 8);
  v48[0].m128_u64[0] = v42 | 4;
  if ( v18 > 1 )
    return (unsigned int)sub_CFF720(a1, v21, v48);
  v22 = sub_CB4C40(a1, v42);
  v23 = HIDWORD(v22);
  if ( BYTE4(v22) )
    return (unsigned int)sub_D32BF0(a1, (unsigned int)v22, v21, v48);
  return sub_CD8FA0(a1, v20, v23);
}
