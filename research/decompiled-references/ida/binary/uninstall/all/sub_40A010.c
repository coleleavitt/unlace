__int64 __fastcall sub_40A010(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // r13
  int i; // ebx
  __int64 v16; // rbp
  __int64 v17; // rdx
  int v18; // esi
  int v21; // [rsp+14h] [rbp-34h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 984) + 64LL))(*(_QWORD *)(a1 + 984), a4);
  if ( result )
  {
    v9 = *(_QWORD *)(result + 24);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(v9 + 96))(v9 + 32, a6);
    if ( result )
    {
      v13 = *(_QWORD *)(v9 + 16);
      result = 3LL * *(int *)(result + 24);
      v14 = v13 + 8 * result;
      if ( *(_DWORD *)(v14 + 4) != a3 )
        result = sub_47D740((unsigned int)"TIP 280 data structure inconsistency", a6, v13, v10, v11, v12);
      for ( i = 1; i < a3; ++i )
      {
        result = *(_QWORD *)(v14 + 8);
        if ( *(int *)(result + 4LL * i) >= 0 )
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 992) + 72LL))(
                  *(_QWORD *)(a1 + 992),
                  *(_QWORD *)(a2 + 8LL * i),
                  &v21);
          v17 = sub_40FB00(24);
          result = a5;
          *(_DWORD *)(v17 + 8) = a6;
          *(_DWORD *)(v17 + 12) = i;
          v18 = v21;
          *(_QWORD *)v17 = a5;
          if ( v18 )
          {
            *(_QWORD *)(v17 + 16) = 0;
            *(_QWORD *)(v16 + 24) = v17;
          }
          else
          {
            result = *(_QWORD *)(v16 + 24);
            *(_QWORD *)(v16 + 24) = v17;
            *(_QWORD *)(v17 + 16) = result;
          }
        }
      }
    }
  }
  return result;
}

