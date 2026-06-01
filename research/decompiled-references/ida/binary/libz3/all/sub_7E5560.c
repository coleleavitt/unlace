__int64 __fastcall sub_7E5560(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        __m128 *a6)
{
  int v6; // ebx
  const __m128i *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edx
  int v13; // ebx
  unsigned int v14; // edx
  int v15; // ebx
  __int64 v16; // r9
  __int64 *v17; // rdi
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64, __int64, __int64, _QWORD *, __int64, __int64); // r8
  int v20; // eax
  __m128 *v22; // rax
  unsigned int v23; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+4h] [rbp-54h]
  unsigned int v25; // [rsp+8h] [rbp-50h]
  unsigned int v26; // [rsp+Ch] [rbp-4Ch]
  _DWORD v27[2]; // [rsp+10h] [rbp-48h] BYREF
  __m128 *v28; // [rsp+18h] [rbp-40h]
  _DWORD v29[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128 *v30; // [rsp+28h] [rbp-30h]

  v9 = *(const __m128i **)(a1 + 80);
  v23 = a2;
  v10 = v9[1].m128i_i64[1];
  v24 = a3;
  v25 = a4;
  v26 = a5;
  if ( v10 && *(_BYTE *)(v10 + 352) )
  {
    sub_7A4170(v9);
    v9 = *(const __m128i **)(a1 + 80);
    if ( !a6 )
    {
      v22 = sub_7A55C0(v9, (unsigned __int64 *)(a1 + 16), 4u, &v23);
      v9 = *(const __m128i **)(a1 + 80);
      a6 = v22;
    }
    v10 = v9[1].m128i_i64[1];
  }
  v11 = *(_QWORD *)(v10 + 3288);
  v12 = v23;
  LOBYTE(v6) = *(_DWORD *)(v11 + 4LL * v24) == 1;
  LOBYTE(v12) = *(_DWORD *)(v11 + 4LL * v23) == 1;
  v13 = v12 | v6;
  v14 = v25;
  LOBYTE(v14) = *(_DWORD *)(v11 + 4LL * v25) == 1;
  LOBYTE(v11) = *(_DWORD *)(v11 + 4LL * v26) == 1;
  v15 = v11 | v14 | v13;
  sub_7F1790(&v9[10], 4, &v23);
  v17 = *(__int64 **)(a1 + 24);
  v18 = *v17;
  v27[0] = 1;
  v28 = a6;
  v19 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, __int64, __int64))(v18 + 16);
  v20 = *(_DWORD *)(a1 + 12);
  v27[1] = v20;
  if ( v19 == sub_788610 )
  {
    v30 = a6;
    v29[0] = 1;
    v29[1] = v20;
    sub_11C4C20(v17, 4, &v23, v29, v19, v16);
  }
  else
  {
    ((void (__fastcall *)(__int64 *, __int64, unsigned int *, _DWORD *))v19)(v17, 4, &v23, v27);
  }
  return v15 ^ 1u;
}

