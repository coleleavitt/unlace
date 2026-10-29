__int64 __fastcall sub_928FC0(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbp
  _QWORD *v3; // r12
  void *v4; // r14
  void *v5; // r14
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  size_t v11; // rdi
  unsigned int *v12; // rax
  int *v13; // r13
  unsigned int *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rdx
  int *v17; // rsi
  int *i; // rax
  int v19; // ecx
  char v20; // di
  __int64 v21; // rcx
  char v22; // di
  __int64 v23; // rcx
  char v24; // di
  __int64 v25; // rcx
  char v26; // di
  __int64 v27; // rcx
  __int64 v28; // rax
  int *v29; // r12
  void *v30; // r14
  void *v31; // r14
  int *v32; // rsi
  __int64 v33; // r13
  void *v34; // rdi
  __int64 v35; // r12
  _QWORD *v36; // r15
  _QWORD *v37; // r14
  __int64 v38; // rbp
  void *v39; // rax
  int v40; // esi
  int v41; // eax
  void *v42; // rdi
  int v43; // eax
  int v44; // eax
  _QWORD *v45; // rsi
  char v46; // dl
  bool v47; // al
  unsigned __int64 v48; // r14
  _QWORD *v49; // rbp
  char **exception; // rbx
  unsigned int *v51; // [rsp+0h] [rbp-78h]
  unsigned int v52; // [rsp+8h] [rbp-70h]
  __int64 v53; // [rsp+8h] [rbp-70h]
  void *v54; // [rsp+8h] [rbp-70h]
  void *v55; // [rsp+8h] [rbp-70h]
  int v57; // [rsp+18h] [rbp-60h]
  __int64 v58[11]; // [rsp+20h] [rbp-58h] BYREF

  result = a1[4];
  v2 = (_QWORD *)a1[50];
  if ( !result )
  {
    if ( !v2 )
      return result;
    result = *((unsigned int *)v2 - 1);
    v57 = 0;
    v52 = 0;
    if ( !(_DWORD)result )
      return result;
LABEL_4:
    v3 = &v2[8 * result];
    do
    {
      v4 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v2 + 4);
      sub_182CBA0(v4, v2 + 6);
      v5 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v2);
      v6 = v2 + 2;
      v2 += 8;
      sub_182CBA0(v5, v6);
    }
    while ( v2 != v3 );
    result = (__int64)a1;
    v2 = (_QWORD *)a1[50];
    goto LABEL_7;
  }
  v52 = *(_DWORD *)(result - 4);
  v57 = v52;
  if ( !v2 )
  {
    result = v52;
    if ( !v52 )
      return result;
    goto LABEL_9;
  }
  result = *((unsigned int *)v2 - 1);
  if ( (_DWORD)result )
    goto LABEL_4;
LABEL_7:
  *((_DWORD *)v2 - 1) = 0;
  if ( v52 )
  {
    if ( v2 )
    {
LABEL_10:
      while ( 1 )
      {
        v8 = *((_DWORD *)v2 - 2);
        v9 = v52;
        if ( v8 >= v52 )
          break;
        while ( 1 )
        {
          v10 = (3 * v8 + 1) >> 1;
          v11 = (v10 << 6) + 8;
          if ( (v8 << 6) + 8 >= (unsigned int)v11 || v8 >= v10 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_91CD50(v58, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v58);
            sub_233E40((__int64)v58);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v12 = (unsigned int *)sub_186B270(v11);
          v51 = v12;
          v2 = v12 + 2;
          v13 = (int *)a1[50];
          v14 = v12;
          if ( !v13 )
            break;
          v15 = (unsigned int)*(v13 - 1);
          v16 = v2;
          v14[1] = v15;
          v17 = &v13[16 * v15];
          for ( i = v13; v17 != i; *(v16 - 1) = v27 )
          {
            v19 = *i;
            v20 = *((_BYTE *)i + 4);
            i += 16;
            v16 += 8;
            *((_DWORD *)v16 - 16) = v19;
            *((_BYTE *)v16 - 60) = v20 & 3 | *((_BYTE *)v16 - 60) & 0xFC;
            v21 = *((_QWORD *)i - 7);
            *((_QWORD *)i - 7) = 0;
            *(v16 - 7) = v21;
            v22 = *((_BYTE *)i - 44);
            *((_DWORD *)v16 - 12) = *(i - 12);
            *((_BYTE *)v16 - 44) = v22 & 3 | *((_BYTE *)v16 - 44) & 0xFC;
            v23 = *((_QWORD *)i - 5);
            *((_QWORD *)i - 5) = 0;
            *(v16 - 5) = v23;
            v24 = *((_BYTE *)i - 28);
            *((_DWORD *)v16 - 8) = *(i - 8);
            *((_BYTE *)v16 - 28) = v24 & 3 | *((_BYTE *)v16 - 28) & 0xFC;
            v25 = *((_QWORD *)i - 3);
            *((_QWORD *)i - 3) = 0;
            *(v16 - 3) = v25;
            v26 = *((_BYTE *)i - 12);
            *((_DWORD *)v16 - 4) = *(i - 4);
            *((_BYTE *)v16 - 12) = v26 & 3 | *((_BYTE *)v16 - 12) & 0xFC;
            v27 = *((_QWORD *)i - 1);
            *((_QWORD *)i - 1) = 0;
          }
          v28 = (unsigned int)*(v13 - 1);
          if ( (_DWORD)v28 )
          {
            v29 = &v13[16 * v28];
            do
            {
              v30 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v13 + 8);
              sub_182CBA0(v30, v13 + 12);
              v31 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v13);
              v32 = v13 + 4;
              v13 += 16;
              sub_182CBA0(v31, v32);
            }
            while ( v29 != v13 );
            v13 = (int *)a1[50];
          }
          sub_186B220(v13 - 2);
          v9 = v52;
          a1[50] = v2;
          *v51 = v10;
          v8 = *((_DWORD *)v2 - 2);
          if ( v8 >= v52 )
            goto LABEL_21;
        }
        v12[1] = 0;
        *v12 = v10;
        a1[50] = v2;
      }
LABEL_21:
      result = (__int64)v2;
      *((_DWORD *)v2 - 1) = v9;
      do
      {
        *(_OWORD *)(result + 16) = 0;
        result += 64;
        *(_OWORD *)(result - 16) = 0;
        *(_OWORD *)(result - 64) = 0;
        *(_OWORD *)(result - 32) = 0;
        *(_BYTE *)(result - 60) = 0;
        *(_DWORD *)(result - 48) = 1;
        *(_BYTE *)(result - 44) = 0;
        *(_BYTE *)(result - 28) = 0;
        *(_DWORD *)(result - 16) = 1;
        *(_BYTE *)(result - 12) = 0;
      }
      while ( &v2[8 * (unsigned __int64)v9] != (_QWORD *)result );
      goto LABEL_23;
    }
LABEL_9:
    v7 = (_QWORD *)sub_186B270(0x88u);
    v2 = v7 + 1;
    *v7 = 2;
    a1[50] = v7 + 1;
    goto LABEL_10;
  }
LABEL_23:
  if ( v57 <= 0 )
    return result;
  v33 = 0;
  v34 = qword_1C7F2C0;
  while ( 2 )
  {
    v35 = 0;
    v36 = &v2[8 * v33];
    v37 = (_QWORD *)(a1[39] + 8 * v33);
    while ( 1 )
    {
      if ( (_DWORD)v33 == (_DWORD)v35 )
        goto LABEL_41;
      v38 = *v37 + 80 * v35;
      if ( *(_DWORD *)v38 == -1 )
        goto LABEL_41;
      v53 = v38 + 8;
      if ( (*(_BYTE *)(v38 + 28) & 1) != 0
        || *(_DWORD *)(v38 + 24) != 1
        || (*((_BYTE *)v36 + 20) & 1) != 0
        || *((_DWORD *)v36 + 4) != 1 )
      {
        if ( (unsigned __int8)sub_1848D40(v34, v53, v36) )
          goto LABEL_32;
      }
      else
      {
        v39 = v34;
        if ( (*(_BYTE *)(v38 + 12) & 1) == 0 )
        {
          v46 = *((_BYTE *)v36 + 4);
          if ( (v46 & 1) == 0 )
          {
            v40 = *(_DWORD *)(v38 + 8);
            if ( v40 < *(_DWORD *)v36 )
              goto LABEL_34;
            goto LABEL_48;
          }
        }
        if ( (int)sub_182C7B0(v34, v53, v36) < 0 )
          goto LABEL_32;
      }
      v34 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v38 + 12) & 1) != 0 )
        goto LABEL_56;
      v46 = *((_BYTE *)v36 + 4);
LABEL_48:
      if ( (v46 & 1) == 0 )
      {
        if ( *(_DWORD *)(v38 + 8) != *(_DWORD *)v36 )
          goto LABEL_41;
        goto LABEL_50;
      }
LABEL_56:
      if ( (unsigned int)sub_182C7B0(v34, v53, v36) )
        goto LABEL_55;
LABEL_50:
      if ( (*(_BYTE *)(v38 + 28) & 1) != 0 || (*((_BYTE *)v36 + 20) & 1) != 0 )
        v47 = (unsigned int)sub_182C7B0(v34, v38 + 24, v36 + 2) == 0;
      else
        v47 = *(_DWORD *)(v38 + 24) == *((_DWORD *)v36 + 4);
      v34 = qword_1C7F2C0;
      if ( v47 )
      {
        if ( sub_3ED700((__int64)qword_1C7F2C0, v38 + 40, (__int64)(v36 + 4)) )
        {
LABEL_32:
          v39 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v38 + 12) & 1) != 0 )
          {
            v55 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v36, v38 + 8);
            v39 = v55;
          }
          else
          {
            v40 = *(_DWORD *)(v38 + 8);
LABEL_34:
            *((_BYTE *)v36 + 4) &= ~1u;
            *(_DWORD *)v36 = v40;
          }
          if ( (*(_BYTE *)(v38 + 28) & 1) != 0 )
          {
            sub_182C690(v39, v36 + 2, v38 + 24);
          }
          else
          {
            v41 = *(_DWORD *)(v38 + 24);
            *((_BYTE *)v36 + 20) &= ~1u;
            *((_DWORD *)v36 + 4) = v41;
          }
          v42 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v38 + 44) & 1) != 0 )
          {
            v54 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v36 + 4, v38 + 40);
            v42 = v54;
          }
          else
          {
            v43 = *(_DWORD *)(v38 + 40);
            *((_BYTE *)v36 + 36) &= ~1u;
            *((_DWORD *)v36 + 8) = v43;
          }
          if ( (*(_BYTE *)(v38 + 60) & 1) == 0 )
          {
            v44 = *(_DWORD *)(v38 + 56);
            *((_BYTE *)v36 + 52) &= ~1u;
            v34 = qword_1C7F2C0;
            *((_DWORD *)v36 + 12) = v44;
            goto LABEL_41;
          }
          sub_182C690(v42, v36 + 6, v38 + 56);
        }
LABEL_55:
        v34 = qword_1C7F2C0;
      }
LABEL_41:
      if ( v57 == v35 + 1 )
        break;
      ++v35;
    }
    v45 = (_QWORD *)a1[50];
    v2 = v45;
    if ( v35 != v33 )
    {
      ++v33;
      continue;
    }
    break;
  }
  v48 = 0;
  while ( 1 )
  {
    v49 = &v45[v48 / 8];
    v48 += 64LL;
    sub_1831620(v34, v49);
    result = sub_1831620(qword_1C7F2C0, v49 + 4);
    if ( (__int64)v57 << 6 == v48 )
      break;
    v34 = qword_1C7F2C0;
    v45 = (_QWORD *)a1[50];
  }
  return result;
}

