__int64 __fastcall sub_4C5CF0(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int *v8; // r13
  unsigned int *v9; // rsi

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 112LL))(*(_QWORD *)(a2 + 8));
  if ( !result )
  {
    v5 = sub_186B270(0x20u);
    *(_QWORD *)v5 = &off_1C4EDF0;
    v6 = *(_QWORD *)(a2 + 16);
    if ( v6 )
    {
      v7 = *(unsigned int *)(v6 - 4);
      *(_QWORD *)(v5 + 8) = 0;
      if ( (_DWORD)v7 )
      {
        v8 = &a3[v7];
        do
        {
          v9 = a3++;
          sub_4C54F0((_QWORD *)(v5 + 8), v9);
        }
        while ( a3 != v8 );
      }
    }
    else
    {
      *(_QWORD *)(v5 + 8) = 0;
    }
    *(_BYTE *)(v5 + 16) = 0;
    *(_QWORD *)(v5 + 24) = 0;
    return v5;
  }
  return result;
}

