__int64 __fastcall sub_12AC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // r14
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  _DWORD *v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  _DWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // r13
  __int64 v23; // rax
  __int64 v24; // r12
  _QWORD *v25; // rax
  __int64 v26; // r13
  __int64 v27; // r13
  __int64 v28; // r15
  __int64 v29; // rbx
  int v30; // edx
  __int64 v31; // r15
  __int64 v32; // r13
  _QWORD *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // r15
  __int64 v37; // rbx
  __int64 v38; // rcx
  void *v39; // rax
  char *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v44; // [rsp+18h] [rbp-90h]
  _QWORD *v45; // [rsp+18h] [rbp-90h]
  __int64 v46; // [rsp+18h] [rbp-90h]
  size_t n; // [rsp+20h] [rbp-88h]
  const void **v48; // [rsp+28h] [rbp-80h]
  int v49; // [rsp+30h] [rbp-78h] BYREF
  _QWORD *v50; // [rsp+38h] [rbp-70h]
  _BYTE v51[16]; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v52[6]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v53; // [rsp+68h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v3 = sub_29E10(24);
  *(_QWORD *)v3 = 0;
  v4 = (__int64 *)v3;
  *(_OWORD *)(v3 + 8) = 0;
  sub_11590((__int64)&v49, a2);
  if ( v49 == 3 )
  {
    v24 = sub_29E10(24);
    if ( v49 != 3 )
    {
      if ( !byte_7BCA0 )
        sub_2A3D0(1282, a2);
      BUG();
    }
    v25 = v50;
    *(_QWORD *)v24 = 0;
    *(_OWORD *)(v24 + 8) = 0;
    v26 = v25[1];
    v45 = v25;
    if ( v26 )
    {
      v34 = sub_29E10(40 * v26);
      *(_QWORD *)v24 = v34;
      v35 = v34;
      v36 = 0;
      *(_QWORD *)(v24 + 16) = v26;
      while ( 1 )
      {
        v37 = 40 * v36 + v35;
        v38 = *v45 + 40 * v36;
        *(_QWORD *)v37 = 0;
        *(_OWORD *)(v37 + 8) = 0;
        if ( *(_QWORD *)(v38 + 8) )
        {
          v48 = (const void **)v38;
          n = *(_QWORD *)(v38 + 8);
          v39 = (void *)sub_29E10(n);
          *(_QWORD *)v37 = v39;
          *(_QWORD *)(v37 + 16) = n;
          memcpy(v39, *v48, n);
          v38 = (__int64)v48;
          *(_QWORD *)(v37 + 8) = n;
        }
        *(_DWORD *)(v37 + 24) = 0;
        sub_21A60(v37 + 24, v38 + 24);
        if ( v26 == ++v36 )
          break;
        v35 = *(_QWORD *)v24;
      }
      *(_QWORD *)(v24 + 8) = v26;
    }
    v27 = v4[1];
    v46 = *v4;
    if ( v27 )
    {
      v28 = *v4;
      v29 = 0;
      while ( !*(_QWORD *)(v28 + 8) || strcmp(*(const char **)v28, "contact_info") )
      {
        ++v29;
        v28 += 40;
        if ( v27 == v29 )
          goto LABEL_43;
      }
    }
    else
    {
LABEL_43:
      if ( v4[2] < (unsigned __int64)(v27 + 1) )
      {
        v46 = sub_29E60(v4, v46, v27 + 1, 40);
        v27 = v4[1];
        *v4 = v46;
      }
      v28 = v46 + 40 * v27;
      *(_QWORD *)v28 = 0;
      *(_OWORD *)(v28 + 8) = 0;
      *(_DWORD *)(v28 + 24) = 0;
      *(_QWORD *)(v28 + 32) = 0;
      ++v4[1];
      v40 = *(char **)v28;
      if ( *(_QWORD *)(v28 + 16) <= 0xCu )
      {
        v42 = sub_29E60(v28, v40, 13, 1);
        *(_QWORD *)v28 = v42;
        v40 = (char *)v42;
      }
      *(_QWORD *)(v28 + 8) = 13;
      qmemcpy(v40, "contact_info", 12);
      *(_BYTE *)(*(_QWORD *)v28 + 12LL) = 0;
    }
    v30 = *(_DWORD *)(v28 + 24);
    v31 = v28 + 24;
    if ( v30 )
      sub_218D0(v31);
    *(_DWORD *)v31 = 3;
    *(_QWORD *)(v31 + 8) = v24;
  }
  v5 = operator new(0x18u);
  *(_QWORD *)v5 = 0;
  v6 = (__int64 *)v5;
  v7 = *(_QWORD *)(a2 + 48);
  *(_OWORD *)(v5 + 8) = 0;
  v8 = v7 + 176LL * *(_QWORD *)(a2 + 56);
  while ( v8 != v7 )
  {
    sub_11CA0((__int64)v51, v7);
    v12 = *v6;
    v13 = v6[2];
    if ( (unsigned __int64)v51 < *v6 || (unsigned __int64)v51 >= v12 + 16 * v13 )
    {
      v14 = v6[1];
      if ( v13 < v14 + 1 )
      {
        v16 = sub_29E60(v6, v12, v14 + 1, 16);
        *v6 = v16;
        v12 = v16;
        v14 = v6[1];
      }
      v15 = (_DWORD *)(v12 + 16 * v14);
      *v15 = 0;
      sub_21A60(v15, v51);
    }
    else
    {
      v52[0] = 0;
      sub_21A60(v52, v51);
      v9 = v6[1];
      v10 = *v6;
      if ( v6[2] < (unsigned __int64)(v9 + 1) )
      {
        v23 = sub_29E60(v6, v10, v9 + 1, 16);
        *v6 = v23;
        v10 = v23;
        v9 = v6[1];
      }
      v11 = (_DWORD *)(v10 + 16 * v9);
      *v11 = 0;
      sub_21A60(v11, v52);
      sub_218D0(v52);
    }
    ++v6[1];
    v7 += 176;
    sub_218D0(v51);
  }
  v17 = v4[1];
  v44 = *v4;
  if ( !v17 )
  {
LABEL_31:
    if ( v4[2] < (unsigned __int64)(v17 + 1) )
    {
      v44 = sub_29E60(v4, v44, v17 + 1, 40);
      v17 = v4[1];
      *v4 = v44;
    }
    v32 = v44 + 40 * v17;
    *(_QWORD *)v32 = 0;
    *(_OWORD *)(v32 + 8) = 0;
    *(_DWORD *)(v32 + 24) = 0;
    *(_QWORD *)(v32 + 32) = 0;
    ++v4[1];
    v33 = *(_QWORD **)v32;
    if ( *(_QWORD *)(v32 + 16) <= 8u )
    {
      v41 = sub_29E60(v32, v33, 9, 1);
      *(_QWORD *)v32 = v41;
      v33 = (_QWORD *)v41;
    }
    *(_QWORD *)(v32 + 8) = 9;
    v21 = v32 + 24;
    *v33 = 0x7365736E6563696CLL;
    *(_BYTE *)(*(_QWORD *)(v21 - 24) + 8LL) = 0;
    if ( !*(_DWORD *)v21 )
      goto LABEL_19;
LABEL_20:
    sub_218D0(v21);
    goto LABEL_19;
  }
  v18 = *v4;
  v19 = 0;
  while ( !*(_QWORD *)(v18 + 8) || strcmp(*(const char **)v18, "licenses") )
  {
    ++v19;
    v18 += 40;
    if ( v17 == v19 )
      goto LABEL_31;
  }
  v20 = *(_DWORD *)(v18 + 24);
  v21 = v18 + 24;
  if ( v20 )
    goto LABEL_20;
LABEL_19:
  *(_QWORD *)(v21 + 8) = v6;
  *(_DWORD *)v21 = 4;
  *(_DWORD *)a1 = 3;
  *(_QWORD *)(a1 + 8) = v4;
  sub_218D0(&v49);
  return a1;
}

