void __fastcall sub_1197540(__int64 a1, __int64 a2, __int64 a3)
{
  char *v6; // r12
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // r12
  bool v10; // cf
  bool v11; // zf
  __int64 v12; // r8
  __int64 v13; // rcx
  const char *v14; // rdi
  __int64 v15; // rdx
  const char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  size_t v21; // r12
  const char *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  char *s1; // [rsp+0h] [rbp-138h]
  _DWORD *v31; // [rsp+8h] [rbp-130h]
  unsigned __int32 v32; // [rsp+8h] [rbp-130h]
  __int64 *v33; // [rsp+18h] [rbp-120h]
  __int64 v34; // [rsp+20h] [rbp-118h] BYREF
  char v35; // [rsp+28h] [rbp-110h]
  void *v36[2]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v37; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v38[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int16 v39; // [rsp+70h] [rbp-C8h]
  __m128i v40[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int16 v41; // [rsp+A0h] [rbp-98h]
  __m128i v42[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int16 v43; // [rsp+D0h] [rbp-68h]

  v31 = (_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  v6 = sub_115A2B0(a2, v31);
  sub_10DC5D0(a3, (__int64)"-target-abi");
  sub_10DC5D0(a3, (__int64)v6);
  v7 = sub_10DCD30(a2, 0x830u);
  if ( v7 )
  {
    v8 = v7;
    sub_10DC5D0(a3, (__int64)"-msmall-data-limit");
    sub_10DC5D0(a3, **(_QWORD **)(v8 + 48));
  }
  if ( !(unsigned __int8)sub_21B7850(a2, 2420, 2619, 1) )
    sub_10DC5D0(a3, (__int64)"-no-implicit-float");
  v9 = sub_10DCD30(a2, 0xB64u);
  if ( v9 )
  {
    sub_10DC5D0(a3, (__int64)"-tune-cpu");
    v13 = 7;
    v14 = "native";
    v15 = **(_QWORD **)(v9 + 48);
    v16 = (const char *)v15;
    do
    {
      if ( !v13 )
        break;
      v10 = *v16 < (unsigned int)*v14;
      v11 = *v16++ == *v14++;
      --v13;
    }
    while ( v11 );
    if ( (!v10 && !v11) == v10 )
    {
      v43 = 261;
      v42[0].m128i_i64[0] = sub_22A33B0(v14, v16, v15, v13, v12);
      v42[0].m128i_i64[1] = v17;
      v18 = sub_10DA6C0(a2, (__int64)v42);
      sub_10DC5D0(a3, v18);
    }
    else
    {
      sub_10DC5D0(a3, v15);
    }
  }
  v19 = sub_10DCD30(a2, 0xB1Fu);
  v20 = v19;
  if ( v19 )
  {
    v21 = 0;
    v22 = **(const char ***)(v19 + 48);
    s1 = (char *)v22;
    if ( v22 )
      v21 = j__strlen(v22);
    v33 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL);
    sub_11598D0((__m128i **)v36, a2, v31);
    sub_22AE720(&v34, v36[0], v36[1], 1, 1);
    v23 = v34;
    if ( (v35 & 1) != 0 && (v34 = 0, v23) )
    {
      v40[0].m128i_i64[0] = v23;
      sub_A05760(v42, v40);
      if ( v40[0].m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40[0].m128i_i64[0] + 8LL))(v40[0].m128i_i64[0]);
      v32 = 0;
    }
    else
    {
      v32 = *(_DWORD *)(v23 + 8);
    }
    if ( v21 != j__strlen("zvl") || v21 && memcmp(s1, "zvl", v21) || v32 <= 0x3F )
    {
      if ( (unsigned __int8)sub_2247970(s1, v21, 10, v42)
        || v42[0].m128i_i64[0] != v42[0].m128i_u32[0]
        || (unsigned int)(v42[0].m128i_i32[0] - 64) > 0xFFC0
        || v32 > v42[0].m128i_i32[0]
        || (v42[0].m128i_i32[0] & (v42[0].m128i_i32[0] - 1)) != 0 )
      {
        if ( v21 != j__strlen("scalable") || v21 && memcmp(s1, "scalable", v21) )
        {
          sub_FC70B0((__int64)v42, *v33, 0, 497);
          sub_AEC220((unsigned __int8 **)v42, *(_BYTE **)(v20 + 24), *(_QWORD *)(v20 + 32));
          sub_AEC220((unsigned __int8 **)v42, s1, v21);
          sub_AEA040((__int64)v42);
        }
        goto LABEL_24;
      }
      v32 = v42[0].m128i_i32[0];
    }
    v39 = 265;
    v41 = 259;
    v38[0].m128i_i32[0] = v32 >> 6;
    v40[0].m128i_i64[0] = (__int64)"-mvscale-max=";
    sub_A41580(v42, v40, v38, v32 >> 6, v24, v25);
    v26 = sub_10DA6C0(a2, (__int64)v42);
    sub_10DC5D0(a3, v26);
    v39 = 265;
    v41 = 259;
    v38[0].m128i_i32[0] = v32 >> 6;
    v40[0].m128i_i64[0] = (__int64)"-mvscale-min=";
    sub_A41580(v42, v40, v38, v32 >> 6, v27, v28);
    v29 = sub_10DA6C0(a2, (__int64)v42);
    sub_10DC5D0(a3, v29);
LABEL_24:
    sub_10A71B0((__int64)&v34);
    if ( v36[0] != &v37 )
      operator delete(v36[0]);
  }
}
