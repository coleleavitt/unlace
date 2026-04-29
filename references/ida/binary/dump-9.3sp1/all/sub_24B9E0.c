_QWORD *__fastcall sub_24B9E0(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 *v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rbp
  _QWORD v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a1 + 328);
  v7 = *(unsigned int *)(a2 + 36);
  v16[1] = __readfsqword(0x28u);
  sub_32C150(v16, *(_QWORD *)(v6 + 112), v7);
  v9 = *(__int64 **)(a2 + 24);
  v10 = sub_249AF0(a1, v9, a2 + 32, v16, v16, 0);
  v13 = j__qalloc_or_throw(64, (__int64)v9, v11, v12);
  *(_QWORD *)v13 = -1;
  *(_DWORD *)(v13 + 8) = a3;
  *(_QWORD *)(v13 + 12) = -1;
  *(_QWORD *)(v13 + 24) = v10;
  *(_QWORD *)(v13 + 32) = 0;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0;
  *(_DWORD *)(v13 + 56) = 4;
  *(_QWORD *)v13 = *(_QWORD *)(a2 + 24);
  v14 = sub_24AE20(a1, a2, v13, v16, a4);
  clear_tinfo_t();
  return v14;
}
