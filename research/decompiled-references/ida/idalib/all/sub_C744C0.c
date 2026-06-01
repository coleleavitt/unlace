__int64 __fastcall sub_C744C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned __int8 v11; // al
  unsigned __int8 *v12; // rbp
  unsigned int v13; // r14d
  __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 *v17; // rbx
  __int64 v18; // rax
  unsigned __int8 *v19; // rbp
  unsigned int v20; // r13d
  __int64 v21; // rax
  unsigned __int8 *v22; // rdi
  __int64 v23; // r13
  unsigned int v24; // eax
  unsigned __int8 v25; // r13
  __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  __int64 v28; // rbx
  unsigned int v29; // ebp
  __int64 v30; // r15
  void *v31; // rdi
  unsigned int v32; // eax
  unsigned __int8 v33; // r14
  __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  __int64 v36; // rbp
  unsigned int v37; // r15d
  __int64 v38; // rax
  __int64 v39; // rsi
  unsigned int v40; // eax
  char v41; // bp
  __int64 v42; // rdx
  unsigned __int64 v43; // rdx
  __int64 v44; // rbx
  unsigned int v45; // r14d
  __int64 v46; // r15
  void *v47; // rdi
  void *v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // [rsp+8h] [rbp-50h]
  __int64 v51; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v52; // [rsp+18h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 16);
  v10 = sub_C72E70(a1, v8, a3, a4, a5, a6);
  if ( !(_BYTE)v10 )
    return v10;
  v11 = *(_BYTE *)(a2 + 2) >> 3;
  if ( v11 == 7 )
  {
    v19 = (unsigned __int8 *)a1[1];
    v20 = *v19;
    if ( !(_BYTE)v20 )
    {
      v21 = sub_21F90D0(a1, v8, v9);
      v22 = v19 + 40;
      v23 = v21;
      if ( *((_QWORD *)v19 + 5) == v21 )
        sub_21FFF70(v22);
      else
        sub_21FA410(v22);
      v15 = (_QWORD *)(a1[1] + 64LL);
      if ( *v15 != v23 )
        goto LABEL_7;
      goto LABEL_19;
    }
    v32 = *((_DWORD *)v19 + 4);
    v33 = v19[20];
    v52 = v32;
    if ( v32 > 0x40 )
    {
      sub_2205510(&v51);
      v32 = v52;
      if ( v52 > 0x40 )
      {
        sub_2205FC0(&v51, v19 + 8);
        goto LABEL_34;
      }
      v34 = v51;
    }
    else
    {
      v34 = *((_QWORD *)v19 + 1);
    }
    v35 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v32) & ~v34;
    if ( !v32 )
      v35 = 0;
    v51 = v35;
LABEL_34:
    sub_2205900(&v51);
    v36 = a1[1];
    v37 = v52;
    v38 = v51;
    if ( *(_DWORD *)(v36 + 16) > 0x40u )
    {
      v48 = *(void **)(v36 + 8);
      if ( v48 )
      {
        v50 = v51;
        operator delete[](v48);
        v38 = v50;
      }
    }
    *(_QWORD *)(v36 + 8) = v38;
    v39 = a1[1];
    *(_DWORD *)(v36 + 16) = v37;
    v40 = *(_DWORD *)(v39 + 32);
    *(_BYTE *)(v36 + 20) = v33;
    v41 = *(_BYTE *)(v39 + 36);
    v52 = v40;
    if ( v40 > 0x40 )
    {
      v49 = v39 + 24;
      sub_2205510(&v51);
      v40 = v52;
      if ( v52 > 0x40 )
      {
        sub_2205FC0(&v51, v49);
LABEL_40:
        sub_2205900(&v51);
        v44 = a1[1];
        v45 = v52;
        v46 = v51;
        if ( *(_DWORD *)(v44 + 32) > 0x40u )
        {
          v47 = *(void **)(v44 + 24);
          if ( v47 )
            operator delete[](v47);
        }
        *(_QWORD *)(v44 + 24) = v46;
        *(_DWORD *)(v44 + 32) = v45;
        *(_BYTE *)(v44 + 36) = v41;
        return v20;
      }
      v42 = v51;
    }
    else
    {
      v42 = *(_QWORD *)(v39 + 24);
    }
    v43 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v40) & ~v42;
    if ( !v40 )
      v43 = 0;
    v51 = v43;
    goto LABEL_40;
  }
  if ( v11 <= 7u )
  {
    if ( v11 == 6 )
      return v10;
  }
  else
  {
    if ( v11 == 8 )
    {
      v12 = (unsigned __int8 *)a1[1];
      v13 = *v12;
      if ( !(_BYTE)v13 )
      {
        v14 = sub_21F90D0(a1, v8, v9);
        v15 = v12 + 64;
        if ( *((_QWORD *)v12 + 8) != v14 )
        {
LABEL_7:
          sub_21FA410(v15);
          return v10;
        }
LABEL_19:
        sub_21FFF70(v15);
        return v10;
      }
      v24 = *((_DWORD *)v12 + 8);
      v25 = v12[36];
      v52 = v24;
      if ( v24 > 0x40 )
      {
        sub_2205510(&v51);
        v24 = v52;
        if ( v52 > 0x40 )
        {
          sub_2205FC0(&v51, v12 + 24);
LABEL_25:
          sub_2205900(&v51);
          v28 = a1[1];
          v29 = v52;
          v30 = v51;
          if ( *(_DWORD *)(v28 + 32) > 0x40u )
          {
            v31 = *(void **)(v28 + 24);
            if ( v31 )
              operator delete[](v31);
          }
          *(_QWORD *)(v28 + 24) = v30;
          *(_DWORD *)(v28 + 32) = v29;
          *(_BYTE *)(v28 + 36) = v25;
          return v13;
        }
        v26 = v51;
      }
      else
      {
        v26 = *((_QWORD *)v12 + 3);
      }
      v27 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v24) & ~v26;
      if ( !v24 )
        v27 = 0;
      v51 = v27;
      goto LABEL_25;
    }
    if ( v11 == 12 )
      return v10;
  }
  v17 = (__int64 *)sub_E33C10(*a1, a2, 108, 0);
  v18 = sub_EEC8C0(a2);
  if ( v17 )
  {
    v51 = v18;
    LOBYTE(v52) = 1;
    sub_AEC610(v17, &v51);
  }
  return 0;
}
