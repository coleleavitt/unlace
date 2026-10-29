__int64 __fastcall sub_76770(
        _QWORD *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r14
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // r13
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  __int64 v26; // r12
  char v27; // [rsp+0h] [rbp-28h]

  if ( !(unsigned __int8)sub_75E50(&qword_165AA0, a1 + 8, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 0;
  v12 = sub_75F40(
          (__int64)&qword_165AA0,
          "-----BEGIN CERTIFICATE-----\n"
          "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\n"
          "+t/FOgI=\n"
          "-----END CERTIFICATE-----\n");
  a1[12] = v12;
  if ( !v12 )
  {
    a1[8] = "load_root_ca_certificate";
    return 0;
  }
  v13 = sub_6CAE0(0);
  a1[4] = v13;
  if ( !(unsigned __int8)sub_6CB50(v13) )
    goto LABEL_6;
  v14 = qword_165AB0;
  v15 = a1[12];
  sub_98400(qword_165AB0);
  v18 = qword_165AC8;
  if ( qword_165AC8 )
  {
    sub_98450(v14);
    a1[10] = v18;
  }
  else
  {
    a2 = v15;
    v26 = sub_75FA0((__int64 **)&qword_165AA0, v15, 0, 0, a3, a4, a5, a6, v16, v17, a9, a10);
    qword_165AC8 = v26;
    sub_98450(v14);
    a1[10] = v26;
    if ( !v26 )
      goto LABEL_15;
  }
  if ( !(unsigned __int8)sub_76400((__int64)a1) )
  {
LABEL_15:
    a1[8] = "openssl";
    return 0;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_165AA0 + 208))(a1[11], a2);
  if ( v19 <= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(qword_165AA0 + 232))(a1[11], (unsigned int)v19) == 5 )
    {
LABEL_6:
      a1[8] = "irs";
      return 0;
    }
    goto LABEL_15;
  }
  v10 = sub_76630((__int64)a1);
  if ( !(_BYTE)v10 )
  {
    sub_762F0(a1, -1);
    return 0;
  }
  if ( (dword_1671A4 & 0x100000) != 0 )
    sub_2A380((int)"TLS: certificate verified\n", a2, v20, v21, v22, v23, a3, a4, a5, a6, v24, v25, a9, a10, v27);
  return v10;
}

