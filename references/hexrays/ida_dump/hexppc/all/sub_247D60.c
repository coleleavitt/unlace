_QWORD *__fastcall sub_247D60(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // rbp
  _QWORD v12[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 328);
  v6 = *(unsigned int *)(a2 + 36);
  v12[1] = __readfsqword(0x28u);
  sub_327E20(v12, *(_QWORD *)(v5 + 112), v6);
  v8 = sub_245E70(a1, *(__int64 **)(a2 + 24), a2 + 32, v12, v12, 0);
  v9 = j__qalloc_or_throw(64);
  *(_QWORD *)v9 = -1;
  *(_DWORD *)(v9 + 8) = a3;
  *(_QWORD *)(v9 + 12) = -1;
  *(_QWORD *)(v9 + 24) = v8;
  *(_QWORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 56) = 4;
  *(_QWORD *)v9 = *(_QWORD *)(a2 + 24);
  v10 = sub_2471A0(a1, a2, v9, v12, a4);
  clear_tinfo_t(v12);
  return v10;
}
