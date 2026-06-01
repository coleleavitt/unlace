__int64 __fastcall sub_6DD440(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi

  if ( (a2 == nullptr) != (a3 == nullptr) )
    return 0;
  if ( a2 )
  {
    v6 = *(_QWORD *)(a2[1] + 56);
    v7 = *(_QWORD *)(a3[1] + 56);
    if ( v6 )
    {
      if ( v7 )
      {
        if ( sub_6DCB20(a1, v6, v7, a4) )
        {
          v8 = *(_QWORD *)(a2[1] + 64);
          v9 = *(_QWORD *)(a3[1] + 64);
          if ( (v8 != 0) == (v9 != 0) && (!v8 || *(_DWORD *)(v8 + 8) == *(_DWORD *)(v9 + 8)) )
          {
            v10 = *a2;
            if ( (*a2 == 0) == (*a3 == 0) )
            {
              if ( v10 )
                return sub_6A7280((__int64)a1, v10, *a3);
              return 1;
            }
          }
        }
      }
    }
    return 0;
  }
  return 1;
}

