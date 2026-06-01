void __fastcall sub_1A08350(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int32 v3; // r15d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int *v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // [rsp-10h] [rbp-F8h]
  __int64 v36; // [rsp-8h] [rbp-F0h]
  unsigned int v37; // [rsp+10h] [rbp-D8h] BYREF
  unsigned int v38; // [rsp+14h] [rbp-D4h] BYREF
  unsigned int v39; // [rsp+18h] [rbp-D0h] BYREF
  int v40; // [rsp+1Ch] [rbp-CCh] BYREF
  _BYTE v41[200]; // [rsp+20h] [rbp-C8h] BYREF

  v3 = a3[3].m128i_u16[4];
  if ( (unsigned int)(v3 - 1) <= 2
    && (unsigned __int8)sub_16211A0(*a1, a3, a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, &v37, 0xFFFFFFFFLL, 0) )
  {
    v38 = 0;
    if ( v3 == 1 )
    {
      v9 = v37;
      v39 = 0;
      if ( v37 - 4 > 0x7C || (v37 & (v37 - 1)) != 0 )
      {
        v30 = sub_C00A40(a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, (__int64)a3, v7, v37, v8);
        sub_168B9F0((__int64)v41, a1, v30, 0xC90u, 0);
        v31 = sub_15DD120((__int64)v41, (__int64)a3);
        v32 = sub_1588370(v31, &dword_26473C4);
        v33 = sub_1588370(v32, &dword_26473C0);
        sub_1588370(v33, &v37);
        sub_15F7200(v41);
        return;
      }
      v10 = 0;
      v11 = 0;
      goto LABEL_23;
    }
    if ( !(unsigned __int8)sub_16211A0(*a1, a3, a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL, &v38, 0xFFFFFFFFLL, 0) )
      return;
    v39 = 0;
    if ( v3 != 3 )
    {
      v10 = v38;
      if ( v38 - 4 > 0x7C || (v38 & (v38 - 1)) != 0 )
      {
        v26 = sub_C00A40(a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL, (__int64)a3, v12, v13, v38);
        sub_168B9F0((__int64)v41, a1, v26, 0xC90u, 0);
        v27 = sub_15DD120((__int64)v41, (__int64)a3);
        v28 = sub_1588370(v27, &dword_26473C4);
        v29 = sub_1588370(v28, &dword_26473C0);
        sub_1588370(v29, &v38);
        sub_15F7200(v41);
        return;
      }
      v9 = v37;
      if ( v38 < v37 )
      {
        sub_168B9F0((__int64)v41, a1, a3[1].m128i_u32[2], 0xC51u, 0);
        v34 = sub_15DD120((__int64)v41, (__int64)a3);
        v40 = 1;
        sub_1587D10(v34, &v40);
        sub_15F7200(v41);
        return;
      }
      v11 = 0;
      if ( v38 == v37 )
      {
        sub_168B9F0((__int64)v41, a1, a3[1].m128i_u32[2], 0x1989u, 0);
        sub_15DD120((__int64)v41, (__int64)a3);
        sub_15F7200(v41);
        v11 = v39;
        v10 = v38;
        v9 = v37;
      }
      goto LABEL_23;
    }
    if ( !(unsigned __int8)sub_16211A0(*a1, a3, a3[6].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, &v39, 0xFFFFFFFFLL, 0) )
      return;
    v11 = v39;
    if ( v39 - 4 > 0x7C || (v39 & (v39 - 1)) != 0 )
    {
      v20 = sub_C00A40(a3[6].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, (__int64)a3, v14, v15, v10);
      sub_168B9F0((__int64)v41, a1, v20, 0xC90u, 0);
      v21 = sub_15DD120((__int64)v41, (__int64)a3);
      v18 = sub_1588370(v21, &dword_26473C4);
      v19 = &dword_26473C0;
    }
    else
    {
      v9 = v37;
      if ( v39 >= v37 )
      {
        v10 = v38;
        if ( v39 <= v38 )
        {
LABEL_23:
          v23 = sub_1A03B30(a1, a2, a3, v9, v10, v11, v3);
          if ( v23 )
            sub_B8CC60(a2, (__int64)v23, v35, v36, v24, v25);
          return;
        }
      }
      v16 = sub_C00A40(a3[6].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, (__int64)a3, v14, v37, v10);
      sub_168B9F0((__int64)v41, a1, v16, 0xC90u, 0);
      v17 = sub_15DD120((__int64)v41, (__int64)a3);
      v18 = sub_1588370(v17, &v37);
      v19 = &v38;
    }
    v22 = sub_1588370(v18, v19);
    sub_1588370(v22, &v39);
    sub_15F7200(v41);
  }
}
