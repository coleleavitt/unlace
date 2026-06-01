__int64 __fastcall sub_C3EA40(unsigned __int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r12
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // [rsp+8h] [rbp-40h] BYREF
  __m128 v15[3]; // [rsp+10h] [rbp-38h] BYREF

  v14 = a2;
  v15[0] = _mm_loadh_ps((const double *)&v14);
  v10 = sub_224AF30("isIntegerConstantExpr", 21, sub_C0F850, v15, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 1LL) & 0x10) != 0 )
  {
    v11 = sub_C3C810(a2, a1, 0, a3);
  }
  else
  {
    v11 = 1;
    v13 = sub_C3DFE0(a1, a2, v7, v8, v9);
    if ( (_DWORD)v13 )
    {
      v11 = 0;
      if ( a3 )
        *a3 = HIDWORD(v13);
    }
  }
  if ( v10 )
    sub_224D6D0(v10);
  return v11;
}
