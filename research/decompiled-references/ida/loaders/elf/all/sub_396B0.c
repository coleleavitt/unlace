__int64 __fastcall sub_396B0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rcx
  int v7; // ebp
  void (__fastcall *v9)(__int64, __int64, __int64, _QWORD, __int64); // r13
  __int64 v10; // rax

  v5 = 0;
  if ( a4 )
    v5 = *(unsigned __int8 *)(a1 + 616);
  v7 = lreadbytes(*(_QWORD *)(a1 + 472), a2, a3, v5);
  if ( v7 < 0 )
  {
    v9 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
    v10 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v9(a1, 19, a3, v7, v10);
  }
  return (unsigned int)v7;
}

