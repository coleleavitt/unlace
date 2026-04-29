__int64 __fastcall sub_87410(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  int v5; // eax
  __int64 v7; // r12
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx

  v5 = *(_DWORD *)(a3 + 16);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v7 = 0xFFFFFFFFLL;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)a3;
      v8 = getinf_flag(3, 4);
      v9 = *(_QWORD *)(a1 + 16);
      if ( v8 )
        v7 = -1;
      if ( v9 != v7 )
      {
        sub_1D740((__int64)"Unexpected addresses mask: 0x%a; falling back to default 0x%llx\n", a4, v9);
        *(_QWORD *)(a1 + 16) = v7;
      }
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a3 + 8);
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_QWORD *)(a1 + 16) & (v10 + *(_QWORD *)a3);
    v12 = *(_QWORD *)(a1 + 16) & (*(_QWORD *)(a3 + 8) + v10);
    if ( v12 < v11 )
    {
      v14 = v11;
      v11 = v12;
      v12 = v14;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 176LL)
        - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 184LL);
    return (**(__int64 (__fastcall ***)(__int64, __int64, __int64, __int64))a1)(a1, a2, v11 + v13, v13 + v12);
  }
}
