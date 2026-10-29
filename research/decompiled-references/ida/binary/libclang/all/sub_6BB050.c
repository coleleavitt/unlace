__int64 __fastcall sub_6BB050(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rdx
  int v7; // eax
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 2192);
  *(_QWORD *)(a1 + 2272) += 32LL;
  v5 = (v4 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( *(_QWORD *)(a1 + 2200) >= v5 + 32 && v4 )
  {
    *(_QWORD *)(a1 + 2192) = v5 + 32;
    v6 = (v4 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v6 = sub_6A76A0(a1 + 2192, 32, 4);
    v5 = v6;
  }
  v7 = 0;
  *(_QWORD *)v6 = v6;
  if ( a3 == 496 )
    v7 = 6;
  *(_QWORD *)(v6 + 8) = v6 & 0xFFFFFFFFFFFFFFF0LL;
  *(_DWORD *)(v6 + 16) = *(_DWORD *)(v6 + 16) & 0xF0000000 | (v7 << 8) | 0xD | (a3 << 19) & 0xFF80000;
  *a2 = v6 & 0xFFFFFFFFFFFFFFF0LL;
  result = *(unsigned int *)(a1 + 16);
  if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(result + 1) )
  {
    sub_25D6060(a1 + 8, a1 + 24, result + 1, 8);
    result = *(unsigned int *)(a1 + 16);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * result) = v5;
  ++*(_DWORD *)(a1 + 16);
  return result;
}

