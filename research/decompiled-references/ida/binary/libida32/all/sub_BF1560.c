void __fastcall sub_BF1560(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 *i; // rbx
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r12
  _QWORD *v11; // rdx
  int v12; // esi
  __int64 *v13; // r12
  char v14; // r15
  __int64 v15; // rax
  unsigned int v16; // edx
  void *v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r15
  __int64 v20; // rdx
  unsigned int v21; // eax
  void *v22; // rdx
  void *v23; // rcx
  __int64 v24; // rdi
  __int16 v25; // ax
  void *v26; // [rsp+10h] [rbp-98h] BYREF
  unsigned int v27; // [rsp+18h] [rbp-90h]
  char v28; // [rsp+1Ch] [rbp-8Ch]
  void *v29; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-80h]
  char v31; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v32; // [rsp+30h] [rbp-78h] BYREF
  char v33; // [rsp+34h] [rbp-74h]
  void *v34; // [rsp+38h] [rbp-70h]
  unsigned int v35; // [rsp+40h] [rbp-68h]
  char v36; // [rsp+44h] [rbp-64h]

  v6 = a4;
  i = a1;
  v8 = (_QWORD *)*a1;
  if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    v6 = *(_QWORD *)(a2 + 8);
  v9 = sub_A4E300(v8, v6);
  if ( !v9 || (unsigned int)*(unsigned __int8 *)(v9 + 16) - 2 > 1 )
    BUG();
  v10 = *(_QWORD *)(v9 + 32);
  v11 = *(_QWORD **)(v9 + 40);
  if ( (*(_BYTE *)(v9 + 19) & 2) != 0 )
  {
LABEL_39:
    if ( *((_DWORD *)v11 + 2) <= 0x40u )
      v11 = (_QWORD *)*v11;
    else
      v11 = *(_QWORD **)*v11;
  }
  v12 = (int)v11;
  if ( *(_DWORD *)(a2 + 16) <= (unsigned int)v11 )
    v12 = *(_DWORD *)(a2 + 16);
  v33 &= ~1u;
  v32 = 0;
  sub_A2D6C0((__int64)&v32, v12, (int)v11);
  sub_A2BFE0(a3, (__int64)&v32);
  if ( v32 > 1 )
    sub_A2BBA0((int *)&v32);
  v13 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = sub_F41620(*v13);
  v27 = sub_A73FE0(*i, *v13);
  if ( v27 > 0x40 )
    sub_21E1730(&v26, 0, 0);
  else
    v26 = nullptr;
  v15 = *(unsigned int *)(a3 + 16);
  v11 = (_QWORD *)*(unsigned int *)(a3 + 20);
  v28 = v14;
  if ( (_DWORD)v15 != (_DWORD)v11 )
  {
    v16 = v27;
    v30 = v27;
    if ( v27 > 0x40 )
    {
      sub_21E17D0(&v29);
      v14 = v28;
      v15 = *(unsigned int *)(a3 + 16);
      v16 = v30;
      v17 = v29;
    }
    else
    {
      v17 = v26;
      v29 = v26;
    }
    v35 = v16;
    v33 &= ~1u;
    v18 = *(_QWORD *)(a3 + 8);
    v31 = v14;
    v32 = 2;
    v30 = 0;
    v34 = v17;
    v36 = v14;
    sub_A2BFE0(v18 + 56 * v15, (__int64)&v32);
    if ( v32 > 1 )
      sub_A2BBA0((int *)&v32);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
    v11 = (_QWORD *)*(unsigned int *)(a3 + 16);
  }
  if ( (_DWORD)v11 )
  {
    v19 = (unsigned int)((_DWORD)v11 - 1);
    v10 = 0;
    for ( i = nullptr; ; i = (__int64 *)((char *)i + 1) )
    {
      v25 = (*(_WORD *)(a2 + 2) >> 6) & 7;
      if ( ((*(_WORD *)(a2 + 2) >> 6) & 7) == 2 )
      {
        v20 = *(unsigned __int16 *)(a2 + 2LL * (_QWORD)i + 4LL * *(unsigned int *)(a2 + 4) + 20);
      }
      else if ( (_BYTE)v25 == 4 )
      {
        v20 = *(unsigned int *)(a2 + 4LL * ((_QWORD)i + *(unsigned int *)(a2 + 4)) + 20);
      }
      else
      {
        if ( (_BYTE)v25 != 1 )
          goto LABEL_39;
        v20 = *((unsigned __int8 *)i + 4 * *(unsigned int *)(a2 + 4) + a2 + 20);
      }
      v21 = v27;
      if ( v27 <= 0x40 )
        break;
      *(_QWORD *)v26 = v20;
      memset((char *)v26 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v21 + 63) >> 6) + 0x1FFFFFFF));
      v21 = v27;
      v30 = v27;
      if ( v27 <= 0x40 )
        goto LABEL_28;
      sub_21E17D0(&v29);
      v21 = v30;
      v23 = v29;
LABEL_29:
      v24 = *(_QWORD *)(a3 + 8);
      v35 = v21;
      v33 &= ~1u;
      v31 = v28;
      v32 = 2;
      v30 = 0;
      v34 = v23;
      v36 = v28;
      sub_A2BFE0(v10 + v24, (__int64)&v32);
      if ( v32 > 1 )
        sub_A2BBA0((int *)&v32);
      if ( v30 > 0x40 && v29 )
        operator delete[](v29);
      v10 += 56;
      if ( i == (__int64 *)v19 )
        goto LABEL_45;
    }
    v22 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v27) & v20);
    if ( !v27 )
      v22 = nullptr;
    v26 = v22;
LABEL_28:
    v23 = v26;
    v29 = v26;
    goto LABEL_29;
  }
LABEL_45:
  if ( v27 > 0x40 && v26 )
    operator delete[](v26);
}

