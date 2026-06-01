unsigned __int64 __fastcall sub_79ED40(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r12
  char v9; // dl
  __int64 v10; // rcx
  int v11; // esi
  int v12; // r8d
  __int64 *v13; // rbx
  unsigned int v14; // eax
  _QWORD *v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int64 *v18; // r8
  unsigned __int64 *v19; // rbx
  signed __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 *v25; // r9
  unsigned __int64 *v26; // r10
  __int64 *v27; // rbx
  __int64 v28; // rbp
  unsigned __int64 v29; // r13
  unsigned int v30; // esi
  unsigned __int64 v31; // r14
  __int64 *v32; // r12
  _QWORD *v33; // r13
  unsigned __int64 *v34; // rcx
  _QWORD *v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rsi
  __int64 v38; // rdi
  _QWORD *v39; // r12
  unsigned __int64 v40; // r13
  __int64 v41; // rbp
  __int64 v42; // rsi
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rbp
  __int64 v51; // rsi
  unsigned __int64 v52; // rdx
  unsigned int v53; // edx
  unsigned int v54; // eax
  int v55; // ecx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  int v59; // ecx
  unsigned int v60; // eax
  __int64 v61; // rdx
  int v62; // ecx
  int v63; // edi
  __int64 *v64; // rsi
  char v65; // [rsp+0h] [rbp-88h]
  unsigned __int64 *v66; // [rsp+0h] [rbp-88h]
  unsigned __int64 *v67; // [rsp+0h] [rbp-88h]
  unsigned __int64 *v68; // [rsp+0h] [rbp-88h]
  __int64 *v69; // [rsp+10h] [rbp-78h]
  unsigned __int64 *v70; // [rsp+18h] [rbp-70h]
  unsigned __int64 *v71; // [rsp+20h] [rbp-68h]
  _QWORD *v72; // [rsp+28h] [rbp-60h]
  __int64 v73; // [rsp+30h] [rbp-58h]
  unsigned __int64 *v74; // [rsp+38h] [rbp-50h]
  _QWORD v75[8]; // [rsp+48h] [rbp-40h] BYREF

  v7 = sub_79A2E0(a1);
  if ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0 )
  {
    v7 = sub_793320(v7);
    v8 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
      goto LABEL_3;
  }
  else
  {
    v8 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
      goto LABEL_3;
  }
  v8 = sub_79C6E0((__int64 *)a1, *(_QWORD *)(v7 + 88));
LABEL_3:
  if ( (*(_BYTE *)(a1 + 9) & 2) != 0 )
    sub_79BF40((__int64 *)a1);
  v9 = *(_BYTE *)v8 & 1;
  if ( v9 )
  {
    v10 = v8 + 8;
    v11 = 3;
  }
  else
  {
    v30 = *(_DWORD *)(v8 + 16);
    if ( !v30 )
      goto LABEL_96;
    v10 = *(_QWORD *)(v8 + 8);
    v11 = v30 - 1;
  }
  v12 = 1;
  v13 = nullptr;
  v14 = v11 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v15 = (_QWORD *)(v10 + 16LL * v14);
  v16 = *v15;
  if ( a2 == *v15 )
  {
LABEL_8:
    v17 = v15[1];
    v18 = v15 + 1;
    v19 = v15 + 1;
    v20 = v17 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v17 & 0xFFFFFFFFFFFFFFFCLL) <= 7 )
      goto LABEL_91;
    v21 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v15[1] & 4) != 0 )
    {
      if ( ((v20 >> 2) & 1) == 0 )
        v21 = 0;
      v23 = *(_QWORD *)v21;
      if ( (*(_BYTE *)(*(_QWORD *)v21 + 28LL) & 0x7F) != 0 )
        v23 = sub_793320(v23);
      v22 = *(_QWORD *)(v23 + 88);
    }
    else
    {
      if ( (*(_BYTE *)(v21 + 28) & 0x7F) != 0 )
        v21 = sub_793320(v21);
      v22 = *(_QWORD *)(v21 + 88);
    }
    v72 = v15;
    v24 = 0;
    v25 = v75;
    v75[0] = 0;
    v26 = nullptr;
    v71 = v15 + 1;
    v27 = &a3[a4];
    v73 = a4;
    v28 = v20;
    while ( 1 )
    {
      v29 = v28 & 0xFFFFFFFFFFFFFFF8LL;
      v65 = (v28 >> 2) & 1;
      if ( !v65 )
        break;
      if ( !v29 )
        BUG();
      v31 = *(_QWORD *)v29;
      if ( *(char *)(*(_QWORD *)v29 + 29LL) < 0 )
        goto LABEL_33;
      if ( v27 == a3 )
      {
        *v25 = v28;
LABEL_37:
        v26 = (unsigned __int64 *)v25;
        v28 = *(_QWORD *)(v29 + 8);
        v25 = (__int64 *)(v29 + 8);
      }
      else
      {
LABEL_27:
        v32 = a3;
        v69 = v25;
        v74 = v26;
        v70 = v18;
        while ( (unsigned __int8)(*(_BYTE *)(v31 + 8) & 7) < (unsigned __int8)(*(_BYTE *)(*v32 + 8) & 7)
             || !sub_77A8A0(*v32, v31, 0, v24) )
        {
          if ( v27 == ++v32 )
          {
            v25 = v69;
            v18 = v70;
            *v69 = v28;
            if ( !v28 || !v65 )
            {
              v19 = v71;
              v33 = v72;
              a4 = v73;
              goto LABEL_64;
            }
            goto LABEL_37;
          }
        }
        v25 = v69;
        v26 = v74;
        v18 = v70;
        if ( !v28 || !v65 )
          goto LABEL_38;
LABEL_33:
        v28 = *(_QWORD *)(v29 + 8);
        *(_QWORD *)(v29 + 8) = *(_QWORD *)(v22 + 17336) | 4LL;
        *(_QWORD *)(v22 + 17336) = v29;
      }
    }
    if ( *(char *)(v29 + 29) < 0 )
    {
LABEL_38:
      v19 = v71;
      v33 = v72;
      v34 = v26;
      a4 = v73;
      if ( v26 )
      {
        v35 = (_QWORD *)(*v26 & 0xFFFFFFFFFFFFFFF8LL);
        *v26 = *v35 & 0xFFFFFFFFFFFFFFFBLL;
        v35[1] = *(_QWORD *)(v22 + 17336) | 4LL;
        *(_QWORD *)(v22 + 17336) = v35;
      }
      goto LABEL_40;
    }
    if ( v27 == a3 )
    {
      v19 = v71;
      v33 = v72;
      *v25 = v28;
      a4 = v73;
LABEL_64:
      v34 = (unsigned __int64 *)v25;
LABEL_40:
      v17 = v75[0] | v33[1] & 3LL;
      if ( (v75[0] & 0xFFFFFFFFFFFFFFFCLL) > 7 )
      {
        if ( (v75[0] & 4) == 0 )
          v34 = v18;
        goto LABEL_43;
      }
LABEL_91:
      v34 = nullptr;
      goto LABEL_43;
    }
    v31 = v28 & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_27;
  }
  while ( v16 != -1 )
  {
    if ( v16 == -2 && !v13 )
      v13 = v15;
    v14 = v11 & (v12 + v14);
    v15 = (_QWORD *)(v10 + 16LL * v14);
    v16 = *v15;
    if ( a2 == *v15 )
      goto LABEL_8;
    ++v12;
  }
  if ( !v13 )
    v13 = v15;
  v75[0] = v13;
  if ( v9 )
  {
    v53 = 12;
    v30 = 4;
  }
  else
  {
    v30 = *(_DWORD *)(v8 + 16);
    v53 = 3 * v30;
  }
  v54 = *(_DWORD *)v8;
  v55 = (*(_DWORD *)v8 >> 1) + 1;
  if ( 4 * v55 < v53 )
  {
    if ( v30 >> 3 >= v30 - *(_DWORD *)(v8 + 4) - v55 )
    {
      sub_79E7C0(v8, v30);
      sub_793010(v8, a2, v75);
      v13 = (__int64 *)v75[0];
      v54 = *(_DWORD *)v8;
    }
    goto LABEL_87;
  }
LABEL_96:
  sub_79E7C0(v8, 2 * v30);
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    v58 = v8 + 8;
    v59 = 3;
  }
  else
  {
    v62 = *(_DWORD *)(v8 + 16);
    if ( !v62 )
    {
      v13 = nullptr;
      goto LABEL_99;
    }
    v58 = *(_QWORD *)(v8 + 8);
    v59 = v62 - 1;
  }
  v60 = v59 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v13 = (__int64 *)(v58 + 16LL * v60);
  v61 = *v13;
  if ( a2 != *v13 )
  {
    v63 = 1;
    v64 = nullptr;
    while ( v61 != -1 )
    {
      if ( v61 == -2 && !v64 )
        v64 = v13;
      v60 = v59 & (v63 + v60);
      v13 = (__int64 *)(v58 + 16LL * v60);
      v61 = *v13;
      if ( a2 == *v13 )
        goto LABEL_99;
      ++v63;
    }
    if ( v64 )
    {
      v54 = *(_DWORD *)v8;
      v13 = v64;
      goto LABEL_87;
    }
  }
LABEL_99:
  v54 = *(_DWORD *)v8;
LABEL_87:
  *(_DWORD *)v8 = (2 * (v54 >> 1) + 2) | v54 & 1;
  if ( *v13 != -1 )
    --*(_DWORD *)(v8 + 4);
  *v13 = a2;
  v17 = 0;
  v19 = (unsigned __int64 *)(v13 + 1);
  v34 = nullptr;
  *v19 = 0;
LABEL_43:
  v36 = v17 & 0xFFFFFFFFFFFFFFFDLL;
  *v19 = v36;
  v37 = v36;
  if ( a4 )
  {
    v38 = *a3;
    if ( (*(_BYTE *)(*a3 + 28) & 0x7F) != 0 )
    {
      v67 = v34;
      v56 = sub_793320(v38);
      v34 = v67;
      v38 = v56;
    }
    v39 = *(_QWORD **)(v38 + 88);
    v40 = a3[a4 - 1] & 0xFFFFFFFFFFFFFFFBLL;
    v41 = a4 - 1;
    if ( v41 )
    {
      do
      {
        while ( 1 )
        {
          v44 = v39[2167];
          v45 = a3[--v41];
          if ( v44 )
            break;
          v46 = v39[274];
          v39[284] += 16LL;
          v47 = (v46 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v39[275] >= v47 + 16 && v46 )
          {
            v39[274] = v47 + 16;
          }
          else
          {
            v66 = v34;
            v47 = sub_792ED0((__int64)(v39 + 274), 16, 3);
            v34 = v66;
          }
          *(_QWORD *)(v47 + 8) = 0;
          *(_QWORD *)v47 = v45;
          *(_QWORD *)(v47 + 8) = v40;
          v40 = v47 | 4;
          if ( !v41 )
            goto LABEL_57;
        }
        v42 = *(_QWORD *)(v44 + 8);
        v43 = 0;
        if ( v42 )
        {
          v43 = v42 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v42 & 4) == 0 )
            v43 = 0;
        }
        v39[2167] = v43;
        *(_QWORD *)(v44 + 8) = 0;
        *(_QWORD *)v44 = v45;
        *(_QWORD *)(v44 + 8) = v40;
        v40 = v44 | 4;
      }
      while ( v41 );
LABEL_57:
      v37 = *v19;
    }
    if ( (v37 & 0xFFFFFFFFFFFFFFFCLL) > 7 )
    {
      v49 = v39[2167];
      v50 = *v34 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v49 )
      {
        v51 = *(_QWORD *)(v49 + 8);
        v52 = 0;
        if ( v51 && (v51 & 4) != 0 )
          v52 = v51 & 0xFFFFFFFFFFFFFFF8LL;
        v39[2167] = v52;
        *(_QWORD *)v49 = v50;
        *(_QWORD *)(v49 + 8) = 0;
      }
      else
      {
        v57 = v39[274];
        v39[284] += 16LL;
        v49 = (v57 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v39[275] >= v49 + 16 && v57 )
        {
          v39[274] = v49 + 16;
        }
        else
        {
          v68 = v34;
          v49 = sub_792ED0((__int64)(v39 + 274), 16, 3);
          v34 = v68;
        }
        *(_QWORD *)v49 = v50;
        *(_QWORD *)(v49 + 8) = 0;
      }
      *(_QWORD *)(v49 + 8) = v40;
      *v34 = v49 | 4;
      v37 = *v19;
    }
    else
    {
      v37 = v40 | v37 & 3;
      *v19 = v37;
    }
  }
  return v37 & 0xFFFFFFFFFFFFFFFCLL;
}

