__int64 __fastcall sub_1D0BBC0(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // r15
  __int64 v16; // rbx
  __int64 *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rax
  _DWORD *v22; // rdx

  v8 = a4 + 1;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v12 = sub_1CF4B60(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          (__m128i *)(v9 * (((unsigned __int64)v8 - (v8 != nullptr)) / v9 + (v8 != nullptr))),
          v10,
          v11,
          a5,
          a6);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = v12;
  v16 = a3;
  if ( *(_DWORD *)(*a1 + 12632) || (sub_F6C520(*(_QWORD *)(a3 + 32)), v15 != *(_QWORD *)(a3 + 32)) )
  {
    v17 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
    v18 = *v17;
    if ( *(_BYTE *)(*v17 + 16) != 41 )
      v18 = sub_F63050(*v17, a2, v13, v14);
    v19 = (unsigned int)*a4;
    v20 = *a1;
    v21 = *(_BYTE *)(v18 + 40) ? sub_1E5EFF0(v20, v15, v19) : sub_1E5F000(v20, v15, v19);
    v16 = v21;
    if ( (v21 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
  }
  sub_1EA6140(a2, v16, 4, 4);
  *v22 = *a4;
  return v16;
}
