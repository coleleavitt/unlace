__int64 __fastcall sub_90A320(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // ebp
  unsigned int v17; // ebp
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  char v27; // [rsp+7h] [rbp-D1h]
  __int64 v28; // [rsp+8h] [rbp-D0h]
  __int64 v29; // [rsp+18h] [rbp-C0h]
  __int64 v30[3]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+38h] [rbp-A0h]
  __int64 v32; // [rsp+40h] [rbp-98h]
  int v33; // [rsp+50h] [rbp-88h]
  __int64 v34; // [rsp+60h] [rbp-78h] BYREF
  __int128 v35; // [rsp+68h] [rbp-70h]
  __int64 v36; // [rsp+78h] [rbp-60h]
  __int64 v37; // [rsp+80h] [rbp-58h]
  char v38; // [rsp+88h] [rbp-50h]
  int v39; // [rsp+90h] [rbp-48h]

  v3 = a3;
  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 24);
  v8 = *(_QWORD *)v7;
  v28 = *(_QWORD *)(v7 + 8);
  v27 = *(_BYTE *)(v7 + 16);
  sub_A1A5E0(v6, 24);
  v9 = *(_QWORD *)(a1 + 184);
  v10 = sub_A1A5A0(v9, 56);
  sub_A1C070(v30, v10);
  sub_A1A5E0(v9, 56);
  if ( !v33 )
  {
    v11 = v31;
    LODWORD(v12) = v32;
    v13 = *(_QWORD *)(v31 + 32);
    v14 = v31;
    if ( *(_DWORD *)(v13 + 16) != (_DWORD)v32 && (_DWORD)v32 )
      v15 = *(_QWORD *)(v31 + (unsigned int)v32 + 32);
    else
      v15 = *(_QWORD *)(v31 + 32);
    v16 = 0;
    if ( *(_DWORD *)(v15 + 12) == -1 )
      goto LABEL_22;
    if ( (_DWORD)v3 )
    {
LABEL_11:
      v17 = v12;
      v12 = (unsigned int)v12;
      if ( (_DWORD)v12 != -1 )
      {
LABEL_12:
        v29 = v12;
        v18 = sub_8E9110((__int64)v30) * v3;
        v19 = sub_8E5480((__int64)v30);
        v20 = v18 + 32;
        if ( *(_QWORD *)(v19 + 32) )
          v20 = v18 + 16;
        sub_A1C030(&v34, v14, v17, v29 + v20);
        goto LABEL_15;
      }
      goto LABEL_41;
    }
    v17 = v32;
    if ( (_DWORD)v32 == *(_DWORD *)(v13 + 16) || !(_DWORD)v32 )
      goto LABEL_9;
    v12 = (unsigned int)v32;
    if ( !*(_BYTE *)(*(_QWORD *)(v31 + (unsigned int)v32 + 32) + 51LL) )
      goto LABEL_34;
    if ( (_DWORD)v32 != -1 )
    {
      v3 = 0;
LABEL_33:
      v14 = v11;
      goto LABEL_12;
    }
    goto LABEL_40;
  }
  if ( !(_DWORD)v3 )
  {
    if ( v33 != 1 )
    {
      if ( (unsigned int)(v33 - 2) <= 1 )
        BUG();
      v14 = v31;
      v13 = *(_QWORD *)(v31 + 32);
LABEL_9:
      if ( *(_BYTE *)(v13 + 51) )
      {
        LODWORD(v12) = v32;
        goto LABEL_11;
      }
LABEL_34:
      v16 = 1;
      sub_A1DB00(v30);
      v26 = sub_8FA040(v30);
      *(_QWORD *)v26 = v8;
      *(_QWORD *)(v26 + 8) = v28;
      *(_BYTE *)(v26 + 16) = v27;
      goto LABEL_22;
    }
    v25 = v31;
    v3 = 0;
    if ( !*(_BYTE *)(v31 + 51) )
      goto LABEL_34;
    goto LABEL_28;
  }
  if ( v33 == 1 )
  {
    v25 = v31;
LABEL_28:
    v34 = v3;
    v39 = 1;
    v37 = v32;
    v36 = v25;
    v35 = 0;
    goto LABEL_15;
  }
  if ( v33 != 2 )
  {
    v17 = v32;
    if ( (_DWORD)v32 != -1 )
    {
      v11 = v31;
      v12 = (unsigned int)v32;
      goto LABEL_33;
    }
    if ( v33 == 3 )
      BUG();
    v11 = v31;
LABEL_40:
    v13 = *(_QWORD *)(v11 + 32);
    v14 = v11;
LABEL_41:
    sub_A1C030(&v34, v14, 0xFFFFFFFFLL, *(unsigned int *)(v13 + 12));
    goto LABEL_15;
  }
  v34 = v3;
  v39 = 2;
  v36 = v31;
  v37 = 0;
  v38 = 1;
  v35 = 0;
LABEL_15:
  v16 = sub_9D5470(a1, a2, &v34);
  if ( (_BYTE)v16 )
  {
    sub_A1DB00(&v34);
    v21 = v36;
    v22 = v34;
    if ( v39 || !*(_BYTE *)(sub_8E5480((__int64)&v34) + 51) || (v23 = v21 + v22 + 72, v22 != (unsigned int)v37) )
      v23 = v21 + v22 + 40;
    *(_QWORD *)v23 = v8;
    *(_QWORD *)(v23 + 8) = v28;
    *(_BYTE *)(v23 + 16) = v27;
  }
  sub_A1C0C0(&v34);
LABEL_22:
  sub_A1C0C0(v30);
  return v16;
}

