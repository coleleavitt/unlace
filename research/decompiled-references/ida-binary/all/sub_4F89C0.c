unsigned __int64 __fastcall sub_4F89C0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  int v4; // ebp
  __int64 v5; // rsi
  int v6; // r12d
  __int64 v7; // rax
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( *(int *)(a1 + 28) > 0 )
  {
    v2 = a2[1];
    v4 = 0;
    do
    {
      v5 = *a2;
      v6 = v4 + *(_DWORD *)(a1 + 24);
      if ( a2[2] < (unsigned __int64)(v2 + 1) )
      {
        v7 = qvector_reserve(a2, v5, v2 + 1, 4);
        v2 = a2[1];
        *a2 = v7;
        v5 = v7;
      }
      *(_DWORD *)(v5 + 4 * v2) = v6;
      ++v4;
      v2 = a2[1] + 1;
      a2[1] = v2;
    }
    while ( v4 < *(_DWORD *)(a1 + 28) );
  }
  return v9 - __readfsqword(0x28u);
}
