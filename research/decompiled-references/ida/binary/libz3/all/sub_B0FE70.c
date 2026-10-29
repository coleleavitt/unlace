__int64 __fastcall sub_B0FE70(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rcx
  int v4; // r8d
  unsigned int v5; // ebx
  int v6; // r14d
  __int64 i; // rax
  unsigned int v8; // eax
  int v10; // ebp
  __int64 v11; // rax

  v3 = *(_QWORD *)(a1 + 704);
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = 0;
  v6 = a3;
  for ( i = *(_QWORD *)(a2 + 40LL * (v4 & 1) + 16); i; i = *(_QWORD *)(a2 + 40LL * (v4 & 1) + 16) )
  {
    if ( v5 >= *(_DWORD *)(i - 4) )
      break;
    v8 = *(_DWORD *)(i + 40LL * v5);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v8) == 0xFF )
    {
      v10 = v6 ^ v8;
      if ( !v3 || (v11 = *(unsigned int *)(v3 - 4), (_DWORD)v11 == *(_DWORD *)(v3 - 8)) )
      {
        sub_692C60((unsigned int **)(a1 + 704));
        v3 = *(_QWORD *)(a1 + 704);
        v11 = *(unsigned int *)(v3 - 4);
      }
      *(_DWORD *)(v3 + 4 * v11) = v10;
      ++*(_DWORD *)(v3 - 4);
      v4 = *(_DWORD *)(a2 + 8);
    }
    ++v5;
  }
  return a1 + 704;
}

