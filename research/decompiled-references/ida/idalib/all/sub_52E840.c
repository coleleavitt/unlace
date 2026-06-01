__int64 __fastcall sub_52E840(__int64 *a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx

  v2 = *(_DWORD *)(a2 + 28);
  v3 = *(unsigned int *)(a2 + 8);
  if ( (v2 & 2) != 0 )
  {
    if ( (_DWORD)v3 )
    {
      v4 = 0;
      v5 = 0;
      v6 = 0;
      do
      {
        while ( 1 )
        {
          v7 = 32LL * (int)v4;
          v8 = *(_QWORD *)(a2 + 16) + v7 == 0;
          v9 = *(_QWORD *)(a2 + 16) + v7;
          v10 = *(_QWORD *)(v9 + 16);
          if ( !v8 )
          {
            v11 = 0;
            if ( (*(_BYTE *)(v9 + 28) & 2) == 0 )
              v11 = *(_QWORD *)(v9 + 8);
            if ( v10 == v11 || (int)sub_3CAAA0(a1, *(__int64 **)v9, *(unsigned int *)(v9 + 24), nullptr, nullptr) > 0 )
              break;
          }
          if ( v5 < v10 )
            v5 = v10;
          if ( ++v4 >= *(_DWORD *)(a2 + 8) )
            goto LABEL_15;
        }
        if ( v6 < v10 )
          v6 = v10;
        ++v4;
      }
      while ( v4 < *(_DWORD *)(a2 + 8) );
LABEL_15:
      if ( v6 && v6 >= v5 )
        goto LABEL_17;
    }
LABEL_20:
    result = *(_DWORD *)(a2 + 28) & 0xFFFFFFFE;
    goto LABEL_21;
  }
  if ( !(_DWORD)v3 )
    goto LABEL_20;
  v13 = *(_QWORD *)(a2 + 16) + 32 * v3 - 32;
  if ( !v13 )
    goto LABEL_20;
  v14 = 0;
  if ( (*(_BYTE *)(v13 + 28) & 2) == 0 )
    v14 = *(_QWORD *)(v13 + 8);
  if ( *(_QWORD *)(v13 + 16) == v14 )
    goto LABEL_18;
  if ( (int)sub_3CAAA0(a1, *(__int64 **)v13, *(unsigned int *)(v13 + 24), nullptr, nullptr) <= 0 )
    goto LABEL_20;
LABEL_17:
  v2 = *(_DWORD *)(a2 + 28);
LABEL_18:
  result = v2 | 1u;
LABEL_21:
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
