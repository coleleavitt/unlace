bool __fastcall sub_7FD560(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx

  v4 = sub_7FD040(a1, a2);
  v5 = *(_QWORD *)(a1 + 48);
  v6 = v4;
  if ( v5 && v4 < *(_DWORD *)(v5 - 4) )
  {
    do
    {
      v10 = v6;
      v6 = *(_DWORD *)(v5 + 4LL * v6);
      if ( v10 == v6 )
        break;
      v11 = v6;
      v6 = *(_DWORD *)(v5 + 4LL * v6);
    }
    while ( v11 != v6 );
  }
  v7 = sub_7FD040(a1, a3);
  v8 = *(_QWORD *)(a1 + 48);
  if ( v8 && v7 < *(_DWORD *)(v8 - 4) )
  {
    do
    {
      v12 = v7;
      v7 = *(_DWORD *)(v8 + 4LL * v7);
      if ( v12 == v7 )
        break;
      v13 = v7;
      v7 = *(_DWORD *)(v8 + 4LL * v7);
    }
    while ( v13 != v7 );
  }
  return v7 == v6;
}

