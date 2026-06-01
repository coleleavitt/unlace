void __fastcall sub_1C49D70(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        __int64 a7,
        __int64 (__fastcall *a8)(__int64 *, char *))
{
  __int64 v8; // rax
  __int64 *v9; // r10
  char *v10; // rbp
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 *v13; // rbx
  __int64 *v14; // rbp
  unsigned __int64 v15; // rdx
  signed __int64 k; // r15
  __int64 v17; // r14
  unsigned __int64 v18; // r15
  __int64 *v19; // r14
  __int64 v20; // rax
  __int64 *v21; // r13
  char *v22; // r12
  unsigned __int64 v23; // rbx
  __int64 *v24; // r15
  __int64 v25; // rax
  char *v26; // rax
  __int64 *v27; // rbx
  __int64 *v28; // r13
  char v29; // al
  unsigned __int64 v30; // rcx
  signed __int64 j; // r12
  __int64 v32; // r14
  char v33; // al
  __int64 v34; // r12
  unsigned __int64 v35; // rbx
  __int64 v36; // rax
  char *v37; // r12
  unsigned __int64 v38; // rbx
  __int64 *v39; // r13
  __int64 *v40; // r15
  __int64 v41; // rdx
  __int64 *v42; // rbx
  char i; // al
  __int64 v44; // rax
  __int64 v45; // rax
  char *v46; // r12
  unsigned __int64 v47; // rbx
  __int64 *v48; // rbp
  char v49; // al
  unsigned __int64 v50; // rbx
  char *v51; // r12
  __int64 *v52; // rbp
  char v53; // al
  __int64 *v54; // [rsp+8h] [rbp-70h]
  __int64 *v55; // [rsp+8h] [rbp-70h]
  __int64 *v56; // [rsp+8h] [rbp-70h]
  __int64 *v57; // [rsp+10h] [rbp-68h]
  __int64 v59; // [rsp+20h] [rbp-58h]
  __int64 v60; // [rsp+28h] [rbp-50h]
  __int64 v62; // [rsp+38h] [rbp-40h]

  v8 = a5;
  v9 = a3;
  v10 = a6;
  v54 = a1;
  if ( a7 <= a5 )
    v8 = a7;
  v57 = a2;
  if ( a4 <= v8 )
  {
    v13 = a2;
    v19 = a1;
LABEL_57:
    if ( (char *)v13 - (char *)v19 > 0 )
    {
      v56 = v13;
      v37 = v10;
      v38 = 0xAAAAAAAAAAAAAAABLL * (v13 - v19);
      v39 = v19;
      v40 = v9;
      do
      {
        if ( *((_DWORD *)v37 + 2) > 0x40u && *(_QWORD *)v37 )
          operator delete[](*(void **)v37);
        v41 = *v39;
        v37 += 24;
        v39 += 3;
        *((_QWORD *)v37 - 3) = v41;
        *((_DWORD *)v37 - 4) = *((_DWORD *)v39 - 4);
        LOBYTE(v41) = *((_BYTE *)v39 - 12);
        *((_DWORD *)v39 - 4) = 0;
        *(v37 - 12) = v41;
        *((_QWORD *)v37 - 1) = *(v39 - 1);
        --v38;
      }
      while ( v38 );
      v42 = v56;
      if ( v37 != v10 && v40 != v56 )
      {
        for ( i = a8(v56, v10); ; i = a8(v42, v10) )
        {
          if ( i )
          {
            if ( *((_DWORD *)v19 + 2) > 0x40u && *v19 )
              operator delete[]((void *)*v19);
            v44 = *v42;
            v42 += 3;
            *v19 = v44;
            *((_DWORD *)v19 + 2) = *((_DWORD *)v42 - 4);
            LOBYTE(v44) = *((_BYTE *)v42 - 12);
            *((_DWORD *)v42 - 4) = 0;
            *((_BYTE *)v19 + 12) = v44;
            v19[2] = *(v42 - 1);
          }
          else
          {
            if ( *((_DWORD *)v19 + 2) > 0x40u && *v19 )
              operator delete[]((void *)*v19);
            v45 = *(_QWORD *)v10;
            v10 += 24;
            *v19 = v45;
            *((_DWORD *)v19 + 2) = *((_DWORD *)v10 - 4);
            LOBYTE(v45) = *(v10 - 12);
            *((_DWORD *)v10 - 4) = 0;
            *((_BYTE *)v19 + 12) = v45;
            v19[2] = *((_QWORD *)v10 - 1);
          }
          v19 += 3;
          if ( v37 == v10 || v40 == v42 )
            break;
        }
      }
      if ( v37 != v10 )
      {
        v34 = v37 - v10;
        v35 = 0xAAAAAAAAAAAAAAABLL * (v34 >> 3);
        if ( v34 > 0 )
        {
          do
          {
            if ( *((_DWORD *)v19 + 2) > 0x40u && *v19 )
              operator delete[]((void *)*v19);
            v36 = *(_QWORD *)v10;
            v19 += 3;
            v10 += 24;
            *(v19 - 3) = v36;
            *((_DWORD *)v19 - 4) = *((_DWORD *)v10 - 4);
            LOBYTE(v36) = *(v10 - 12);
            *((_DWORD *)v10 - 4) = 0;
            *((_BYTE *)v19 - 12) = v36;
            *(v19 - 1) = *((_QWORD *)v10 - 1);
            --v35;
          }
          while ( v35 );
        }
      }
    }
    return;
  }
  v11 = a5;
  if ( a7 < a5 )
  {
    v12 = a4;
    while ( 1 )
    {
      if ( v11 >= v12 )
      {
        v14 = v54;
        v60 = v11 / 2;
        v18 = v11 / 2;
        v13 = &v57[3 * (v11 / 2)];
        v30 = 0xAAAAAAAAAAAAAAABLL * (v57 - v54);
        if ( (char *)v57 - (char *)v54 > 0 )
        {
          v62 = v11;
          for ( j = 0xAAAAAAAAAAAAAAABLL * (v57 - v54); ; j = v32 )
          {
            v32 = j >> 1;
            if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *, __int64 *, unsigned __int64))a8)(
                   v13,
                   &v14[3 * (j >> 1)],
                   a3,
                   v30) )
            {
              if ( !v32 )
              {
LABEL_42:
                v11 = v62;
                v59 = 0xAAAAAAAAAAAAAAABLL * (v14 - v54);
                v12 -= v59;
                goto LABEL_43;
              }
            }
            else
            {
              v14 += 3 * (j >> 1) + 3;
              v30 = j - v32;
              v32 = j - v32 - 1;
              if ( v32 <= 0 )
                goto LABEL_42;
            }
          }
        }
        LODWORD(v59) = 0;
LABEL_43:
        v11 -= v60;
      }
      else
      {
        v13 = v57;
        v14 = &v54[3 * (v12 / 2)];
        v59 = v12 / 2;
        v15 = 0xAAAAAAAAAAAAAAABLL * (a3 - v57);
        if ( (char *)a3 - (char *)v57 > 0 )
        {
          for ( k = 0xAAAAAAAAAAAAAAABLL * (a3 - v57); ; k = v17 )
          {
            v17 = k >> 1;
            if ( ((unsigned __int8 (__fastcall *)(__int64 *, __int64 *, unsigned __int64))a8)(
                   &v13[3 * (k >> 1)],
                   v14,
                   v15) )
            {
              v13 += 3 * (k >> 1) + 3;
              v17 = k - v17 - 1;
              if ( v17 <= 0 )
                goto LABEL_13;
            }
            else if ( !v17 )
            {
LABEL_13:
              v18 = 0xAAAAAAAAAAAAAAABLL * (v13 - v57);
              v11 -= v18;
              goto LABEL_14;
            }
          }
        }
        v18 = 0;
LABEL_14:
        v12 -= v12 / 2;
      }
      v19 = sub_1C499A0(v14, v57, v13, v12, v18, a6, a7);
      sub_1C49D70((_DWORD)v54, (_DWORD)v14, (_DWORD)v19, v59, v18, (_DWORD)a6, a7, (__int64)a8);
      v20 = v11;
      if ( a7 <= v11 )
        v20 = a7;
      if ( v12 <= v20 )
        break;
      v54 = v19;
      v57 = v13;
      if ( a7 >= v11 )
      {
        v9 = a3;
        v10 = a6;
        goto LABEL_20;
      }
    }
    v9 = a3;
    v10 = a6;
    goto LABEL_57;
  }
  v13 = a2;
  v19 = a1;
LABEL_20:
  if ( (char *)v9 - (char *)v13 > 0 )
  {
    v21 = v13;
    v55 = v13;
    v22 = v10;
    v23 = 0xAAAAAAAAAAAAAAABLL * (v9 - v13);
    v24 = v9;
    while ( 1 )
    {
      if ( *((_DWORD *)v22 + 2) > 0x40u && *(_QWORD *)v22 )
        operator delete[](*(void **)v22);
      v25 = *v21;
      v21 += 3;
      *(_QWORD *)v22 = v25;
      *((_DWORD *)v22 + 2) = *((_DWORD *)v21 - 4);
      LOBYTE(v25) = *((_BYTE *)v21 - 12);
      *((_DWORD *)v21 - 4) = 0;
      v22[12] = v25;
      *((_QWORD *)v22 + 2) = *(v21 - 1);
      v26 = v22 + 24;
      if ( !--v23 )
        break;
      v22 += 24;
    }
    if ( v55 == v19 )
    {
      v50 = 0xAAAAAAAAAAAAAAABLL * ((v26 - v10) >> 3);
      if ( v26 - v10 > 0 )
      {
        v51 = v22 + 24;
        v52 = v24;
        do
        {
          v52 -= 3;
          v51 -= 24;
          if ( *((_DWORD *)v52 + 2) > 0x40u && *v52 )
            operator delete[]((void *)*v52);
          *v52 = *(_QWORD *)v51;
          *((_DWORD *)v52 + 2) = *((_DWORD *)v51 + 2);
          v53 = v51[12];
          *((_DWORD *)v51 + 2) = 0;
          *((_BYTE *)v52 + 12) = v53;
          v52[2] = *((_QWORD *)v51 + 2);
          --v50;
        }
        while ( v50 );
      }
    }
    else if ( v26 != v10 )
    {
      v27 = v55 - 3;
      v28 = v24;
      while ( 1 )
      {
        while ( 1 )
        {
          v28 -= 3;
          if ( (unsigned __int8)a8((__int64 *)v22, (char *)v27) )
            break;
          if ( *((_DWORD *)v28 + 2) > 0x40u && *v28 )
            operator delete[]((void *)*v28);
          *v28 = *(_QWORD *)v22;
          *((_DWORD *)v28 + 2) = *((_DWORD *)v22 + 2);
          v33 = v22[12];
          *((_DWORD *)v22 + 2) = 0;
          *((_BYTE *)v28 + 12) = v33;
          v28[2] = *((_QWORD *)v22 + 2);
          if ( v10 == v22 )
            return;
          v22 -= 24;
        }
        if ( *((_DWORD *)v28 + 2) > 0x40u && *v28 )
          operator delete[]((void *)*v28);
        *v28 = *v27;
        *((_DWORD *)v28 + 2) = *((_DWORD *)v27 + 2);
        v29 = *((_BYTE *)v27 + 12);
        *((_DWORD *)v27 + 2) = 0;
        *((_BYTE *)v28 + 12) = v29;
        v28[2] = v27[2];
        if ( v27 == v19 )
          break;
        v27 -= 3;
      }
      v46 = v22 + 24;
      v47 = 0xAAAAAAAAAAAAAAABLL * ((v46 - v10) >> 3);
      if ( v46 - v10 > 0 )
      {
        v48 = v28;
        do
        {
          v48 -= 3;
          v46 -= 24;
          if ( *((_DWORD *)v48 + 2) > 0x40u )
          {
            if ( *v48 )
              operator delete[]((void *)*v48);
          }
          *v48 = *(_QWORD *)v46;
          *((_DWORD *)v48 + 2) = *((_DWORD *)v46 + 2);
          v49 = v46[12];
          *((_DWORD *)v46 + 2) = 0;
          *((_BYTE *)v48 + 12) = v49;
          v48[2] = *((_QWORD *)v46 + 2);
          --v47;
        }
        while ( v47 );
      }
    }
  }
}
