__int64 __fastcall sub_156A040(__int64 a1, int a2, char *a3, __int16 a4, __m128i a5, double a6)
{
  size_t v6; // r8
  __int64 v9; // r12
  unsigned int v10; // ebp
  __int16 v11; // ax
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v15; // rdi
  _WORD v16[21]; // [rsp+Eh] [rbp-2Ah] BYREF

  v6 = 0;
  v9 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(v9 + 16);
  if ( a3 )
    v6 = strlen(a3);
  v10 = sub_1569A00(v9, *(_WORD *)(a1 + 24), a2, a3, v6, a5, a6);
  if ( !(_BYTE)v10 )
  {
    v11 = *(_WORD *)(a1 + 24);
    v12 = *(_QWORD *)(a1 + 16);
    if ( v11 == 22 )
    {
      v13 = *(unsigned __int16 *)(v12 + 88);
    }
    else
    {
      if ( v11 == 24 )
      {
        if ( (unsigned int)*(unsigned __int16 *)(v12 + 92) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 56LL) + 144LL) )
          return v10;
        return (unsigned int)sub_1568800(a1);
      }
      v13 = *(unsigned __int16 *)(v12 + 90);
    }
    if ( v13 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 56LL) + 144LL) )
      return v10;
    return (unsigned int)sub_1568800(a1);
  }
  if ( !a4 )
    return v10;
  v15 = *(_QWORD *)(a1 + 16);
  v16[0] = a4;
  sub_1566E40(v15, v16, 1, 1);
  return v10;
}
