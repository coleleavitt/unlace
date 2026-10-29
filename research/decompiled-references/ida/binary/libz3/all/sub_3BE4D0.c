void __fastcall sub_3BE4D0(_QWORD *a1, __int64 a2, unsigned int *a3, unsigned int a4)
{
  __int64 v5; // r14
  int v8; // eax
  _DWORD *v9; // rdx
  unsigned int v10; // r14d
  __int64 v11; // rsi

  if ( *a3 < a4 && !*(_WORD *)(a2 + 4) )
  {
    v5 = *(_QWORD *)(a2 + 16);
    v8 = sub_15F0200(a1 + 1);
    v9 = *(_DWORD **)(v5 + 24);
    if ( v9 && v8 == *v9 && !v9[1] )
    {
      ++*a3;
      if ( *(_DWORD *)(a2 + 24) )
      {
        v10 = 0;
        do
        {
          v11 = *(_QWORD *)(a2 + 8LL * v10++ + 32);
          sub_3BE4D0(a1, v11, a3, a4);
        }
        while ( v10 < *(_DWORD *)(a2 + 24) );
      }
    }
    else if ( (unsigned __int8)sub_15D26C0(*a1, a2) )
    {
      ++*a3;
    }
  }
}

