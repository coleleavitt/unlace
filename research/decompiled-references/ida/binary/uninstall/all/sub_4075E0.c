__int64 __fastcall sub_4075E0(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  bool v5; // zf
  _DWORD *v6; // rax
  void (__fastcall *v7)(_QWORD); // rax
  _QWORD *j; // rax
  _QWORD *v9; // rbx
  int v10; // eax
  __int64 i; // rdi
  __int64 v12; // rbx
  int v13; // eax

  v3 = *((_DWORD *)a2 + 20);
  ++*((_DWORD *)a2 + 5);
  if ( (v3 & 1) == 0 )
  {
    v5 = a2[12] == 0;
    *((_DWORD *)a2 + 20) = v3 | 1;
    if ( !v5 )
    {
      sub_4073A0(a1, (__int64)a2, 0, 0, 0x4000u);
      for ( i = a2[12]; i; i = v12 )
      {
        v12 = *(_QWORD *)(i + 24);
        v13 = *(_DWORD *)(i + 32) - 1;
        v5 = *(_DWORD *)(i + 32) == 1;
        *(_DWORD *)(i + 32) = v13;
        if ( v13 < 0 || v5 )
          Tcl_Free(i);
      }
      a2[12] = 0;
    }
    v6 = (_DWORD *)a2[1];
    if ( v6[88] )
      ++v6[98];
    if ( v6[104] )
      ++v6[90];
    if ( a2[3] )
      ++*(_DWORD *)(a1 + 392);
    v7 = (void (__fastcall *)(_QWORD))a2[8];
    if ( v7 )
      v7(a2[9]);
    if ( (a2[10] & 0x10) == 0 )
    {
      for ( j = (_QWORD *)a2[11]; j; j = v9 )
      {
        v9 = (_QWORD *)j[1];
        sub_4075E0(a1, *j);
      }
    }
    if ( *a2 )
    {
      sub_457BC0(*a2);
      *a2 = 0;
    }
    v10 = *((_DWORD *)a2 + 4);
    a2[4] = 0;
    *((_DWORD *)a2 + 4) = --v10;
    if ( v10 <= 0 )
      Tcl_Free(a2);
    return 0;
  }
  if ( !*a2 )
    return 0;
  sub_457BC0(*a2);
  *a2 = 0;
  return 0;
}

