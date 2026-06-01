__int64 __fastcall sub_8954D0(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned int *v3; // rax
  bool v4; // zf
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 44);
  if ( v2 == a2 && v2 != -1 )
    return *(_QWORD *)(a1 + 56);
  v3 = *(unsigned int **)(a1 + 48);
  if ( (v3 == *(unsigned int **)(a1 + 80) || a2 < *v3 || a2 >= v3[1])
    && (v3 = sub_895420(a1, a2), v4 = *(_QWORD *)(a1 + 80) == (_QWORD)v3, *(_QWORD *)(a1 + 48) = v3, v4) )
  {
    *(_DWORD *)(a1 + 44) = -1;
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 44) = a2;
    result = *((_QWORD *)v3 + 1) + 4LL * (a2 - *v3);
    *(_QWORD *)(a1 + 56) = result;
  }
  return result;
}

