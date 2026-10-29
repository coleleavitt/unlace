__int64 __fastcall sub_358840(__int64 a1)
{
  __int64 v2; // rax
  __int64 **v3; // rcx
  __int64 **v4; // r13
  __int64 *v5; // rax
  __int64 *v6; // rsi
  __int64 *v7; // r8
  __int64 *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 *v11; // rdx
  unsigned int v12; // r9d
  __int64 v13; // rdi
  __int64 *v14; // r15
  __int64 v15; // rax
  bool v16; // zf
  __int64 *v17; // r14
  __int64 *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdi
  unsigned int v21; // r12d
  void *v22; // r15
  char *v23; // rbp
  char *v24; // r14
  void *v25; // r13
  char *v26; // rsi
  _QWORD *v27; // rbp
  __int64 v28; // rax
  _QWORD *v29; // r13
  void *v30; // r14
  void *v31; // rdi
  void *v32; // rbx
  unsigned int v34; // eax
  _QWORD *v35; // r13
  __int64 v36; // rax
  _QWORD *v37; // rbp
  _QWORD *v38; // r14
  void *v39; // r15
  void *v40; // rdi
  __int64 v41; // rax
  char *v42; // r15
  int v43; // edx
  void *v44; // rdi
  int v45; // [rsp+0h] [rbp-F8h]
  int v46; // [rsp+8h] [rbp-F0h]
  __int64 **v47; // [rsp+8h] [rbp-F0h]
  int v48; // [rsp+10h] [rbp-E8h]
  void *v49; // [rsp+10h] [rbp-E8h]
  void *v50; // [rsp+10h] [rbp-E8h]
  void *v51; // [rsp+10h] [rbp-E8h]
  unsigned int v52; // [rsp+10h] [rbp-E8h]
  int v53; // [rsp+18h] [rbp-E0h]
  char *v54; // [rsp+18h] [rbp-E0h]
  __int64 *v55; // [rsp+18h] [rbp-E0h]
  void *v56; // [rsp+20h] [rbp-D8h] BYREF
  void *v57; // [rsp+28h] [rbp-D0h]
  int v58[2]; // [rsp+30h] [rbp-C8h] BYREF
  int v59[2]; // [rsp+38h] [rbp-C0h]
  int v60[2]; // [rsp+40h] [rbp-B8h] BYREF
  char v61[8]; // [rsp+48h] [rbp-B0h]
  int v62[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+58h] [rbp-A0h]
  int v64[4]; // [rsp+60h] [rbp-98h] BYREF
  int v65[4]; // [rsp+70h] [rbp-88h] BYREF
  _QWORD *v66; // [rsp+80h] [rbp-78h]
  void *ptr; // [rsp+88h] [rbp-70h]
  unsigned int v68; // [rsp+90h] [rbp-68h]

  if ( !*(_BYTE *)(a1 + 556) )
  {
    v56 = nullptr;
    v34 = sub_354440(a1, (_QWORD **)&v56);
    v35 = v56;
    v21 = v34;
    if ( v34 != 1 )
    {
      if ( !v56 )
        return v21;
LABEL_49:
      v36 = *((unsigned int *)v35 - 1);
      if ( (_DWORD)v36 )
      {
        v37 = v35;
        v38 = &v35[5 * v36];
        do
        {
          while ( 1 )
          {
            v39 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v37 + 1);
            sub_182CBA0(v39, v37 + 3);
            if ( !*v37 )
              break;
            v40 = (void *)(*v37 - 8LL);
            v37 += 5;
            sub_186B220(v40);
            if ( v38 == v37 )
              goto LABEL_64;
          }
          v37 += 5;
        }
        while ( v38 != v37 );
      }
LABEL_64:
      sub_186B220(v35 - 1);
      return v21;
    }
    if ( !v56 )
      return (unsigned int)-1;
    v41 = *((unsigned int *)v56 - 1);
    if ( !(_DWORD)v41 )
    {
      v21 = -1;
      goto LABEL_64;
    }
    v42 = (char *)v56;
    v54 = (char *)v56 + 40 * v41;
    while ( 1 )
    {
      *(_QWORD *)v60 = 0;
      v44 = qword_1C7F2C0;
      *(_QWORD *)v61 = 0;
      *(_QWORD *)v62 = 1;
      v63 = 0;
      if ( (v42[12] & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v60, v42 + 8);
        if ( (v42[28] & 1) != 0 )
        {
LABEL_62:
          sub_182C690(v44, v62, v42 + 24);
          goto LABEL_59;
        }
      }
      else
      {
        v60[0] = *((_DWORD *)v42 + 2);
        if ( (v42[28] & 1) != 0 )
          goto LABEL_62;
      }
      v43 = *((_DWORD *)v42 + 6);
      LOBYTE(v62[1]) &= ~1u;
      v62[0] = v43;
LABEL_59:
      sub_357640(a1, v42, v60);
      v42 += 40;
      v51 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v60);
      sub_182CBA0(v51, v62);
      if ( v54 == v42 )
      {
        if ( *(_BYTE *)(a1 + 551) )
        {
          *(_BYTE *)(a1 + 551) = 0;
          sub_36FA10(a1 + 344);
          *(_BYTE *)(a1 + 551) = 1;
        }
        goto LABEL_49;
      }
    }
  }
  v2 = sub_2FF8B0(a1);
  sub_368BC0(v60, v2, a1 + 328);
  sub_361EB0(v60, a1 + 152);
  v3 = *(__int64 ***)sub_36AFC0(
                       (int)v60,
                       v45,
                       v46,
                       v48,
                       v53,
                       (int)v56,
                       (int)v57,
                       v58[0],
                       v59[0],
                       *(void **)v60,
                       v61[0],
                       v62[0],
                       v63,
                       v64[0],
                       v64[2],
                       v65[0],
                       v65[2],
                       (int)v66,
                       (int)ptr,
                       v68);
  if ( !v3 || (v47 = &v3[5 * *((unsigned int *)v3 - 1)], v3 == v47) )
  {
LABEL_67:
    v21 = 1;
  }
  else
  {
    v4 = v3;
    v5 = *v3;
    while ( *v4 )
    {
      if ( !*((_DWORD *)v5 - 1) )
        break;
      v6 = *(__int64 **)(a1 + 192);
      ++*(_DWORD *)(a1 + 160);
      if ( !v6 )
        goto LABEL_30;
      v7 = &v6[*((unsigned int *)v6 - 1)];
      if ( v6 == v7 )
      {
        LODWORD(v9) = 0;
LABEL_29:
        *((_DWORD *)v7 - 1) = v9;
        goto LABEL_30;
      }
      v8 = v6;
      v9 = 0;
      v10 = *v6;
      if ( !v5 )
        goto LABEL_15;
      while ( 1 )
      {
        v11 = &v5[*((unsigned int *)v5 - 1)];
        if ( v11 != v5 )
          break;
        do
        {
LABEL_15:
          v12 = v9 + 1;
          v13 = *(_QWORD *)(a1 + 184);
          v14 = &v6[v9];
          if ( v10 )
            ++*(_DWORD *)(v10 + 8);
          v15 = *v14;
          if ( *v14 )
          {
            v16 = (*(_DWORD *)(v15 + 8))-- == 1;
            if ( v16 )
            {
              v55 = v7;
              v52 = v12;
              sub_15D7BC0(v13, v15);
              v6 = *(__int64 **)(a1 + 192);
              v7 = v55;
              v12 = v52;
            }
          }
          ++v8;
          *v14 = v10;
          v9 = v12;
          if ( v7 == v8 )
            goto LABEL_21;
LABEL_14:
          v5 = *v4;
          v10 = *v8;
        }
        while ( !*v4 );
      }
      while ( v10 != *v5 )
      {
        if ( v11 == ++v5 )
          goto LABEL_15;
      }
      if ( v7 != ++v8 )
        goto LABEL_14;
LABEL_21:
      if ( v6 )
      {
        v17 = &v6[*((unsigned int *)v6 - 1)];
        v18 = &v6[(unsigned int)v9];
        if ( v18 < v17 )
        {
          do
          {
            while ( 1 )
            {
              v19 = *v18;
              if ( *v18 )
              {
                v20 = *(_QWORD *)(a1 + 184);
                v16 = (*(_DWORD *)(v19 + 8))-- == 1;
                if ( v16 )
                  break;
              }
              if ( ++v18 >= v17 )
                goto LABEL_28;
            }
            sub_15D7BC0(v20, v19);
            ++v18;
          }
          while ( v18 < v17 );
LABEL_28:
          v7 = *(__int64 **)(a1 + 192);
          if ( !v7 )
            goto LABEL_30;
        }
        else
        {
          v7 = v6;
        }
        goto LABEL_29;
      }
LABEL_30:
      sub_34FDD0((__int64)&v56, a1, v4);
      v49 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v56);
      sub_182CBA0(v49, v58);
      v56 = nullptr;
      v57 = nullptr;
      *(_QWORD *)v58 = 1;
      *(_QWORD *)v59 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v56, (int *)v4 + 2);
      sub_357640(a1, (char *)v4, (int *)&v56);
      v4 += 5;
      v50 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v56);
      sub_182CBA0(v50, v58);
      if ( v47 == v4 )
        goto LABEL_67;
      v5 = *v4;
    }
    v21 = -1;
  }
  v22 = ptr;
  if ( ptr )
  {
    if ( v68 )
    {
      v23 = (char *)ptr;
      v24 = (char *)ptr + 40 * v68;
      do
      {
        v25 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v23 + 8);
        v26 = v23 + 24;
        v23 += 40;
        sub_182CBA0(v25, v26);
      }
      while ( v24 != v23 );
    }
    sub_186B220(v22);
  }
  v27 = v66;
  if ( v66 )
  {
    v28 = *((unsigned int *)v66 - 1);
    if ( (_DWORD)v28 )
    {
      v29 = &v66[5 * v28];
      do
      {
        while ( 1 )
        {
          v30 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v27 + 1);
          sub_182CBA0(v30, v27 + 3);
          if ( !*v27 )
            break;
          v31 = (void *)(*v27 - 8LL);
          v27 += 5;
          sub_186B220(v31);
          if ( v29 == v27 )
            goto LABEL_43;
        }
        v27 += 5;
      }
      while ( v27 != v29 );
LABEL_43:
      v27 = v66;
    }
    sub_186B220(v27 - 1);
  }
  v32 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v64);
  sub_182CBA0(v32, v65);
  return v21;
}

