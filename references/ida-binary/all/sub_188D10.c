__int64 __fastcall next_conflict_ah_t__::vfunc_0(double a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rbp
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+0h] [rbp-38h] BYREF
  __int128 v16; // [rsp+8h] [rbp-30h]
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v5 = *((_DWORD *)a3 + 2);
  v6 = *a3;
  v17 = __readfsqword(0x28u);
  if ( v5 == 36 || (v7 = 0, v5 == 41) )
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 2392) + 16LL))(*(_QWORD *)(v6 + 2392));
  if ( a3[7] )
  {
    v9 = sub_187500(v7, *(unsigned int *)a3[6], 0, a5, a1);
    if ( v9 != -1 )
    {
      v15 = 0;
      v10 = v9;
      v16 = 0;
      v15 = qvector_reserve(&v15, 0, 1, 8);
      *(_QWORD *)(v15 + 8 * v16) = v10;
      v11 = *(_QWORD *)(v7 + 128);
      *(_QWORD *)&v16 = v16 + 1;
      sub_4A8AF0(v11, &v15, -1);
      if ( v15 )
      {
        *(_QWORD *)&v16 = 0;
        qfree(v15, &v15, v12, v13, v14);
      }
    }
  }
  return 0;
}
