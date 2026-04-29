__int64 __fastcall sub_3EFB80(__int64 a1, unsigned __int8 *a2, int a3)
{
  __int64 v3; // r12
  unsigned __int16 v5; // ax
  __int64 v6; // rdi
  int v7; // ebp
  int v8; // eax
  int v10; // r13d
  __int64 v11; // rbp
  int dtype_size; // eax

  v3 = a3;
  v5 = *((_WORD *)a2 + 13);
  v6 = *(_QWORD *)(a1 + 832);
  if ( v5 == 0xFFFF )
  {
    v10 = *a2;
    v11 = *((unsigned __int16 *)a2 + 12);
    dtype_size = get_dtype_size(1);
    sub_1D6310(a1, 3u, dtype_size, v11, 0x3BEA45E214ADDC55LL, v3, v10);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 168LL))(v6, v5);
    v8 = get_dtype_size(1);
    sub_1D6310(a1, 4u, v8, v7, 0x3BEA45E214ADDC55LL, v3, 0);
  }
  return 1;
}
