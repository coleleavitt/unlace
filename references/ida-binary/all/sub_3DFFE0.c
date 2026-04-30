void __fastcall sub_3DFFE0(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 *i; // r13
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax

  if ( a2 )
  {
    v3 = *(__int64 **)(a1 + 16);
    for ( i = &v3[*(_QWORD *)(a1 + 24)]; v3 != i; ++v3 )
    {
      v5 = *v3;
      if ( *(_DWORD *)(*v3 + 56) != 4 )
      {
        v6 = a2[1];
        v7 = *a2;
        if ( a2[2] < (unsigned __int64)(v6 + 1) )
        {
          v8 = qvector_reserve(a2, v7, v6 + 1, 8);
          *a2 = v8;
          v7 = v8;
          v6 = a2[1];
        }
        *(_QWORD *)(v7 + 8 * v6) = v5;
        ++a2[1];
      }
    }
  }
}
