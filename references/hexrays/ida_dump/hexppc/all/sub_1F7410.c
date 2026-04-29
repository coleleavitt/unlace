__int64 __fastcall sub_1F7410(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 result; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // cl
  int v12; // edx

  v2 = sub_11A000(*(unsigned __int8 **)a1, *(unsigned __int8 **)a2);
  if ( v2 )
    return v2 >> 31;
  v4 = *(_QWORD *)(a1 + 32);
  if ( !v4
    || (v5 = *(_QWORD *)(v4 + 24), v6 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL), result = 1, v5 >= v6)
    && (result = 0, v6 >= v5) )
  {
    v7 = *(_QWORD *)(a1 + 40);
    if ( !v7
      || (v8 = *(_QWORD *)(v7 + 24), v9 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL), result = 1, v8 >= v9)
      && (result = 0, v9 >= v8) )
    {
      v10 = *(_BYTE *)(a1 + 52);
      v11 = *(_BYTE *)(a2 + 52);
      result = 1;
      if ( v10 >= v11 )
      {
        result = 0;
        if ( v11 >= v10 )
        {
          v12 = *(_DWORD *)(a2 + 48);
          result = 1;
          if ( *(_DWORD *)(a1 + 48) >= v12 )
          {
            result = 0;
            if ( *(_DWORD *)(a1 + 48) <= v12 )
            {
              v2 = sub_32C4D0(a1 + 8, a2 + 8);
              return v2 >> 31;
            }
          }
        }
      }
    }
  }
  return result;
}
