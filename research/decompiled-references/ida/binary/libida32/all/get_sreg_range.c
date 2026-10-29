__int64 __fastcall get_sreg_range(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // r9
  unsigned int *v6; // rax
  _QWORD *v7; // r10
  _QWORD *v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // ecx

  v3 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1576LL);
  if ( !*(_BYTE *)(v3 + 144) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v4 = a3 - *(_DWORD *)(*(_QWORD *)(v3 + 8) + 68LL);
  if ( v4 >= *(_QWORD *)(v3 + 40) )
    sub_4FC970();
  v5 = v4 << 6;
  *(_DWORD *)(*(_QWORD *)(v3 + 32) + v5 + 56) = a3;
  v6 = sub_4FED00((unsigned int **)(*(_QWORD *)(v3 + 32) + v5), a2);
  v9 = *v8 + 17LL * v8[1];
  v10 = 0;
  if ( v6 != (unsigned int *)v9 && a2 >= *v6 && a2 < v6[1] )
  {
    LOBYTE(v10) = v6 != nullptr && v7 != nullptr;
    if ( (_BYTE)v10 )
    {
      *v7 = *(_QWORD *)v6;
      *(_QWORD *)((char *)v7 + 5) = *(_QWORD *)((char *)v6 + 5);
    }
    else
    {
      LOBYTE(v9) = v6 != nullptr;
      return (unsigned int)v9;
    }
  }
  return v10;
}

