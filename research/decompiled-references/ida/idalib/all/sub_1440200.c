_BOOL8 __fastcall sub_1440200(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int16 v3; // ax
  _BOOL8 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int *v7; // rdi
  size_t v8; // rdx
  _BYTE v9[104]; // [rsp+0h] [rbp-68h] BYREF

  v2 = *a1;
  if ( sub_10CCDE0(*(_WORD *)(a2 + 16))
    || (v3 = *(_WORD *)(a2 + 16), (unsigned __int16)(v3 - 7) <= 0xCu)
    || v3 == 1
    || (v5 = *(_QWORD *)(a2 + 8)) == 0 )
  {
    sub_FC70B0((__int64)v9, *(_QWORD *)(v2 + 48), *(_DWORD *)a2, 1039);
    sub_AEA040((__int64)v9);
    return 0;
  }
  else
  {
    v6 = *(_QWORD *)(*a1 + 56);
    result = 0;
    if ( *(_BYTE *)(v6 + 201) >> 5 )
    {
      v7 = *(unsigned int **)(v5 + 16);
      v8 = *v7;
      if ( *(_QWORD *)(v6 + 496) == v8 )
      {
        result = 1;
        if ( *v7 )
          return memcmp(v7 + 4, *(const void **)(v6 + 488), v8) == 0;
      }
    }
  }
  return result;
}
