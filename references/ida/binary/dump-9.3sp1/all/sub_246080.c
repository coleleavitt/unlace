_QWORD *__fastcall sub_246080(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r15
  _QWORD *v10; // rbx
  _QWORD v12[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 216);
  v12[1] = __readfsqword(0x28u);
  v5 = qalloc_or_throw(40, a2, a3, a4);
  *(_OWORD *)(v5 + 8) = 0;
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 32) = 0;
  v6 = qvector_reserve(v5, 0, 1, 72);
  v7 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)v5 = v6;
  v8 = v6 + 72 * v7;
  *(_OWORD *)(v8 + 24) = 0;
  *(_QWORD *)v8 = -1;
  *(_DWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 12) = -1;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  *(_BYTE *)(v8 + 60) = 0;
  *(_QWORD *)(v8 + 64) = 0;
  ++*(_QWORD *)(v5 + 8);
  v9 = sub_330F80(*(_QWORD *)(a1 + 8));
  sub_240A20(v8, v4, a1, v9, *(_DWORD *)(*(_QWORD *)(v4 + 112) + 84LL), 2u);
  copy_tinfo_t();
  v12[0] = 1;
  v10 = (_QWORD *)sub_F1640((__int64)v12, v5, (__int64)"JUMPOUT");
  clear_tinfo_t();
  *(_DWORD *)(v10[3] + 56LL) |= 0x80u;
  *v10 = a2;
  return v10;
}
