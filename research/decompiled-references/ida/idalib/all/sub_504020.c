__int64 __fastcall sub_504020(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r9

  v3 = *(__int64 **)(a1 + 32);
  if ( !v3 )
    return 0;
  v4 = v3[1];
  v5 = 0;
  if ( a2 >= (unsigned int)v4 )
    return v5;
  v6 = *v3;
  v7 = 16LL * a2;
  v8 = v6 + v7;
  if ( 16 * v4 == v7 || a3 >= *(_QWORD *)(*(_QWORD *)v8 + 8LL) )
    return v5;
  if ( a3 >= **(_QWORD **)v8 || !a2 )
    return 1;
  LOBYTE(v5) = a3 >= *(_QWORD *)(*(_QWORD *)(v6 + 16LL * (a2 - 1)) + 8LL);
  return v5;
}
