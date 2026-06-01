__int64 __fastcall sub_1994A70(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rax
  _DWORD *v23; // rdx

  v8 = a4 + 1;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v12 = sub_1986980(
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
  v14 = v12;
  v15 = a3;
  sub_F6C520(*(_QWORD *)(a3 + 32));
  if ( v14 != *(_QWORD *)(a3 + 32) )
  {
    v18 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
    v19 = *v18;
    if ( *(_BYTE *)(*v18 + 16) != 41 )
      v19 = sub_F63050(*v18, a2, v16, v17);
    v20 = (unsigned int)*a4;
    v21 = *a1;
    v22 = *(_BYTE *)(v19 + 40) ? sub_1E5EFF0(v21, v14, v20) : sub_1E5F000(v21, v14, v20);
    v15 = v22;
    if ( (v22 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
  }
  sub_1EA6140(a2, v15, 4, 4);
  *v23 = *a4;
  return v15;
}
