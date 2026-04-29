__int64 __fastcall sub_286CD0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // [rsp+14h] [rbp-84h]
  __int64 v29; // [rsp+18h] [rbp-80h]
  _QWORD v30[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v31[13]; // [rsp+30h] [rbp-68h] BYREF

  v31[5] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 18
    || !(unsigned __int8)sub_285160(*(_QWORD *)(a2 + 24), 1, *(_DWORD *)(a1[9] + 644LL))
    && !(unsigned __int8)sub_285160(v2, 66, 1)
    && !(unsigned __int8)sub_285230(v2) )
  {
    return 0;
  }
  v4 = *(_QWORD *)(v2 + 72);
  if ( !v4 )
    return 0;
  v5 = **(_QWORD **)(v4 + 24);
  v28 = *(_DWORD *)(v5 + 28);
  if ( v28 == -1 )
  {
    v28 = sub_23FAB0(a1[8], *(_QWORD *)(v5 + 16), 1);
    *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v2 + 72) + 24LL) + 28LL) = v28;
  }
  v29 = *(_QWORD *)(v2 + 24);
  sub_255850((__int64 *)v2, *(_QWORD *)(v2 + 32));
  sub_283C00(v30, a1, a2);
  v31[1] = -4294967226LL;
  v6 = v30[0];
  v31[0] = -1;
  v31[2] = 0xFFFFFFFFLL;
  v31[3] = 0;
  v7 = *(_QWORD *)v30[1];
  v9 = qalloc_or_throw(48, (__int64)a1, v8, 0xFFFFFFFFLL);
  *(_QWORD *)(v9 + 16) = -1;
  *(_DWORD *)(v9 + 24) = 70;
  *(_QWORD *)(v9 + 28) = -1;
  sub_25AA70(v9 + 16, (__int64)v31);
  *(_QWORD *)v9 = v7;
  v10 = *(__int64 **)(v7 + 8);
  *(_QWORD *)(v9 + 8) = v10;
  *v10 = v9;
  *(_QWORD *)(v7 + 8) = v9;
  ++*(_QWORD *)(v6 + 16);
  sub_255050((__int64)v31);
  v14 = sub_244460(*(_QWORD *)(a1[9] + 112LL), v29, v11, v12, v13);
  sub_286930(v9 + 16, (__int64)v14, v15, v16);
  v19 = sub_2413C0(*(_QWORD *)(*(_QWORD *)(v9 + 40) + 64LL), *(_QWORD *)(v9 + 16), v17, v18);
  sub_241390((__int64)v19, v28, v20, v21);
  *(_QWORD *)(v9 + 16) = *v19;
  v22 = *(_DWORD *)(v9 + 28);
  *(_DWORD *)(v9 + 28) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v22;
  v23 = *(_QWORD *)a2;
  *(_QWORD *)a2 = *(_QWORD *)(v9 + 16);
  v24 = *(_DWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 16) = v23;
  LODWORD(v23) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v24;
  v25 = *(_DWORD *)(v9 + 28);
  *(_DWORD *)(v9 + 24) = v23;
  LODWORD(v23) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v25;
  v26 = *(_QWORD *)(v9 + 40);
  *(_DWORD *)(v9 + 28) = v23;
  v27 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = v26;
  *(_QWORD *)(v9 + 40) = v27;
  return 1;
}
