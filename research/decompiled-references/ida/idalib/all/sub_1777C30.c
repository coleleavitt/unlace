__int64 __fastcall sub_1777C30(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r14
  __int64 v5; // r13
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  _DWORD *v18; // rdx

  v4 = a3;
  v5 = a2;
  v8 = a4 + 1;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v12 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(v4 + 32),
          (const __m128i *)(v9 * (((unsigned __int64)v8 - (v8 != nullptr)) / v9 + (v8 != nullptr))),
          v10,
          v11);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v14 = *a1;
  v15 = *(unsigned int *)(*a1 + 12632LL);
  if ( !(_DWORD)v15 && v12 == *(_QWORD *)(v4 + 32) )
  {
    v16 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    a2 = v12;
    v4 = sub_1E70650(v14, v12, (*(_WORD *)(v4 + 18) & 8) != 0, (unsigned int)*a4, 0);
    v16 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 0;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*v16 + 16LL) - 43 > 1 )
    sub_F63050(*v16, a2, v15, v13);
  sub_1EA6140(v5, v4, 4, 4);
  *v18 = *a4;
  return v4;
}
