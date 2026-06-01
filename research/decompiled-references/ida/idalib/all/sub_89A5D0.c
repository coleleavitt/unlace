__int64 __fastcall sub_89A5D0(__int64 a1, unsigned __int64 *a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi

  result = 0;
  if ( *(int *)(a1 + 112) >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 72);
    v6 = *(_QWORD *)(a1 + 120);
    v7 = *(_QWORD *)(a1 + 128);
    if ( v6 != v5 && v5 == v7 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v5 < v8 )
      {
        v9 = *(_QWORD *)(a1 + 32);
        v10 = v5 + 1;
        if ( *(_BYTE *)(v9 + v5) == 13 && v10 < v8 && *(_BYTE *)(v9 + v5 + 1) == 10 )
        {
          v11 = v5 + 2;
          if ( (unsigned int)*(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 130LL) - 3 < 3 )
            v10 = v11;
        }
        *a2 = v10;
        *a3 = 0;
        return 1;
      }
    }
    else
    {
      if ( v6 != v7 )
      {
        *a2 = v7;
        *a3 = 0;
        return 1;
      }
      result = 0;
      if ( v6 < *(_QWORD *)(a1 + 64) )
      {
        *a2 = v6;
        *a3 = 8;
        return 1;
      }
    }
  }
  return result;
}
