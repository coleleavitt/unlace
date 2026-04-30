__int64 __fastcall del_ah_t__::vfunc_0(double a1, __m128 a2, __int64 a3, __int64 *a4)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rax
  const char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  __int128 v18; // [rsp+8h] [rbp-30h]
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v4 = *((_DWORD *)a4 + 2);
  v5 = *a4;
  v19 = __readfsqword(0x28u);
  if ( v4 == 36 || (v6 = 0, v4 == 41) )
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 2392) + 16LL))(*(_QWORD *)(v5 + 2392));
  if ( a4[7] )
  {
    v7 = *(_QWORD *)a4[6];
    if ( *(_DWORD *)(v6 + 80) > (unsigned int)v7 )
    {
      v9 = &s1;
      v10 = *(_QWORD *)(*(_QWORD *)(v6 + 72) + 8LL * (int)v7);
      if ( *(_QWORD *)(v10 + 40) )
        v9 = *(const char **)(v10 + 32);
      sub_17F320((__int64)v9);
      v11 = *(_QWORD *)(v6 + 128);
      v17 = 0;
      v18 = 0;
      sub_4A8AF0(v11, &v17, -1);
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree(v17, &v17, v12, v13, v14);
      }
      sub_186C80(v6, 0xFFFFFFFF);
      sub_18A9E0(
        v6,
        **(unsigned __int8 **)(v6 + 64),
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 64) + 1LL),
        v15,
        v16,
        0.0,
        a2);
    }
  }
  return 0;
}
