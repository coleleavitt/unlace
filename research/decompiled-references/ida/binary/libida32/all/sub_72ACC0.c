__int64 __fastcall sub_72ACC0(__int64 a1, void *a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  const void *v7; // rsi
  unsigned __int8 *v8; // rcx
  int v9; // eax

  v3 = *(_DWORD *)(a1 + 8);
  v4 = a3;
  if ( v3 <= a3 )
    v4 = *(_DWORD *)(a1 + 8);
  if ( !v4 )
    return 0;
  v7 = *(const void **)a1;
  *(_DWORD *)(a1 + 8) = v3 - v4;
  v8 = (unsigned __int8 *)memcpy(a2, v7, v4);
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 48LL);
  if ( v9 == 1 )
  {
    *(_QWORD *)(a1 + 96) = sub_72A620(*(_QWORD *)(a1 + 96), v8, v4);
  }
  else if ( v9 == 2 )
  {
    *(_QWORD *)(a1 + 96) = sub_72AA00(*(_QWORD *)(a1 + 96), v8, v4);
  }
  *(_QWORD *)a1 += v4;
  *(_QWORD *)(a1 + 16) += v4;
  return v4;
}

