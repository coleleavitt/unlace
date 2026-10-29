__int64 __fastcall sub_293CE0(__int64 a1, int a2)
{
  char *v3; // rcx
  char v4; // di
  __int64 v5; // r9
  int v6; // r11d
  __int64 v7; // rax
  int v8; // r8d
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int *v12; // rdx
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v15; // rsi
  int v17; // eax

  v3 = (char *)(a2 + *(_QWORD *)(a1 + 104));
  v4 = *v3;
  if ( (*v3 & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 80);
    v6 = *(_DWORD *)(v5 + 4LL * a2) & 0x7FFFFFFF;
    if ( a2 > 0 )
    {
      v7 = 0;
      while ( a2 != (*(_DWORD *)(v5 + 4 * v7) & 0x7FFFFFFF) )
      {
        if ( a2 == ++v7 )
          goto LABEL_14;
      }
      v8 = v7;
      v9 = *(_DWORD *)(v5 + 4LL * (int)v7);
      while ( 1 )
      {
        v10 = v6;
        if ( a2 == v6 )
          v10 = v8;
        *(_DWORD *)(v5 + 4LL * v8) = v10 | v9 & 0x80000000;
        v11 = v8 + 1;
        if ( a2 <= v8 + 1 )
          break;
        v5 = *(_QWORD *)(a1 + 80);
        v12 = (int *)(v5 + 4LL * v11);
        while ( 1 )
        {
          v9 = *v12;
          v8 = v11++;
          if ( a2 == (*v12 & 0x7FFFFFFF) )
            break;
          ++v12;
          if ( a2 <= v11 )
            goto LABEL_13;
        }
      }
LABEL_13:
      v3 = (char *)(a2 + *(_QWORD *)(a1 + 104));
      v4 = *v3;
    }
LABEL_14:
    *v3 = v4 & 0xFE;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * a2) = 0x7FFFFFFF;
  v13 = *(_QWORD *)a1;
  v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v14 == interactive_graph_t__::vfunc_7 )
  {
    v15 = *(int *)(a1 + 184);
  }
  else
  {
    v17 = v14(a1);
    v13 = *(_QWORD *)a1;
    v15 = v17;
  }
  if ( !v15 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(v13 + 184))(a1, 0);
  while ( *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * ((int)v15 - 1)) == 0x7FFFFFFF )
  {
    if ( !--v15 )
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(v13 + 184))(a1, 0);
  }
  return (*(__int64 (__fastcall **)(__int64))(v13 + 184))(a1);
}
