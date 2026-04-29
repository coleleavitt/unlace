__int64 __fastcall sub_1641D0(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rbp
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax

  if ( ((*a2 - 4) & 0xFB) == 0 )
    return 0;
  if ( !sub_122120(a2, *(_QWORD *)(a1 + 48), 0) )
    return 1;
  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)v3 != 69 )
    return 1;
  v4 = *(_DWORD *)(a1 + 64);
  if ( !sub_122120((unsigned __int8 *)(v3 + 32), *(_QWORD *)(a1 + 48), 0) )
    return 1;
  if ( *(_BYTE *)(v3 + 48) != 13 )
    return 1;
  v5 = sub_3144A0(v4);
  if ( (unsigned int)ecmp(*(_QWORD *)(v3 + 56), v5) )
    return 1;
  v6 = *(__int64 **)(a1 + 56);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = v6[1];
  v9 = *v6;
  if ( v6[2] < (unsigned __int64)(v8 + 1) )
  {
    v10 = qvector_reserve(v6, v9, v8 + 1, 8);
    *v6 = v10;
    v9 = v10;
    v8 = v6[1];
  }
  *(_QWORD *)(v9 + 8 * v8) = v7;
  ++v6[1];
  return 0;
}
