__int64 __fastcall sub_42C790(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  _DWORD *v9; // rdx
  int v10; // eax
  _BYTE v11[72]; // [rsp+0h] [rbp-48h] BYREF

  sub_16669D0(v11, a5);
  result = 0;
  if ( !*(_WORD *)(a1 + 4) )
  {
    v9 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
    if ( v9 )
    {
      if ( *v9 )
      {
        if ( *v9 == 5 )
        {
          if ( ((v10 = v9[1], v10 == 2) || v10 == 4) && *(_DWORD *)(a1 + 24) == 2
            || ((result = 0, v9[1] == 3) || v9[1] == 5) && *(_DWORD *)(a1 + 24) == 2 )
          {
            *a2 = *(_QWORD *)(a1 + 32);
            return sub_1666AE0(v11, *(_QWORD *)(a1 + 40), a3, a4);
          }
        }
      }
      else if ( v9[1] == 8 && *(_DWORD *)(a1 + 24) == 1 )
      {
        return sub_42C790(*(_QWORD *)(a1 + 32), a2, a3, a4, a5);
      }
    }
  }
  return result;
}

