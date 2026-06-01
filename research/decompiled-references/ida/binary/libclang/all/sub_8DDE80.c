__int64 __fastcall sub_8DDE80(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // r12
  _QWORD *v10; // rdi
  void (*v11)(void); // rax
  _QWORD *v12; // rdi
  void (*v13)(void); // rdx
  _QWORD **v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  unsigned __int64 *v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rsi
  __int64 v33; // rsi
  __int64 *v34; // rdi
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rsi
  unsigned __int64 v40; // [rsp+0h] [rbp-148h]
  __int64 v41; // [rsp+8h] [rbp-140h]
  __int64 v42; // [rsp+20h] [rbp-128h]
  __int64 v43; // [rsp+20h] [rbp-128h]
  __int64 v44; // [rsp+28h] [rbp-120h]
  __int64 v45[4]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v46[4]; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v47[4]; // [rsp+70h] [rbp-D8h] BYREF
  unsigned int v48; // [rsp+90h] [rbp-B8h] BYREF
  char v49; // [rsp+94h] [rbp-B4h]
  __int64 v50; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-A8h]
  __int64 v52[3]; // [rsp+D0h] [rbp-78h] BYREF
  __int64 *v53; // [rsp+E8h] [rbp-60h]
  unsigned int v54; // [rsp+F0h] [rbp-58h]
  int v55; // [rsp+100h] [rbp-48h]

  sub_A1BF70(v52, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 224LL) + 8LL * a2));
  v4 = *(_QWORD *)(a1 + 184);
  v5 = (_QWORD *)sub_A1A5A0(v4, 24);
  v6 = *v5;
  v7 = v5;
  v9 = sub_2575D20(v4, 24, v8);
  if ( v6 == v9 )
    sub_257CF50(v45, v7);
  else
    sub_25768A0(v45, v7);
  v10 = *(_QWORD **)(a1 + 24);
  v11 = *(void (**)(void))(*v10 + 104LL);
  if ( (char *)v11 != (char *)sub_8D7E60 )
  {
LABEL_37:
    v11();
    goto LABEL_7;
  }
  v12 = (_QWORD *)v10[3];
  v13 = *(void (**)(void))(*v12 + 104LL);
  if ( v13 == v11 )
  {
    v14 = (_QWORD **)v12[3];
    v11 = (void (*)(void))(*v14)[13];
    if ( v11 == v13 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14[3] + 104LL))(v14[3]);
      goto LABEL_7;
    }
    goto LABEL_37;
  }
  v13();
LABEL_7:
  if ( v9 == v45[0] )
    sub_257CF50(v46, v45);
  else
    sub_25768A0(v46, v45);
  v49 &= ~1u;
  v48 = 0;
  v42 = sub_2575D00(v46, v45, v15);
  sub_2580BE0(v47, 0.0);
  sub_257EDC0(&v50, v47, v42);
  sub_25769A0(v47);
  v48 = 3;
  if ( v9 == v46[0] )
    sub_257D000(v47, v46, v16, v17);
  else
    sub_2576960(v47, v46);
  if ( v9 != v50 )
  {
    if ( v9 != v47[0] )
    {
      sub_2576350(&v50, v47, v18, v19);
      goto LABEL_17;
    }
    goto LABEL_15;
  }
  if ( v9 != v47[0] )
  {
LABEL_15:
    sub_5FF3B0(&v50);
    if ( v9 == v47[0] )
      sub_257D000(&v50, v47, v20, v21);
    else
      sub_2576960(&v50, v47);
    goto LABEL_17;
  }
  v36 = v51;
  if ( v51 )
  {
    v37 = v51 + 24LL * *(_QWORD *)(v51 - 8);
    if ( v51 == v37 )
    {
      v38 = 0;
    }
    else
    {
      do
      {
        v44 = v36;
        v43 = v37 - 24;
        sub_5FF3B0((__int64 *)(v37 - 24));
        v37 = v43;
        v36 = v44;
      }
      while ( v44 != v43 );
      v38 = 24LL * *(_QWORD *)(v44 - 8);
    }
    operator delete[]((void *)(v36 - 8), v38 + 8);
  }
  v51 = 0;
  sub_257D000(&v50, v47, v36, v19);
LABEL_17:
  sub_5FF3B0(v47);
  sub_5FF3B0(v46);
  v22 = sub_7A7530(a3, 1);
  sub_6A63E0(v22, (__int64)&v48);
  if ( v55 == 1 )
  {
    v23 = v53;
  }
  else
  {
    if ( (unsigned int)(v55 - 2) <= 1 )
      BUG();
    v23 = (__int64 *)v53[4];
  }
  v24 = *v23;
  v25 = a3;
  v26 = v24 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v24 & 2) == 0 )
    v26 = 0;
  v27 = *(unsigned int *)(a1 + 232);
  if ( *(unsigned int *)(a1 + 236) < (unsigned __int64)(v27 + 1) )
  {
    v40 = v26;
    v41 = v25;
    sub_25D6060(a1 + 224, a1 + 240, v27 + 1, 16);
    v27 = *(unsigned int *)(a1 + 232);
    v26 = v40;
    v25 = v41;
  }
  v28 = (unsigned __int64 *)(*(_QWORD *)(a1 + 224) + 16 * v27);
  *v28 = v26;
  v28[1] = v25;
  ++*(_DWORD *)(a1 + 232);
  v29 = *(_QWORD *)(a1 + 184);
  v32 = (_QWORD *)sub_A1A5A0(v29, 24);
  if ( v9 == *v32 )
    sub_257D000(v47, v32, v30, v31);
  else
    sub_2576960(v47, v32);
  sub_A1A5E0(v29, 24);
  if ( v55 )
    goto LABEL_32;
  v33 = v53[4];
  if ( *(_DWORD *)(v33 + 16) != v54 && v54 )
    v33 = *(__int64 *)((char *)v53 + v54 + 32);
  if ( !*(_BYTE *)(v33 + 51) || (v34 = (__int64 *)((char *)v53 + v52[0] + 72), v52[0] != v54) )
LABEL_32:
    v34 = (__int64 *)((char *)v53 + v52[0] + 40);
  sub_8DBA70(v34, v47, v52[0]);
  sub_5FF3B0(v47);
  sub_A1DB00(v52);
  if ( v48 > 1 )
    sub_69F740((__int64)&v48);
  sub_5FF3B0(v45);
  return sub_A1C0C0(v52);
}

