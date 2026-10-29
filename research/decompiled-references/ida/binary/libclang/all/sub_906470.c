__int64 __fastcall sub_906470(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rax
  int v9; // r14d
  __int64 *v10; // rbx
  __int64 v11; // r15
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // r12
  __int64 v24; // rbp
  __int64 v26; // rax
  __int64 v27; // rbx
  unsigned int v28; // [rsp+Ch] [rbp-9Ch]
  unsigned int v29; // [rsp+Ch] [rbp-9Ch]
  void *v30; // [rsp+10h] [rbp-98h]
  unsigned int v31; // [rsp+18h] [rbp-90h]
  char v32; // [rsp+1Ch] [rbp-8Ch]
  int v33; // [rsp+20h] [rbp-88h]
  __int64 v34; // [rsp+30h] [rbp-78h] BYREF
  __int128 v35; // [rsp+38h] [rbp-70h]
  __int64 v36; // [rsp+48h] [rbp-60h]
  __int64 v37; // [rsp+50h] [rbp-58h]
  char v38; // [rsp+58h] [rbp-50h]
  int v39; // [rsp+60h] [rbp-48h]

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 24);
  v7 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = 0;
  v31 = v7;
  v30 = *(void **)v6;
  v32 = *(_BYTE *)(v6 + 12);
  v33 = *(_DWORD *)(v6 + 16);
  sub_A1A5E0(v5, 24);
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
      goto LABEL_23;
    if ( (_DWORD)v4 )
    {
      if ( v12 != -1 )
        goto LABEL_9;
      goto LABEL_34;
    }
    v28 = v12;
    v16 = sub_8E5480((__int64)v10);
    v12 = v28;
    if ( *(_BYTE *)(v16 + 51) )
    {
      v4 = 0;
      if ( v28 != -1 )
      {
LABEL_9:
        v29 = v12;
        v17 = sub_8E5480((__int64)v10);
        v18 = v4 * *(unsigned int *)(v17 + 8);
        v19 = v18 + 32;
        if ( *(_QWORD *)(v17 + 32) )
          v19 = v18 + 16;
        sub_A1C030(&v34, v11, v29, v19 + v29);
        goto LABEL_16;
      }
      goto LABEL_41;
    }
LABEL_36:
    sub_A1DB00(v10);
    v27 = sub_8FA0E0(v10);
    *(_DWORD *)(v27 + 8) = v31;
    if ( v31 > 0x40 )
      sub_2585B30(v27);
    else
      *(_QWORD *)v27 = v30;
    v15 = 1;
    *(_BYTE *)(v27 + 12) = v32;
    *(_DWORD *)(v27 + 16) = v33;
    goto LABEL_23;
  }
  if ( !(_DWORD)v4 && !*(_BYTE *)(sub_8E5480(v8) + 51) )
    goto LABEL_36;
  if ( v9 == 1 )
  {
    v20 = v10[3];
    v21 = v10[4];
    v34 = v4;
    v39 = 1;
    v37 = v21;
    v36 = v20;
    v35 = 0;
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
LABEL_41:
      v13 = *(_QWORD *)(v11 + 32);
LABEL_34:
      sub_A1C030(&v34, v11, 0xFFFFFFFFLL, *(unsigned int *)(v13 + 12));
      goto LABEL_16;
    }
    v26 = v10[3];
    v34 = v4;
    v39 = 2;
    v36 = v26;
    v37 = 0;
    v38 = 1;
    v35 = 0;
  }
LABEL_16:
  v15 = sub_9D5470(a1, a2, &v34);
  if ( (_BYTE)v15 )
  {
    sub_A1DB00(&v34);
    v22 = v36;
    v23 = v34;
    if ( v39
      || !*(_BYTE *)(sub_8E5480((__int64)&v34) + 51)
      || (v24 = v22 + (unsigned int)v37 + 72, (unsigned int)v37 != v23) )
    {
      v24 = v22 + v23 + 40;
    }
    *(_DWORD *)(v24 + 8) = v31;
    if ( v31 > 0x40 )
      sub_2585B30(v24);
    else
      *(_QWORD *)v24 = v30;
    *(_BYTE *)(v24 + 12) = v32;
    *(_DWORD *)(v24 + 16) = v33;
  }
  sub_A1C0C0(&v34);
LABEL_23:
  if ( v31 > 0x40 && v30 )
    operator delete[](v30);
  return v15;
}

