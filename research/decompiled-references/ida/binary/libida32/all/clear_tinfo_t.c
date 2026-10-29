void __fastcall clear_tinfo_t(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbx
  __int64 *v2; // rbp
  _DWORD *v3; // rax
  __int64 v4; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(__int64 **)(qword_2CA1698 + 1632);
    *a1 = 0;
    if ( v1 > 0xFF )
    {
      v3 = (_DWORD *)sub_51B750((__int64)v2, v1);
      if ( v3 )
      {
        v4 = *v2;
        if ( v3[16]-- == 1 )
          sub_528A10(v3, v4, v1 >> 9);
      }
    }
  }
}

