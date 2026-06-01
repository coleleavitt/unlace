char __fastcall sub_15F2730(__int64 a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rcx
  char result; // al
  __int64 *v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int16 v25; // dx
  __int64 v26; // r13
  __int64 v27; // rax
  _QWORD *v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rcx
  _QWORD *v31; // rbp
  unsigned __int64 v32; // rax
  __int64 v33; // r12
  unsigned __int8 v34; // al
  int v35; // ecx
  __int64 v36; // rdx
  char v37; // r15
  int v38; // r13d
  char v39; // r14
  unsigned __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // [rsp+0h] [rbp-78h]
  char v47; // [rsp+0h] [rbp-78h]
  bool v48; // [rsp+8h] [rbp-70h]
  int v49; // [rsp+8h] [rbp-70h]
  char v50; // [rsp+Eh] [rbp-6Ah]
  char v51; // [rsp+Fh] [rbp-69h]
  __int64 v52; // [rsp+10h] [rbp-68h]
  unsigned __int64 v53; // [rsp+18h] [rbp-60h]
  unsigned __int64 v54; // [rsp+28h] [rbp-50h]

  v5 = a3;
  v6 = a1;
  v7 = a2;
  *a3 = 0;
  *(_DWORD *)(a4 + 8) = 0;
  v8 = *(_QWORD *)(a1 + 248);
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 != *(_QWORD *)(v8 + 19080) )
  {
    if ( *(_QWORD *)(v8 + 19088) != v9 )
    {
LABEL_3:
      v10 = (unsigned __int16 *)sub_BFB9F0(v7);
      v13 = *v10;
      LOWORD(v13) = v13 & 0x1FF;
      if ( (_WORD)v13 == 71 )
      {
        v14 = *((_QWORD *)v10 + 2);
        if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 34 <= 5 )
        {
          if ( (unsigned int)sub_B770E0(v14, a2) )
            return 1;
          v19 = *(_QWORD *)(*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          v43 = (unsigned int)*(unsigned __int8 *)(v19 + 16) - 25;
          if ( (unsigned int)v43 > 1 )
            v19 = sub_F63050(v19, a2, v43, v15);
LABEL_14:
          *v5 = *(_QWORD *)(v19 + 24);
          return 1;
        }
      }
      v17 = (__int64 *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v18 = (__int64 *)(sub_F68450(*v17, a2, v13, v11, v12) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v18 )
      {
        v19 = *v18;
        v20 = *(unsigned __int8 *)(v19 + 16);
        v21 = (unsigned int)(v20 - 25);
        if ( (unsigned int)v21 <= 1 )
          goto LABEL_12;
        v22 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25;
        if ( (unsigned int)v22 <= 1 )
        {
          v19 = sub_F63050(v19, a2, v22, v21);
          if ( v19 )
            goto LABEL_53;
        }
      }
      v19 = *v17;
      v20 = *(unsigned __int8 *)(*v17 + 16);
      v23 = (unsigned int)(v20 - 25);
      if ( (unsigned int)v23 <= 1 )
        goto LABEL_12;
      v42 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25;
      if ( (unsigned int)v42 <= 1 )
      {
        v19 = sub_F63050(*v17, a2, v42, v23);
        if ( v19 )
        {
LABEL_53:
          LOBYTE(v20) = *(_BYTE *)(v19 + 16);
LABEL_12:
          if ( (_BYTE)v20 == 26 )
          {
            if ( *(_WORD *)(v19 + 22) )
              return 1;
            goto LABEL_14;
          }
        }
      }
      return 0;
    }
    v27 = sub_BFB9F0(a2);
    if ( (*(_WORD *)v27 & 0x1FF) != 0x17 )
      goto LABEL_38;
    v28 = (_QWORD *)(v27 + 80);
    v50 = 1;
    v29 = v27 + 80 + 8LL * *(unsigned int *)(v27 + 4);
    if ( v29 == v27 + 80 )
      goto LABEL_38;
    goto LABEL_21;
  }
  v24 = sub_BFB9F0(a2);
  v25 = *(_WORD *)v24 & 0x1FF;
  if ( v25 == 4 )
  {
    v26 = *(_QWORD *)(v24 + 16);
    v24 = sub_BFB9F0(v26);
    if ( v26 == v24 )
    {
      if ( *(_QWORD *)(v26 + 40) )
        return 0;
    }
    else if ( !v24 )
    {
      goto LABEL_3;
    }
    v25 = *(_WORD *)v24 & 0x1FF;
  }
  if ( v25 != 24 )
  {
    v28 = (_QWORD *)(v24 + 80);
    v50 = 0;
    v29 = v24 + 80 + 8LL * *(unsigned int *)(v24 + 4);
    if ( v24 + 80 != v29 )
      goto LABEL_21;
    return (*v5 & 0xFFFFFFFFFFFFFFF0LL) != 0;
  }
  v28 = (_QWORD *)(v24 + 64);
  v29 = v24 + 64 + 8LL * *(unsigned int *)(v24 + 4);
  if ( v24 + 64 == v29 )
    return (*v5 & 0xFFFFFFFFFFFFFFF0LL) != 0;
  v50 = 0;
LABEL_21:
  v52 = v6;
  v30 = 0;
  v53 = a2;
  v31 = v28;
  v48 = 0;
  v51 = 0;
  v46 = v5;
  while ( 1 )
  {
    a2 = *(unsigned int *)(a4 + 12);
    v32 = *v31 & 0xFFFFFFFFFFFFFFF8LL | 3;
    if ( v30 + 1 > a2 )
    {
      a2 = a4 + 16;
      v54 = *v31 & 0xFFFFFFFFFFFFFFF8LL | 3;
      sub_2237220(a4, a4 + 16, v30 + 1, 8);
      v30 = *(unsigned int *)(a4 + 8);
      v32 = v54;
    }
    *(_QWORD *)(*(_QWORD *)a4 + 8 * v30) = v32;
    ++*(_DWORD *)(a4 + 8);
    if ( !v50 )
    {
      v33 = *v31 & 0xFFFFFFFFFFFFFFF8LL;
      v34 = *(_BYTE *)(v33 + 28) & 0x7F;
      v35 = v34;
      if ( ((v34 + 52) & 0x7Fu) <= 1 || (unsigned int)v34 - 53 <= 1 )
      {
        v33 = sub_B72ED0(*v31 & 0xFFFFFFFFFFFFFFF8LL);
        v35 = *(_BYTE *)(v33 + 28) & 0x7F;
      }
      if ( (unsigned int)(v35 - 34) <= 5 && !(unsigned int)sub_B770E0(v33, a2) )
      {
        if ( (*v46 & 0xFFFFFFFFFFFFFFF0LL) == 0 || v51 || v48 && (sub_B753F0((_BYTE *)v33) || sub_B754A0((_BYTE *)v33)) )
        {
          v44 = *(_QWORD *)(*(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          v45 = (unsigned int)*(unsigned __int8 *)(v44 + 16) - 25;
          if ( (unsigned int)v45 > 1 )
            v44 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v33 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v36, v45);
          a2 = (unsigned __int64)v46;
          *v46 = *(_QWORD *)(v44 + 24);
          v48 = sub_B753F0((_BYTE *)v33);
          if ( !v48 )
            v48 = sub_B754A0((_BYTE *)v33);
        }
        else
        {
          v51 = 1;
          *v46 = 0;
        }
      }
    }
    if ( (_QWORD *)v29 == ++v31 )
      break;
    v30 = *(unsigned int *)(a4 + 8);
  }
  v6 = v52;
  v7 = v53;
  v5 = v46;
  if ( !v50 )
    return (*v5 & 0xFFFFFFFFFFFFFFF0LL) != 0;
LABEL_38:
  if ( (*(_DWORD *)v7 & 0x10000) != 0 )
    goto LABEL_3;
  v49 = *(_DWORD *)(v6 + 11200);
  v37 = *(_BYTE *)(v6 + 12592);
  v38 = *(_DWORD *)(*(_QWORD *)(v6 + 264) + 204LL);
  v47 = *(_BYTE *)(v6 + 10024);
  v39 = *(_BYTE *)(v6 + 11248);
  *(_BYTE *)(v6 + 12592) = 1;
  *(_BYTE *)(v6 + 11248) = 1;
  *(_BYTE *)(v6 + 10024) = 1;
  v40 = sub_1C04E00(v6, 0, v7, 0, 0, 0, 0, 0, 0, 0);
  result = 0;
  if ( v40 > 1 )
  {
    *v5 = *(_QWORD *)((v40 & 0xFFFFFFFFFFFFFFFELL) + 8);
    result = 1;
  }
  v41 = *(_QWORD *)(v6 + 264);
  *(_BYTE *)(v6 + 10024) = v47;
  *(_DWORD *)(v6 + 11200) = v49;
  *(_BYTE *)(v6 + 12592) = v37;
  *(_BYTE *)(v6 + 11248) = v39;
  if ( *(_DWORD *)(v41 + 204) == 5 )
    *(_BYTE *)(v41 + 194) = 1;
  if ( v38 )
    v38 = 3;
  *(_DWORD *)(v41 + 204) = v38;
  return result;
}
