__int64 __fastcall sub_C5AFC0(char **a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // r14d
  int v6; // ebx
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // r13
  int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r10
  char *v15; // r11
  __int64 v16; // rbx
  __int64 v17; // r14
  int v18; // eax
  void *v19; // rdi
  bool v20; // al
  bool v21; // al
  bool v22; // al
  __int64 result; // rax
  int v24; // eax
  bool v25; // al
  bool v26; // al
  size_t v27; // rbx
  _BYTE *v28; // rax
  _BYTE *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r13
  char *v32; // r12
  _DWORD *v33; // rax
  __int64 v34; // rdx
  int v35; // edi
  __int64 v36; // rsi
  _DWORD *v37; // rdx
  _DWORD *v38; // r8
  __int64 v39; // r8
  char *v40; // rbx
  char *v41; // rsi
  int v42; // eax
  int v43; // eax
  __int64 v44; // [rsp+0h] [rbp-78h]
  void *v45; // [rsp+0h] [rbp-78h]
  void *v46; // [rsp+0h] [rbp-78h]
  __int64 v47; // [rsp+8h] [rbp-70h]
  _DWORD *v48; // [rsp+8h] [rbp-70h]
  char *v49; // [rsp+8h] [rbp-70h]
  __int64 v50; // [rsp+10h] [rbp-68h]
  _DWORD *v51; // [rsp+10h] [rbp-68h]
  __int64 v52; // [rsp+18h] [rbp-60h]
  void *v53; // [rsp+18h] [rbp-60h]
  __int64 v54; // [rsp+18h] [rbp-60h]
  char *v55; // [rsp+20h] [rbp-58h]
  __int64 v56; // [rsp+20h] [rbp-58h]
  char *v57; // [rsp+20h] [rbp-58h]
  char *v58; // [rsp+28h] [rbp-50h]
  __int64 v59; // [rsp+30h] [rbp-48h] BYREF
  int v60; // [rsp+38h] [rbp-40h]

  v4 = *((_DWORD *)a1 + 2);
  v5 = 2 * v4;
  if ( 3 * v4 < (unsigned int)(4 * (*((_DWORD *)a1 + 3) + *((_DWORD *)a1 + 4))) )
  {
    v27 = 88LL * v5;
    v28 = (_BYTE *)sub_186B270(v27);
    v51 = v28;
    v29 = &v28[v27];
    if ( v5 )
    {
      do
      {
        v28[20] &= 0xFCu;
        v28[36] &= 0xFCu;
        v28[52] &= 0xFCu;
        v28[68] &= 0xFCu;
        v28 += 88;
        *((_QWORD *)v28 - 11) = 0;
        *((_DWORD *)v28 - 18) = 0;
        *((_QWORD *)v28 - 8) = 0;
        *((_DWORD *)v28 - 14) = 1;
        *((_QWORD *)v28 - 6) = 0;
        *((_DWORD *)v28 - 10) = 0;
        *((_QWORD *)v28 - 4) = 0;
        *((_DWORD *)v28 - 6) = 1;
        *((_QWORD *)v28 - 2) = 0;
      }
      while ( v28 != v29 );
    }
    v30 = *((unsigned int *)a1 + 2);
    v31 = (__int64)(*a1 + 8);
    v32 = &(*a1)[88 * (unsigned int)v30];
    v33 = &v51[v27 / 4];
    if ( *a1 != v32 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v31 - 4) == 2 )
        {
          v35 = *(_DWORD *)(v31 - 8);
          v36 = 88LL * (v35 & (v5 - 1));
          v37 = &v51[(unsigned __int64)v36 / 4];
          if ( v27 == v36 )
          {
LABEL_54:
            if ( v51 == v37 )
            {
LABEL_62:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v38 = v51;
            while ( v38[1] )
            {
              v38 += 22;
              if ( v37 == v38 )
                goto LABEL_62;
            }
          }
          else
          {
            v38 = &v51[(unsigned __int64)v36 / 4];
            while ( v38[1] )
            {
              v38 += 22;
              if ( v33 == v38 )
                goto LABEL_54;
            }
          }
          v48 = v33;
          *v38 = v35;
          v38[1] = 2;
          sub_C4E060((__int64)(v38 + 2), v31);
          v33 = v48;
          *(_QWORD *)(v39 + 80) = *(_QWORD *)(v31 + 72);
          v34 = v31 + 88;
          if ( v32 == (char *)(v31 + 80) )
          {
LABEL_47:
            v30 = *((unsigned int *)a1 + 2);
            v32 = *a1;
            break;
          }
        }
        else
        {
          v34 = v31 + 88;
          if ( v32 == (char *)(v31 + 80) )
            goto LABEL_47;
        }
        v31 = v34;
      }
    }
    if ( v32 )
    {
      if ( (_DWORD)v30 )
      {
        v40 = v32;
        v49 = &v32[88 * v30];
        do
        {
          v45 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v40 + 48);
          sub_182CBA0(v45, v40 + 64);
          v46 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v40 + 16);
          v41 = v40 + 32;
          v40 += 88;
          sub_182CBA0(v46, v41);
        }
        while ( v40 != v49 );
      }
      sub_186B220(v32);
    }
    *((_DWORD *)a1 + 2) = v5;
    *((_DWORD *)a1 + 4) = 0;
    *a1 = (char *)v51;
  }
  v59 = *(_QWORD *)a2;
  v44 = a2 + 8;
  v6 = sub_182DB30(a2 + 8);
  v60 = v6 + 3 * sub_182DB30(a2 + 24);
  v47 = a2 + 40;
  v7 = sub_182DB30(a2 + 40);
  v8 = sub_182DB30(a2 + 56);
  v9 = sub_17E8B20(&v59, 12, (unsigned int)(v7 + 3 * v8));
  v10 = (__int64)*a1;
  v11 = v9;
  v12 = *((unsigned int *)a1 + 2);
  v13 = 88LL * (v11 & (unsigned int)(v12 - 1));
  v12 *= 88;
  v14 = (__int64)&(*a1)[v13];
  v15 = &(*a1)[v12];
  if ( v13 != v12 )
  {
    v16 = (__int64)&(*a1)[v13];
    v17 = 0;
    while ( 1 )
    {
      v18 = *(_DWORD *)(v16 + 4);
      if ( v18 == 2 )
      {
        if ( *(_DWORD *)v16 == v11 && *(_QWORD *)(v16 + 8) == *(_QWORD *)a2 )
        {
          v19 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v16 + 20) & 1) != 0 || (*(_BYTE *)(a2 + 12) & 1) != 0 )
          {
            v58 = v15;
            v56 = v14;
            v53 = qword_1C7F2C0;
            v42 = sub_182C7B0(qword_1C7F2C0, v16 + 16, v44);
            v19 = v53;
            v14 = v56;
            v15 = v58;
            v20 = v42 == 0;
          }
          else
          {
            v20 = *(_DWORD *)(v16 + 16) == *(_DWORD *)(a2 + 8);
          }
          if ( v20 )
          {
            if ( (*(_BYTE *)(v16 + 36) & 1) != 0 || (*(_BYTE *)(a2 + 28) & 1) != 0 )
            {
              v57 = v15;
              v54 = v14;
              v43 = sub_182C7B0(v19, v16 + 32, a2 + 24);
              v14 = v54;
              v15 = v57;
              v21 = v43 == 0;
            }
            else
            {
              v21 = *(_DWORD *)(v16 + 32) == *(_DWORD *)(a2 + 24);
            }
            if ( v21 )
            {
              v55 = v15;
              v52 = v14;
              v22 = sub_3ED680((__int64)qword_1C7F2C0, v16 + 48, v47);
              v14 = v52;
              v15 = v55;
              if ( v22 )
              {
                sub_C4E060(v16 + 8, a2);
                result = *(_QWORD *)(a2 + 72);
                *(_DWORD *)(v16 + 4) = 2;
                *(_QWORD *)(v16 + 80) = result;
                return result;
              }
            }
          }
        }
      }
      else
      {
        if ( !v18 )
        {
          if ( v17 )
            goto LABEL_32;
          v17 = v16;
          goto LABEL_33;
        }
        v17 = v16;
      }
      v16 += 88;
      if ( v15 == (char *)v16 )
      {
        v10 = (__int64)*a1;
        goto LABEL_24;
      }
    }
  }
  v17 = 0;
  while ( 1 )
  {
LABEL_24:
    if ( v14 == v10 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v24 = *(_DWORD *)(v10 + 4);
    if ( v24 != 2 )
      break;
    if ( *(_DWORD *)v10 == v11 && *(_QWORD *)(v10 + 8) == *(_QWORD *)a2 )
    {
      v50 = v14;
      v25 = sub_3ED680((__int64)qword_1C7F2C0, v10 + 16, v44);
      v14 = v50;
      if ( v25 )
      {
        v26 = sub_3ED680((__int64)qword_1C7F2C0, v10 + 48, v47);
        v14 = v50;
        if ( v26 )
        {
          sub_C4E060(v10 + 8, a2);
          result = *(_QWORD *)(a2 + 72);
          *(_DWORD *)(v10 + 4) = 2;
          *(_QWORD *)(v10 + 80) = result;
          return result;
        }
      }
    }
LABEL_23:
    v10 += 88;
  }
  if ( v24 )
  {
    v17 = v10;
    goto LABEL_23;
  }
  if ( v17 )
LABEL_32:
    --*((_DWORD *)a1 + 4);
  else
    v17 = v10;
LABEL_33:
  sub_C4E060(v17 + 8, a2);
  result = *(_QWORD *)(a2 + 72);
  *(_DWORD *)v17 = v11;
  *(_DWORD *)(v17 + 4) = 2;
  *(_QWORD *)(v17 + 80) = result;
  ++*((_DWORD *)a1 + 3);
  return result;
}

