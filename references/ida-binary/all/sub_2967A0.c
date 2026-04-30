void __fastcall sub_2967A0(__int64 a1, _QWORD *a2)
{
  int v2; // r14d
  __int64 v3; // r15
  bool v4; // zf
  unsigned __int64 v5; // r13
  int v6; // r14d
  __int64 (*v7)(void); // rax
  signed int v8; // eax
  __int64 v9; // rax
  signed int v10; // ebx
  __int64 (__fastcall *v11)(__int64, unsigned int); // r8
  unsigned __int64 v12; // [rsp+8h] [rbp-50h]

  v12 = 0;
  if ( a2[1] )
  {
    v2 = 0;
    do
    {
      v3 = *a2 + 32 * v12;
      v4 = *(_QWORD *)(v3 + 8) == 0;
      *(_DWORD *)(v3 + 24) = v2;
      if ( !v4 )
      {
        v5 = 0;
        v6 = 0;
        do
        {
          v10 = *(_DWORD *)(*(_QWORD *)v3 + 4 * v5);
          v11 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
          if ( v11 == interactive_graph_t__::vfunc_19 )
          {
            v7 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
            if ( (char *)v7 == (char *)interactive_graph_t__::vfunc_7 )
              v8 = *(_DWORD *)(a1 + 184);
            else
              v8 = v7();
            if ( v10 >= v8 )
              sub_16B930((__int64)"nrect(%d) failed", v10);
            v9 = *(_QWORD *)(a1 + 224) + 16LL * v10;
          }
          else
          {
            v9 = v11(a1, v10);
          }
          if ( v6 < *(_DWORD *)(v9 + 12) - *(_DWORD *)(v9 + 4) )
            v6 = *(_DWORD *)(v9 + 12) - *(_DWORD *)(v9 + 4);
          ++v5;
        }
        while ( v5 < *(_QWORD *)(v3 + 8) );
        v2 = *(_DWORD *)(v3 + 24) + v6;
      }
      ++v12;
      *(_DWORD *)(v3 + 28) = v2;
      v2 += 30;
    }
    while ( v12 < a2[1] );
  }
}
