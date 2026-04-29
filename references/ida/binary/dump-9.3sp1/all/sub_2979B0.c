__int64 __fastcall sub_2979B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // r14
  __int64 v10; // rax
  _QWORD *v11; // r15
  _QWORD *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // [rsp+0h] [rbp-78h]
  __int64 v27; // [rsp+8h] [rbp-70h]
  _QWORD v28[13]; // [rsp+10h] [rbp-68h] BYREF

  v28[5] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( (unsigned int)(*(_DWORD *)(v2 + 8) - 17) > 1 )
    return 0;
  v5 = 1;
  if ( !(unsigned __int8)sub_285160(v2, 1, 1) )
  {
    v5 = 66;
    if ( !(unsigned __int8)sub_285160(v2, 66, 1) && !(unsigned __int8)sub_285230(v2) )
      return 0;
  }
  v8 = *(_QWORD *)(v2 + 64);
  v28[0] = -1;
  v9 = *(__int64 **)(v8 + 24);
  v28[3] = 0;
  v28[1] = -4294967226LL;
  v28[2] = 0xFFFFFFFFLL;
  v26 = *v9;
  v10 = qalloc_or_throw(48, v5, v6, v7);
  *(_QWORD *)(v10 + 16) = -1;
  v11 = (_QWORD *)v10;
  *(_DWORD *)(v10 + 24) = 70;
  v27 = v10 + 16;
  *(_QWORD *)(v10 + 28) = -1;
  sub_25AA70(v10 + 16, (__int64)v28);
  *v11 = v26;
  v12 = *(_QWORD **)(v26 + 8);
  v11[1] = v12;
  *v12 = v11;
  *(_QWORD *)(v26 + 8) = v11;
  ++v9[2];
  sub_255050((__int64)v28);
  v13 = sub_241AB0(v2);
  v16 = j__qalloc_or_throw(64, (__int64)v28, v14, v15);
  *(_QWORD *)v16 = -1;
  *(_DWORD *)(v16 + 8) = 0;
  *(_QWORD *)(v16 + 48) = 0;
  *(_QWORD *)(v16 + 12) = -1;
  *(_DWORD *)(v16 + 56) = 0;
  sub_25AFF0(v16, v2);
  v20 = sub_244460(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v16, v17, v18, v19);
  v23 = sub_286930(v27, (__int64)v20, v21, v22);
  *((_DWORD *)sub_2413C0(*(_QWORD *)(v23 + 64), v11[2], v24, v25) + 2) = 78;
  sub_255630(v2);
  if ( *(_DWORD *)(a2 + 8) != 74 )
    sub_240A20(
      v2,
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
      *(_QWORD *)(a1 + 64),
      1,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 72) + 130LL),
      0);
  *(_QWORD *)a2 = v13;
  return 1;
}
