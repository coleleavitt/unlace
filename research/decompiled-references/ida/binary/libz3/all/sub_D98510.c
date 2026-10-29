char *__fastcall sub_D98510(__int64 a1, __int64 a2, __int64 a3)
{
  char *v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  unsigned int v9; // r15d
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // edi
  unsigned int v15; // edx
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 *v18; // r8
  __int64 *i; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rsi
  unsigned int v23; // ecx
  __int64 *v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // r11
  __int64 *j; // rax
  __int64 v28; // rcx
  _DWORD *v29; // rax
  __int64 v30; // r9
  char *v31; // r12
  char *v32; // r14
  __int64 v33; // rbp
  __int64 v34; // r15
  int v35; // eax
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  char *v40; // rax
  __int64 *v41; // r13
  __int64 *v42; // r15
  __int64 v43; // rcx
  __int64 *v44; // rax
  char *result; // rax
  char *v47; // [rsp+8h] [rbp-B0h]
  unsigned int v48; // [rsp+18h] [rbp-A0h]
  unsigned int v49; // [rsp+1Ch] [rbp-9Ch]
  unsigned int v50; // [rsp+1Ch] [rbp-9Ch]
  char v51[8]; // [rsp+28h] [rbp-90h] BYREF
  _QWORD v52[2]; // [rsp+30h] [rbp-88h] BYREF
  char *v53; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v54; // [rsp+48h] [rbp-70h]
  __int64 v55; // [rsp+4Ch] [rbp-6Ch]
  __int64 *v56; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v57; // [rsp+68h] [rbp-50h]
  __int64 v58; // [rsp+6Ch] [rbp-4Ch]

  v5 = (char *)sub_186B270(0x80u);
  v55 = 0;
  *(_OWORD *)v5 = 0;
  *((_OWORD *)v5 + 1) = 0;
  *((_OWORD *)v5 + 2) = 0;
  *((_OWORD *)v5 + 3) = 0;
  *((_OWORD *)v5 + 4) = 0;
  *((_OWORD *)v5 + 5) = 0;
  *((_OWORD *)v5 + 6) = 0;
  *((_OWORD *)v5 + 7) = 0;
  v47 = v5;
  v6 = (__int64 *)sub_186B270(0x80u);
  *(_OWORD *)v6 = 0;
  *((_OWORD *)v6 + 1) = 0;
  *((_OWORD *)v6 + 2) = 0;
  *((_OWORD *)v6 + 3) = 0;
  *((_OWORD *)v6 + 4) = 0;
  *((_OWORD *)v6 + 5) = 0;
  *((_OWORD *)v6 + 6) = 0;
  *((_OWORD *)v6 + 7) = 0;
  v58 = 0;
  v52[0] = 0;
  sub_1360C00(v51, a2, v52);
  sub_18572D0(v52);
  sub_1360B80(v51, 1);
  sub_1684300(v52, *(_QWORD *)(a1 + 32));
  v7 = *(_QWORD *)(a2 + 80);
  if ( v7 )
  {
    v48 = 8;
    v8 = 8;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= *(_DWORD *)(v7 - 4) )
      {
LABEL_24:
        v30 = 16 * v8;
        goto LABEL_25;
      }
      v10 = *(_QWORD *)(v7 + 8LL * v9);
      v11 = *(_QWORD *)(a1 + 40);
      v12 = *(__int64 **)(v11 + 40);
      v13 = *(unsigned int *)(v11 + 48);
      v14 = *(_DWORD *)(v10 + 12);
      v15 = v13 - 1;
      v13 *= 16;
      v16 = (__int64 *)((char *)v12 + v13);
      v17 = 16LL * (v14 & v15);
      v18 = &v12[(unsigned __int64)v17 / 8];
      if ( v17 != v13 )
      {
        for ( i = &v12[(unsigned __int64)v17 / 8]; v16 != i; i += 2 )
        {
          v20 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v20 + 12) == v14 && v10 == v20 )
              goto LABEL_56;
          }
          else if ( !v20 )
          {
            goto LABEL_11;
          }
        }
      }
      if ( v12 == v18 )
      {
LABEL_65:
        v20 = 0;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v20 = *v12;
            if ( (unsigned __int64)*v12 > 1 )
              break;
            if ( !v20 )
              goto LABEL_11;
            v12 += 2;
            if ( v18 == v12 )
              goto LABEL_65;
          }
          if ( *(_DWORD *)(v20 + 12) == v14 && v10 == v20 )
            break;
          v12 += 2;
          if ( v18 == v12 )
            goto LABEL_65;
        }
        i = v12;
LABEL_56:
        v20 = i[1];
      }
LABEL_11:
      v21 = *(unsigned int *)(a2 + 32);
      v22 = *(__int64 **)(a2 + 24);
      v23 = v21 - 1;
      v21 *= 24;
      v24 = (__int64 *)((char *)v22 + v21);
      v25 = 24LL * (v14 & v23);
      v26 = &v22[(unsigned __int64)v25 / 8];
      if ( v25 != v21 )
      {
        for ( j = &v22[(unsigned __int64)v25 / 8]; v24 != j; j += 3 )
        {
          v28 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v28 + 12) == v14 && v10 == v28 )
              goto LABEL_53;
          }
          else if ( !v28 )
          {
            goto LABEL_18;
          }
        }
      }
      if ( v22 == v26 )
      {
LABEL_74:
        v28 = 0;
LABEL_18:
        if ( v20 )
          goto LABEL_19;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v28 = *v22;
            if ( (unsigned __int64)*v22 > 1 )
              break;
            if ( !v28 )
              goto LABEL_18;
            v22 += 3;
            if ( v26 == v22 )
              goto LABEL_74;
          }
          if ( *(_DWORD *)(v28 + 12) == v14 && v10 == v28 )
            break;
          v22 += 3;
          if ( v26 == v22 )
            goto LABEL_74;
        }
        j = v22;
LABEL_53:
        v28 = j[2];
        if ( v20 )
        {
LABEL_19:
          if ( !*(_WORD *)(v20 + 4)
            && (v29 = *(_DWORD **)(*(_QWORD *)(v20 + 16) + 24LL)) != nullptr
            && LODWORD(v52[0]) == *v29
            && v29[1] == 1 )
          {
            v50 = v8;
            v56 = v6;
            v57 = v48;
            sub_D97CA0(a1, (__int64)v51, v20, v28, (void **)&v56);
            v8 = v50;
            v6 = v56;
            v48 = v57;
          }
          else
          {
            v54 = v8;
            v53 = v47;
            sub_D97620(a1, (__int64)v51, (__int64 *)v20, v28, (__int64)&v53, (char *)v8);
            v8 = v54;
            v47 = v53;
          }
          goto LABEL_23;
        }
      }
      v49 = v8;
      sub_135F9B0(a3, v10, v28);
      v8 = v49;
LABEL_23:
      v7 = *(_QWORD *)(a2 + 80);
      ++v9;
      if ( !v7 )
        goto LABEL_24;
    }
  }
  v48 = 8;
  v30 = 128;
LABEL_25:
  v31 = &v47[v30];
  v32 = v47;
  if ( v47 != &v47[v30] )
  {
    while ( *(_QWORD *)v32 <= 1u )
    {
      v32 += 16;
      if ( v31 == v32 )
        goto LABEL_36;
    }
    if ( v31 != v32 )
    {
      v33 = *(_QWORD *)v32;
      do
      {
        v34 = *((_QWORD *)v32 + 1);
        v35 = sub_15E1950(*(_QWORD *)(a1 + 32));
        sub_1349280(v34, v35, v36, v37, v38, v39);
        sub_135F980(a3, v33, v34);
        v40 = v32 + 16;
        if ( v31 == v32 + 16 )
          break;
        while ( 1 )
        {
          v33 = *(_QWORD *)v40;
          v32 = v40;
          if ( *(_QWORD *)v40 > 1u )
            break;
          v40 += 16;
          if ( v31 == v40 )
            goto LABEL_36;
        }
      }
      while ( v31 != v40 );
    }
  }
LABEL_36:
  v41 = v6;
  v42 = &v6[2 * v48];
  if ( v6 != v42 )
  {
    while ( (unsigned __int64)*v41 <= 1 )
    {
      v41 += 2;
      if ( v42 == v41 )
        goto LABEL_47;
    }
    if ( v42 != v41 )
    {
      v43 = *v41;
      do
      {
        sub_135F9B0(a3, *(_QWORD *)(v43 + 16), v41[1]);
        v44 = v41 + 2;
        if ( v42 == v41 + 2 )
          break;
        while ( 1 )
        {
          v43 = *v44;
          v41 = v44;
          if ( (unsigned __int64)*v44 > 1 )
            break;
          v44 += 2;
          if ( v42 == v44 )
            goto LABEL_47;
        }
      }
      while ( v42 != v44 );
    }
  }
LABEL_47:
  sub_13606C0(v51);
  if ( v6 )
    sub_186B220(v6);
  result = v47;
  if ( v47 )
    return (char *)sub_186B220(v47);
  return result;
}

