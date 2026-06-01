__int64 __fastcall sub_5C4040(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v22; // rax
  __int64 v23; // rax

  v4 = sub_634EF0(qword_2CCB598);
  v5 = pack_dq(a2, a3, *(_QWORD *)a1);
  v6 = pack_dq(v5, a3, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  v7 = *(_QWORD *)(a1 + 16) & 0x7FFFFFFFFFFFFFFFLL;
  v8 = pack_dw(v6, a3, *(unsigned __int16 *)(a1 + 16));
  v9 = *(_QWORD *)(a1 + 24);
  if ( a1 && *(char *)(a1 + 17) < 0 )
  {
    v22 = pack_dq(v8, a3, *(_QWORD *)a1 - v9);
    v23 = pack_dw(v22, a3, 0);
    v20 = pack_dd(v23, a3, *(unsigned int *)(a1 + 32));
  }
  else
  {
    v10 = pack_dq(v8, a3, v9 - v4);
    v11 = pack_dq(v10, a3, *(_QWORD *)(a1 + 32));
    v12 = pack_dw(v11, a3, *(unsigned __int16 *)(a1 + 40));
    v13 = pack_dq(v12, a3, *(_QWORD *)(a1 + 48));
    v14 = pack_dd(v13, a3, *(unsigned int *)(a1 + 68));
    v15 = pack_dw(v14, a3, *(unsigned __int16 *)(a1 + 80));
    v16 = pack_dw(v15, a3, *(unsigned __int16 *)(a1 + 96));
    v17 = pack_dw(v16, a3, *(unsigned __int16 *)(a1 + 112));
    v18 = pack_dd(v17, a3, (unsigned int)(*(_DWORD *)(a1 + 64) + 1));
    v19 = pack_dw(v18, a3, *(unsigned __int16 *)(a1 + 128));
    v20 = pack_dq(v19, a3, *(_QWORD *)(a1 + 56));
  }
  return pack_dq(v20, a3, v7) - a2;
}
