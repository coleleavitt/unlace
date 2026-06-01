void __fastcall sub_1830E00(__int64 *a1, __int64 a2, const __m128i *a3, double a4)
{
  __int64 v6; // rbp
  _DWORD *v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdx
  __int32 v23; // r14d
  __m128i *v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rbx
  const char *v33; // rsi
  const char *v34; // rax
  __int64 v35; // r14
  __int64 v36; // rbp
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r15
  __int64 v43; // rax
  _QWORD *v44; // rax
  char v45; // [rsp+Fh] [rbp-E9h]
  __int32 v46; // [rsp+1Ch] [rbp-DCh] BYREF
  __int64 v47; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v49[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v51; // [rsp+50h] [rbp-A8h] BYREF
  char v52; // [rsp+A8h] [rbp-50h]
  unsigned int v53; // [rsp+B0h] [rbp-48h]
  char v54; // [rsp+B4h] [rbp-44h]

  v6 = a3[5].m128i_i64[0];
  v46 = 0;
  v7 = (_DWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (unsigned __int8)sub_1830010((__int64)a1, a2, (__int64)a3, 1u, v7, (__int64)&v46, 0, 0) )
  {
    v8 = sub_18064C0(a2, (v46 & 0x3FFFFFFF) - 1 - (unsigned int)((v46 & 0x40000000) != 0));
    v45 = sub_1A88BD0(a1[92], v8, 0) ^ 1;
    if ( !v45 )
      goto LABEL_4;
    v11 = v8;
    if ( (unsigned __int8)sub_1A88D60(a1[92], v8, v9, v10) )
      goto LABEL_4;
    v29 = v8 & 0xFFFFFFFFFFFFFFF0LL;
    v30 = *(_QWORD *)v29;
    v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v31 + 16) != 42 )
      goto LABEL_18;
    if ( *(_BYTE *)(v30 + 16) != 42 )
      v30 = sub_F63050(v30, v11, v31, v12);
    if ( (unsigned __int8)sub_F57EE0(*(_QWORD *)(*(_QWORD *)(v30 + 32) & 0xFFFFFFFFFFFFFFF0LL)) )
    {
LABEL_4:
      v13 = sub_B8DC30(a2, 1);
      if ( v13 )
        v14 = *(_QWORD *)(v13 + 24);
      else
        v14 = *(_QWORD *)(a2 + 80);
      v15 = *(_QWORD *)(sub_A8A2C0((_QWORD *)a1[31]) + 48);
      if ( sub_F6AC00(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL)) == v15 && (*(_BYTE *)(a2 + 28) & 0x7F) == 0x12 )
      {
        v37 = sub_BA85D0(a2);
        if ( v37 )
          v14 = sub_A74EC0(a1[31], *(_QWORD *)(v37 + 104) & 0xFFFFFFFFFFFFFFF0LL);
      }
      if ( (unsigned __int8)sub_1A88BD0(a1[92], v14, 1) )
        goto LABEL_13;
      v18 = v14;
      if ( (unsigned __int8)sub_1A88D60(a1[92], v14, v16, v17) )
        goto LABEL_13;
      v20 = v14 & 0xFFFFFFFFFFFFFFF0LL;
      v21 = *(_QWORD *)v20;
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v22 + 16) != 42 )
        goto LABEL_19;
      if ( *(_BYTE *)(v21 + 16) != 42 )
        v21 = sub_F63050(v21, v18, v22, v19);
      if ( (unsigned __int8)sub_F57EE0(*(_QWORD *)(*(_QWORD *)(v21 + 32) & 0xFFFFFFFFFFFFFFF0LL)) )
      {
LABEL_13:
        v23 = v46;
        v24 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 48, 3u);
        sub_B12DE0(v24, a1[31], a3, v23);
        sub_B8CC60(a2, (__int64)v24, v25, v26, v27, v28);
      }
      else
      {
LABEL_19:
        sub_168B9F0((__int64)v49, a1 + 1, a3[1].m128i_u32[2], 0xF02u, 0);
        v33 = "string type";
        v34 = "NSString";
        if ( v45 )
          v34 = "string type";
        v35 = (__int64)v34;
        if ( v52 )
        {
          v33 = v34;
          sub_AE9DF0(&v51, (__int64)v34, 1u);
        }
        else if ( v54 )
        {
          v42 = sub_168B9E0(v49);
          v43 = v50;
          if ( v50 )
            v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 32LL))(v50);
          v48 = v43;
          v44 = sub_1587BC0(v42, &v48, v38, v39, v40, v41);
          v33 = (const char *)v35;
          sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v53 + 8), v35, 1u);
        }
        v47 = sub_EEC8C0((unsigned __int64)v7, (__int64)v33, a4);
        v36 = sub_1587DB0((__int64)v49, &v47);
        v48 = sub_1806530(a2, 0);
        sub_1587DB0(v36, &v48);
        sub_15F7200(v49);
      }
    }
    else
    {
LABEL_18:
      sub_168B9F0((__int64)v49, a1 + 1, a3[1].m128i_u32[2], 0xF01u, 0);
      v47 = sub_EEC8C0((unsigned __int64)v7, (__int64)(a1 + 1), a4);
      v32 = sub_1587DB0((__int64)v49, &v47);
      v48 = sub_1806530(a2, 0);
      sub_1587DB0(v32, &v48);
      sub_15F7200(v49);
    }
  }
}
