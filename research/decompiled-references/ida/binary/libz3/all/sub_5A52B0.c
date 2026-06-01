__int64 __fastcall sub_5A52B0(__int64 a1, __int64 *a2, int a3)
{
  bool v5; // zf
  _QWORD *v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // r10
  int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rbp
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rbx
  int v17; // eax
  unsigned int *v18; // rdi
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  unsigned int *v22; // rdi
  __int64 v23; // rax
  int v24; // eax
  _QWORD *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  _DWORD *v28; // rdx
  unsigned int v29; // r8d
  _DWORD *v30; // rsi
  __int64 v31; // r8
  _DWORD *v32; // rdi
  _DWORD *v33; // rax
  int v34; // ecx
  char *v35; // rbx
  __int64 v36; // rbp
  int v38; // eax
  __int64 v40; // [rsp+10h] [rbp-68h]
  __int64 v41; // [rsp+10h] [rbp-68h]
  __int64 v42; // [rsp+18h] [rbp-60h]
  __int64 v43; // [rsp+28h] [rbp-50h] BYREF
  void *s2; // [rsp+30h] [rbp-48h] BYREF
  char *v45; // [rsp+38h] [rbp-40h] BYREF

  v5 = *a2 == 0;
  v45 = nullptr;
  if ( v5 || (s2 = nullptr, sub_52CD90(&s2, a2), (v6 = s2) == nullptr) )
  {
    v6 = nullptr;
    v43 = 0;
    v9 = sub_59FE30((__int64)&v43, 0);
  }
  else
  {
    v7 = *((_DWORD *)s2 - 1);
    v43 = 0;
    sub_52CD90(&v43, &s2);
    v9 = sub_59FE30((__int64)&v43, v7);
    if ( v8 )
      sub_186B220((void *)(v8 - 8));
  }
  v10 = *(unsigned int *)(a1 + 96);
  v11 = *(_QWORD *)(a1 + 88);
  v12 = v10 - 1;
  v10 *= 24;
  v13 = v11 + v10;
  v14 = 24LL * (v9 & v12);
  v15 = v11 + v14;
  if ( v14 != v10 )
  {
    v16 = v11 + v14;
    while ( 1 )
    {
      v17 = *(_DWORD *)(v16 + 4);
      if ( v17 != 2 )
      {
        if ( !v17 )
          goto LABEL_27;
        goto LABEL_8;
      }
      if ( *(_DWORD *)v16 != v9 )
        goto LABEL_8;
      v18 = *(unsigned int **)(v16 + 8);
      if ( v18 )
      {
        v19 = *(v18 - 1);
        if ( v6 )
          goto LABEL_13;
        if ( !(_DWORD)v19 )
          goto LABEL_28;
LABEL_8:
        v16 += 24;
        if ( v13 == v16 )
          break;
      }
      else
      {
        if ( !v6 )
        {
          v6 = (_QWORD *)v16;
          goto LABEL_29;
        }
        v19 = 0;
LABEL_13:
        if ( (_DWORD)v19 != *((_DWORD *)v6 - 1) )
          goto LABEL_8;
        v42 = v13;
        v40 = v15;
        v20 = memcmp(v18, v6, 8 * v19);
        v15 = v40;
        v13 = v42;
        if ( !v20 )
          goto LABEL_28;
        v16 += 24;
        if ( v42 == v16 )
          break;
      }
    }
  }
  while ( v15 != v11 )
  {
    v21 = *(_DWORD *)(v11 + 4);
    if ( v21 != 2 )
    {
      if ( !v21 )
        break;
      goto LABEL_19;
    }
    if ( *(_DWORD *)v11 == v9 )
    {
      v22 = *(unsigned int **)(v11 + 8);
      if ( v22 )
      {
        v23 = *(v22 - 1);
        if ( !v6 )
        {
          if ( !(_DWORD)v23 )
            goto LABEL_26;
          goto LABEL_19;
        }
      }
      else
      {
        if ( !v6 )
        {
          v6 = (_QWORD *)v11;
          goto LABEL_29;
        }
        v23 = 0;
      }
      if ( (_DWORD)v23 == *((_DWORD *)v6 - 1) )
      {
        v41 = v15;
        v24 = memcmp(v22, v6, 8 * v23);
        v15 = v41;
        if ( !v24 )
        {
LABEL_26:
          v16 = v11;
          goto LABEL_28;
        }
      }
    }
LABEL_19:
    v11 += 24;
  }
LABEL_27:
  v16 = 0;
  if ( v6 )
  {
LABEL_28:
    v25 = v6 - 1;
    v6 = (_QWORD *)v16;
    sub_186B220(v25);
  }
LABEL_29:
  v26 = v6[2];
  v27 = *(unsigned int *)(v26 + 8);
  v28 = *(_DWORD **)v26;
  v29 = v27 - 1;
  v27 *= 32;
  v30 = (_DWORD *)(*(_QWORD *)v26 + v27);
  v31 = 32LL * (a3 & v29);
  v32 = (_DWORD *)(*(_QWORD *)v26 + v31);
  v33 = v32;
  if ( v31 == v27 )
  {
LABEL_40:
    while ( v32 != v28 )
    {
      v38 = v28[1];
      if ( v38 == 2 )
      {
        if ( a3 == *v28 && a3 == v28[2] )
        {
          v33 = v28;
          goto LABEL_36;
        }
      }
      else if ( !v38 )
      {
        break;
      }
      v28 += 8;
    }
LABEL_60:
    BUG();
  }
  while ( 1 )
  {
    v34 = v33[1];
    if ( v34 != 2 )
    {
      if ( !v34 )
        goto LABEL_60;
      goto LABEL_32;
    }
    if ( a3 == *v33 && a3 == v33[2] )
      break;
LABEL_32:
    v33 += 8;
    if ( v30 == v33 )
      goto LABEL_40;
  }
LABEL_36:
  if ( !*((_QWORD *)v33 + 3) )
    return sub_5A4FB0(a1, a2, nullptr, v33[4]);
  LODWORD(s2) = v33[4];
  v45 = nullptr;
  sub_5A77C0(&v45, v33 + 6);
  v35 = v45;
  v36 = sub_5A4FB0(a1, a2, v45, (int)s2);
  if ( v35 )
    sub_186B220(v35 - 8);
  return v36;
}

