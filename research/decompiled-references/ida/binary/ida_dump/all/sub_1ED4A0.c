__int64 __fastcall sub_1ED4A0(__int64 a1, __int64 a2)
{
  int *v3; // rcx
  unsigned __int64 v4; // rdx
  int v5; // eax
  int v6; // esi
  __int64 v7; // rcx
  int *v8; // rdx

  if ( *(_BYTE *)a2 == 9 )
  {
    v3 = *(int **)(a2 + 8);
    v4 = v3[4];
    if ( *(_QWORD *)(*(_QWORD *)v3 + 440LL) < v4 )
      sub_1ECB80(a1);
    v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 432LL) + 104 * v4 + 24) & 0x100000;
    if ( !v5 )
    {
      v6 = *(_DWORD *)(a2 + 4);
      v7 = *((_QWORD *)v3 + 1);
      if ( v6 == -1 )
      {
        if ( v7 )
          v5 = v7 + 1;
      }
      else
      {
        v5 = v6 + v7;
      }
      v8 = (int *)(*(_QWORD *)(a1 + 48) + 4 * v4);
      if ( *v8 < v5 )
        *v8 = v5;
    }
  }
  return 0;
}
