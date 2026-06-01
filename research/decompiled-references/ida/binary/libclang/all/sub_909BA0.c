__int64 __fastcall sub_909BA0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rsi
  unsigned int v15; // r12d
  unsigned int v16; // r12d
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // r15
  __int64 v23; // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  void *v27; // [rsp+10h] [rbp-D8h]
  unsigned int v28; // [rsp+18h] [rbp-D0h]
  char v29; // [rsp+1Ch] [rbp-CCh]
  int v30; // [rsp+20h] [rbp-C8h]
  __int64 v31[3]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-A0h]
  __int64 v33; // [rsp+50h] [rbp-98h]
  int v34; // [rsp+60h] [rbp-88h]
  __int64 v35; // [rsp+70h] [rbp-78h] BYREF
  __int128 v36; // [rsp+78h] [rbp-70h]
  __int64 v37; // [rsp+88h] [rbp-60h]
  __int64 v38; // [rsp+90h] [rbp-58h]
  char v39; // [rsp+98h] [rbp-50h]
  int v40; // [rsp+A0h] [rbp-48h]

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 24);
  v7 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = 0;
  v28 = v7;
  v27 = *(void **)v6;
  v29 = *(_BYTE *)(v6 + 12);
  v30 = *(_DWORD *)(v6 + 16);
  sub_A1A5E0(v5, 24);
  v8 = *(_QWORD *)(a1 + 184);
  v9 = sub_A1A5A0(v8, 56);
  sub_A1C070(v31, v9);
  sub_A1A5E0(v8, 56);
  if ( !v34 )
  {
    v10 = v32;
    v11 = v33;
    v12 = *(_QWORD *)(v32 + 32);
    v13 = v32;
    if ( *(_DWORD *)(v12 + 16) != (_DWORD)v33 && (_DWORD)v33 )
      v14 = *(_QWORD *)(v32 + (unsigned int)v33 + 32);
    else
      v14 = *(_QWORD *)(v32 + 32);
    v15 = 0;
    if ( *(_DWORD *)(v14 + 12) == -1 )
      goto LABEL_24;
    if ( (_DWORD)v4 )
    {
LABEL_11:
      v16 = v11;
      v17 = v11;
      if ( v11 != -1 )
      {
LABEL_12:
        v18 = sub_8E5480((__int64)v31);
        v19 = v4 * *(unsigned int *)(v18 + 8);
        v20 = v19 + 32;
        if ( *(_QWORD *)(v18 + 32) )
          v20 = v19 + 16;
        sub_A1C030(&v35, v13, v16, v17 + v20);
        goto LABEL_15;
      }
      goto LABEL_49;
    }
    v16 = v33;
    if ( (_DWORD)v33 == *(_DWORD *)(v12 + 16) || !(_DWORD)v33 )
      goto LABEL_9;
    v17 = (unsigned int)v33;
    if ( !*(_BYTE *)(*(_QWORD *)(v32 + (unsigned int)v33 + 32) + 51LL) )
      goto LABEL_40;
    if ( (_DWORD)v33 != -1 )
    {
      v4 = 0;
LABEL_38:
      v13 = v10;
      goto LABEL_12;
    }
    goto LABEL_48;
  }
  if ( !(_DWORD)v4 )
  {
    if ( v34 != 1 )
    {
      if ( (unsigned int)(v34 - 2) <= 1 )
        BUG();
      v13 = v32;
      v12 = *(_QWORD *)(v32 + 32);
LABEL_9:
      if ( *(_BYTE *)(v12 + 51) )
      {
        v11 = v33;
        goto LABEL_11;
      }
LABEL_40:
      sub_A1DB00(v31);
      v26 = sub_8FA0E0(v31);
      *(_DWORD *)(v26 + 8) = v28;
      if ( v28 > 0x40 )
        sub_2585B30(v26);
      else
        *(_QWORD *)v26 = v27;
      v15 = 1;
      *(_BYTE *)(v26 + 12) = v29;
      *(_DWORD *)(v26 + 16) = v30;
      goto LABEL_24;
    }
    v25 = v32;
    v4 = 0;
    if ( !*(_BYTE *)(v32 + 51) )
      goto LABEL_40;
    goto LABEL_33;
  }
  if ( v34 == 1 )
  {
    v25 = v32;
LABEL_33:
    v35 = v4;
    v40 = 1;
    v38 = v33;
    v37 = v25;
    v36 = 0;
    goto LABEL_15;
  }
  if ( v34 != 2 )
  {
    v16 = v33;
    if ( (_DWORD)v33 != -1 )
    {
      v10 = v32;
      v17 = (unsigned int)v33;
      goto LABEL_38;
    }
    if ( v34 == 3 )
      BUG();
    v10 = v32;
LABEL_48:
    v12 = *(_QWORD *)(v10 + 32);
    v13 = v10;
LABEL_49:
    sub_A1C030(&v35, v13, 0xFFFFFFFFLL, *(unsigned int *)(v12 + 12));
    goto LABEL_15;
  }
  v35 = v4;
  v40 = 2;
  v37 = v32;
  v38 = 0;
  v39 = 1;
  v36 = 0;
LABEL_15:
  v15 = sub_9D5470(a1, a2, &v35);
  if ( (_BYTE)v15 )
  {
    sub_A1DB00(&v35);
    v21 = v35;
    v22 = v37;
    if ( v40 || !*(_BYTE *)(sub_8E5480((__int64)&v35) + 51) || (v23 = v22 + v21 + 72, v21 != (unsigned int)v38) )
      v23 = v22 + v21 + 40;
    *(_DWORD *)(v23 + 8) = v28;
    if ( v28 > 0x40 )
      sub_2585B30(v23);
    else
      *(_QWORD *)v23 = v27;
    *(_BYTE *)(v23 + 12) = v29;
    *(_DWORD *)(v23 + 16) = v30;
  }
  sub_A1C0C0(&v35);
LABEL_24:
  sub_A1C0C0(v31);
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  return v15;
}

