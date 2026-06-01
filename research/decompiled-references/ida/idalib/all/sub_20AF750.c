__int64 __fastcall sub_20AF750(__int64 a1, int a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax

  v2 = (_QWORD *)sub_20CB0D0(a1);
  v3 = sub_20AF680(*v2 + 2712LL, a1);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = v4 + 16LL * *(unsigned int *)(v3 + 16);
  if ( v4 == v5 )
    return 0;
  v6 = v4 + 16;
  if ( a2 != *(_DWORD *)v4 )
  {
    while ( 1 )
    {
      v4 = v6;
      if ( v5 == v6 )
        break;
      v6 += 16;
      if ( a2 == *(_DWORD *)(v6 - 16) )
        return *(_QWORD *)(v4 + 8);
    }
    return 0;
  }
  return *(_QWORD *)(v4 + 8);
}
