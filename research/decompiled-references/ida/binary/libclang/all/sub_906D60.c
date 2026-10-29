__int64 __fastcall sub_906D60(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // r15d
  __int64 *v10; // rbx
  __int64 v11; // rsi
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // r12
  __int64 v24; // rbp
  __int64 v26; // rax
  __int64 v27; // rbx
  unsigned int v28; // [rsp+0h] [rbp-D8h]
  unsigned int v29; // [rsp+8h] [rbp-D0h]
  __int64 v30; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v31; // [rsp+18h] [rbp-C0h]
  __int64 v32; // [rsp+28h] [rbp-B0h]
  __int64 v33; // [rsp+30h] [rbp-A8h]
  char v34; // [rsp+38h] [rbp-A0h]
  int v35; // [rsp+40h] [rbp-98h]
  _BYTE v36[56]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v37; // [rsp+88h] [rbp-50h]
  int v38; // [rsp+90h] [rbp-48h]

  v4 = a3;
  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 72);
  sub_A1C070(v36, v7);
  v37 = *(_QWORD *)(v7 + 56);
  v38 = *(_DWORD *)(v7 + 64);
  sub_A1A5E0(v6, 72);
  v8 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v9 = *(_DWORD *)(v8 + 48);
  v10 = (__int64 *)v8;
  if ( !v9 )
  {
    v11 = *(_QWORD *)(v8 + 24);
    v12 = *(_DWORD *)(v8 + 32);
    v13 = *(_QWORD *)(v11 + 32);
    if ( *(_DWORD *)(v13 + 16) != v12 && v12 )
      v14 = *(_QWORD *)(v11 + v12 + 32);
    else
      v14 = *(_QWORD *)(v11 + 32);
    v15 = 0;
    if ( *(_DWORD *)(v14 + 12) == -1 )
      goto LABEL_21;
    if ( (_DWORD)v4 )
    {
      if ( v12 != -1 )
        goto LABEL_9;
      goto LABEL_29;
    }
    v29 = v12;
    v16 = sub_8E5480((__int64)v10);
    v12 = v29;
    if ( *(_BYTE *)(v16 + 51) )
    {
      v4 = 0;
      if ( v29 != -1 )
      {
LABEL_9:
        v28 = v12;
        v17 = sub_8E5480((__int64)v10);
        v18 = v4 * *(unsigned int *)(v17 + 8);
        v19 = v18 + 32;
        if ( *(_QWORD *)(v17 + 32) )
          v19 = v18 + 16;
        sub_A1C030(&v30, v11, v28, v19 + v28);
        goto LABEL_16;
      }
      goto LABEL_33;
    }
LABEL_30:
    v15 = 1;
    sub_A1DB00(v10);
    v27 = sub_8FA090(v10);
    sub_A1BFE0(v27, v36);
    *(_QWORD *)(v27 + 56) = v37;
    *(_DWORD *)(v27 + 64) = v38;
    goto LABEL_21;
  }
  if ( !(_DWORD)v4 && !*(_BYTE *)(sub_8E5480(v8) + 51) )
    goto LABEL_30;
  if ( v9 == 1 )
  {
    v20 = v10[3];
    v21 = v10[4];
    v30 = v4;
    v35 = 1;
    v33 = v21;
    v32 = v20;
    v31 = 0;
  }
  else
  {
    if ( v9 != 2 )
    {
      v12 = *((_DWORD *)v10 + 8);
      if ( v12 != -1 )
      {
        v11 = v10[3];
        goto LABEL_9;
      }
      if ( v9 == 3 )
        BUG();
      v11 = v10[3];
LABEL_33:
      v13 = *(_QWORD *)(v11 + 32);
LABEL_29:
      sub_A1C030(&v30, v11, 0xFFFFFFFFLL, *(unsigned int *)(v13 + 12));
      goto LABEL_16;
    }
    v26 = v10[3];
    v30 = v4;
    v35 = 2;
    v32 = v26;
    v33 = 0;
    v34 = 1;
    v31 = 0;
  }
LABEL_16:
  v15 = sub_9D5470(a1, a2, &v30);
  if ( (_BYTE)v15 )
  {
    sub_A1DB00(&v30);
    v22 = v32;
    v23 = v30;
    if ( v35
      || !*(_BYTE *)(sub_8E5480((__int64)&v30) + 51)
      || (v24 = v22 + (unsigned int)v33 + 72, (unsigned int)v33 != v23) )
    {
      v24 = v22 + v23 + 40;
    }
    sub_A1BFE0(v24, v36);
    *(_QWORD *)(v24 + 56) = v37;
    *(_DWORD *)(v24 + 64) = v38;
  }
  sub_A1C0C0(&v30);
LABEL_21:
  sub_A1C0C0(v36);
  return v15;
}

