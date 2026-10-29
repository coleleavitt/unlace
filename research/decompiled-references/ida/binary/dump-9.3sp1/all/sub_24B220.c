_QWORD *__fastcall sub_24B220(__int64 a1, __int64 a2, int a3, _QWORD *a4, _QWORD *a5, char a6)
{
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rdx
  _QWORD v23[9]; // [rsp+10h] [rbp-48h] BYREF

  v9 = *(unsigned int *)(a2 + 36);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL);
  v23[1] = __readfsqword(0x28u);
  sub_32C270(v23, v10, v9);
  v12 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 32, a4, v23, 0);
  clear_tinfo_t();
  if ( a3 == 49 )
  {
    v20 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v12, v13, v14, v15);
  }
  else
  {
    v16 = 2;
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
    {
      sub_32C430(
        v23,
        *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL),
        *(unsigned int *)(a2 + 36),
        (unsigned int)(a3 != 47) + 1);
      v16 = *(_QWORD *)(a1 + 328);
      sub_246B40(v12, v16, v23);
      clear_tinfo_t();
    }
    v19 = j__qalloc_or_throw(64, v16, v17, v18);
    *(_QWORD *)v19 = -1;
    v20 = (_QWORD *)v19;
    *(_DWORD *)(v19 + 8) = a3;
    *(_QWORD *)(v19 + 12) = -1;
    *(_QWORD *)(v19 + 24) = v12;
    *(_QWORD *)(v19 + 32) = 0;
    *(_QWORD *)(v19 + 40) = 0;
    *(_QWORD *)(v19 + 48) = 0;
    *(_DWORD *)(v19 + 56) = 0;
  }
  return sub_24AE20(a1, a2, (__int64)v20, a5, a6);
}
