void __fastcall sub_18D0120(__int64 a1, unsigned __int64 a2, __m128i a3, double a4)
{
  unsigned __int16 v6; // ax
  int v7; // eax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ecx
  unsigned int v17; // r13d
  int v18; // eax
  __int64 *v19; // r14
  int v20; // rax^4
  __int64 v21; // r15
  size_t v22; // rax
  char *v23; // rcx
  __int64 v24; // rsi
  signed __int64 v25; // r8
  size_t v26; // rax
  int v27; // eax
  size_t v28; // rbp
  const void *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  bool v32; // [rsp+7h] [rbp-161h]
  int v33; // [rsp+8h] [rbp-160h]
  int v34; // [rsp+Ch] [rbp-15Ch]
  __int64 v35; // [rsp+14h] [rbp-154h]
  __int64 v36; // [rsp+20h] [rbp-148h] BYREF
  char v37; // [rsp+28h] [rbp-140h]
  void *v38; // [rsp+38h] [rbp-130h]
  __int64 v39; // [rsp+48h] [rbp-120h] BYREF
  __int64 v40[3]; // [rsp+60h] [rbp-108h] BYREF
  void *v41; // [rsp+78h] [rbp-F0h]
  _BYTE v42[24]; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v43[25]; // [rsp+A0h] [rbp-C8h] BYREF

  v6 = *(_WORD *)a2 & 0x1FF;
  if ( v6 > 0x75u )
  {
    if ( v6 > 0x77u )
      return;
    v7 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
    if ( v7 != 21 && v7 != 31 )
      return;
    v32 = v7 == 31;
    v8 = sub_BFD550(*(_QWORD *)(a2 + 24));
    if ( (*(_WORD *)v8 & 0x1FF) == 0x21 )
    {
      v9 = sub_C9AC10(v8);
      v10 = *(_QWORD *)(a2 + 16);
      v11 = *(_QWORD *)(a1 + 736);
      v43[0] = v9;
      if ( (unsigned __int8)sub_19D0110(v11, v10)
        && ((*(_BYTE *)(v8 + 27) & 1) == 0
          ? (v31 = sub_C9AC10(v8), v27 = sub_FDEF00(v31))
          : (v27 = sub_BA8080(*(_QWORD *)(v8 + 16), v10, v12, v13, v14, v15)),
            v27 == 3)
        || (v43[0] & 3) == 1
        && (v28 = j__strlen("nextObject"), v29 = (const void *)sub_FDE9A0(v43, 0), v28 == v30)
        && (!v28 || !memcmp(v29, "nextObject", v28)) )
      {
        v16 = 6691;
      }
      else
      {
        v16 = 6690;
      }
    }
    else
    {
      v16 = 6690;
    }
    v17 = *(_DWORD *)(a2 + 4);
LABEL_14:
    v19 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)v43, (__int64 *)(a1 + 8), v17, v16, 0);
    v40[0] = sub_EEC8C0(a2, a1 + 8, *(double *)a3.m128i_i64);
    sub_1587DB0((__int64)v43, v40);
    sub_15F7200(v43);
    v33 = sub_EEB7E0(a2, (__int64)v40, *(double *)a3.m128i_i64);
    v20 = (unsigned __int64)sub_EEC8C0(a2, (__int64)v40, *(double *)a3.m128i_i64) >> 32;
    v34 = sub_15F0EF0(a1, v20, 0, a3, a4);
    sub_168B9F0((__int64)v43, (__int64 *)(a1 + 8), v17, 0x16CCu, 0);
    sub_9EC740((__int64)&v36, v33, "(", 1, 0);
    v21 = sub_1589170((__int64)v43, &v36);
    sub_9EC740((__int64)v40, v34, ")", 1, 0);
    sub_1589170(v21, v40);
    if ( v41 != v42 )
      operator delete(v41);
    if ( v38 != &v39 )
      operator delete(v38);
    sub_15F7200(v43);
    if ( v32 )
    {
      sub_168B9F0((__int64)v43, v19, v17, 0x16CEu, 0);
      v22 = j__strlen("!=");
      LODWORD(v35) = v17;
      v23 = "!=";
      HIDWORD(v35) = v17;
      v24 = v35;
      v25 = v22;
    }
    else
    {
      sub_168B9F0((__int64)v43, v19, v17, 0x16CDu, 0);
      v26 = j__strlen("==");
      LODWORD(v36) = v17;
      v23 = "==";
      HIDWORD(v36) = v17;
      v25 = v26;
      v24 = v36;
      v37 = 1;
    }
    sub_18BE5B0((__int64)v40, v24, 1, v23, v25);
    sub_1589170((__int64)v43, v40);
    if ( v41 != v42 )
      operator delete(v41);
    sub_15F7200(v43);
    return;
  }
  if ( v6 == 91 )
  {
    v18 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
    if ( v18 != 15 && v18 != 25 )
      return;
    v17 = *(_DWORD *)(a2 + 20);
    v16 = 6690;
    v32 = v18 == 25;
    goto LABEL_14;
  }
  if ( v6 == 17 )
    sub_18D0120(a1, *(_QWORD *)(a2 + 16));
}
