__int64 __fastcall sub_397B0(__int64 a1, __int64 a2)
{
  int v2; // ebp
  void (__fastcall *v4)(__int64, __int64, __int64, _QWORD, __int64); // r12
  __int64 v5; // rax

  v2 = lreadbytes(*(_QWORD *)(a1 + 472), a2, 1, *(unsigned __int8 *)(a1 + 616));
  if ( v2 < 0 )
  {
    v4 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(a1 + 496);
    v5 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v4(a1, 19, 1, v2, v5);
  }
  return (unsigned int)v2;
}

