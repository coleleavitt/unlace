void __fastcall sub_1A08090(__int64 *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  unsigned int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __m128i *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 *v24; // r12
  unsigned int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // [rsp+8h] [rbp-D0h] BYREF
  unsigned int v28; // [rsp+Ch] [rbp-CCh] BYREF
  unsigned int v29; // [rsp+10h] [rbp-C8h] BYREF
  unsigned int v30; // [rsp+14h] [rbp-C4h] BYREF
  unsigned int v31; // [rsp+18h] [rbp-C0h] BYREF
  int v32; // [rsp+1Ch] [rbp-BCh] BYREF
  _BYTE v33[184]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = sub_168B6C0((__int64)a1);
  v5 = sub_22B7B00(*(_QWORD *)(v4 + 17448) + 216LL);
  v27 = 1024;
  v6 = *(_QWORD *)(sub_168B6C0((__int64)a1) + 17448);
  v28 = 1024;
  if ( *(_DWORD *)(v6 + 248) == 11 )
  {
    if ( v5 > 4 )
    {
      if ( v5 == 5 )
        v27 = 64;
    }
    else
    {
      v27 = 1;
      v28 = 768;
    }
  }
  if ( (unsigned __int8)sub_16211A0(*a1, a3, a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, &v29, 0xFFFFFFFFLL, 0) )
  {
    if ( v29 > 0x400 )
    {
      v21 = sub_C00A40(a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, (__int64)a3, v7, v8, v9);
      sub_168B9F0((__int64)v33, a1, v21, 0xF41u, 0);
      v31 = 0;
    }
    else
    {
      if ( !(unsigned __int8)sub_16211A0(*a1, a3, a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL, &v30, 0xFFFFFFFFLL, 0) )
        return;
      if ( v30 <= 0x400 )
      {
        if ( (unsigned __int8)sub_16211A0(*a1, a3, a3[6].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, &v31, 0xFFFFFFFFLL, 0) )
        {
          if ( v31 > v27 )
          {
            v24 = (__int64 *)(*a1 + 8);
            v25 = sub_C00A40(a3[6].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, (__int64)a3, v13, v14, v15);
            sub_168B9F0((__int64)v33, v24, v25, 0xF41u, 0);
            v32 = 2;
            v26 = sub_1587D10((__int64)v33, &v32);
            sub_1588370(v26, &v27);
            sub_15F7200(v33);
          }
          else if ( v30 * v29 * v31 > v28 )
          {
            sub_168B9F0((__int64)v33, a1, a3[1].m128i_u32[2], 0xF42u, 0);
            sub_1588370((__int64)v33, &v28);
            sub_15F7200(v33);
          }
          else
          {
            v16 = sub_1A03930(a1, a2, a3, v29, v30, v31);
            if ( v16 )
              sub_B8CC60(a2, (__int64)v16, v17, v18, v19, v20);
          }
        }
        return;
      }
      v23 = sub_C00A40(a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL, (__int64)a3, v10, v11, v12);
      sub_168B9F0((__int64)v33, a1, v23, 0xF41u, 0);
      v31 = 1;
    }
    v22 = sub_1587D10((__int64)v33, (int *)&v31);
    v32 = 1024;
    sub_1587D10(v22, &v32);
    sub_15F7200(v33);
  }
}
