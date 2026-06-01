__int64 __fastcall sub_8D9A30(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  _QWORD *v8; // rdi
  __int64 (*v9)(void); // rdx
  _QWORD *v10; // rdi
  _QWORD **v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 *v20; // rax
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rbx
  _DWORD v26[16]; // [rsp+0h] [rbp-158h] BYREF
  _QWORD v27[3]; // [rsp+40h] [rbp-118h] BYREF
  __int64 *v28; // [rsp+58h] [rbp-100h]
  unsigned int v29; // [rsp+60h] [rbp-F8h]
  int v30; // [rsp+70h] [rbp-E8h]
  _BYTE v31[56]; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-A0h]
  int v33; // [rsp+C0h] [rbp-98h]
  _BYTE v34[56]; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v35; // [rsp+108h] [rbp-50h]
  int v36; // [rsp+110h] [rbp-48h]

  sub_A1BF70(v27, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 224LL) + 8LL * a2));
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 72);
  sub_A1BFE0(v31, v5);
  v6 = *(_QWORD **)(a1 + 24);
  v32 = *(_QWORD *)(v5 + 56);
  v33 = *(_DWORD *)(v5 + 64);
  v7 = *(__int64 (__fastcall **)(__int64))(*v6 + 104LL);
  if ( v7 == sub_8D7E60 )
  {
    v8 = (_QWORD *)v6[3];
    v9 = *(__int64 (**)(void))(*v8 + 104LL);
    if ( (char *)v9 != (char *)v7 )
    {
LABEL_23:
      v12 = v9();
      goto LABEL_6;
    }
    v10 = (_QWORD *)v8[3];
    v7 = *(__int64 (__fastcall **)(__int64))(*v10 + 104LL);
    if ( (char *)v7 == (char *)v9 )
    {
      v11 = (_QWORD **)v10[3];
      v9 = (__int64 (*)(void))(*v11)[13];
      if ( (char *)v9 == (char *)v7 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v11[3] + 104LL))(v11[3]);
        goto LABEL_6;
      }
      goto LABEL_23;
    }
  }
  v12 = ((__int64 (*)(void))v7)();
LABEL_6:
  sub_A2E5F0(v26, v31, v12);
  v13 = sub_7A7530(a3, 1);
  sub_6A63E0(v13, (__int64)v26);
  if ( v30 == 1 )
  {
    v14 = v28;
  }
  else
  {
    if ( (unsigned int)(v30 - 2) <= 1 )
      BUG();
    v14 = (__int64 *)v28[4];
  }
  v15 = *v14;
  v16 = a3;
  v17 = *v14 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v15 & 2) == 0 )
    v17 = 0;
  v18 = v17;
  v19 = *(unsigned int *)(a1 + 232);
  if ( *(unsigned int *)(a1 + 236) < (unsigned __int64)(v19 + 1) )
  {
    sub_25D6060(a1 + 224, a1 + 240, v19 + 1, 16);
    v19 = *(unsigned int *)(a1 + 232);
  }
  v20 = (unsigned __int64 *)(*(_QWORD *)(a1 + 224) + 16 * v19);
  *v20 = v18;
  v20[1] = v16;
  v21 = *(_QWORD *)(a1 + 184);
  ++*(_DWORD *)(a1 + 232);
  v22 = sub_A1A5A0(v21, 72);
  sub_A1C070(v34, v22);
  v35 = *(_QWORD *)(v22 + 56);
  v36 = *(_DWORD *)(v22 + 64);
  sub_A1A5E0(v21, 72);
  if ( v30 )
    goto LABEL_19;
  v23 = v28[4];
  if ( *(_DWORD *)(v23 + 16) != v29 && v29 )
    v23 = *(__int64 *)((char *)v28 + v29 + 32);
  if ( !*(_BYTE *)(v23 + 51) || (v24 = (__int64)v28 + v27[0] + 72, v27[0] != v29) )
LABEL_19:
    v24 = (__int64)v28 + v27[0] + 40;
  sub_A1C200(v24, v34, v27[0]);
  *(_QWORD *)(v24 + 56) = v35;
  *(_DWORD *)(v24 + 64) = v36;
  sub_A1C0C0(v34);
  sub_A1DB00(v27);
  if ( v26[0] > 1u )
    sub_69F740((__int64)v26);
  sub_A1C0C0(v31);
  return sub_A1C0C0(v27);
}

