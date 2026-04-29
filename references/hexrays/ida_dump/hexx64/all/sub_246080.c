_QWORD *__fastcall sub_246080(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rsi
  _QWORD *v12; // rbx
  _QWORD v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 216);
  v14[1] = __readfsqword(0x28u);
  v6 = qalloc_or_throw(40);
  *(_OWORD *)(v6 + 8) = 0;
  *(_QWORD *)v6 = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_DWORD *)(v6 + 32) = 0;
  v7 = qvector_reserve(v6, 0, 1, 72);
  v8 = *(_QWORD *)(v6 + 8);
  *(_QWORD *)v6 = v7;
  v9 = v7 + 72 * v8;
  *(_OWORD *)(v9 + 24) = 0;
  *(_QWORD *)v9 = -1;
  *(_DWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 12) = -1;
  *(_QWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 56) = 0;
  *(_BYTE *)(v9 + 60) = 0;
  *(_QWORD *)(v9 + 64) = 0;
  ++*(_QWORD *)(v6 + 8);
  v10 = sub_330F80(*(_QWORD *)(a1 + 8), a3);
  sub_240A20(v9, v4, a1, v10, *(_DWORD *)(*(_QWORD *)(v4 + 112) + 84LL), 2u);
  v11 = v4 + 280;
  if ( v10 < 0 )
    v11 = v4 + 288;
  copy_tinfo_t(v9 + 48, v11);
  v14[0] = 1;
  v12 = (_QWORD *)sub_F1640((__int64)v14, v6, (__int64)"JUMPOUT");
  clear_tinfo_t(v14);
  *(_DWORD *)(v12[3] + 56LL) |= 0x80u;
  *v12 = a2;
  return v12;
}
