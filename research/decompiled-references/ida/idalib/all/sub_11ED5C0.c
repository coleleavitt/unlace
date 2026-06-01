void __fastcall sub_11ED5C0(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  int v6; // edx
  __int64 (__fastcall *v7)(__int64, __int64, char); // rcx
  __int64 v8; // rax
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int8 (__fastcall *v12)(__int64, unsigned __int8 **); // rdx
  int v13; // eax
  size_t v14; // rax
  size_t v15; // rax
  __int64 v16; // rax
  unsigned __int8 (__fastcall *v17)(__int64, unsigned __int8 **); // rdx
  __int64 v18; // rax
  int v19; // eax
  size_t v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  size_t v24; // rax
  int v25; // eax
  size_t v26; // rax
  size_t v27; // rax
  size_t v28; // rax
  size_t v29; // rax
  int v30; // [rsp+10h] [rbp-1D8h] BYREF
  __m128i v31; // [rsp+14h] [rbp-1D4h] BYREF
  _QWORD v32[4]; // [rsp+30h] [rbp-1B8h] BYREF
  __int16 v33; // [rsp+50h] [rbp-198h]
  _QWORD v34[4]; // [rsp+60h] [rbp-188h] BYREF
  __int16 v35; // [rsp+80h] [rbp-168h]
  _BYTE v36[32]; // [rsp+90h] [rbp-158h] BYREF
  __int16 v37; // [rsp+B0h] [rbp-138h]
  unsigned __int8 *p_ptr; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v39[3]; // [rsp+C8h] [rbp-120h] BYREF
  __int16 v40; // [rsp+E0h] [rbp-108h]
  void *ptr; // [rsp+110h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+118h] [rbp-D0h]
  _BYTE v43[192]; // [rsp+128h] [rbp-C0h] BYREF

  v5 = *(_DWORD *)(a1 + 3932);
  v6 = *(_DWORD *)(a1 + 48);
  if ( !v5 )
  {
    if ( v6 == 37 )
      return;
LABEL_8:
    if ( v6 == 3 )
      return;
    goto LABEL_9;
  }
  if ( v5 != 1 )
  {
    if ( v6 == 3 && *(_DWORD *)(a1 + 52) == 35 || v5 == 5 )
      return;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a1 + 3936) == 2 )
  {
    if ( v6 == 37 )
      return;
    goto LABEL_8;
  }
  if ( v6 != 3 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, __int64, char))(*(_QWORD *)a1 + 536LL);
    if ( v7 == sub_11E4BC0 )
      goto LABEL_11;
    goto LABEL_16;
  }
  if ( *(_DWORD *)(a1 + 52) == 35 )
    return;
LABEL_9:
  v7 = *(__int64 (__fastcall **)(__int64, __int64, char))(*(_QWORD *)a1 + 536LL);
  if ( v7 == sub_11E4BC0 )
  {
    if ( v5 == 3 )
      return;
LABEL_11:
    if ( (unsigned int)(v5 - 1) > 1 || *(_DWORD *)(a1 + 3936) > 1u )
    {
      v30 = 0;
      v31 = _mm_loadu_si128((const __m128i *)(a1 + 3940));
LABEL_13:
      si128.m128i_i64[0] = 0;
      ptr = (void *)0x800000070000000ALL;
      if ( (unsigned __int8)sub_A09E20((unsigned int *)&v31, (unsigned int *)&ptr) && (unsigned __int8)sub_11BB7D0(a2) )
        goto LABEL_26;
      ptr = (void *)0x8000000B0000000ALL;
    }
    else
    {
      v30 = 2;
      v31 = _mm_loadu_si128((const __m128i *)(a1 + 3940));
LABEL_23:
      ptr = &byte_5;
      si128.m128i_i64[0] = 0;
      if ( (unsigned __int8)sub_A09E20((unsigned int *)&v31, (unsigned int *)&ptr) && (unsigned __int8)sub_11BB7D0(a2) )
        goto LABEL_26;
      ptr = byte_9;
    }
    si128.m128i_i64[0] = 0;
    if ( (unsigned __int8)sub_A09E20((unsigned int *)&v31, (unsigned int *)&ptr) != 1 )
      return;
LABEL_26:
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_BYTE **)(v8 + 136);
    v10 = *(_QWORD *)(v8 + 144);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    ptr = v43;
    sub_A1FE50(&ptr, v9, &v9[v10]);
    sub_228A5F0(&ptr, 0);
    sub_228A5F0(&ptr, 0);
    v33 = 259;
    v34[0] = "arc";
    v35 = 259;
    v32[0] = "lib";
    v40 = 257;
    v37 = 257;
    sub_228A3B0(&ptr, v32, v34, v36, &p_ptr);
    v11 = sub_112C5D0(a1);
    v12 = *(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 **))(*(_QWORD *)v11 + 96LL);
    v40 = 261;
    p_ptr = (unsigned __int8 *)ptr;
    v39[0] = si128.m128i_i64[0];
    if ( !v12(v11, &p_ptr) )
    {
      p_ptr = (unsigned __int8 *)&ptr;
      v39[0] = a1;
      v21 = sub_10DCD30(a2, 0x878u);
      if ( !v21 || !(unsigned __int8)sub_11ED430((char ***)&p_ptr, v39, v21) )
      {
        v22 = sub_10DCD30(a2, 0xCF4u);
        if ( v22 )
          sub_11ED430((char ***)&p_ptr, v39, v22);
      }
    }
    sub_10DC5D0(a3, (__int64)"-force_load");
    v40 = 257;
    v37 = 257;
    v35 = 257;
    v32[0] = "libarclite_";
    v33 = 259;
    sub_228A3B0(&ptr, v32, v34, v36, &p_ptr);
    v13 = *(_DWORD *)(a1 + 3932);
    if ( v13 == 3 )
    {
      v19 = *(_DWORD *)(a1 + 3936);
      if ( v19 == 1 )
      {
        v27 = j__strlen("watchsimulator");
        sub_A1FE50(&ptr, "watchsimulator", &aWatchsimulator_0[v27]);
        goto LABEL_31;
      }
      if ( !v19 )
      {
        v20 = j__strlen("watchos");
        sub_A1FE50(&ptr, "watchos", &aWatchos_0[v20]);
        goto LABEL_31;
      }
    }
    else if ( v13 == 2 )
    {
      v23 = *(_DWORD *)(a1 + 3936);
      if ( v23 == 1 )
      {
        v29 = j__strlen("appletvsimulator");
        sub_A1FE50(&ptr, "appletvsimulator", &aAppletvsimulat_0[v29]);
        goto LABEL_31;
      }
      if ( !v23 )
      {
        v24 = j__strlen("appletvos");
        sub_A1FE50(&ptr, "appletvos", &aAppletvos_0[v24]);
        goto LABEL_31;
      }
    }
    else if ( (unsigned int)(v13 - 1) <= 1 )
    {
      v25 = *(_DWORD *)(a1 + 3936);
      if ( v25 == 1 )
      {
        v26 = j__strlen("iphonesimulator");
        sub_A1FE50(&ptr, "iphonesimulator", &aIphonesimulato_0[v26]);
        goto LABEL_31;
      }
      if ( !v25 )
      {
        v28 = j__strlen("iphoneos");
        sub_A1FE50(&ptr, "iphoneos", &aIphoneos_0[v28]);
        goto LABEL_31;
      }
    }
    v14 = j__strlen("macosx");
    sub_A1FE50(&ptr, "macosx", &aMacosx[v14]);
LABEL_31:
    v15 = j__strlen(".a");
    sub_A1FE50(&ptr, ".a", &aLibcA[v15 + 6]);
    v16 = sub_112C5D0(a1);
    v17 = *(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 **))(*(_QWORD *)v16 + 96LL);
    v40 = 261;
    p_ptr = (unsigned __int8 *)ptr;
    v39[0] = si128.m128i_i64[0];
    if ( !v17(v16, &p_ptr) )
    {
      sub_FC70B0((__int64)&p_ptr, **(_QWORD **)(a1 + 8), 0, 347);
      sub_AEC220(&p_ptr, ptr, si128.m128i_i64[0]);
      sub_AEA040((__int64)&p_ptr);
    }
    v40 = 261;
    p_ptr = (unsigned __int8 *)ptr;
    v39[0] = si128.m128i_i64[0];
    v18 = sub_10DA6C0(a2, (__int64)&p_ptr);
    sub_10DC5D0(a3, v18);
    if ( ptr != v43 )
      free(ptr);
    return;
  }
LABEL_16:
  v7((__int64)&v30, a1, 1);
  switch ( v30 )
  {
    case 0:
      goto LABEL_13;
    case 1:
      si128.m128i_i64[0] = 0;
      ptr = (void *)0x800000070000000ALL;
      if ( (unsigned __int8)sub_A09E20((unsigned int *)&v31, (unsigned int *)&ptr) )
        sub_11BB7D0(a2);
      goto LABEL_26;
    case 2:
      goto LABEL_23;
    case 3:
    case 6:
      return;
    case 4:
      if ( (unsigned __int8)sub_11BB7D0(a2) )
        goto LABEL_26;
      break;
    case 5:
      si128.m128i_i64[0] = 0;
      ptr = (void *)0x8000000600000001LL;
      if ( (unsigned __int8)sub_A09E20((unsigned int *)&v31, (unsigned int *)&ptr) && (unsigned __int8)sub_11BB7D0(a2) )
        goto LABEL_26;
      break;
  }
}
