unsigned __int64 __fastcall sub_1AF4A50(__int64 *a1, const void *a2, __int64 a3, _WORD *a4, int a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // [rsp+0h] [rbp-40h]

  if ( !a4 )
    return 1;
  sub_1AEB8B0(*a1, 0x35u, a4);
  v10 = a1[1];
  v11 = *(unsigned int *)(v10 + 344);
  if ( !(_DWORD)v11
    || (v12 = *(_QWORD *)(v10 + 336) + 6776 * v11 - 6776, *(_QWORD *)(v12 + 6768) != *(_QWORD *)(v10 + 328))
    || (v13 = *(unsigned int *)(v12 + 8), v14 = *(unsigned int *)(v10 + 27504), (unsigned int)v13 <= (unsigned int)v14)
    || (v15 = v13 - v14) == 0 )
  {
    BUG();
  }
  v18 = *(_QWORD *)(*(_QWORD *)v12 + 1688 * (v15 - 1) + 1128);
  v16 = sub_168B6C0((__int64)a1);
  return sub_EF7700(v16, a5, a6, a2, a3, (__int64)a4, v18);
}
