__int64 __fastcall sub_3E4F40(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v4; // ebx
  unsigned __int16 v5; // ax
  __int64 v6; // rdi
  int v7; // ebp
  int v8; // eax
  int v10; // r13d
  int v11; // ebp
  int dtype_size; // eax

  v4 = a1;
  v5 = *((_WORD *)a2 + 13);
  v6 = *(_QWORD *)(a1 + 832);
  if ( v5 == 0xFFFF )
  {
    v10 = *a2;
    v11 = *((unsigned __int16 *)a2 + 12);
    dtype_size = get_dtype_size();
    sub_1D3790(v4, 3, dtype_size, v11, 346938453, a3, v10);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 168LL))(v6, v5);
    v8 = get_dtype_size();
    sub_1D3790(v4, 4, v8, v7, 346938453, a3, 0);
  }
  return 1;
}
