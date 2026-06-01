__int64 __fastcall sub_90AA30(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v5; // r12
  _QWORD *v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // r12d
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdi
  _QWORD *v31; // [rsp+8h] [rbp-F0h]
  __int64 v32; // [rsp+8h] [rbp-F0h]
  __int64 v34; // [rsp+18h] [rbp-E0h]
  __int64 v35[4]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v36[3]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A0h]
  __int64 v38; // [rsp+60h] [rbp-98h]
  int v39; // [rsp+70h] [rbp-88h]
  __int64 v40; // [rsp+80h] [rbp-78h] BYREF
  __int128 v41; // [rsp+88h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-60h]
  __int64 v43; // [rsp+A0h] [rbp-58h]
  char v44; // [rsp+A8h] [rbp-50h]
  int v45; // [rsp+B0h] [rbp-48h]

  v3 = a3;
  v5 = *(_QWORD *)(a1 + 184);
  v6 = (_QWORD *)sub_A1A5A0(v5, 24);
  v7 = *v6;
  v31 = v6;
  v11 = sub_2575D20(v5, 24, v8);
  if ( v7 == v11 )
    sub_257D000(v35, v31, v9, v10);
  else
    sub_2576960(v35, v31);
  sub_A1A5E0(v5, 24);
  v12 = *(_QWORD *)(a1 + 184);
  v13 = sub_A1A5A0(v12, 56);
  sub_A1C070(v36, v13);
  sub_A1A5E0(v12, 56);
  if ( !v39 )
  {
    v27 = v37;
    LODWORD(v16) = v38;
    v15 = *(_QWORD *)(v37 + 32);
    v14 = v37;
    if ( *(_DWORD *)(v15 + 16) != (_DWORD)v38 && (_DWORD)v38 )
      v28 = *(_QWORD *)(v37 + (unsigned int)v38 + 32);
    else
      v28 = *(_QWORD *)(v37 + 32);
    v21 = 0;
    if ( *(_DWORD *)(v28 + 12) == -1 )
      goto LABEL_22;
    if ( (_DWORD)v3 )
    {
LABEL_10:
      v17 = v16;
      v16 = (unsigned int)v16;
      if ( (_DWORD)v16 != -1 )
      {
LABEL_11:
        v34 = v16;
        v18 = sub_8E9110((__int64)v36) * v3;
        v19 = sub_8E5480((__int64)v36);
        v20 = v18 + 32;
        if ( *(_QWORD *)(v19 + 32) )
          v20 = v18 + 16;
        sub_A1C030(&v40, v14, v17, v34 + v20);
        goto LABEL_14;
      }
      goto LABEL_48;
    }
    v17 = v38;
    if ( (_DWORD)v38 == *(_DWORD *)(v15 + 16) || !(_DWORD)v38 )
      goto LABEL_8;
    v16 = (unsigned int)v38;
    if ( !*(_BYTE *)(*(_QWORD *)(v37 + (unsigned int)v38 + 32) + 51LL) )
      goto LABEL_41;
    if ( (_DWORD)v38 != -1 )
    {
      v3 = 0;
LABEL_34:
      v14 = v27;
      goto LABEL_11;
    }
LABEL_47:
    v15 = *(_QWORD *)(v27 + 32);
    v14 = v27;
LABEL_48:
    sub_A1C030(&v40, v14, 0xFFFFFFFFLL, *(unsigned int *)(v15 + 12));
    goto LABEL_14;
  }
  if ( !(_DWORD)v3 )
  {
    if ( v39 != 1 )
    {
      if ( (unsigned int)(v39 - 2) <= 1 )
        BUG();
      v14 = v37;
      v15 = *(_QWORD *)(v37 + 32);
LABEL_8:
      if ( *(_BYTE *)(v15 + 51) )
      {
        LODWORD(v16) = v38;
        goto LABEL_10;
      }
LABEL_41:
      sub_A1DB00(v36);
      v30 = sub_8F8D80(v36);
      if ( v11 == v35[0] )
        sub_257CF50(v30, v35);
      else
        sub_25768A0(v30, v35);
      v21 = 1;
      goto LABEL_22;
    }
    v29 = v37;
    v3 = 0;
    if ( !*(_BYTE *)(v37 + 51) )
      goto LABEL_41;
    goto LABEL_39;
  }
  if ( v39 == 1 )
  {
    v29 = v37;
LABEL_39:
    v40 = v3;
    v45 = 1;
    v43 = v38;
    v42 = v29;
    v41 = 0;
    goto LABEL_14;
  }
  if ( v39 != 2 )
  {
    v17 = v38;
    if ( (_DWORD)v38 != -1 )
    {
      v27 = v37;
      v16 = (unsigned int)v38;
      goto LABEL_34;
    }
    if ( v39 == 3 )
      BUG();
    v27 = v37;
    goto LABEL_47;
  }
  v40 = v3;
  v45 = 2;
  v42 = v37;
  v43 = 0;
  v44 = 1;
  v41 = 0;
LABEL_14:
  v21 = sub_9D5470(a1, a2, &v40);
  if ( (_BYTE)v21 )
  {
    sub_A1DB00(&v40);
    v22 = v42;
    v23 = v40;
    if ( v45
      || (v32 = v42, v24 = sub_8E5480((__int64)&v40), v22 = v32, !*(_BYTE *)(v24 + 51))
      || (v25 = v32 + v23 + 72, v23 != (unsigned int)v43) )
    {
      v25 = v22 + v23 + 40;
    }
    if ( v11 == v35[0] )
      sub_257CF50(v25, v35);
    else
      sub_25768A0(v25, v35);
  }
  sub_A1C0C0(&v40);
LABEL_22:
  sub_A1C0C0(v36);
  sub_5FF3B0(v35);
  return v21;
}

