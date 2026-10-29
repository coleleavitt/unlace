__int64 __fastcall sub_4FF2F0(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdx
  _DWORD *v5; // rax
  _DWORD *v6; // rdx

  v2 = (_DWORD *)*a2;
  if ( *a2 )
  {
    v3 = &v2[*(v2 - 1)];
    while ( v2 != v3 )
    {
      if ( *v2++ )
        return 0;
    }
  }
  v5 = (_DWORD *)a2[1];
  if ( v5 )
  {
    v6 = &v5[*(v5 - 1)];
    while ( v6 != v5 )
    {
      if ( *v5++ )
        return 0;
    }
  }
  return 1;
}

