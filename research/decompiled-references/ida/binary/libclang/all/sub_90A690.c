__int64 __fastcall sub_90A690(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // [rsp+0h] [rbp-118h]
  __int64 v28; // [rsp+8h] [rbp-110h]
  __int64 v29[3]; // [rsp+10h] [rbp-108h] BYREF
  __int64 v30; // [rsp+28h] [rbp-F0h]
  __int64 v31; // [rsp+30h] [rbp-E8h]
  int v32; // [rsp+40h] [rbp-D8h]
  __int64 v33; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+58h] [rbp-C0h]
  __int64 v35; // [rsp+68h] [rbp-B0h]
  __int64 v36; // [rsp+70h] [rbp-A8h]
  char v37; // [rsp+78h] [rbp-A0h]
  int v38; // [rsp+80h] [rbp-98h]
  _BYTE v39[56]; // [rsp+90h] [rbp-88h] BYREF
  __int64 v40; // [rsp+C8h] [rbp-50h]
  int v41; // [rsp+D0h] [rbp-48h]

  v4 = a3;
  v6 = *(_QWORD *)(a1 + 184);
  v7 = sub_A1A5A0(v6, 72);
  sub_A1C070(v39, v7);
  v40 = *(_QWORD *)(v7 + 56);
  v41 = *(_DWORD *)(v7 + 64);
  sub_A1A5E0(v6, 72);
  v8 = *(_QWORD *)(a1 + 184);
  v9 = sub_A1A5A0(v8, 56);
  sub_A1C070(v29, v9);
  sub_A1A5E0(v8, 56);
  if ( !v32 )
  {
    v10 = v30;
    LODWORD(v11) = v31;
    v12 = *(_QWORD *)(v30 + 32);
    v13 = v30;
    if ( *(_DWORD *)(v12 + 16) != (_DWORD)v31 && (_DWORD)v31 )
      v14 = *(_QWORD *)(v30 + (unsigned int)v31 + 32);
    else
      v14 = *(_QWORD *)(v30 + 32);
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
        v28 = v11;
        v17 = sub_8E9110((__int64)v29) * v4;
        v18 = sub_8E5480((__int64)v29);
        v19 = v17 + 32;
        if ( *(_QWORD *)(v18 + 32) )
          v19 = v17 + 16;
        sub_A1C030(&v33, v13, v16, v28 + v19);
        goto LABEL_15;
      }
      goto LABEL_41;
    }
    v16 = v31;
    if ( (_DWORD)v31 == *(_DWORD *)(v12 + 16) || !(_DWORD)v31 )
      goto LABEL_9;
    v11 = (unsigned int)v31;
    if ( !*(_BYTE *)(*(_QWORD *)(v30 + (unsigned int)v31 + 32) + 51LL) )
      goto LABEL_34;
    if ( (_DWORD)v31 != -1 )
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
    if ( v32 != 1 )
    {
      if ( (unsigned int)(v32 - 2) <= 1 )
        BUG();
      v13 = v30;
      v12 = *(_QWORD *)(v30 + 32);
LABEL_9:
      if ( *(_BYTE *)(v12 + 51) )
      {
        LODWORD(v11) = v31;
        goto LABEL_11;
      }
LABEL_34:
      sub_A1DB00(v29);
      v26 = sub_8FA090(v29);
      sub_A1BFE0(v26, v39);
      *(_QWORD *)(v26 + 56) = v40;
      *(_DWORD *)(v26 + 64) = v41;
      v15 = 1;
      goto LABEL_22;
    }
    v25 = v30;
    v4 = 0;
    if ( !*(_BYTE *)(v30 + 51) )
      goto LABEL_34;
    goto LABEL_28;
  }
  if ( v32 == 1 )
  {
    v25 = v30;
LABEL_28:
    v33 = v4;
    v38 = 1;
    v36 = v31;
    v35 = v25;
    v34 = 0;
    goto LABEL_15;
  }
  if ( v32 != 2 )
  {
    v16 = v31;
    if ( (_DWORD)v31 != -1 )
    {
      v10 = v30;
      v11 = (unsigned int)v31;
      goto LABEL_33;
    }
    if ( v32 == 3 )
      BUG();
    v10 = v30;
LABEL_40:
    v12 = *(_QWORD *)(v10 + 32);
    v13 = v10;
LABEL_41:
    sub_A1C030(&v33, v13, 0xFFFFFFFFLL, *(unsigned int *)(v12 + 12));
    goto LABEL_15;
  }
  v33 = v4;
  v38 = 2;
  v35 = v30;
  v36 = 0;
  v37 = 1;
  v34 = 0;
LABEL_15:
  v15 = sub_9D5470(a1, a2, &v33);
  if ( (_BYTE)v15 )
  {
    sub_A1DB00(&v33);
    v20 = v35;
    v21 = v33;
    if ( v38
      || (v27 = v35, v22 = sub_8E5480((__int64)&v33), v20 = v27, !*(_BYTE *)(v22 + 51))
      || (v23 = v27 + v21 + 72, v21 != (unsigned int)v36) )
    {
      v23 = v20 + v21 + 40;
    }
    sub_A1BFE0(v23, v39);
    *(_QWORD *)(v23 + 56) = v40;
    *(_DWORD *)(v23 + 64) = v41;
  }
  sub_A1C0C0(&v33);
LABEL_22:
  sub_A1C0C0(v29);
  sub_A1C0C0(v39);
  return v15;
}

