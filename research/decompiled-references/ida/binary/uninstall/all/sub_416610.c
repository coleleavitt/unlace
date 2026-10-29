__int64 __fastcall sub_416610(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdi

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    sub_458930(a2, 1, a4, "?interp?");
    return 1;
  }
  else
  {
    v5 = 0;
    v6 = (unsigned int)(a3 - 1);
    if ( (_DWORD)v6 )
    {
      v7 = *(_QWORD *)(a4 + 8);
      v5 = *(_QWORD *)(v7 + 8);
      if ( !v5 )
        v5 = sub_47B3B0(v7);
    }
    return sub_4722A0(a2, v5, v6);
  }
}

