__int64 __fastcall sub_4C5B40(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5, unsigned int *a6)
{
  __int64 v10; // rbx
  __int64 v12; // rdi
  unsigned int *v13; // r14
  unsigned int *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // [rsp+18h] [rbp-50h]
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+28h] [rbp-40h]

  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 80LL))(*(_QWORD *)(a2 + 8));
  if ( !v10 )
  {
    v12 = *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)(a2 + 8) == v12
      || (v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)v12 + 80LL))(
                  v12,
                  a2,
                  a3,
                  a4,
                  a5,
                  a6)) == 0 )
    {
      v17 = 0;
      v18 = 0;
      sub_4D84B0(a2 + 16, a3 + 16, a4, a5, a6, &v17);
      v10 = sub_186B270(0x30u);
      *(_QWORD *)v10 = qword_1C65DA0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_DWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
      if ( a4 )
      {
        v13 = a5;
        v16 = a4;
        do
          sub_4C54F0((_QWORD *)(v10 + 24), v13++);
        while ( v13 != &a5[v16] );
        *(_QWORD *)(v10 + 32) = 0;
        v14 = a6;
        do
          sub_4C54F0((_QWORD *)(v10 + 32), v14++);
        while ( &a6[v16] != v14 );
      }
      else
      {
        *(_QWORD *)(v10 + 32) = 0;
      }
      sub_4D84B0(a2 + 16, a3 + 16, a4, a5, a6, v10 + 8);
      v15 = v17;
      *(_DWORD *)(v10 + 40) = a4;
      *(_QWORD *)v10 = &off_1C4EE68;
      if ( v15 )
        sub_186B220((void *)(v15 - 8));
    }
  }
  return v10;
}

