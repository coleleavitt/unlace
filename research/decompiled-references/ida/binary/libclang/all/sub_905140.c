__int64 __fastcall sub_905140(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  __int64 v6; // rbx
  int v7; // r14d
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
  __int64 v22; // r12
  __int64 v23; // rbp
  _DWORD *v24; // rax
  __int64 v26; // rax
  unsigned int v27; // [rsp+0h] [rbp-88h]
  unsigned int v28; // [rsp+8h] [rbp-80h]
  __int64 v29; // [rsp+10h] [rbp-78h] BYREF
  __int128 v30; // [rsp+18h] [rbp-70h]
  __int64 v31; // [rsp+28h] [rbp-60h]
  __int64 v32; // [rsp+30h] [rbp-58h]
  char v33; // [rsp+38h] [rbp-50h]
  int v34; // [rsp+40h] [rbp-48h]

  v4 = a3;
  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(_DWORD *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
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
      return v15;
    if ( (_DWORD)v4 )
    {
      if ( v12 != -1 )
        goto LABEL_9;
      goto LABEL_29;
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
        v27 = v12;
        v17 = sub_8E5480((__int64)v10);
        v18 = v4 * *(unsigned int *)(v17 + 8);
        v19 = v18 + 32;
        if ( *(_QWORD *)(v17 + 32) )
          v19 = v18 + 16;
        sub_A1C030(&v29, v11, v27, v19 + v27);
        goto LABEL_16;
      }
      goto LABEL_33;
    }
LABEL_30:
    v15 = 1;
    sub_A1DB00(v10);
    *(_DWORD *)sub_8F7480(v10) = v7;
    return v15;
  }
  if ( !(_DWORD)v4 && !*(_BYTE *)(sub_8E5480(v8) + 51) )
    goto LABEL_30;
  if ( v9 == 1 )
  {
    v20 = v10[3];
    v21 = v10[4];
    v29 = v4;
    v34 = 1;
    v32 = v21;
    v31 = v20;
    v30 = 0;
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
      sub_A1C030(&v29, v11, 0xFFFFFFFFLL, *(unsigned int *)(v13 + 12));
      goto LABEL_16;
    }
    v26 = v10[3];
    v29 = v4;
    v34 = 2;
    v31 = v26;
    v32 = 0;
    v33 = 1;
    v30 = 0;
  }
LABEL_16:
  v15 = sub_9D5470(a1, a2, &v29);
  if ( (_BYTE)v15 )
  {
    sub_A1DB00(&v29);
    v22 = v31;
    v23 = v29;
    if ( v34
      || !*(_BYTE *)(sub_8E5480((__int64)&v29) + 51)
      || (v24 = (_DWORD *)(v22 + (unsigned int)v32 + 72), (unsigned int)v32 != v23) )
    {
      v24 = (_DWORD *)(v22 + v23 + 40);
    }
    *v24 = v7;
  }
  sub_A1C0C0(&v29);
  return v15;
}

