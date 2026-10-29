__int64 __fastcall sub_8D97A0(__int64 a1, unsigned int a2, __int64 a3)
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
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdi
  _BYTE v26[64]; // [rsp+0h] [rbp-138h] BYREF
  _DWORD v27[16]; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD v28[3]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 *v29; // [rsp+98h] [rbp-A0h]
  unsigned int v30; // [rsp+A0h] [rbp-98h]
  int v31; // [rsp+B0h] [rbp-88h]
  _BYTE v32[120]; // [rsp+C0h] [rbp-78h] BYREF

  sub_A1BF70(v28, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 224LL) + 8LL * a2));
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  sub_A1BFE0(v26, v5);
  v6 = *(_QWORD **)(a1 + 24);
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
  sub_A1E120(v27, v26, v12);
  v13 = sub_7A7530(a3, 1);
  sub_6A63E0(v13, (__int64)v27);
  if ( v31 == 1 )
  {
    v14 = v29;
  }
  else
  {
    if ( (unsigned int)(v31 - 2) <= 1 )
      BUG();
    v14 = (__int64 *)v29[4];
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
  v22 = sub_A1A5A0(v21, 56);
  sub_A1C070(v32, v22);
  sub_A1A5E0(v21, 56);
  if ( v31 )
    goto LABEL_19;
  v23 = v29[4];
  if ( *(_DWORD *)(v23 + 16) != v30 && v30 )
    v23 = *(__int64 *)((char *)v29 + v30 + 32);
  if ( !*(_BYTE *)(v23 + 51) || (v24 = (__int64)v29 + v28[0] + 72, v28[0] != v30) )
LABEL_19:
    v24 = (__int64)v29 + v28[0] + 40;
  sub_A1C200(v24, v32, v28[0]);
  sub_A1C0C0(v32);
  sub_A1DB00(v28);
  if ( v27[0] > 1u )
    sub_69F740((__int64)v27);
  sub_A1C0C0(v26);
  return sub_A1C0C0(v28);
}

