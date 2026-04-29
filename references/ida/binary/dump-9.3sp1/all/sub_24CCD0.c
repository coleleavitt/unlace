_QWORD *__fastcall sub_24CCD0(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 v7; // rax
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rbx
  int v19; // [rsp+4h] [rbp-54h]
  __int64 v20; // [rsp+8h] [rbp-50h]
  _QWORD v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v21[1] = __readfsqword(0x28u);
  v7 = sub_24CBC0(a1, a2, a3);
  if ( v7 )
    return sub_24AF50(a1, v7, a2, (__int64)a3, a4);
  v19 = 8 * (*(_DWORD *)(a2 + 36) - *(_DWORD *)(a2 + 68));
  sub_32C430(v21, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36), 2);
  v9 = *(__int64 **)(a2 + 24);
  v20 = sub_249AF0(a1, v9, a2 + 32, v21, v21, 0);
  v12 = j__qalloc_or_throw(64, (__int64)v9, v10, v11);
  *(_QWORD *)v12 = -1;
  v13 = v12;
  *(_QWORD *)(v12 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v12 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v12 + 40) = 0;
  *(_QWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 56) = 0;
  *(_OWORD *)(v12 + 24) = 0;
  *(_QWORD *)v12 = *(_QWORD *)(a2 + 24);
  v14 = *(_QWORD *)(a1 + 328);
  sub_240A20(v12, v14, *(_QWORD *)(a1 + 176), v19, *(unsigned __int8 *)(v14 + 130), 1u);
  v17 = j__qalloc_or_throw(64, v14, v15, v16);
  *(_QWORD *)v17 = -1;
  *(_DWORD *)(v17 + 8) = 33;
  *(_QWORD *)(v17 + 12) = -1;
  *(_QWORD *)(v17 + 32) = v13;
  *(_QWORD *)(v17 + 24) = v20;
  *(_QWORD *)(v17 + 40) = 0;
  *(_QWORD *)(v17 + 48) = 0;
  *(_DWORD *)(v17 + 56) = 0;
  v18 = sub_24AE20(a1, a2, v17, a3, a4);
  clear_tinfo_t();
  return v18;
}
