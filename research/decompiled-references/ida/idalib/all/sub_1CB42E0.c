__int64 __fastcall sub_1CB42E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r13d
  int v10; // esi
  __int64 v11; // rax
  int v12; // edx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  int v17; // eax

  v7 = a3;
  v10 = *(_DWORD *)a2;
  v11 = *(_QWORD *)(a2 + 8);
  if ( !v10 || (a3 = *(unsigned int *)(a2 + 4), !(_DWORD)a3) )
  {
    if ( !v11 )
    {
      v16 = sub_19A27D0(a1);
      if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        return sub_C99C70(
                 *(_QWORD **)(a1 + 248),
                 0,
                 v16,
                 (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 89LL) & 1) == 0,
                 0,
                 v7,
                 0,
                 0,
                 0,
                 *(_OWORD *)a4,
                 *(_QWORD *)(a4 + 16),
                 a6);
      else
        return 1;
    }
LABEL_8:
    v14 = sub_15AB9E0(a2, *(_QWORD **)(a1 + 248), a3, a4, a5, a6);
    return sub_C98B50(*(_QWORD **)(a1 + 248), v14, v15, v7, (const __m128i *)a4, a6);
  }
  if ( v11 )
    goto LABEL_8;
  if ( a6 )
  {
    v12 = *(_DWORD *)(a6 + 276);
  }
  else
  {
    v17 = sub_B85A10(a4);
    if ( !v17 )
      v17 = *(_DWORD *)(a4 + 8);
    v12 = v17;
    v10 = *(_DWORD *)a2;
  }
  return sub_18C4330(a1, v10, v12, nullptr, 0, 0);
}
