__int64 __fastcall sub_895550(__int64 a1, unsigned int a2)
{
  unsigned int *v3; // rax
  unsigned int *v4; // rsi
  unsigned int v5; // ecx
  unsigned int v6; // edx

  v3 = sub_8951C0((_QWORD *)a1, a2, 0, *(_QWORD *)(a1 + 24));
  v4 = *(unsigned int **)(a1 + 80);
  v5 = -1;
  if ( v3 != v4 )
  {
    v6 = *v3;
    if ( a2 == *v3 )
    {
      if ( v4 == v3 + 4 )
        return v5;
      v6 = v3[4];
      v3 += 4;
    }
    *(_QWORD *)(a1 + 48) = v3;
    *(_DWORD *)(a1 + 44) = v6;
    *(_QWORD *)(a1 + 56) = *((_QWORD *)v3 + 1) + 4LL * (v6 - *v3);
    return *v3;
  }
  return v5;
}

