__int64 __fastcall sub_EB72D0(__int64 *a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r12d
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdi
  int v9; // [rsp+18h] [rbp-40h]
  unsigned int v10; // [rsp+1Ch] [rbp-3Ch]

  sub_995540(*a1, "uses_allocators(");
  v2 = *(_DWORD *)(a2 + 16);
  v9 = v2;
  if ( v2 )
  {
    v3 = 0;
    v10 = v2 - 1;
    v4 = *a1;
    do
    {
      while ( 1 )
      {
        v5 = 2 * v3;
        v6 = *(_QWORD *)(a2 + 8LL * (unsigned int)(v5 + 1) + 24);
        sub_F07C00(*(_QWORD *)(a2 + 8 * v5 + 24), v4, 0, a1[1], 0, 0, (__int64)"\n", 1);
        if ( v6 )
        {
          sub_995540(*a1, "(");
          sub_F07C00(v6, *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
          sub_995540(*a1, ")");
        }
        v4 = *a1;
        if ( v3 < v10 )
          break;
        if ( ++v3 == v9 )
          goto LABEL_7;
      }
      ++v3;
      sub_995540(*a1, ",");
      v4 = *a1;
    }
    while ( v9 != v3 );
LABEL_7:
    v7 = v4;
  }
  else
  {
    v7 = *a1;
  }
  return sub_995540(v7, ")");
}
