__int64 __fastcall sub_125440(__int64 a1)
{
  int v1; // eax
  int *v2; // rsi
  __int64 v3; // rcx
  int v4; // ebp
  int *v5; // rdx
  int *v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx

  v1 = sub_10D710(*(_DWORD *)(a1 + 180));
  if ( v1 < 0 )
    return -1;
  v2 = *(int **)(a1 + 216);
  v3 = *(_QWORD *)(a1 + 224);
  v4 = v1;
  v5 = &v2[v3];
  if ( v2 == v5 )
    goto LABEL_10;
  v6 = *(int **)(a1 + 216);
  while ( v4 != *v6 )
  {
    if ( v5 == ++v6 )
      goto LABEL_10;
  }
  if ( v5 != v6 )
    return v6 - v2;
LABEL_10:
  v7 = *(_QWORD *)(a1 + 224);
  if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v3 + 1) )
  {
    v9 = qvector_reserve();
    v10 = *(_QWORD *)(a1 + 224);
    *(_QWORD *)(a1 + 216) = v9;
    v5 = (int *)(v9 + 4 * v10);
  }
  *v5 = v4;
  ++*(_QWORD *)(a1 + 224);
  return v7;
}

