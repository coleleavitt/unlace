__int64 __fastcall sub_9C1000(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rbp
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
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 *v36; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 *v40; // rax
  __int64 *v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rsi
  unsigned __int64 v47; // [rsp+0h] [rbp-148h]
  __int64 *v48; // [rsp+0h] [rbp-148h]
  __int64 v49; // [rsp+8h] [rbp-140h]
  __int64 v50; // [rsp+20h] [rbp-128h]
  __int64 v51; // [rsp+20h] [rbp-128h]
  __int64 v52; // [rsp+28h] [rbp-120h]
  __int64 v53[4]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v54[4]; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v55[4]; // [rsp+70h] [rbp-D8h] BYREF
  unsigned int v56; // [rsp+90h] [rbp-B8h] BYREF
  char v57; // [rsp+94h] [rbp-B4h]
  __int64 v58; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-A8h]
  _QWORD v60[3]; // [rsp+D0h] [rbp-78h] BYREF
  __int64 *v61; // [rsp+E8h] [rbp-60h]
  unsigned int v62; // [rsp+F0h] [rbp-58h]
  unsigned int v63; // [rsp+100h] [rbp-48h]

  sub_A1BF70(v60, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 224LL) + 8LL * a2));
  v4 = *(_QWORD *)(a1 + 184);
  v5 = (_QWORD *)sub_A1A5A0(v4, 24);
  v6 = *v5;
  v7 = v5;
  v9 = sub_2575D20(v4, 24, v8);
  if ( v6 == v9 )
    sub_257CF50(v53, v7);
  else
    sub_25768A0(v53, v7);
  v10 = *(_QWORD **)(a1 + 24);
  v11 = *(void (**)(void))(*v10 + 104LL);
  if ( (char *)v11 != (char *)sub_8D7E60 )
  {
LABEL_44:
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
    goto LABEL_44;
  }
  v13();
LABEL_7:
  if ( v9 == v53[0] )
    sub_257CF50(v54, v53);
  else
    sub_25768A0(v54, v53);
  v57 &= ~1u;
  v56 = 0;
  v50 = sub_2575D00(v54, v53, v15);
  sub_2580BE0(v55, 0.0);
  sub_257EDC0(&v58, v55, v50);
  sub_25769A0(v55);
  v56 = 3;
  if ( v9 == v54[0] )
    sub_257D000(v55, v54, v16, v17);
  else
    sub_2576960(v55, v54);
  if ( v9 != v58 )
  {
    if ( v9 != v55[0] )
    {
      sub_2576350(&v58, v55, v18, v19);
      goto LABEL_17;
    }
    goto LABEL_15;
  }
  if ( v9 != v55[0] )
  {
LABEL_15:
    sub_5FF3B0(&v58);
    if ( v9 == v55[0] )
      sub_257D000(&v58, v55, v20, v21);
    else
      sub_2576960(&v58, v55);
    goto LABEL_17;
  }
  v43 = v59;
  if ( v59 )
  {
    v44 = v59 + 24LL * *(_QWORD *)(v59 - 8);
    if ( v59 == v44 )
    {
      v45 = 0;
    }
    else
    {
      do
      {
        v52 = v43;
        v51 = v44 - 24;
        sub_5FF3B0((__int64 *)(v44 - 24));
        v44 = v51;
        v43 = v52;
      }
      while ( v52 != v51 );
      v45 = 24LL * *(_QWORD *)(v52 - 8);
    }
    operator delete[]((void *)(v43 - 8), v45 + 8);
  }
  v59 = 0;
  sub_257D000(&v58, v55, v43, v19);
LABEL_17:
  sub_5FF3B0(v55);
  sub_5FF3B0(v54);
  v22 = sub_7A7530(a3, 1);
  sub_6A63E0(v22, (__int64)&v56);
  if ( v63 == 1 )
  {
    v23 = v61;
  }
  else
  {
    if ( v63 - 2 <= 1 )
      BUG();
    v23 = (__int64 *)v61[4];
  }
  v24 = *v23;
  v25 = a3;
  v26 = v24 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v24 & 2) == 0 )
    v26 = 0;
  v27 = *(unsigned int *)(a1 + 232);
  if ( *(unsigned int *)(a1 + 236) < (unsigned __int64)(v27 + 1) )
  {
    v47 = v26;
    v49 = v25;
    sub_25D6060(a1 + 224, a1 + 240, v27 + 1, 16);
    v27 = *(unsigned int *)(a1 + 232);
    v26 = v47;
    v25 = v49;
  }
  v28 = (unsigned __int64 *)(*(_QWORD *)(a1 + 224) + 16 * v27);
  *v28 = v26;
  v28[1] = v25;
  ++*(_DWORD *)(a1 + 232);
  v29 = *(_QWORD *)(a1 + 184);
  v32 = (_QWORD *)sub_A1A5A0(v29, 24);
  if ( v9 == *v32 )
    sub_257D000(v55, v32, v30, v31);
  else
    sub_2576960(v55, v32);
  sub_A1A5E0(v29, 24);
  v33 = v63;
  v34 = v60[0];
  if ( v63 )
    goto LABEL_32;
  v35 = v61[4];
  v33 = v62;
  if ( *(_DWORD *)(v35 + 16) != v62 && v62 )
    v35 = *(__int64 *)((char *)v61 + v62 + 32);
  if ( !*(_BYTE *)(v35 + 51) || (v36 = (__int64 *)((char *)v61 + v60[0] + 72), v60[0] != v62) )
LABEL_32:
    v36 = (__int64 *)((char *)v61 + v60[0] + 40);
  if ( v9 != *v36 )
  {
    if ( v9 != v55[0] )
    {
      sub_2576350(v36, v55, v60[0], v33);
      goto LABEL_36;
    }
    goto LABEL_40;
  }
  if ( v9 != v55[0] )
  {
LABEL_40:
    if ( v36 != v55 )
    {
      sub_5FF3B0(v36);
      if ( v9 == v55[0] )
        sub_257D000(v36, v55, v38, v39);
      else
        sub_2576960(v36, v55);
    }
    goto LABEL_36;
  }
  if ( v36 != v55 )
  {
    v40 = (__int64 *)v36[1];
    if ( v40 )
    {
      v41 = &v40[3 * *(v40 - 1)];
      if ( v40 == v41 )
      {
        v42 = 0;
      }
      else
      {
        do
        {
          v41 -= 3;
          v48 = v40;
          sub_5FF3B0(v41);
          v40 = v48;
        }
        while ( v48 != v41 );
        v42 = 24 * *(v48 - 1);
      }
      operator delete[](v40 - 1, v42 + 8);
    }
    v36[1] = 0;
    sub_257D000(v36, v55, v34, v33);
  }
LABEL_36:
  sub_5FF3B0(v55);
  sub_A1DB00(v60);
  if ( v56 > 1 )
    sub_69F740((__int64)&v56);
  sub_5FF3B0(v53);
  return sub_A1C0C0(v60);
}

