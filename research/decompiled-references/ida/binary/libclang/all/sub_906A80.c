__int64 __fastcall sub_906A80(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // edx
  __int64 *v12; // rdi
  __int64 v13; // rsi
  unsigned int v14; // r8d
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned int v17; // r13d
  unsigned int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 *v31; // [rsp+8h] [rbp-90h]
  char v32; // [rsp+13h] [rbp-85h]
  unsigned int v33; // [rsp+14h] [rbp-84h]
  int v34; // [rsp+14h] [rbp-84h]
  __int64 v35; // [rsp+20h] [rbp-78h] BYREF
  __int128 v36; // [rsp+28h] [rbp-70h]
  __int64 v37; // [rsp+38h] [rbp-60h]
  __int64 v38; // [rsp+40h] [rbp-58h]
  char v39; // [rsp+48h] [rbp-50h]
  int v40; // [rsp+50h] [rbp-48h]

  v4 = a3;
  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 24);
  v8 = *(_QWORD *)v7;
  v9 = *(_QWORD *)(v7 + 8);
  v32 = *(_BYTE *)(v7 + 16);
  sub_A1A5E0(v6, 24);
  v10 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v11 = *(_DWORD *)(v10 + 48);
  v12 = (__int64 *)v10;
  if ( !v11 )
  {
    v13 = *(_QWORD *)(v10 + 24);
    v14 = *(_DWORD *)(v10 + 32);
    v15 = *(_QWORD *)(v13 + 32);
    if ( *(_DWORD *)(v15 + 16) != v14 && v14 )
      v16 = *(_QWORD *)(v13 + v14 + 32);
    else
      v16 = *(_QWORD *)(v13 + 32);
    v17 = 0;
    if ( *(_DWORD *)(v16 + 12) == -1 )
      return v17;
    if ( (_DWORD)v4 )
    {
      v18 = v14;
      if ( v14 != -1 )
        goto LABEL_9;
      goto LABEL_29;
    }
    v33 = v14;
    if ( *(_BYTE *)(sub_8E5480((__int64)v12) + 51) )
    {
      v18 = v33;
      v4 = 0;
      if ( v33 != -1 )
      {
LABEL_9:
        v19 = sub_8E5480((__int64)v12);
        v20 = v4 * *(unsigned int *)(v19 + 8);
        v21 = v20 + 32;
        if ( *(_QWORD *)(v19 + 32) )
          v21 = v20 + 16;
        sub_A1C030(&v35, v13, v18, v21 + v18);
        goto LABEL_16;
      }
      goto LABEL_33;
    }
LABEL_30:
    v17 = 1;
    sub_A1DB00(v12);
    v30 = sub_8FA040(v12);
    *(_QWORD *)v30 = v8;
    *(_QWORD *)(v30 + 8) = v9;
    *(_BYTE *)(v30 + 16) = v32;
    return v17;
  }
  if ( !(_DWORD)v4 )
  {
    v34 = *(_DWORD *)(v10 + 48);
    v31 = (__int64 *)v10;
    v22 = sub_8E5480(v10);
    v12 = v31;
    v11 = v34;
    if ( !*(_BYTE *)(v22 + 51) )
      goto LABEL_30;
  }
  if ( v11 == 1 )
  {
    v23 = v12[3];
    v24 = v12[4];
    v40 = 1;
    v35 = v4;
    v38 = v24;
    v37 = v23;
    v36 = 0;
  }
  else
  {
    if ( v11 != 2 )
    {
      v18 = *((_DWORD *)v12 + 8);
      if ( v18 != -1 )
      {
        v13 = v12[3];
        goto LABEL_9;
      }
      if ( v11 == 3 )
        BUG();
      v13 = v12[3];
LABEL_33:
      v15 = *(_QWORD *)(v13 + 32);
LABEL_29:
      sub_A1C030(&v35, v13, 0xFFFFFFFFLL, *(unsigned int *)(v15 + 12));
      goto LABEL_16;
    }
    v29 = v12[3];
    v35 = v4;
    v40 = 2;
    v37 = v29;
    v38 = 0;
    v39 = 1;
    v36 = 0;
  }
LABEL_16:
  v17 = sub_9D5470(a1, a2, &v35);
  if ( (_BYTE)v17 )
  {
    sub_A1DB00(&v35);
    v25 = v37;
    v26 = v35;
    if ( v40 || !*(_BYTE *)(sub_8E5480((__int64)&v35) + 51) || (v27 = v25 + v26 + 72, v26 != (unsigned int)v38) )
      v27 = v25 + v26 + 40;
    *(_QWORD *)v27 = v8;
    *(_QWORD *)(v27 + 8) = v9;
    *(_BYTE *)(v27 + 16) = v32;
  }
  sub_A1C0C0(&v35);
  return v17;
}

