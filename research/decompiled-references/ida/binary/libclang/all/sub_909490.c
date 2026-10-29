__int64 __fastcall sub_909490(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rcx
  unsigned int v15; // r12d
  unsigned int v16; // r12d
  __int64 v17; // rcx
  __int64 v18; // rbx
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rbp
  __int64 v23; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // [rsp+8h] [rbp-D0h]
  void *v28; // [rsp+10h] [rbp-C8h]
  unsigned int v29; // [rsp+18h] [rbp-C0h]
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

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 16);
  v7 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = 0;
  v29 = v7;
  v28 = *(void **)v6;
  sub_A1A5E0(v5, 16);
  v8 = *(_QWORD *)(a1 + 184);
  v9 = sub_A1A5A0(v8, 56);
  sub_A1C070(v30, v9);
  sub_A1A5E0(v8, 56);
  if ( !v33 )
  {
    v10 = v31;
    v11 = v32;
    v12 = *(_QWORD *)(v31 + 32);
    v13 = v31;
    if ( *(_DWORD *)(v12 + 16) != (_DWORD)v32 && (_DWORD)v32 )
      v14 = *(_QWORD *)(v31 + (unsigned int)v32 + 32);
    else
      v14 = *(_QWORD *)(v31 + 32);
    v15 = 0;
    if ( *(_DWORD *)(v14 + 12) == -1 )
      goto LABEL_23;
    if ( (_DWORD)v4 )
    {
LABEL_11:
      v16 = v11;
      v17 = v11;
      if ( v11 != -1 )
      {
LABEL_12:
        v27 = v17;
        v18 = sub_8E9110((__int64)v30) * v4;
        v19 = *(_QWORD *)(sub_8E5480((__int64)v30) + 32) == 0;
        v20 = v18 + 32;
        if ( !v19 )
          v20 = v18 + 16;
        sub_A1C030(&v34, v13, v16, v20 + v27);
        goto LABEL_15;
      }
      goto LABEL_48;
    }
    v16 = v32;
    if ( (_DWORD)v32 == *(_DWORD *)(v12 + 16) || !(_DWORD)v32 )
      goto LABEL_9;
    v17 = (unsigned int)v32;
    if ( !*(_BYTE *)(*(_QWORD *)(v31 + (unsigned int)v32 + 32) + 51LL) )
      goto LABEL_39;
    if ( (_DWORD)v32 != -1 )
    {
      v4 = 0;
LABEL_37:
      v13 = v10;
      goto LABEL_12;
    }
    goto LABEL_47;
  }
  if ( !(_DWORD)v4 )
  {
    if ( v33 != 1 )
    {
      if ( (unsigned int)(v33 - 2) <= 1 )
        BUG();
      v13 = v31;
      v12 = *(_QWORD *)(v31 + 32);
LABEL_9:
      if ( *(_BYTE *)(v12 + 51) )
      {
        v11 = v32;
        goto LABEL_11;
      }
LABEL_39:
      sub_A1DB00(v30);
      v26 = sub_8F8D30(v30);
      *(_DWORD *)(v26 + 8) = v29;
      if ( v29 > 0x40 )
        sub_2585B30(v26);
      else
        *(_QWORD *)v26 = v28;
      v15 = 1;
      goto LABEL_23;
    }
    v25 = v31;
    v4 = 0;
    if ( !*(_BYTE *)(v31 + 51) )
      goto LABEL_39;
    goto LABEL_32;
  }
  if ( v33 == 1 )
  {
    v25 = v31;
LABEL_32:
    v34 = v4;
    v39 = 1;
    v37 = v32;
    v36 = v25;
    v35 = 0;
    goto LABEL_15;
  }
  if ( v33 != 2 )
  {
    v16 = v32;
    if ( (_DWORD)v32 != -1 )
    {
      v10 = v31;
      v17 = (unsigned int)v32;
      goto LABEL_37;
    }
    if ( v33 == 3 )
      BUG();
    v10 = v31;
LABEL_47:
    v12 = *(_QWORD *)(v10 + 32);
    v13 = v10;
LABEL_48:
    sub_A1C030(&v34, v13, 0xFFFFFFFFLL, *(unsigned int *)(v12 + 12));
    goto LABEL_15;
  }
  v34 = v4;
  v39 = 2;
  v36 = v31;
  v37 = 0;
  v38 = 1;
  v35 = 0;
LABEL_15:
  v15 = sub_9D5470(a1, a2, &v34);
  if ( (_BYTE)v15 )
  {
    sub_A1DB00(&v34);
    v21 = v36;
    v22 = v34;
    if ( v39 || !*(_BYTE *)(sub_8E5480((__int64)&v34) + 51) || (v23 = v21 + v22 + 72, v22 != (unsigned int)v37) )
      v23 = v21 + v22 + 40;
    *(_DWORD *)(v23 + 8) = v29;
    if ( v29 > 0x40 )
      sub_2585B30(v23);
    else
      *(_QWORD *)v23 = v28;
  }
  sub_A1C0C0(&v34);
LABEL_23:
  sub_A1C0C0(v30);
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  return v15;
}

