void __fastcall sub_17F170(__int64 a1, _QWORD *a2, char a3)
{
  int v3; // eax
  void (__fastcall *v4)(_QWORD *); // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 i; // rbp
  __int64 v9; // rdi

  if ( a2 )
  {
    v3 = *(_DWORD *)(a1 + 1760);
    if ( (a3 & 1) != 0 )
    {
      if ( (v3 & 1) == 0 )
      {
        v3 |= 1u;
        *(_DWORD *)(a1 + 1760) = v3;
      }
    }
    else if ( (v3 & 1) == 0 )
    {
      return;
    }
    if ( (v3 & 0x100) == 0 )
    {
      *(_DWORD *)(a1 + 1760) = v3 & 0xFFFFFFFE;
      sub_17F110((__int64 *)a1, (__int64)a2);
      v4 = *(void (__fastcall **)(_QWORD *))(*a2 + 8LL);
      if ( v4 == sub_17E650 )
      {
        v5 = a2[4];
        *a2 = &off_234CB0;
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        v6 = a2[1];
        if ( v6 )
        {
          v7 = a2[2];
          if ( v7 )
          {
            for ( i = 0; i != v7; ++i )
            {
              v9 = *(_QWORD *)(v6 + 32 * i);
              if ( v9 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
                v6 = a2[1];
              }
            }
          }
          a2[2] = 0;
          qfree();
        }
        operator delete(a2, 0x48u);
      }
      else
      {
        v4(a2);
      }
    }
  }
}

