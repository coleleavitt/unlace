__int64 __fastcall sub_CFF770(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int *v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rdx

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v2 = *(_QWORD *)(a1 + 64) + 144LL * a2;
  v3 = *(unsigned int **)v2;
  v4 = *(_QWORD *)v2 + 16LL * *(unsigned int *)(v2 + 8);
  if ( *(_QWORD *)v2 != v4 )
  {
    do
    {
      v5 = *v3;
      v3 += 4;
      sub_E21CF0(a1 + 384, *(_QWORD *)(*(_QWORD *)(a1 + 1168) + 8 * v5));
    }
    while ( (unsigned int *)v4 != v3 );
  }
  return 1;
}
