__int64 __fastcall sub_282D50(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r14
  _QWORD *v3; // rax
  int v6; // edx
  __int64 v7; // r13
  __int64 v8; // rax
  _QWORD *v9; // r15
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rax
  _QWORD *v18; // r12
  __int64 v19; // r13
  int v20; // eax
  int v21; // esi
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rbp
  _DWORD *v26; // rax
  int v27; // eax
  __int64 v28; // [rsp+0h] [rbp-88h]
  __int64 v29; // [rsp+8h] [rbp-80h]
  _QWORD v30[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v31[13]; // [rsp+20h] [rbp-68h] BYREF

  v31[5] = __readfsqword(0x28u);
  v2 = a2[3];
  if ( *(_DWORD *)(v2 + 8) != 17 )
    return 0;
  v3 = *(_QWORD **)(*(_QWORD *)(v2 + 64) + 24LL);
  if ( !v3[2] )
    return 0;
  v6 = 1;
  if ( (unsigned int)(*(_DWORD *)(*v3 + 24LL) - 78) > 3 )
    v6 = *(_DWORD *)(a1[9] + 644LL);
  if ( !(unsigned __int8)sub_2814E0(v2, 1, v6)
    && !(unsigned __int8)sub_2814E0(v2, 66, 1)
    && !(unsigned __int8)sub_2815B0(v2) )
  {
    return 0;
  }
  sub_27FF80(v30, a1, (__int64)a2);
  v31[0] = -1;
  v31[3] = 0;
  v28 = v30[0];
  v31[1] = -4294967226LL;
  v31[2] = 0xFFFFFFFFLL;
  v7 = *(_QWORD *)v30[1];
  v8 = qalloc_or_throw(48);
  *(_QWORD *)(v8 + 16) = -1;
  v9 = (_QWORD *)v8;
  *(_DWORD *)(v8 + 24) = 70;
  v29 = v8 + 16;
  *(_QWORD *)(v8 + 28) = -1;
  sub_256DF0(v8 + 16, (__int64)v31);
  *v9 = v7;
  v10 = *(_QWORD **)(v7 + 8);
  v9[1] = v10;
  *v10 = v9;
  *(_QWORD *)(v7 + 8) = v9;
  ++*(_QWORD *)(v28 + 16);
  sub_2513D0((__int64)v31);
  sub_282CB0(v29, *(_QWORD *)(v2 + 32));
  v11 = v9[5];
  v12 = *(_QWORD *)(v11 + 64);
  *(_QWORD *)(v11 + 64) = *(_QWORD *)(v2 + 64);
  v13 = *(_QWORD *)(v2 + 72);
  *(_QWORD *)(v2 + 64) = v12;
  v14 = v9[5];
  v15 = *(_QWORD *)(v14 + 72);
  *(_QWORD *)(v14 + 72) = v13;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 72) = v15;
  sub_251BD0((__int64 *)v2, *(_QWORD *)(v2 + 24));
  v16 = *(_QWORD *)(v2 + 64);
  v17 = sub_23DC30(v2);
  v18 = sub_23D740(v16, v17);
  v19 = **(_QWORD **)(*(_QWORD *)(v9[5] + 64LL) + 24LL);
  v20 = *(_DWORD *)(v19 + 24);
  if ( (unsigned int)(v20 - 78) <= 3 )
  {
    *((_DWORD *)v18 + 2) = v20;
    if ( v20 == 81 )
    {
      v26 = (_DWORD *)j__qalloc_or_throw(4);
      *v26 = **(_DWORD **)(v19 + 40);
      v18[3] = v26;
    }
    else if ( v20 == 80 )
    {
      v23 = j__qalloc_or_throw(64);
      v24 = *(_QWORD *)(v19 + 40);
      v25 = v23;
      *(_QWORD *)v23 = -1;
      *(_DWORD *)(v23 + 8) = 0;
      *(_QWORD *)(v23 + 48) = 0;
      *(_QWORD *)(v23 + 12) = -1;
      *(_DWORD *)(v23 + 56) = 0;
      sub_257370(v23, v24);
      v18[3] = v25;
    }
  }
  else
  {
    v21 = *(_DWORD *)(v19 + 28);
    if ( v21 == -1 )
    {
      v27 = sub_23BE30(a1[8], *(_QWORD *)(v19 + 16), 1);
      *(_DWORD *)(v19 + 28) = v27;
      v21 = v27;
    }
    sub_23D710((__int64)v18, v21);
  }
  *a2 = *v18;
  return 1;
}
