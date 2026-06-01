__int64 __fastcall sub_EA82F0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdi
  int v7; // ebp
  __int64 result; // rax

  v4 = *a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4 )
    sub_EA8120(a1, v4);
  v5 = a2[1];
  v6 = a1 + 176;
  if ( (unsigned __int64)-v5 > 0x2D )
  {
    v7 = 0;
    if ( v5 )
      return sub_2222BB0(v6, *(_QWORD *)(v5 + 16) + 16LL, **(unsigned int **)(v5 + 16));
  }
  else
  {
    v7 = -(int)v5;
  }
  result = *(unsigned int *)(a1 + 184);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_2237220(v6, a1 + 192, result + 1, 4);
    result = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * result) = v7;
  ++*(_DWORD *)(a1 + 184);
  return result;
}
