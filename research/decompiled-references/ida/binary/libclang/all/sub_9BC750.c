__int64 __fastcall sub_9BC750(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  void (*v7)(void); // rax
  _QWORD *v8; // rdi
  void (*v9)(void); // rdx
  _QWORD **v10; // rdi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // r12d
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rbx
  void *v28; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v29; // [rsp+8h] [rbp-B0h]
  __int64 v30; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+18h] [rbp-A0h]
  int v32; // [rsp+20h] [rbp-98h]
  char v33; // [rsp+24h] [rbp-94h]
  _QWORD v34[3]; // [rsp+50h] [rbp-68h] BYREF
  __int64 *v35; // [rsp+68h] [rbp-50h]
  unsigned int v36; // [rsp+70h] [rbp-48h]
  int v37; // [rsp+80h] [rbp-38h]

  sub_A1BF70(v34, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 224LL) + 8LL * a2));
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 16);
  v29 = *(_DWORD *)(v5 + 8);
  if ( v29 > 0x40 )
    sub_2585B30(&v28);
  else
    v28 = *(void **)v5;
  v6 = *(_QWORD **)(a1 + 24);
  v7 = *(void (**)(void))(*v6 + 104LL);
  if ( (char *)v7 != (char *)sub_8D7E60 )
  {
LABEL_33:
    v7();
    goto LABEL_7;
  }
  v8 = (_QWORD *)v6[3];
  v9 = *(void (**)(void))(*v8 + 104LL);
  if ( v9 == v7 )
  {
    v10 = (_QWORD **)v8[3];
    v7 = (void (*)(void))(*v10)[13];
    if ( v7 == v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10[3] + 104LL))(v10[3]);
      goto LABEL_7;
    }
    goto LABEL_33;
  }
  v9();
LABEL_7:
  sub_2587BE0(&v30, &v28, v29);
  v11 = v30;
  v12 = v31;
  BYTE4(v30) &= ~1u;
  v31 = v11;
  LODWORD(v30) = 2;
  v32 = v12;
  v33 = 0;
  v13 = sub_7A7530(a3, 1);
  sub_6A63E0(v13, (__int64)&v30);
  if ( v37 == 1 )
  {
    v14 = v35;
  }
  else
  {
    if ( (unsigned int)(v37 - 2) <= 1 )
      BUG();
    v14 = (__int64 *)v35[4];
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
  ++*(_DWORD *)(a1 + 232);
  v21 = *(_QWORD *)(a1 + 184);
  v22 = sub_A1A5A0(v21, 16);
  v23 = *(_DWORD *)(v22 + 8);
  v24 = *(_QWORD *)v22;
  *(_DWORD *)(v22 + 8) = 0;
  sub_A1A5E0(v21, 16);
  if ( v37 )
    goto LABEL_19;
  v25 = v35[4];
  if ( *(_DWORD *)(v25 + 16) != v36 && v36 )
    v25 = *(__int64 *)((char *)v35 + v36 + 32);
  if ( !*(_BYTE *)(v25 + 51) || (v26 = (__int64)v35 + v34[0] + 72, v34[0] != v36) )
LABEL_19:
    v26 = (__int64)v35 + v34[0] + 40;
  if ( *(_DWORD *)(v26 + 8) > 0x40u && *(_QWORD *)v26 )
    operator delete[](*(void **)v26);
  *(_QWORD *)v26 = v24;
  *(_DWORD *)(v26 + 8) = v23;
  sub_A1DB00(v34);
  if ( (unsigned int)v30 > 1 )
    sub_69F740((__int64)&v30);
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  return sub_A1C0C0(v34);
}

