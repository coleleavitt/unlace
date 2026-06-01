__int64 __fastcall sub_17779E0(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _DWORD *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r15
  __int64 v14; // rbx
  __int64 *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rax
  _DWORD *v20; // rdx

  v6 = a4 + 1;
  v7 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v10 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(a3 + 32),
          (const __m128i *)(v7 * (((unsigned __int64)v6 - (v6 != nullptr)) / v7 + (v6 != nullptr))),
          v8,
          v9);
  if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v13 = v10;
  v14 = a3;
  if ( *(_DWORD *)(*a1 + 12632LL) || (sub_F6C520(*(_QWORD *)(a3 + 32)), v13 != *(_QWORD *)(a3 + 32)) )
  {
    v15 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *v15;
    if ( *(_BYTE *)(*v15 + 16) != 41 )
      v16 = sub_F63050(*v15, a2, v11, v12);
    v17 = (unsigned int)*a4;
    v18 = *a1;
    v19 = *(_BYTE *)(v16 + 40) ? sub_1E5EFF0(v18, v13, v17) : sub_1E5F000(v18, v13, v17);
    v14 = v19;
    if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
  }
  sub_1EA6140(a2, v14, 4, 4);
  *v20 = *a4;
  return v14;
}
