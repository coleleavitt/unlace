__int64 __fastcall sub_7E5290(__int64 a1, unsigned int **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int *v6; // r8
  unsigned int *v8; // r13
  unsigned int v9; // ebx
  int v10; // ebp
  __int64 v11; // rax
  int v12; // ecx
  __int64 (__fastcall *v13)(__int64, __int64, __int64, _QWORD *, __int64, __int64); // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __m128 *v17; // rdx
  __int64 *v18; // rdi
  unsigned int *v20; // [rsp+8h] [rbp-70h]
  unsigned int v21; // [rsp+1Ch] [rbp-5Ch] BYREF
  _DWORD v22[2]; // [rsp+20h] [rbp-58h] BYREF
  __m128 *v23; // [rsp+28h] [rbp-50h]
  _DWORD v24[2]; // [rsp+30h] [rbp-48h] BYREF
  __m128 *v25; // [rsp+38h] [rbp-40h]

  v6 = *a2;
  if ( !*a2 )
    return 0;
  v20 = &v6[*(v6 - 1)];
  if ( v20 == v6 )
  {
    return 0;
  }
  else
  {
    v8 = *a2;
    v9 = 0;
    do
    {
      v15 = *(_QWORD *)(a1 + 80);
      v16 = *v8;
      v17 = nullptr;
      v18 = *(__int64 **)(v15 + 24);
      v21 = *v8;
      if ( v18 && *((_BYTE *)v18 + 352) )
      {
        sub_7A4170(v15);
        v17 = sub_7A55C0(*(const __m128i **)(a1 + 80), (unsigned __int64 *)(a1 + 16), 1u, &v21);
        v16 = v21;
        v18 = *(__int64 **)(*(_QWORD *)(a1 + 80) + 24LL);
      }
      v10 = *(_DWORD *)(v18[411] + 4 * v16);
      v11 = *v18;
      v22[0] = 1;
      v12 = *(_DWORD *)(a1 + 12);
      v23 = v17;
      v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, __int64, __int64))(v11 + 16);
      v22[1] = v12;
      if ( v13 == sub_788610 )
      {
        v25 = v17;
        v24[1] = v12;
        v24[0] = 1;
        sub_11C4C20(v18, 1, &v21, v24, v6, a6);
      }
      else
      {
        ((void (__fastcall *)(__int64 *, __int64, unsigned int *, _DWORD *))v13)(v18, 1, &v21, v22);
      }
      v24[0] = v21;
      v14 = sub_7F1790(*(_QWORD *)(a1 + 80) + 160LL, 1, v24);
      LOBYTE(v14) = v10 != 1;
      ++v8;
      v9 |= v14;
    }
    while ( v20 != v8 );
  }
  return v9;
}

