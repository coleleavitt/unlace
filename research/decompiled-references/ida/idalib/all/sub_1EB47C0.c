void __fastcall sub_1EB47C0(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rbp
  _QWORD *v4; // rbp
  _QWORD *v5; // rdi

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v2 = (_QWORD *)(a1 + 8);
    v3 = 10;
  }
  else
  {
    v1 = *(unsigned int *)(a1 + 16);
    if ( !(_DWORD)v1 )
      return;
    v2 = *(_QWORD **)(a1 + 8);
    v3 = 5 * v1;
  }
  v4 = &v2[v3];
  do
  {
    if ( *v2 != -8192 && *v2 != -4096 )
    {
      v5 = (_QWORD *)v2[1];
      if ( v5 != v2 + 3 )
        free(v5);
    }
    v2 += 5;
  }
  while ( v2 != v4 );
}
