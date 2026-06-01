__int64 __fastcall sub_7E4C70(__int64 a1, unsigned int *a2, __m128 *a3)
{
  int v3; // r12d
  const __m128i *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // r12d
  __int64 v10; // r9
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64, __int64, __int64, _QWORD *, __int64, __int64); // r8
  int v14; // eax
  __m128 *v16; // rax
  _DWORD v17[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128 *v18; // [rsp+8h] [rbp-40h]
  _DWORD v19[2]; // [rsp+10h] [rbp-38h] BYREF
  __m128 *v20; // [rsp+18h] [rbp-30h]

  v6 = *(const __m128i **)(a1 + 80);
  v7 = v6[1].m128i_i64[1];
  if ( v7 && *(_BYTE *)(v7 + 352) )
  {
    sub_7A4170(v6);
    v6 = *(const __m128i **)(a1 + 80);
    if ( !a3 )
    {
      v16 = sub_7A55C0(v6, (unsigned __int64 *)(a1 + 16), 2u, a2);
      v6 = *(const __m128i **)(a1 + 80);
      a3 = v16;
    }
    v7 = v6[1].m128i_i64[1];
  }
  v8 = *(_QWORD *)(v7 + 3288);
  LOBYTE(v3) = *(_DWORD *)(v8 + 4LL * *a2) == 1;
  LOBYTE(v8) = *(_DWORD *)(v8 + 4LL * a2[1]) == 1;
  v9 = v8 | v3;
  sub_7F1790(&v6[10], 2, a2);
  v11 = *(__int64 **)(a1 + 24);
  v12 = *v11;
  v17[0] = 1;
  v18 = a3;
  v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, __int64, __int64))(v12 + 16);
  v14 = *(_DWORD *)(a1 + 12);
  v17[1] = v14;
  if ( v13 == sub_788610 )
  {
    v19[1] = v14;
    v19[0] = 1;
    v20 = a3;
    sub_11C4C20(v11, 2, a2, v19, v13, v10);
  }
  else
  {
    ((void (__fastcall *)(__int64 *, __int64, unsigned int *, _DWORD *))v13)(v11, 2, a2, v17);
  }
  return v9 ^ 1u;
}

