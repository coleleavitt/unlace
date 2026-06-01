__int64 __fastcall sub_7E5420(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, __m128 *a5)
{
  int v5; // ebx
  const __m128i *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edx
  int v12; // ebx
  __int64 v13; // r9
  __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 (__fastcall *v16)(__int64, __int64, __int64, _QWORD *, __int64, __int64); // r8
  int v17; // eax
  __m128 *v19; // rax
  unsigned int v20; // [rsp+4h] [rbp-54h] BYREF
  unsigned int v21; // [rsp+8h] [rbp-50h]
  unsigned int v22; // [rsp+Ch] [rbp-4Ch]
  _DWORD v23[2]; // [rsp+10h] [rbp-48h] BYREF
  __m128 *v24; // [rsp+18h] [rbp-40h]
  _DWORD v25[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128 *v26; // [rsp+28h] [rbp-30h]

  v8 = *(const __m128i **)(a1 + 80);
  v20 = a2;
  v9 = v8[1].m128i_i64[1];
  v21 = a3;
  v22 = a4;
  if ( v9 && *(_BYTE *)(v9 + 352) )
  {
    sub_7A4170(v8);
    v8 = *(const __m128i **)(a1 + 80);
    if ( !a5 )
    {
      v19 = sub_7A55C0(v8, (unsigned __int64 *)(a1 + 16), 3u, &v20);
      v8 = *(const __m128i **)(a1 + 80);
      a5 = v19;
    }
    v9 = v8[1].m128i_i64[1];
  }
  v10 = *(_QWORD *)(v9 + 3288);
  v11 = v20;
  LOBYTE(v5) = *(_DWORD *)(v10 + 4LL * v21) == 1;
  LOBYTE(v11) = *(_DWORD *)(v10 + 4LL * v20) == 1;
  LOBYTE(v10) = *(_DWORD *)(v10 + 4LL * v22) == 1;
  v12 = v10 | v11 | v5;
  sub_7F1790(&v8[10], 3, &v20);
  v14 = *(__int64 **)(a1 + 24);
  v15 = *v14;
  v23[0] = 1;
  v24 = a5;
  v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, __int64, __int64))(v15 + 16);
  v17 = *(_DWORD *)(a1 + 12);
  v23[1] = v17;
  if ( v16 == sub_788610 )
  {
    v26 = a5;
    v25[0] = 1;
    v25[1] = v17;
    sub_11C4C20(v14, 3, &v20, v25, v16, v13);
  }
  else
  {
    ((void (__fastcall *)(__int64 *, __int64, unsigned int *, _DWORD *))v16)(v14, 3, &v20, v23);
  }
  return v12 ^ 1u;
}

