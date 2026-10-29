__int64 __fastcall sub_1994CA0(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r14
  __int64 v7; // r12
  _DWORD *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  _DWORD *v17; // rdx

  v6 = a3;
  v7 = a2;
  v9 = a4 + 1;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v13 = sub_1986980(
          a1,
          a2,
          *(_QWORD *)(v6 + 32),
          (__m128i *)(v10 * (((unsigned __int64)v9 - (v9 != nullptr)) / v10 + (v9 != nullptr))),
          v11,
          v12,
          a5,
          a6);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  if ( v13 != *(_QWORD *)(v6 + 32) )
  {
    a2 = v13;
    v6 = sub_1E70650(*a1, v13, (*(_WORD *)(v6 + 18) & 8) != 0, (unsigned int)*a4, 0);
    v16 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      goto LABEL_4;
    return 0;
  }
  v16 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_4:
  if ( (unsigned int)*(unsigned __int8 *)(*v16 + 16LL) - 43 > 1 )
    sub_F63050(*v16, a2, v14, v15);
  sub_1EA6140(v7, v6, 4, 4);
  *v17 = *a4;
  return v6;
}
