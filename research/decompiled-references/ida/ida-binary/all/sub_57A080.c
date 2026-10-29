__int64 __fastcall sub_57A080(__int64 a1, __int64 a2)
{
  int v3; // edx
  int *v4; // rdi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 64);
  if ( !v3 )
  {
    result = sub_578840(a1, 0);
    if ( !(_BYTE)result )
      return result;
    v3 = *(_DWORD *)(a1 + 64);
  }
  v4 = *(int **)(a1 + 56);
  v5 = *v4;
  if ( *v4 == -1 )
  {
    v5 = *(_DWORD *)(a1 + 144);
    *(_DWORD *)(a1 + 144) = v5 + 1;
    *v4 = v5;
  }
  *(_DWORD *)a2 = v5;
  *(_WORD *)(a2 + 4) = *((_WORD *)v4 + 6);
  v6 = v4[1];
  if ( (unsigned int)(unsigned __int16)v6 >= *(_DWORD *)(a1 + 80) )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 88);
    *(_WORD *)(a2 + 6) = *(_DWORD *)(a1 + 96);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 72) + 16LL * (unsigned __int16)v6;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)v7;
    *(_WORD *)(a2 + 6) = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(v7 + 8) = -1;
    ++*(_DWORD *)(a1 + 108);
  }
  if ( !v3 )
    sub_55D280();
  memmove(v4, v4 + 4, 16LL * (unsigned int)(v3 - 1));
  --*(_DWORD *)(a1 + 64);
  return 1;
}
