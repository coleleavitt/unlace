__int64 __fastcall sub_6550E0(__int64 a1, __int64 a2, unsigned int a3, double a4, double a5, __m128 a6)
{
  __int64 v9; // rax
  __int64 v10; // rbp
  void (__fastcall ***v11)(void *); // r14
  bool v12; // zf
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8

  v9 = sub_646490();
  v10 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v11 = *(void (__fastcall ****)(void *))(a1 + 2952);
  if ( v11 )
  {
    v12 = (*((_DWORD *)v11 + 2))-- == 1;
    if ( v12 )
    {
      (**v11)(v11);
      sub_186B220(v11);
    }
  }
  v13 = *(_QWORD *)(a1 + 2992);
  *(_QWORD *)(a1 + 2952) = v10;
  *(_DWORD *)(a1 + 2988) = 0;
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 3000);
    v12 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v14, v13);
  }
  v15 = *(_QWORD *)(a1 + 3008);
  *(_QWORD *)(a1 + 2992) = 0;
  if ( v15 )
  {
    v16 = *(_QWORD *)(a1 + 3016);
    v12 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v16, v15);
  }
  *(_QWORD *)(a1 + 3008) = 0;
  sub_653BE0((__int64 *)a1, 0);
  if ( *(_DWORD *)(a1 + 3024) > 5u )
  {
    sub_1872CE0("");
    sub_1873130(114, 921);
  }
  sub_654110((_QWORD *)a1, a4, a5, a6, 0, v17, v18, v19);
  sub_654200(a1, 0);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 2976) + 48LL))(
           *(_QWORD *)(a1 + 2976),
           a2,
           a3);
}

