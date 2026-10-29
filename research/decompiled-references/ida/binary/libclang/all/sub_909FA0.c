__int64 __fastcall sub_909FA0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v6; // r12
  __int64 v7; // rax
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
  __int64 v22; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-100h]
  _BYTE v27[64]; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v28[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-A0h]
  __int64 v30; // [rsp+70h] [rbp-98h]
  int v31; // [rsp+80h] [rbp-88h]
  __int64 v32; // [rsp+90h] [rbp-78h] BYREF
  __int128 v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  char v36; // [rsp+B8h] [rbp-50h]
  int v37; // [rsp+C0h] [rbp-48h]

  v4 = a3;
  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 56);
  sub_A1C070(v27, v7);
  sub_A1A5E0(v6, 56);
  v8 = *(_QWORD *)(a1 + 184);
  v9 = sub_A1A5A0(v8, 56);
  sub_A1C070(v28, v9);
  sub_A1A5E0(v8, 56);
  if ( !v31 )
  {
    v10 = v29;
    LODWORD(v11) = v30;
    v12 = *(_QWORD *)(v29 + 32);
    v13 = v29;
    if ( *(_DWORD *)(v12 + 16) != (_DWORD)v30 && (_DWORD)v30 )
      v14 = *(_QWORD *)(v29 + (unsigned int)v30 + 32);
    else
      v14 = *(_QWORD *)(v29 + 32);
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
        v26 = v11;
        v17 = sub_8E9110((__int64)v28) * v4;
        v18 = sub_8E5480((__int64)v28);
        v19 = v17 + 32;
        if ( *(_QWORD *)(v18 + 32) )
          v19 = v17 + 16;
        sub_A1C030(&v32, v13, v16, v26 + v19);
        goto LABEL_15;
      }
      goto LABEL_41;
    }
    v16 = v30;
    if ( (_DWORD)v30 == *(_DWORD *)(v12 + 16) || !(_DWORD)v30 )
      goto LABEL_9;
    v11 = (unsigned int)v30;
    if ( !*(_BYTE *)(*(_QWORD *)(v29 + (unsigned int)v30 + 32) + 51LL) )
      goto LABEL_34;
    if ( (_DWORD)v30 != -1 )
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
    if ( v31 != 1 )
    {
      if ( (unsigned int)(v31 - 2) <= 1 )
        BUG();
      v13 = v29;
      v12 = *(_QWORD *)(v29 + 32);
LABEL_9:
      if ( *(_BYTE *)(v12 + 51) )
      {
        LODWORD(v11) = v30;
        goto LABEL_11;
      }
LABEL_34:
      v15 = 1;
      sub_A1DB00(v28);
      v25 = sub_8F9CB0(v28);
      sub_A1BFE0(v25, v27);
      goto LABEL_22;
    }
    v24 = v29;
    v4 = 0;
    if ( !*(_BYTE *)(v29 + 51) )
      goto LABEL_34;
    goto LABEL_28;
  }
  if ( v31 == 1 )
  {
    v24 = v29;
LABEL_28:
    v32 = v4;
    v37 = 1;
    v35 = v30;
    v34 = v24;
    v33 = 0;
    goto LABEL_15;
  }
  if ( v31 != 2 )
  {
    v16 = v30;
    if ( (_DWORD)v30 != -1 )
    {
      v10 = v29;
      v11 = (unsigned int)v30;
      goto LABEL_33;
    }
    if ( v31 == 3 )
      BUG();
    v10 = v29;
LABEL_40:
    v12 = *(_QWORD *)(v10 + 32);
    v13 = v10;
LABEL_41:
    sub_A1C030(&v32, v13, 0xFFFFFFFFLL, *(unsigned int *)(v12 + 12));
    goto LABEL_15;
  }
  v32 = v4;
  v37 = 2;
  v34 = v29;
  v35 = 0;
  v36 = 1;
  v33 = 0;
LABEL_15:
  v15 = sub_9D5470(a1, a2, &v32);
  if ( (_BYTE)v15 )
  {
    sub_A1DB00(&v32);
    v20 = v34;
    v21 = v32;
    if ( v37 || !*(_BYTE *)(sub_8E5480((__int64)&v32) + 51) || (v22 = v20 + v21 + 72, v21 != (unsigned int)v35) )
      v22 = v20 + v21 + 40;
    sub_A1BFE0(v22, v27);
  }
  sub_A1C0C0(&v32);
LABEL_22:
  sub_A1C0C0(v28);
  sub_A1C0C0(v27);
  return v15;
}

