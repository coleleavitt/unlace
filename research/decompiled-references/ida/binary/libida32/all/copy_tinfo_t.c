void __fastcall copy_tinfo_t(unsigned __int64 *a1, unsigned __int64 *a2)
{
  __int64 v3; // r12
  unsigned __int64 v4; // rsi
  __int64 v5; // rax

  if ( a1 != a2 )
  {
    v3 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1632LL);
    clear_tinfo_t(a1);
    v4 = *a2;
    if ( *a2 > 0xFF )
    {
      v5 = sub_51B750(v3, v4);
      ++*(_DWORD *)(v5 + 64);
      *a1 = *a2;
    }
    else
    {
      *a1 = v4;
    }
  }
}

