__int64 __fastcall sub_B77BD0(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, int a6, __int64 a7, int a8)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax

  v9 = 0;
  v10 = *(_QWORD *)(a1 + 152);
  if ( v10 )
  {
    v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    if ( ((*(__int64 *)(a1 + 152) >> 1) & 3) == 1 )
      v9 = v11;
  }
  v12 = sub_BC2EC0(a2, a1, a3, a6, a4, a7, a8, v9);
  *(_QWORD *)(a1 + 152) = v12 & 0xFFFFFFFFFFFFFFF9LL | 4;
  return sub_BC3A30(a3, v12);
}
