unsigned __int64 __fastcall sub_B92CE0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // rsi
  int v10; // ecx
  unsigned int v11; // eax
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rax
  signed __int64 v15; // r12
  unsigned __int64 v16; // rdi
  __int64 v17; // r15
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r13
  __int64 *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  unsigned __int8 v24; // al
  int v25; // eax
  int v26; // eax
  unsigned int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 *v32; // rax
  _QWORD *v33; // r13
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rax
  _QWORD *v36; // rbx
  unsigned __int64 v37; // r12
  __int64 v38; // r14
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 v47; // rax
  _QWORD *v48; // rbx
  _QWORD *v49; // rax
  char v50; // dl
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rbp
  __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  unsigned __int8 v57; // al
  __int64 v58; // rax
  unsigned __int64 *v59; // [rsp+8h] [rbp-B0h]
  __int64 v61; // [rsp+10h] [rbp-A8h]
  _QWORD *v62; // [rsp+20h] [rbp-98h]
  __int64 v63; // [rsp+28h] [rbp-90h]
  __int64 v64; // [rsp+30h] [rbp-88h]
  signed __int64 *v65; // [rsp+38h] [rbp-80h]
  unsigned __int64 *v66; // [rsp+40h] [rbp-78h]
  __int64 *v67; // [rsp+48h] [rbp-70h]
  __int64 v68; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v69[8]; // [rsp+78h] [rbp-40h] BYREF

  v68 = a2;
  v5 = sub_B8C1B0(a1);
  if ( (*(_BYTE *)(v5 + 28) & 0x7F) != 0 )
  {
    v5 = sub_B8C2C0(v5);
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
  v8 = sub_B8EF10((unsigned __int64 *)a1, *(_QWORD *)(v5 + 88));
LABEL_3:
  if ( (*(_BYTE *)(a1 + 9) & 2) != 0 )
    sub_B912C0(a1);
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    v9 = v8 + 8;
    v10 = 3;
  }
  else
  {
    v25 = *(_DWORD *)(v8 + 16);
    v9 = *(_QWORD *)(v8 + 8);
    if ( !v25 )
    {
      v12 = nullptr;
      goto LABEL_34;
    }
    v10 = v25 - 1;
  }
  v11 = v10 & (((unsigned int)v68 >> 9) ^ ((unsigned int)v68 >> 4));
  v12 = (_QWORD *)(v9 + 16LL * v11);
  v13 = *v12;
  if ( v68 == *v12 )
  {
LABEL_8:
    v59 = v12 + 1;
    v14 = v12[1];
    v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
    v16 = v14 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v14 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_94;
    if ( !v15 )
      BUG();
    if ( (v14 & 4) != 0 )
    {
      v47 = *(_QWORD *)v16;
      if ( (*(_BYTE *)(*(_QWORD *)v16 + 28LL) & 0x7F) != 0 )
        v47 = sub_B8C2C0(*(_QWORD *)v16);
      v64 = *(_QWORD *)(v47 + 88);
    }
    else
    {
      if ( (*(_BYTE *)(v16 + 28) & 0x7F) != 0 )
        v16 = sub_B8C2C0(v16);
      v64 = *(_QWORD *)(v16 + 88);
    }
    v62 = v12;
    v69[0] = 0;
    v66 = nullptr;
    v63 = (8 * a4) >> 5;
    v65 = v69;
    v67 = &a3[a4];
LABEL_15:
    while ( 2 )
    {
      v17 = v15 >> 2;
      v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( ((v15 >> 2) & 1) != 0 )
      {
        if ( v18 )
        {
          v19 = *(_QWORD *)v18;
          if ( *(char *)(*(_QWORD *)v18 + 29LL) < 0 )
          {
LABEL_30:
            v15 = *(_QWORD *)(v18 + 8);
            *(_QWORD *)(v18 + 8) = *(_QWORD *)(v64 + 17496) | 4LL;
            *(_QWORD *)(v64 + 17496) = v18;
            continue;
          }
        }
        else
        {
          v19 = 0;
        }
      }
      else
      {
        if ( *(char *)(v18 + 29) < 0 )
          goto LABEL_62;
        v19 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      }
      break;
    }
    if ( v63 > 0 )
    {
      v20 = a3;
      while ( 1 )
      {
        v24 = *(_BYTE *)(v19 + 8) & 7;
        if ( v24 < (unsigned __int8)(*(_BYTE *)(*v20 + 8) & 7) )
        {
          v21 = v20[1];
          if ( v24 < (unsigned __int8)(*(_BYTE *)(v21 + 8) & 7) )
            goto LABEL_21;
        }
        else
        {
          if ( sub_B72D20(*v20, v19) )
            goto LABEL_26;
          v21 = v20[1];
          v24 = *(_BYTE *)(v19 + 8) & 7;
          if ( v24 < (unsigned __int8)(*(_BYTE *)(v21 + 8) & 7) )
            goto LABEL_21;
        }
        if ( sub_B72D20(v21, v19) )
        {
          if ( v67 != v20 + 1 )
            goto LABEL_27;
LABEL_71:
          *v65 = v15;
          if ( (v17 & 1) != 0 && v15 )
          {
            if ( v18 )
            {
              v66 = (unsigned __int64 *)v65;
              v15 = *(_QWORD *)(v18 + 8);
              v65 = (signed __int64 *)(v18 + 8);
              goto LABEL_15;
            }
            v33 = v65;
            v48 = v62;
          }
          else
          {
            v48 = v62;
            v33 = v65;
          }
LABEL_64:
          v50 = v69[0];
          v14 = v69[0] | v48[1] & 3LL;
          v48[1] = v14;
          if ( (v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            if ( (v50 & 4) == 0 )
              v33 = v59;
            goto LABEL_41;
          }
LABEL_94:
          v33 = nullptr;
          goto LABEL_41;
        }
        v24 = *(_BYTE *)(v19 + 8) & 7;
LABEL_21:
        v22 = v20[2];
        if ( v24 >= (unsigned __int8)(*(_BYTE *)(v22 + 8) & 7) )
        {
          if ( sub_B72D20(v22, v19) )
          {
            v20 += 2;
            goto LABEL_26;
          }
          v24 = *(_BYTE *)(v19 + 8) & 7;
        }
        v23 = v20[3];
        if ( v24 >= (unsigned __int8)(*(_BYTE *)(v23 + 8) & 7) && sub_B72D20(v23, v19) )
        {
          v20 += 3;
          goto LABEL_26;
        }
        v20 += 4;
        if ( &a3[4 * v63] == v20 )
        {
          v56 = (8 * a4 - 32 * v63) >> 3;
          goto LABEL_97;
        }
      }
    }
    v56 = (8 * a4) >> 3;
    v20 = a3;
LABEL_97:
    switch ( v56 )
    {
      case 2LL:
        v57 = *(_BYTE *)(v19 + 8) & 7;
        break;
      case 3LL:
        v57 = *(_BYTE *)(v19 + 8) & 7;
        if ( v57 >= (unsigned __int8)(*(_BYTE *)(*v20 + 8) & 7) )
        {
          if ( sub_B72D20(*v20, v19) )
            goto LABEL_26;
          v57 = *(_BYTE *)(v19 + 8) & 7;
        }
        ++v20;
        break;
      case 1LL:
        v57 = *(_BYTE *)(v19 + 8) & 7;
LABEL_101:
        if ( v57 < (unsigned __int8)(*(_BYTE *)(*v20 + 8) & 7) || !sub_B72D20(*v20, v19) )
          goto LABEL_71;
LABEL_26:
        if ( v67 == v20 )
          goto LABEL_71;
LABEL_27:
        if ( v15 && (v17 & 1) != 0 && v18 )
          goto LABEL_30;
LABEL_62:
        v33 = v66;
        v48 = v62;
        if ( v66 )
        {
          v49 = (_QWORD *)(*v66 & 0xFFFFFFFFFFFFFFF8LL);
          *v66 = *v49 & 0xFFFFFFFFFFFFFFFBLL;
          v49[1] = *(_QWORD *)(v64 + 17496) | 4LL;
          *(_QWORD *)(v64 + 17496) = v49;
        }
        goto LABEL_64;
      default:
        goto LABEL_71;
    }
    if ( v57 >= (unsigned __int8)(*(_BYTE *)(*v20 + 8) & 7) )
    {
      if ( sub_B72D20(*v20, v19) )
        goto LABEL_26;
      v57 = *(_BYTE *)(v19 + 8) & 7;
    }
    ++v20;
    goto LABEL_101;
  }
  v6 = 1;
  v7 = 0;
  if ( v13 != -1 )
  {
    while ( 1 )
    {
      if ( v13 == -2 && !v7 )
        v7 = (__int64)v12;
      v11 = v10 & (v6 + v11);
      v12 = (_QWORD *)(v9 + 16LL * v11);
      v13 = *v12;
      if ( v68 == *v12 )
        goto LABEL_8;
      if ( v13 == -1 )
        break;
      v6 = (unsigned int)(v6 + 1);
    }
    if ( v7 )
      v12 = (_QWORD *)v7;
  }
LABEL_34:
  v69[0] = v12;
  v26 = (*(_DWORD *)v8 >> 1) + 1;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    v28 = 12;
    v27 = 4;
  }
  else
  {
    v27 = *(_DWORD *)(v8 + 16);
    v28 = 3 * v27;
  }
  v29 = (unsigned int)(4 * v26);
  if ( (unsigned int)v29 >= (unsigned int)v28 )
  {
    v27 *= 2;
    goto LABEL_109;
  }
  v29 = v27 - (v26 + *(_DWORD *)(v8 + 4));
  v28 = v27 >> 3;
  if ( (unsigned int)v29 <= (unsigned int)v28 )
  {
LABEL_109:
    sub_B928B0(v8, v27, v28, v29, v6, v7);
    sub_B8FEB0(v8, &v68, v69);
    v26 = (*(_DWORD *)v8 >> 1) + 1;
  }
  *(_DWORD *)v8 = *(_DWORD *)v8 & 1 | (2 * v26);
  v30 = v69[0];
  if ( *(_QWORD *)v69[0] != -1 )
    --*(_DWORD *)(v8 + 4);
  v31 = v68;
  *(_QWORD *)(v30 + 8) = 0;
  v32 = (unsigned __int64 *)(v30 + 8);
  v33 = nullptr;
  *(v32 - 1) = v31;
  v59 = v32;
  v14 = 0;
LABEL_41:
  v34 = v14 & 0xFFFFFFFFFFFFFFFDLL;
  *v59 = v14 & 0xFFFFFFFFFFFFFFFDLL;
  if ( a4 )
  {
    v35 = *a3;
    if ( (*(_BYTE *)(*a3 + 28) & 0x7F) != 0 )
      v35 = sub_B8C2C0(*a3);
    v36 = *(_QWORD **)(v35 + 88);
    v37 = a3[a4 - 1] & 0xFFFFFFFFFFFFFFFBLL;
    v38 = a4 - 1;
    if ( a4 != 1 )
    {
      v6 = (__int64)v33;
      do
      {
        while ( 1 )
        {
          v41 = v36[2187];
          v42 = a3[--v38];
          if ( v41 )
            break;
          v43 = v36[294];
          v36[304] += 16LL;
          v44 = (v43 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v36[295] >= v44 + 16 && v43 )
          {
            v36[294] = v44 + 16;
            v45 = (v43 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v61 = v6;
            v45 = sub_986170((__int64)(v36 + 294), 16, 16, 3, v6, v7);
            v6 = v61;
            v44 = v45 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)(v45 + 8) = 0;
          *(_QWORD *)v45 = v42;
          *(_QWORD *)(v45 + 8) = v37;
          v37 = v44 | 4;
          if ( !v38 )
            goto LABEL_55;
        }
        v39 = *(_QWORD *)(v41 + 8);
        v40 = 0;
        if ( v39 && (v39 & 4) != 0 )
          v40 = v39 & 0xFFFFFFFFFFFFFFF8LL;
        v36[2187] = v40;
        *(_QWORD *)(v41 + 8) = 0;
        *(_QWORD *)(v41 + 8) = v37;
        *(_QWORD *)v41 = v42;
        v37 = v41 & 0xFFFFFFFFFFFFFFFBLL | 4;
      }
      while ( v38 );
LABEL_55:
      v33 = (_QWORD *)v6;
      v34 = *v59;
    }
    if ( (v34 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v51 = v36[2187];
      v52 = *v33 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v51 )
      {
        v53 = *(_QWORD *)(v51 + 8);
        v54 = 0;
        if ( v53 && (v53 & 4) != 0 )
          v54 = v53 & 0xFFFFFFFFFFFFFFF8LL;
        v36[2187] = v54;
        *(_QWORD *)v51 = v52;
        v55 = v51 & 0xFFFFFFFFFFFFFFFBLL;
        *(_QWORD *)(v51 + 8) = 0;
      }
      else
      {
        v58 = v36[294];
        v36[304] += 16LL;
        v55 = (v58 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v36[295] >= v55 + 16 && v58 )
        {
          v36[294] = v55 + 16;
          v51 = (v58 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v51 = sub_986170((__int64)(v36 + 294), 16, 16, 3, v6, v7);
          v55 = v51 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v51 = v52;
        *(_QWORD *)(v51 + 8) = 0;
      }
      *(_QWORD *)(v51 + 8) = v37;
      *v33 = v55 | 4;
      v34 = *v59;
    }
    else
    {
      v34 = v37 | v34 & 3;
      *v59 = v34;
    }
  }
  return v34 & 0xFFFFFFFFFFFFFFFCLL;
}
