__int64 __fastcall sub_4C5900(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  int v9; // eax
  unsigned int *v10; // rbp

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 88LL))(*(_QWORD *)(a2 + 8));
  if ( !v6 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    if ( v8 )
      v9 = *(_DWORD *)(v8 - 4);
    else
      v9 = 0;
    if ( a3 == v9 )
    {
      v6 = sub_186B270(0x18u);
      *(_QWORD *)v6 = &off_1C4EEF8;
      *(_QWORD *)(v6 + 8) = 0;
      *(_DWORD *)(v6 + 16) = 0;
    }
    else
    {
      v6 = sub_186B270(0x30u);
      *(_QWORD *)(v6 + 8) = 0;
      *(_DWORD *)(v6 + 16) = 0;
      *(_QWORD *)v6 = qword_1C65E20;
      *(_QWORD *)(v6 + 24) = 0;
      if ( a3 )
      {
        v10 = a4;
        do
          sub_4C54F0((_QWORD *)(v6 + 24), v10++);
        while ( v10 != &a4[a3] );
      }
      sub_4D76C0(a2 + 16, a3, a4, v6 + 8);
      *(_QWORD *)(v6 + 40) = 0;
      *(_QWORD *)v6 = &off_1C4EE90;
      *(_QWORD *)(v6 + 32) = off_1C4EEC8;
    }
  }
  return v6;
}

