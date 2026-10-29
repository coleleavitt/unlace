__int64 __fastcall sub_907070(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v5; // r12
  _QWORD *v6; // rax
  __int64 v7; // r15
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rax
  int v14; // r12d
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // r12d
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdi
  unsigned int v35; // [rsp+10h] [rbp-A8h]
  unsigned int v36; // [rsp+1Ch] [rbp-9Ch]
  __int64 v37[4]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v38; // [rsp+40h] [rbp-78h] BYREF
  __int128 v39; // [rsp+48h] [rbp-70h]
  __int64 v40; // [rsp+58h] [rbp-60h]
  __int64 v41; // [rsp+60h] [rbp-58h]
  char v42; // [rsp+68h] [rbp-50h]
  int v43; // [rsp+70h] [rbp-48h]

  v3 = a3;
  v5 = *(_QWORD *)(a1 + 184);
  v6 = (_QWORD *)sub_A1A5A0(v5, 24);
  v7 = *v6;
  v9 = v6;
  v12 = sub_2575D20(v5, 24, v8);
  if ( v7 == v12 )
    sub_257D000(v37, v9, v10, v11);
  else
    sub_2576960(v37, v9);
  sub_A1A5E0(v5, 24);
  v13 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v14 = *(_DWORD *)(v13 + 48);
  v15 = v13;
  if ( !v14 )
  {
    v23 = *(_QWORD *)(v13 + 24);
    v24 = *(_DWORD *)(v15 + 32);
    v25 = *(_QWORD *)(v23 + 32);
    v26 = *(_QWORD *)(v15 + 24);
    if ( *(_DWORD *)(v25 + 16) != v24 && v24 )
      v27 = *(_QWORD *)(v26 + v24 + 32);
    else
      v27 = *(_QWORD *)(v23 + 32);
    v18 = 0;
    if ( *(_DWORD *)(v27 + 12) == -1 )
      goto LABEL_14;
    if ( (_DWORD)v3 )
    {
      if ( v24 == -1 )
      {
LABEL_33:
        sub_A1C030(&v38, v26, 0xFFFFFFFFLL, *(unsigned int *)(v25 + 12));
        goto LABEL_8;
      }
    }
    else
    {
      v36 = *(_DWORD *)(v15 + 32);
      v28 = sub_8E5480(v15);
      v24 = v36;
      if ( !*(_BYTE *)(v28 + 51) )
        goto LABEL_34;
      v3 = 0;
      if ( v36 == -1 )
      {
LABEL_40:
        v25 = *(_QWORD *)(v26 + 32);
        goto LABEL_33;
      }
    }
LABEL_23:
    v35 = v24;
    v29 = sub_8E5480(v15);
    v30 = v3 * *(unsigned int *)(v29 + 8);
    v31 = v30 + 32;
    if ( *(_QWORD *)(v29 + 32) )
      v31 = v30 + 16;
    sub_A1C030(&v38, v26, v35, v31 + v35);
    goto LABEL_8;
  }
  if ( !(_DWORD)v3 )
  {
    v15 = v13;
    if ( !*(_BYTE *)(sub_8E5480(v13) + 51) )
    {
LABEL_34:
      sub_A1DB00(v15);
      v33 = sub_8F8D80((__int64 *)v15);
      if ( v12 == v37[0] )
        sub_257CF50(v33, v37);
      else
        sub_25768A0(v33, v37);
      v18 = 1;
      goto LABEL_14;
    }
  }
  if ( v14 != 1 )
  {
    if ( v14 == 2 )
    {
      v32 = *(_QWORD *)(v15 + 24);
      v38 = v3;
      v43 = 2;
      v40 = v32;
      v41 = 0;
      v42 = 1;
      v39 = 0;
      goto LABEL_8;
    }
    v24 = *(_DWORD *)(v15 + 32);
    if ( v24 != -1 )
    {
      v26 = *(_QWORD *)(v15 + 24);
      goto LABEL_23;
    }
    if ( v14 == 3 )
      BUG();
    v26 = *(_QWORD *)(v15 + 24);
    goto LABEL_40;
  }
  v16 = *(_QWORD *)(v15 + 24);
  v17 = *(_QWORD *)(v15 + 32);
  v43 = 1;
  v38 = v3;
  v41 = v17;
  v40 = v16;
  v39 = 0;
LABEL_8:
  v18 = sub_9D5470(a1, a2, &v38);
  if ( (_BYTE)v18 )
  {
    sub_A1DB00(&v38);
    v19 = v40;
    v20 = v38;
    if ( v43 || !*(_BYTE *)(sub_8E5480((__int64)&v38) + 51) || (v21 = v19 + v20 + 72, v20 != (unsigned int)v41) )
      v21 = v19 + v20 + 40;
    if ( v12 == v37[0] )
      sub_257CF50(v21, v37);
    else
      sub_25768A0(v21, v37);
  }
  sub_A1C0C0(&v38);
LABEL_14:
  sub_5FF3B0(v37);
  return v18;
}

