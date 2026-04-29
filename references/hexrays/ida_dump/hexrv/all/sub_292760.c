__int64 __fastcall sub_292760(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __int64 result; // rax
  __int64 *v6; // r12
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r15
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-80h]
  __int64 v23; // [rsp+8h] [rbp-80h]
  int v24; // [rsp+14h] [rbp-74h]
  __int64 v25; // [rsp+18h] [rbp-70h]
  __int64 v26; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v2 = a2[3];
  v30 = __readfsqword(0x28u);
  result = 0;
  if ( *(_DWORD *)(v2 + 8) == 1 )
  {
    v6 = *(__int64 **)(*(_QWORD *)(v2 + 64) + 24LL);
    v7 = *(_QWORD *)(v2 + 32);
    v8 = *(_DWORD *)(v7 + 12);
    *(_DWORD *)(v7 + 12) = -1;
    v26 = -1;
    v24 = v8;
    v27 = -4294967226LL;
    v28 = 0xFFFFFFFFLL;
    v29 = 0;
    v25 = *v6;
    v9 = qalloc_or_throw(48);
    *(_QWORD *)(v9 + 16) = -1;
    v10 = v9;
    *(_DWORD *)(v9 + 24) = 70;
    *(_QWORD *)(v9 + 28) = -1;
    v22 = v9 + 16;
    sub_255E70(v9 + 16, (__int64)&v26);
    *(_QWORD *)v10 = v25;
    v11 = *(__int64 **)(v25 + 8);
    *(_QWORD *)(v10 + 8) = v11;
    *v11 = v10;
    *(_QWORD *)(v25 + 8) = v10;
    ++v6[2];
    sub_250450((__int64)&v26);
    v15 = sub_23F860(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), *(_QWORD *)(v2 + 32), v12, v13, v14);
    *(_QWORD *)(v2 + 32) = 0;
    v16 = sub_281D30(v22, (__int64)v15);
    v17 = *(_QWORD *)(v10 + 16);
    v18 = *(_QWORD *)(v16 + 64);
    *(_DWORD *)(v10 + 28) = v24;
    *((_DWORD *)sub_23C7C0(v18, v17) + 2) = 78;
    v26 = -1;
    v27 = -4294967226LL;
    v28 = 0xFFFFFFFFLL;
    v29 = 0;
    v23 = *v6;
    v19 = qalloc_or_throw(48);
    *(_QWORD *)(v19 + 16) = -1;
    *(_DWORD *)(v19 + 24) = 70;
    *(_QWORD *)(v19 + 28) = -1;
    sub_255E70(v19 + 16, (__int64)&v26);
    *(_QWORD *)v19 = v23;
    v20 = *(__int64 **)(v23 + 8);
    *(_QWORD *)(v19 + 8) = v20;
    *v20 = v19;
    *(_QWORD *)(v23 + 8) = v19;
    ++v6[2];
    sub_250450((__int64)&v26);
    v21 = **(_QWORD **)(v2 + 24);
    *(_DWORD *)(v19 + 24) = 72;
    *(_QWORD *)(v19 + 16) = v21;
    *(_QWORD *)(v19 + 40) = *(_QWORD *)(v2 + 24);
    *(_QWORD *)(v2 + 24) = 0;
    sub_23BE20(
      v2,
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 216LL),
      *(_QWORD *)(a1 + 64),
      1,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 72) + 130LL),
      0);
    *a2 = sub_23CEB0(*(_QWORD *)(v19 + 40));
    return 1;
  }
  return result;
}
