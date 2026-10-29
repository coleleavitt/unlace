__int64 __fastcall sub_2869D0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r14
  _QWORD *v3; // rax
  int v6; // edx
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // r15
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *v25; // r12
  __int64 v26; // r13
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rbp
  _DWORD *v34; // rax
  unsigned int v35; // eax
  __int64 v36; // [rsp+0h] [rbp-88h]
  __int64 v37; // [rsp+8h] [rbp-80h]
  _QWORD v38[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v39[13]; // [rsp+20h] [rbp-68h] BYREF

  v39[5] = __readfsqword(0x28u);
  v2 = a2[3];
  if ( *(_DWORD *)(v2 + 8) != 17 )
    return 0;
  v3 = *(_QWORD **)(*(_QWORD *)(v2 + 64) + 24LL);
  if ( !v3[2] )
    return 0;
  v6 = 1;
  if ( (unsigned int)(*(_DWORD *)(*v3 + 24LL) - 78) > 3 )
    v6 = *(_DWORD *)(a1[9] + 644LL);
  if ( !(unsigned __int8)sub_285160(v2, 1, v6)
    && !(unsigned __int8)sub_285160(v2, 66, 1)
    && !(unsigned __int8)sub_285230(v2) )
  {
    return 0;
  }
  sub_283C00(v38, a1, (__int64)a2);
  v39[0] = -1;
  v39[3] = 0;
  v36 = v38[0];
  v39[1] = -4294967226LL;
  v39[2] = 0xFFFFFFFFLL;
  v7 = *(_QWORD *)v38[1];
  v10 = qalloc_or_throw(48, (__int64)a1, v8, v9);
  *(_QWORD *)(v10 + 16) = -1;
  v11 = (_QWORD *)v10;
  *(_DWORD *)(v10 + 24) = 70;
  v37 = v10 + 16;
  *(_QWORD *)(v10 + 28) = -1;
  sub_25AA70(v10 + 16, (__int64)v39);
  *v11 = v7;
  v12 = *(_QWORD **)(v7 + 8);
  v11[1] = v12;
  *v12 = v11;
  *(_QWORD *)(v7 + 8) = v11;
  ++*(_QWORD *)(v36 + 16);
  sub_255050((__int64)v39);
  sub_286930(v37, *(_QWORD *)(v2 + 32), v13, v14);
  v15 = v11[5];
  v16 = *(_QWORD *)(v15 + 64);
  *(_QWORD *)(v15 + 64) = *(_QWORD *)(v2 + 64);
  v17 = *(_QWORD *)(v2 + 72);
  *(_QWORD *)(v2 + 64) = v16;
  v18 = v11[5];
  v19 = *(_QWORD *)(v18 + 72);
  *(_QWORD *)(v18 + 72) = v17;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 72) = v19;
  sub_255850((__int64 *)v2, *(_QWORD *)(v2 + 24));
  v20 = *(_QWORD *)(v2 + 64);
  v21 = sub_2418B0(v2);
  v25 = sub_2413C0(v20, v21, v22, v23);
  v26 = **(_QWORD **)(*(_QWORD *)(v11[5] + 64LL) + 24LL);
  v27 = *(_DWORD *)(v26 + 24);
  v28 = (unsigned int)(v27 - 78);
  if ( (unsigned int)v28 <= 3 )
  {
    *((_DWORD *)v25 + 2) = v27;
    if ( v27 == 81 )
    {
      v34 = (_DWORD *)j__qalloc_or_throw(4, v21, v28, v24);
      *v34 = **(_DWORD **)(v26 + 40);
      v25[3] = (__int64)v34;
    }
    else if ( v27 == 80 )
    {
      v31 = j__qalloc_or_throw(64, v21, v28, v24);
      v32 = *(_QWORD *)(v26 + 40);
      v33 = v31;
      *(_QWORD *)v31 = -1;
      *(_DWORD *)(v31 + 8) = 0;
      *(_QWORD *)(v31 + 48) = 0;
      *(_QWORD *)(v31 + 12) = -1;
      *(_DWORD *)(v31 + 56) = 0;
      sub_25AFF0(v31, v32);
      v25[3] = v33;
    }
  }
  else
  {
    v29 = *(unsigned int *)(v26 + 28);
    if ( (_DWORD)v29 == -1 )
    {
      v35 = sub_23FAB0(a1[8], *(_QWORD *)(v26 + 16), 1);
      *(_DWORD *)(v26 + 28) = v35;
      v29 = v35;
    }
    sub_241390((__int64)v25, v29, v28, v24);
  }
  *a2 = *v25;
  return 1;
}
