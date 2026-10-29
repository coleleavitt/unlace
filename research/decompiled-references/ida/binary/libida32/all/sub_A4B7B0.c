char __fastcall sub_A4B7B0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  int v3; // eax
  int v4; // r13d
  __int64 v5; // r8
  __int64 v6; // r11
  int v7; // edi
  int v8; // ebp
  unsigned int v9; // ecx
  __int64 *v10; // r9
  int v11; // ebx
  __int64 v12; // r10
  __int64 *v13; // r12
  __int64 *v14; // rsi

  v3 = *((_DWORD *)a1 + 4);
  if ( !v3 )
  {
    *a3 = 0;
    return v3;
  }
  v4 = 1;
  v5 = *a2;
  v6 = *a1;
  v7 = v3 - 1;
  v8 = *((_DWORD *)a2 + 2);
  v9 = (v3 - 1) & (((unsigned int)*a2 >> 4) ^ ((unsigned int)*a2 >> 9));
  v10 = (__int64 *)(v6 + 40LL * v9);
  v11 = *((_DWORD *)v10 + 2);
  v12 = *v10;
  v13 = nullptr;
  LOBYTE(v3) = v11 == v8 && *a2 == *v10;
  if ( (_BYTE)v3 )
  {
LABEL_11:
    *a3 = v10;
    LOBYTE(v3) = 1;
    return v3;
  }
  while ( v12 )
  {
    if ( v12 != -1 || v11 != 0 || v13 )
      goto LABEL_14;
LABEL_6:
    v9 = v7 & (v4 + v9);
    v14 = (__int64 *)(v6 + 40LL * v9);
    v11 = *((_DWORD *)v14 + 2);
    v12 = *v14;
    if ( v11 == v8 && v5 == v12 )
    {
      v10 = (__int64 *)(v6 + 40LL * v9);
      goto LABEL_11;
    }
    ++v4;
    v13 = v10;
    v10 = (__int64 *)(v6 + 40LL * v9);
  }
  if ( v11 )
  {
LABEL_14:
    v10 = v13;
    goto LABEL_6;
  }
  if ( !v13 )
    v13 = v10;
  *a3 = v13;
  return v3;
}

