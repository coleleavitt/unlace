bool __fastcall sub_3D30C0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v5; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rdi
  __int64 v13; // rsi

  v5 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v5 + 24) || !rangeset_t_find_range(v5 + 16, a2) )
    return 0;
  v9 = sub_3CF550(a2, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), a3, a4);
  v11 = *(_DWORD *)(a1 + 48);
  if ( v11 < (int)v10 )
    goto LABEL_16;
  if ( v11 > (int)v10 )
    return (unsigned int)(v10 - 1) <= 1;
  if ( v11 )
  {
    if ( *(_QWORD *)(a1 + 40) < v9 )
      goto LABEL_16;
    return (unsigned int)(v10 - 1) <= 1;
  }
  v12 = -*(_QWORD *)(a1 + 40);
  if ( *(__int64 *)(a1 + 40) > 0 )
    v12 = *(_QWORD *)(a1 + 40);
  v13 = -v9;
  if ( v9 > 0 )
    v13 = v9;
  if ( v12 <= v13 && (v12 < v13 || *(_QWORD *)(a1 + 40) <= v9) )
    return (unsigned int)(v10 - 1) <= 1;
LABEL_16:
  *(_QWORD *)(a1 + 48) = v10;
  *(_QWORD *)(a1 + 40) = v9;
  return (unsigned int)(v10 - 1) <= 1;
}
