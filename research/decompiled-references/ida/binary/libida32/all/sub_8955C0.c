__int64 __fastcall sub_8955C0(__int64 a1, int a2)
{
  unsigned int v2; // ebp
  unsigned int *v3; // rax

  v2 = a2 + 1;
  v3 = sub_895420(a1, a2 + 1);
  if ( v3 == *(unsigned int **)(a1 + 80) )
    return sub_895550(a1, v2);
  *(_QWORD *)(a1 + 48) = v3;
  *(_DWORD *)(a1 + 44) = v2;
  *(_QWORD *)(a1 + 56) = *((_QWORD *)v3 + 1) + 4LL * (v2 - *v3);
  return v2;
}

