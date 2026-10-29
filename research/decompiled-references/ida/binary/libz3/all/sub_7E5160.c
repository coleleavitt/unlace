bool __fastcall sub_7E5160(__int64 a1, unsigned int a2, __m128 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // r12d
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, __int64, __int64, _QWORD *, __int64, __int64); // r8
  int v13; // eax
  __int64 v14; // rdi
  const __m128i *v16; // rdi
  unsigned int v17; // [rsp+Ch] [rbp-4Ch] BYREF
  _DWORD v18[2]; // [rsp+10h] [rbp-48h] BYREF
  __m128 *v19; // [rsp+18h] [rbp-40h]
  _DWORD v20[2]; // [rsp+20h] [rbp-38h] BYREF
  __m128 *v21; // [rsp+28h] [rbp-30h]

  v8 = *(_QWORD *)(a1 + 80);
  v17 = a2;
  v9 = *(_QWORD *)(v8 + 24);
  if ( v9 && *(_BYTE *)(v9 + 352) )
  {
    sub_7A4170(v8);
    v16 = *(const __m128i **)(a1 + 80);
    if ( a3 )
    {
      v9 = v16[1].m128i_i64[1];
    }
    else
    {
      a3 = sub_7A55C0(v16, (unsigned __int64 *)(a1 + 16), 1u, &v17);
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL);
    }
  }
  v10 = *(_DWORD *)(*(_QWORD *)(v9 + 3288) + 4LL * v17);
  v11 = *(_QWORD *)v9;
  v18[0] = 1;
  v19 = a3;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, __int64, __int64))(v11 + 16);
  v13 = *(_DWORD *)(a1 + 12);
  v18[1] = v13;
  if ( v12 == sub_788610 )
  {
    v21 = a3;
    v20[0] = 1;
    v20[1] = v13;
    sub_11C4C20(v9, 1, &v17, v20, v12, a6);
  }
  else
  {
    ((void (__fastcall *)(__int64, __int64, unsigned int *, _DWORD *))v12)(v9, 1, &v17, v18);
  }
  v14 = *(_QWORD *)(a1 + 80) + 160LL;
  v20[0] = v17;
  sub_7F1790(v14, 1, v20);
  return v10 != 1;
}

