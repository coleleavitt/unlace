__int64 __fastcall sub_9083F0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v6; // r12
  int v7; // r15d
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // r12d
  unsigned int v16; // r12d
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v21; // rbx
  _DWORD *v22; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-C0h]
  __int64 v26[3]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+28h] [rbp-A0h]
  __int64 v28; // [rsp+30h] [rbp-98h]
  int v29; // [rsp+40h] [rbp-88h]
  __int64 v30; // [rsp+50h] [rbp-78h] BYREF
  __int128 v31; // [rsp+58h] [rbp-70h]
  __int64 v32; // [rsp+68h] [rbp-60h]
  __int64 v33; // [rsp+70h] [rbp-58h]
  char v34; // [rsp+78h] [rbp-50h]
  int v35; // [rsp+80h] [rbp-48h]

  v4 = a3;
  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(_DWORD *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
  v8 = *(_QWORD *)(a1 + 184);
  v9 = sub_A1A5A0(v8, 56);
  sub_A1C070(v26, v9);
  sub_A1A5E0(v8, 56);
  if ( !v29 )
  {
    v10 = v27;
    LODWORD(v11) = v28;
    v12 = *(_QWORD *)(v27 + 32);
    v13 = v27;
    if ( *(_DWORD *)(v12 + 16) != (_DWORD)v28 && (_DWORD)v28 )
      v14 = *(_QWORD *)(v27 + (unsigned int)v28 + 32);
    else
      v14 = *(_QWORD *)(v27 + 32);
    v15 = 0;
    if ( *(_DWORD *)(v14 + 12) == -1 )
      goto LABEL_22;
    if ( (_DWORD)v4 )
    {
LABEL_11:
      v16 = v11;
      v11 = (unsigned int)v11;
      if ( (_DWORD)v11 != -1 )
      {
LABEL_12:
        v25 = v11;
        v17 = sub_8E9110((__int64)v26) * v4;
        v18 = sub_8E5480((__int64)v26);
        v19 = v17 + 32;
        if ( *(_QWORD *)(v18 + 32) )
          v19 = v17 + 16;
        sub_A1C030(&v30, v13, v16, v25 + v19);
        goto LABEL_15;
      }
      goto LABEL_41;
    }
    v16 = v28;
    if ( (_DWORD)v28 == *(_DWORD *)(v12 + 16) || !(_DWORD)v28 )
      goto LABEL_9;
    v11 = (unsigned int)v28;
    if ( !*(_BYTE *)(*(_QWORD *)(v27 + (unsigned int)v28 + 32) + 51LL) )
      goto LABEL_34;
    if ( (_DWORD)v28 != -1 )
    {
      v4 = 0;
LABEL_33:
      v13 = v10;
      goto LABEL_12;
    }
    goto LABEL_40;
  }
  if ( !(_DWORD)v4 )
  {
    if ( v29 != 1 )
    {
      if ( (unsigned int)(v29 - 2) <= 1 )
        BUG();
      v13 = v27;
      v12 = *(_QWORD *)(v27 + 32);
LABEL_9:
      if ( *(_BYTE *)(v12 + 51) )
      {
        LODWORD(v11) = v28;
        goto LABEL_11;
      }
LABEL_34:
      v15 = 1;
      sub_A1DB00(v26);
      *(_DWORD *)sub_8F7480(v26) = v7;
      goto LABEL_22;
    }
    v24 = v27;
    v4 = 0;
    if ( !*(_BYTE *)(v27 + 51) )
      goto LABEL_34;
    goto LABEL_28;
  }
  if ( v29 == 1 )
  {
    v24 = v27;
LABEL_28:
    v30 = v4;
    v35 = 1;
    v33 = v28;
    v32 = v24;
    v31 = 0;
    goto LABEL_15;
  }
  if ( v29 != 2 )
  {
    v16 = v28;
    if ( (_DWORD)v28 != -1 )
    {
      v10 = v27;
      v11 = (unsigned int)v28;
      goto LABEL_33;
    }
    if ( v29 == 3 )
      BUG();
    v10 = v27;
LABEL_40:
    v12 = *(_QWORD *)(v10 + 32);
    v13 = v10;
LABEL_41:
    sub_A1C030(&v30, v13, 0xFFFFFFFFLL, *(unsigned int *)(v12 + 12));
    goto LABEL_15;
  }
  v30 = v4;
  v35 = 2;
  v32 = v27;
  v33 = 0;
  v34 = 1;
  v31 = 0;
LABEL_15:
  v15 = sub_9D5470(a1, a2, &v30);
  if ( (_BYTE)v15 )
  {
    sub_A1DB00(&v30);
    v20 = v32;
    v21 = v30;
    if ( v35
      || !*(_BYTE *)(sub_8E5480((__int64)&v30) + 51)
      || (v22 = (_DWORD *)(v20 + v21 + 72), v21 != (unsigned int)v33) )
    {
      v22 = (_DWORD *)(v20 + v21 + 40);
    }
    *v22 = v7;
  }
  sub_A1C0C0(&v30);
LABEL_22:
  sub_A1C0C0(v26);
  return v15;
}

