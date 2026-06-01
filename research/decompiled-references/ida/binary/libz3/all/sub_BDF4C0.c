__int64 __fastcall sub_BDF4C0(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax

  v2 = a1[9];
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = a1[10];
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v4 = a1[11];
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  v5 = a1[12];
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v6 = a1[21];
  if ( v6 )
    v7 = *(_DWORD *)(v6 - 4);
  else
    v7 = 0;
  sub_BDF100((__int64)a1, *(_DWORD *)(v6 + 4LL * (unsigned int)(v7 - a2)));
  v8 = a1[21];
  if ( v8 )
    *(_DWORD *)(v8 - 4) -= a2;
  return sub_965AE0((__int64)a1, a2);
}

