__int64 __fastcall sub_3E8950(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r13
  int v15; // esi
  __int64 v16; // r15
  __int64 n; // [rsp+8h] [rbp-B0h]
  __int64 v18; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v19[2]; // [rsp+20h] [rbp-98h] BYREF
  void *src; // [rsp+30h] [rbp-88h] BYREF
  __int128 v21; // [rsp+38h] [rbp-80h]
  __int64 v22[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v23; // [rsp+60h] [rbp-58h] BYREF
  __int128 v24; // [rsp+68h] [rbp-50h]
  unsigned __int64 v25; // [rsp+78h] [rbp-40h]

  v8 = *(_QWORD *)(a7 + 32);
  v25 = __readfsqword(0x28u);
  if ( (get_tinfo_property(v8, 2) & 0xF) != 9 && *(_DWORD *)(a2 + 376) == 1 )
  {
    v11 = *(_QWORD *)(a2 + 64);
    v12 = **(unsigned int **)(a2 + 368);
    if ( (unsigned int)v12 >= *(_DWORD *)(v11 + 64) )
      sub_3E6760(a3, v8, 2);
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 528) + 8 * v12);
    v14 = *(_QWORD *)(v13 + 56);
    if ( v14 )
    {
      if ( (unsigned int)(*(_DWORD *)v14 - 56) <= 1 )
        v14 = *(_QWORD *)(v14 + 16);
      else
        v14 = 0;
    }
    v15 = *(_DWORD *)(a1 + 420);
    v21 = 0;
    v19[0] = 0;
    v19[1] = 0;
    src = nullptr;
    v22[0] = 0;
    v22[1] = 0;
    sub_60440(v22, v15, 8);
    v23 = nullptr;
    v24 = 0;
    sub_60840(v19, v22);
    sub_312B30((__int64 *)&src, &v23);
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23);
    }
    qfree(v22[0]);
    sub_605C0(v22, (__int64)v19);
    v16 = v21;
    v23 = nullptr;
    v24 = 0;
    if ( (_QWORD)v21 )
    {
      n = 16 * v21;
      v23 = (__int64 *)qalloc_or_throw(16 * v21);
      *((_QWORD *)&v24 + 1) = v16;
      memcpy(v23, src, n);
      *(_QWORD *)&v24 = v16;
    }
    if ( sub_A6350(v13, v22, *(_QWORD *)(v13 + 48), v14, 0) && !sub_11F1F0((__int64)v22, (__int64)v19) )
    {
      v18 = 25;
      copy_tinfo_t(a7 + 32, &v18);
      clear_tinfo_t(&v18);
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23);
    }
    qfree(v22[0]);
    if ( src )
    {
      *(_QWORD *)&v21 = 0;
      qfree(src);
    }
    qfree(v19[0]);
  }
  return 1;
}
