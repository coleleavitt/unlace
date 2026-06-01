__int64 __fastcall sub_33F080(__int64 a1, int *a2)
{
  int v2; // eax
  int v4; // ebp
  __int64 license_manager; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  time_t v9; // rax
  time_t v10; // rcx
  int v11; // edx
  time_t v12; // rcx

  v2 = sub_33DAC0((char *)(*(_QWORD *)(a1 + 840) + 16LL));
  if ( !v2 )
    return 0;
  v4 = v2;
  license_manager = get_license_manager();
  if ( !license_manager )
    return 0;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(license_manager, 0, 0);
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(v6 + 56);
  v8 = v7 + 40LL * *(_QWORD *)(v6 + 64);
  if ( v7 == v8 )
    return 0;
  while ( v4 != *(_DWORD *)(v7 + 8) )
  {
    v7 += 40;
    if ( v8 == v7 )
      return 0;
  }
  if ( !v7 )
    return 0;
  if ( a2 )
  {
    v9 = time(nullptr);
    v10 = *(_QWORD *)(v7 + 24);
    if ( v10 == -1 || (v11 = 0, v9 >= v10) )
    {
      v12 = *(_QWORD *)(v7 + 32);
      v11 = 1;
      if ( v12 )
      {
        if ( v9 >= v12 - 2592000 )
        {
          v11 = 2;
          if ( v9 >= v12 - 1296000 )
          {
            v11 = 3;
            if ( v9 >= v12 )
            {
              v11 = 4;
              if ( v9 >= v12 + 1296000 )
                v11 = (v9 >= v12 + 2592000) + 5;
            }
          }
        }
      }
    }
    *a2 = v11;
  }
  return 1;
}
