unsigned __int64 __fastcall sub_240A20(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  bool v10; // zf
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  v10 = *(_DWORD *)(a1 + 8) == 61;
  v19 = __readfsqword(0x28u);
  if ( !v10 )
  {
    sub_255630(a1);
    *(_DWORD *)(a1 + 8) = 61;
    v14 = j__qalloc_or_throw(48, a2, v12, v13);
    *(_QWORD *)v14 = 0;
    *(_QWORD *)(v14 + 8) = 0;
    *(_QWORD *)(v14 + 16) = 0;
    *(_QWORD *)(v14 + 40) = 0;
    *(_OWORD *)(v14 + 24) = 0;
    *(_QWORD *)(a1 + 24) = v14;
  }
  v15 = *(_QWORD *)(a2 + 112);
  if ( !a6 )
    a6 = 1;
  if ( !a5 )
  {
    a5 = *(unsigned __int8 *)(a2 + 130);
    if ( *(_DWORD *)(v15 + 80) == 8 && *(unsigned __int8 *)(a2 + 130) < 8u )
    {
      v17 = sub_32ABC0(a4, *(unsigned __int8 *)(a2 + 130), a6 == 1);
      v15 = *(_QWORD *)(a2 + 112);
      if ( a4 != v17 )
        a5 = 8;
    }
  }
  sub_2400B0(*(_QWORD *)(a1 + 24), v15, a4, a5, a6);
  if ( a3 )
    sub_240140(*(_QWORD *)(a1 + 24) + 8LL, a3, *(_QWORD *)a1, **(_QWORD **)(a1 + 24));
  sub_240880(&v18, *(_QWORD *)(a1 + 24), a2, a5, a6);
  copy_tinfo_t();
  clear_tinfo_t();
  return v19 - __readfsqword(0x28u);
}
