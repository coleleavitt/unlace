unsigned __int64 __fastcall sub_A5E200(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r12
  __int64 v13; // rcx
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]

  v6 = *(_QWORD *)(a2 + 120);
  if ( !v6 )
  {
    sub_A557A0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), a3, a4, a5, a6);
    v6 = *(_QWORD *)(a2 + 120);
  }
  v7 = a2;
  v8 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v8 )
  {
    v7 = *v8;
    if ( !*v8 )
      v7 = a2;
  }
  v9 = *(_QWORD *)(a1 + 2352);
  *(_QWORD *)(a1 + 2432) += 48LL;
  result = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2360) >= result + 48 && v9 )
  {
    *(_QWORD *)(a1 + 2352) = result + 48;
    v11 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    v12 = result;
  }
  else
  {
    v11 = sub_962430(a1 + 2352, 48, 48, 4, a5, a6);
    v12 = v11;
    result = v11 & 0xFFFFFFFFFFFFFFF0LL;
  }
  *(_QWORD *)v11 = v11;
  *(_QWORD *)(v11 + 32) = 0;
  *(_QWORD *)(v11 + 8) = v11 & 0xFFFFFFFFFFFFFFF0LL;
  *(_QWORD *)(v11 + 24) = v11 & 0xFFFFFFFFFFFFFFF0LL;
  *(_DWORD *)(v11 + 16) = 36;
  *(_BYTE *)(v11 + 20) &= ~1u;
  *(_QWORD *)(v11 + 40) = v7;
  *(_QWORD *)(v7 + 104) = v11;
  v13 = *(unsigned int *)(a1 + 16);
  if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
  {
    v14 = result;
    sub_22134E0(a1 + 8, a1 + 24, v13 + 1, 8);
    v13 = *(unsigned int *)(a1 + 16);
    result = v14;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v13) = v12;
  ++*(_DWORD *)(a1 + 16);
  return result;
}

