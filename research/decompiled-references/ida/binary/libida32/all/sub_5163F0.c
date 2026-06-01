__int64 __fastcall sub_5163F0(__int64 *a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  int v4; // ecx
  unsigned int v5; // ebx
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  __int64 v8; // rax
  unsigned int v9; // ebp
  int v10; // edx
  __int64 result; // rax
  __int64 v12; // rdx

  v2 = *(_DWORD *)(a2 + 20);
  v3 = *(unsigned int *)(a2 + 4);
  v4 = v2 & 2;
  if ( (v2 & 2) != 0 )
  {
    if ( (_DWORD)v3 )
    {
      v5 = 0;
      v6 = 0;
      v7 = 0;
      do
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(a2 + 8) + 20LL * (int)v5;
          v9 = *(_DWORD *)(v8 + 8);
          if ( v8 )
          {
            v10 = 0;
            if ( (*(_BYTE *)(v8 + 16) & 2) == 0 )
              v10 = *(_DWORD *)(v8 + 4);
            if ( v9 == v10 || (int)sub_3C57B0(a1, *(_DWORD *)v8, *(unsigned int *)(v8 + 12), nullptr, nullptr) > 0 )
              break;
          }
          if ( v6 < v9 )
            v6 = v9;
          if ( ++v5 >= *(_DWORD *)(a2 + 4) )
            goto LABEL_15;
        }
        if ( v7 < v9 )
          v7 = v9;
        ++v5;
      }
      while ( v5 < *(_DWORD *)(a2 + 4) );
LABEL_15:
      if ( v7 && v7 >= v6 )
        goto LABEL_17;
    }
LABEL_20:
    result = *(_DWORD *)(a2 + 20) & 0xFFFFFFFE;
    goto LABEL_21;
  }
  if ( !(_DWORD)v3 )
    goto LABEL_20;
  v12 = *(_QWORD *)(a2 + 8) + 20 * v3 - 20;
  if ( !v12 )
    goto LABEL_20;
  if ( (*(_BYTE *)(v12 + 16) & 2) == 0 )
    v4 = *(_DWORD *)(v12 + 4);
  if ( *(_DWORD *)(v12 + 8) == v4 )
    goto LABEL_18;
  if ( (int)sub_3C57B0(a1, *(_DWORD *)v12, *(unsigned int *)(v12 + 12), nullptr, nullptr) <= 0 )
    goto LABEL_20;
LABEL_17:
  v2 = *(_DWORD *)(a2 + 20);
LABEL_18:
  result = v2 | 1u;
LABEL_21:
  *(_DWORD *)(a2 + 20) = result;
  return result;
}

