__int64 __fastcall sub_BDF560(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 (__fastcall *v5)(_QWORD *, int); // r8
  unsigned int *v6; // rax

  v1 = a1[9];
  if ( v1 )
    *(_DWORD *)(v1 - 4) = 0;
  v2 = a1[10];
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  v3 = a1[11];
  if ( v3 )
    *(_DWORD *)(v3 - 4) = 0;
  v4 = a1[12];
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  v5 = *(__int64 (__fastcall **)(_QWORD *, int))(*a1 + 104LL);
  if ( v5 == sub_BDF4C0 )
  {
    if ( v1 )
      *(_DWORD *)(v1 - 4) = 0;
    if ( v2 )
      *(_DWORD *)(v2 - 4) = 0;
    if ( v3 )
      *(_DWORD *)(v3 - 4) = 0;
    if ( v4 )
      *(_DWORD *)(v4 - 4) = 0;
    v6 = (unsigned int *)a1[21];
    if ( v6 )
      v6 += *(v6 - 1);
    sub_BDF100((__int64)a1, *v6);
    sub_965AE0((__int64)a1, 0);
    return sub_965AC0((__int64)a1);
  }
  else
  {
    v5(a1, 0);
    return sub_965AC0((__int64)a1);
  }
}

