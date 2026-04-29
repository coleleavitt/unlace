__int64 __fastcall sub_293130(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 *v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // r15
  _QWORD *v8; // rax
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-78h]
  __int64 v17; // [rsp+8h] [rbp-70h]
  _QWORD v18[13]; // [rsp+10h] [rbp-68h] BYREF

  v18[5] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( (unsigned int)(*(_DWORD *)(v2 + 8) - 17) > 1
    || !(unsigned __int8)sub_2808E0(v2, 1, 1)
    && !(unsigned __int8)sub_2808E0(v2, 66, 1)
    && !(unsigned __int8)sub_2809B0(v2) )
  {
    return 0;
  }
  v4 = *(_QWORD *)(v2 + 64);
  v18[0] = -1;
  v5 = *(__int64 **)(v4 + 24);
  v18[3] = 0;
  v18[1] = -4294967226LL;
  v18[2] = 0xFFFFFFFFLL;
  v16 = *v5;
  v6 = qalloc_or_throw(48);
  *(_QWORD *)(v6 + 16) = -1;
  v7 = (_QWORD *)v6;
  *(_DWORD *)(v6 + 24) = 70;
  v17 = v6 + 16;
  *(_QWORD *)(v6 + 28) = -1;
  sub_2561F0(v6 + 16, (__int64)v18);
  *v7 = v16;
  v8 = *(_QWORD **)(v16 + 8);
  v7[1] = v8;
  *v8 = v7;
  *(_QWORD *)(v16 + 8) = v7;
  ++v5[2];
  sub_2507D0((__int64)v18);
  v9 = sub_23D230(v2);
  v10 = j__qalloc_or_throw(64);
  *(_QWORD *)v10 = -1;
  *(_DWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 48) = 0;
  *(_QWORD *)(v10 + 12) = -1;
  *(_DWORD *)(v10 + 56) = 0;
  sub_256770(v10, v2);
  v14 = sub_23FBE0(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v10, v11, v12, v13);
  v15 = sub_2820B0(v17, (__int64)v14);
  *((_DWORD *)sub_23CB40(*(_QWORD *)(v15 + 64), v7[2]) + 2) = 78;
  sub_250DB0(v2);
  if ( *(_DWORD *)(a2 + 8) != 74 )
    sub_23C1A0(
      v2,
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
      *(_QWORD *)(a1 + 64),
      1,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 72) + 130LL),
      0);
  *(_QWORD *)a2 = v9;
  return 1;
}
