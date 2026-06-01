__int64 __fastcall sub_1D62C50(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r14
  __int64 v7; // r13
  _DWORD *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  _QWORD *v18; // rbx
  _DWORD *v20; // rdx

  v6 = a3;
  v7 = a2;
  v10 = a4 + 1;
  v11 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v14 = sub_1D4F8E0(
          a1,
          a2,
          *(_QWORD *)(v6 + 32),
          (const __m128i *)(v11 * (((unsigned __int64)v10 - (v10 != nullptr)) / v11 + (v10 != nullptr))),
          v12,
          v13,
          a5,
          a6);
  if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v16 = *a1;
  v17 = *(unsigned int *)(*a1 + 12632LL);
  if ( !(_DWORD)v17 && v14 == *(_QWORD *)(v6 + 32) )
  {
    v18 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    a2 = v14;
    v6 = sub_1E70650(v16, v14, (*(_WORD *)(v6 + 18) & 8) != 0, (unsigned int)*a4, 0);
    v18 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*v18 + 16LL) - 43 > 1 )
    sub_F63050(*v18, a2, v17, v15);
  sub_1EA6140(v7, v6, 4, 4);
  *v20 = *a4;
  return v6;
}
