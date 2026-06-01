__int64 __fastcall sub_1441AE0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rbp
  __int64 v4; // rcx
  _DWORD *v5; // rax
  _DWORD *i; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 2880);
  v2 = *(unsigned int *)(a1 + 2480);
  v3 = *(_QWORD *)(v1 - 8);
  if ( v3 != v2 )
  {
    if ( v3 < v2 )
    {
      *(_DWORD *)(a1 + 2480) = v3;
    }
    else
    {
      if ( v3 > *(unsigned int *)(a1 + 2484) )
      {
        sub_2237220(a1 + 2472, a1 + 2488, v3, 24);
        v2 = *(unsigned int *)(a1 + 2480);
      }
      v4 = *(_QWORD *)(a1 + 2472);
      v5 = (_DWORD *)(v4 + 24 * v2);
      for ( i = (_DWORD *)(v4 + 24 * v3); i != v5; *((_WORD *)v5 - 3) = 0 )
      {
        *v5 = 0;
        v5 += 6;
        *(v5 - 5) = 0;
        *((_QWORD *)v5 - 2) = 0;
        *((_WORD *)v5 - 4) = 0;
      }
      *(_DWORD *)(a1 + 2480) = v3;
      v1 = *(_QWORD *)(a1 + 2880);
    }
  }
  result = v1 - 16;
  *(_QWORD *)(a1 + 2880) = result;
  return result;
}
