void __fastcall sub_8EE3A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // rbp
  __int64 v5; // r15
  char *v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r12
  unsigned int v9; // ebx
  __int64 v10; // r12
  int v11; // edx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  _DWORD *v14; // rax
  char *v15; // r12
  __int64 v16; // rbp
  __int64 v17; // r14
  unsigned int v18; // ebx
  unsigned int *v19; // r14
  __int64 v20; // rdx
  unsigned int v21; // r8d
  unsigned int v22; // esi
  unsigned int v23; // r8d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  unsigned int v27; // ebp
  unsigned int v28; // r14d
  int v29; // ebx
  unsigned int v30; // r8d
  bool v31; // al
  unsigned int v32; // r8d
  unsigned int *v33; // rcx
  unsigned int *v34; // rcx
  __int64 v35; // rsi
  unsigned int v36; // edx
  _QWORD *v37; // rax
  unsigned int v38; // eax
  _QWORD *v39; // rax
  __int64 v40; // rdx
  unsigned int *v41; // rdx
  unsigned int v42; // r12d
  unsigned int v43; // ecx
  unsigned int v44; // r12d
  unsigned int v45; // ecx
  __int64 v46; // rax
  _DWORD *v47; // rdx
  _QWORD *v48; // rax
  __int64 v49; // [rsp+8h] [rbp-80h]
  int v50; // [rsp+8h] [rbp-80h]
  unsigned int v51; // [rsp+8h] [rbp-80h]
  unsigned int v52; // [rsp+8h] [rbp-80h]
  unsigned int v53; // [rsp+8h] [rbp-80h]
  __int64 v54; // [rsp+10h] [rbp-78h]
  __int64 v55; // [rsp+18h] [rbp-70h]
  int v56; // [rsp+18h] [rbp-70h]
  char v57; // [rsp+18h] [rbp-70h]
  int v58; // [rsp+18h] [rbp-70h]
  __int64 v59; // [rsp+20h] [rbp-68h]
  int v60; // [rsp+28h] [rbp-60h]
  unsigned int v61; // [rsp+2Ch] [rbp-5Ch]
  __int64 v62[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v59 = a2;
  v54 = *(_QWORD *)(a3 + 8);
  v49 = a3;
  if ( *(int *)(v54 + 64) >> 8 == -1 && *(int *)(v5 + 64) >> 8 == -1 )
    return;
  v60 = -1;
  if ( (a4 & 7) == 3 )
    v60 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF8LL) + 40LL))(a4 & 0xFFFFFFFFFFFFFFF8LL);
  if ( *(_QWORD *)(v5 + 72) || *(_QWORD *)(v54 + 72) )
  {
    v6 = (char *)(v5 + 64);
    if ( *(int *)(v5 + 64) >> 8 != -1 )
    {
      do
      {
        v7 = (unsigned int)*v6;
        if ( *(_BYTE *)(a1[14] + 561LL) )
        {
          if ( (_DWORD)v7 == -1 )
            goto LABEL_113;
          v8 = v59;
          do
          {
            v9 = sub_B39350(v8, (unsigned int)v7);
            if ( v9 != -1 )
              break;
            v8 = *(_QWORD *)(v8 + 80);
          }
          while ( v8 );
          if ( *(_BYTE *)(a1[14] + 561LL) )
          {
            v10 = v49;
            while ( 1 )
            {
              v11 = sub_B39350(v10, (unsigned int)v7);
              if ( v11 != -1 )
                break;
              v10 = *(_QWORD *)(v10 + 80);
              if ( !v10 )
                goto LABEL_39;
            }
          }
          else
          {
            v11 = sub_B39350(v54, (unsigned int)v7);
            if ( v11 == -1 )
              goto LABEL_39;
          }
        }
        else
        {
          v9 = *(int *)v6 >> 8;
          v11 = sub_B39350(v54, (unsigned int)v7);
          if ( v11 == -1 )
          {
            if ( (_DWORD)v7 == -1 )
              goto LABEL_113;
LABEL_39:
            v20 = a1[1084];
            if ( v20 )
            {
              if ( (unsigned int)v7 >= *(_DWORD *)(v20 - 4) )
                v20 = 0;
              else
                v20 = *(_QWORD *)(v20 + 8 * v7);
            }
            v55 = v20;
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 72LL))(v20) )
              sub_8EDF90(a1, v54, v9, *(_DWORD *)(v55 + 8));
            goto LABEL_20;
          }
        }
        if ( v60 != (_DWORD)v7 )
        {
          v12 = (_QWORD *)a1[1096];
          if ( v12 )
          {
            v13 = *((unsigned int *)v12 - 1);
            if ( (_DWORD)v13 == *((_DWORD *)v12 - 2) )
            {
              v21 = 3 * v13 + 1;
              v22 = v21 & 0xFFFFFFFE;
              v23 = v21 >> 1;
              v24 = 4 * (v23 + v22) + 8;
              if ( 12 * (int)v13 + 8 >= (unsigned int)v24 || (unsigned int)v13 >= v23 )
                goto LABEL_112;
              v61 = v23;
              v56 = v11;
              v25 = (unsigned int *)sub_186B300(v12 - 1, v24);
              v11 = v56;
              v12 = v25 + 2;
              *v25 = v61;
              v26 = v25[1];
              a1[1096] = v12;
              v14 = (_DWORD *)v12 + 3 * v26;
            }
            else
            {
              v14 = (_DWORD *)v12 + 3 * v13;
            }
          }
          else
          {
            v58 = v11;
            v37 = (_QWORD *)sub_186B270(0x20u);
            v11 = v58;
            *v37 = 2;
            v12 = v37 + 1;
            a1[1096] = v37 + 1;
            v14 = v37 + 1;
          }
          *v14 = v7;
          v14[1] = v9;
          v14[2] = v11;
          ++*((_DWORD *)v12 - 1);
        }
LABEL_20:
        v6 = *((char **)v6 + 1);
      }
      while ( v6 );
    }
    v15 = (char *)(v54 + 64);
    if ( *(int *)(v54 + 64) >> 8 == -1 )
      return;
    while ( 1 )
    {
      v16 = (unsigned int)*v15;
      if ( *(_BYTE *)(a1[14] + 561LL) )
      {
        if ( (_DWORD)v16 == -1 )
        {
          if ( (unsigned int)sub_B39350(v5, 0xFFFFFFFFLL) == -1 )
          {
            sub_B393A0(v5, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a1 + 1050);
LABEL_113:
            BUG();
          }
        }
        else
        {
          v17 = v49;
          do
          {
            v18 = sub_B39350(v17, (unsigned int)v16);
            if ( v18 != -1 )
              break;
            v17 = *(_QWORD *)(v17 + 80);
          }
          while ( v17 );
          if ( (unsigned int)sub_B39350(v5, (unsigned int)v16) == -1 )
          {
            sub_B393A0(v5, v18, (unsigned int)v16, a1 + 1050);
LABEL_32:
            v19 = (unsigned int *)a1[1084];
            if ( v19 )
            {
              if ( (unsigned int)v16 >= *(v19 - 1) )
                v19 = nullptr;
              else
                v19 = *(unsigned int **)&v19[2 * v16];
            }
            if ( (*(unsigned __int8 (__fastcall **)(unsigned int *))(*(_QWORD *)v19 + 72LL))(v19) )
              sub_8EDF90(a1, v5, v18, v19[2]);
          }
        }
      }
      else
      {
        v18 = *(int *)v15 >> 8;
        if ( (unsigned int)sub_B39350(v5, (unsigned int)v16) == -1 )
        {
          sub_B393A0(v5, v18, (unsigned int)v16, a1 + 1050);
          if ( (_DWORD)v16 == -1 )
            goto LABEL_113;
          goto LABEL_32;
        }
      }
      v15 = *((char **)v15 + 1);
      if ( !v15 )
        return;
    }
  }
  v27 = *(char *)(v54 + 64);
  v28 = *(char *)(v5 + 64);
  v57 = *(_BYTE *)(v54 + 64);
  if ( !*(_BYTE *)(a1[14] + 561LL) )
  {
    v29 = *(int *)(v5 + 64) >> 8;
    goto LABEL_55;
  }
  if ( v28 != -1 )
  {
    while ( 1 )
    {
      v29 = sub_B39350(v59, v28);
      if ( v29 != -1 )
        break;
      v59 = *(_QWORD *)(v59 + 80);
      if ( !v59 )
      {
        if ( *(_BYTE *)(a1[14] + 561LL) )
          goto LABEL_85;
        v30 = *(int *)(v54 + 64) >> 8;
        v31 = v30 != -1;
LABEL_98:
        if ( v29 != -1 || !v31 )
          return;
        *(_DWORD *)(v5 + 64) = (v30 << 8) | *(unsigned __int8 *)(v5 + 64);
        *(_BYTE *)(v5 + 64) = v57;
        if ( v27 == -1 )
        {
LABEL_101:
          v34 = nullptr;
          goto LABEL_83;
        }
LABEL_80:
        v34 = (unsigned int *)a1[1084];
        if ( v34 )
        {
          if ( v27 >= *(v34 - 1) )
            goto LABEL_101;
          v34 = *(unsigned int **)&v34[2 * v27];
        }
LABEL_83:
        v36 = v30;
        v35 = v5;
LABEL_67:
        sub_8EE150(a1, v35, v36, v34);
        return;
      }
    }
    if ( *(_BYTE *)(a1[14] + 561LL) )
    {
      if ( v27 != -1 )
        goto LABEL_77;
      goto LABEL_63;
    }
LABEL_55:
    v50 = *(_DWORD *)(v54 + 64);
    v30 = v50 >> 8;
    v31 = v50 >> 8 != -1;
    if ( v50 >> 8 != -1 && v29 != -1 )
    {
      if ( v28 != v27 )
      {
        sub_B393A0(v5, v30, v27, a1 + 1050);
        v32 = v50 >> 8;
        if ( v27 == -1 )
          goto LABEL_102;
        goto LABEL_59;
      }
      goto LABEL_87;
    }
    if ( v30 != -1 || v29 == -1 )
      goto LABEL_98;
LABEL_92:
    if ( v28 == -1 )
      goto LABEL_93;
LABEL_63:
    v34 = (unsigned int *)a1[1084];
    if ( !v34 )
    {
LABEL_66:
      v35 = v54;
      v36 = v29;
      goto LABEL_67;
    }
    if ( v28 < *(v34 - 1) )
    {
      v34 = *(unsigned int **)&v34[2 * v28];
      goto LABEL_66;
    }
LABEL_93:
    v34 = nullptr;
    goto LABEL_66;
  }
LABEL_85:
  if ( v27 == -1 )
    return;
  v29 = -1;
  do
  {
LABEL_77:
    v38 = sub_B39350(v49, v27);
    v30 = v38;
    if ( v38 != -1 )
    {
      if ( v29 == -1 )
      {
        *(_DWORD *)(v5 + 64) = (v38 << 8) | *(unsigned __int8 *)(v5 + 64);
        *(_BYTE *)(v5 + 64) = v57;
        goto LABEL_80;
      }
      if ( v28 != v27 )
      {
        v51 = v38;
        sub_B393A0(v5, v38, v27, a1 + 1050);
        v32 = v51;
LABEL_59:
        v33 = (unsigned int *)a1[1084];
        if ( !v33 )
          goto LABEL_62;
        if ( v27 < *(v33 - 1) )
        {
          v33 = *(unsigned int **)&v33[2 * v27];
          goto LABEL_62;
        }
LABEL_102:
        v33 = nullptr;
LABEL_62:
        sub_8EE150(a1, v5, v32, v33);
        if ( v28 == -1 )
          goto LABEL_93;
        goto LABEL_63;
      }
LABEL_87:
      if ( v60 == v27 )
        return;
      v39 = (_QWORD *)a1[1096];
      if ( v39 )
      {
        v40 = *((unsigned int *)v39 - 1);
        if ( (_DWORD)v40 == *((_DWORD *)v39 - 2) )
        {
          v42 = 3 * v40 + 1;
          v43 = v42 & 0xFFFFFFFE;
          v44 = v42 >> 1;
          v45 = 4 * (v44 + v43) + 8;
          if ( 12 * (int)v40 + 8 >= v45 || (unsigned int)v40 >= v44 )
          {
LABEL_112:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_8E4EB0(v62, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v62);
            sub_233E40((__int64)v62);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v52 = v30;
          v46 = sub_186B300(v39 - 1, v45);
          v30 = v52;
          v47 = (_DWORD *)v46;
          v39 = (_QWORD *)(v46 + 8);
          *v47 = v44;
          v40 = (unsigned int)v47[1];
          a1[1096] = v39;
        }
      }
      else
      {
        v53 = v30;
        v48 = (_QWORD *)sub_186B270(0x20u);
        v30 = v53;
        v40 = 0;
        *v48 = 2;
        v39 = v48 + 1;
        a1[1096] = v39;
      }
      v41 = (unsigned int *)v39 + 3 * v40;
      *v41 = v27;
      v41[1] = v29;
      v41[2] = v30;
      ++*((_DWORD *)v39 - 1);
      return;
    }
    v49 = *(_QWORD *)(v49 + 80);
  }
  while ( v49 );
  if ( v29 != -1 )
    goto LABEL_92;
}

