void __fastcall sub_E45C30(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r14
  size_t v3; // rax
  _BYTE *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  size_t v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  size_t v10; // rax
  char v11; // r12
  size_t v12; // rax
  char v13; // r12
  size_t v14; // rax
  char v15; // r12
  size_t v16; // rax
  char v17; // r12
  size_t v18; // rax
  char v19; // r12
  size_t v20; // rax
  __int16 v21; // r12
  size_t v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD v26[2]; // [rsp+10h] [rbp-128h] BYREF
  __m128i v27; // [rsp+20h] [rbp-118h] BYREF
  __int64 v28; // [rsp+30h] [rbp-108h] BYREF
  __m128i v29[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int16 v30; // [rsp+60h] [rbp-D8h]
  __m128i v31[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int16 v32; // [rsp+90h] [rbp-A8h]
  __m128i v33; // [rsp+A0h] [rbp-98h] BYREF
  int v34; // [rsp+B0h] [rbp-88h] BYREF
  __int16 v35; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-60h]
  __int64 v37; // [rsp+E0h] [rbp-58h]
  int v38; // [rsp+E8h] [rbp-50h]

  v2 = a1 + 1048;
  sub_E3A830(&v33, a2);
  sub_E35650((__int64)&v35, &v33);
  v3 = j__strlen("id");
  v31[0].m128i_i64[0] = (__int64)&v35;
  v31[0].m128i_i64[1] = a1 + 1048;
  sub_E34890(a1 + 1048, (__int64)"id", v3, (__int64)sub_E34840, v31);
  sub_2207560(&v35);
  if ( (int *)v33.m128i_i64[0] != &v34 )
    operator delete((void *)v33.m128i_i64[0]);
  if ( a2 )
  {
    v31[0].m128i_i64[0] = (__int64)"Type";
    v32 = 259;
    v4 = (_BYTE *)sub_F34CF0(a2, "id", 259);
    v30 = 257;
    if ( *v4 )
    {
      v29[0].m128i_i64[0] = (__int64)v4;
      LOBYTE(v30) = 3;
    }
    sub_A1D840(&v33, v29, v31, 257, v5, v6);
    sub_222F820(&v27, &v33);
    sub_E35650((__int64)&v35, &v27);
    v7 = j__strlen("kind");
    v26[0] = &v35;
    v26[1] = a1 + 1048;
    sub_E34890(v2, (__int64)"kind", v7, (__int64)sub_E34840, v26);
    sub_2207560(&v35);
    if ( (__int64 *)v27.m128i_i64[0] != &v28 )
      operator delete((void *)v27.m128i_i64[0]);
    sub_E3FD20((__int64)&v33, a1, a2 & 0xFFFFFFFFFFFFFFF0LL, 0);
    v35 = 7;
    v8 = v33.m128i_i64[0];
    v33.m128i_i64[0] = 0;
    v36 = v8;
    v9 = v33.m128i_i64[1];
    v33.m128i_i64[1] = 0;
    v37 = v9;
    LODWORD(v9) = v34;
    v34 = 0;
    v38 = v9;
    v10 = j__strlen("type");
    v31[0].m128i_i64[0] = (__int64)&v35;
    v31[0].m128i_i64[1] = a1 + 1048;
    sub_E34890(v2, (__int64)"type", v10, (__int64)sub_E34840, v31);
    sub_2207560(&v35);
    sub_E395A0(v33.m128i_i64);
    v11 = *(_BYTE *)(a2 + 17);
    v12 = j__strlen("containsErrors");
    sub_E35E50(a1, (__int64)"containsErrors", v12, (v11 & 0x10) != 0);
    v13 = *(_BYTE *)(a2 + 17);
    v14 = j__strlen("isDependent");
    sub_E35E50(a1, (__int64)"isDependent", v14, (v13 & 4) != 0);
    v15 = *(_BYTE *)(a2 + 17);
    v16 = j__strlen("isInstantiationDependent");
    sub_E35E50(a1, (__int64)"isInstantiationDependent", v16, (v15 & 2) != 0);
    v17 = *(_BYTE *)(a2 + 17);
    v18 = j__strlen("isVariablyModified");
    sub_E35E50(a1, (__int64)"isVariablyModified", v18, (v17 & 8) != 0);
    v19 = *(_BYTE *)(a2 + 17);
    v20 = j__strlen("containsUnexpandedPack");
    sub_E35E50(a1, (__int64)"containsUnexpandedPack", v20, v19 & 1);
    v21 = *(_WORD *)(a2 + 18);
    v22 = j__strlen("isImported");
    sub_E35E50(a1, (__int64)"isImported", v22, (v21 & 4) != 0);
    sub_E45B50(a1, a2, v23, v24, v25);
  }
}

