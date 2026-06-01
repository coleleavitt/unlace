__int64 __fastcall sub_50BF00(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rdx

  v2 = *a2;
  if ( *a2 )
  {
    v3 = v2 + 8LL * *(unsigned int *)(v2 - 4);
    while ( v2 != v3 )
    {
      v4 = *(_DWORD **)(*(_QWORD *)v2 + 24LL);
      if ( !v4 || *v4 != 5 || v4[1] > 1u )
        return 0;
      v2 += 8;
    }
  }
  return 1;
}

