/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_idcv_slice
// Address: 0x000000000006FA0C

//----- (000000000006FA0C) ----------------------------------------------------
__int64 __fastcall get_idcv_slice(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, unsigned __int64 a4, char a5)
{
  unsigned __int8 *v5; // x22
  int v10; // w8
  int qerrno; // w0
  __int64 v13; // x8
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x9
  unsigned __int64 v16; // x10
  char *v17; // x24
  void *v18; // x23
  __int64 v19; // x26
  char *v20; // x26
  char *v21; // t1
  void *align; // x22
  char *v23; // x27
  const char *v24; // x23
  const char *v25; // x0
  int v26; // w0
  int v27; // w8
  unsigned __int8 *v28; // x9
  int v29; // t1
  char *v30; // x8
  __int64 v31; // x8
  char **v32; // x9
  __int64 v33; // x9
  char *v34; // t1
  __int128 v35; // q0
  __int128 v36; // q3
  int v37; // w20
  void *ptr[2]; // [xsp+0h] [xbp-D0h] BYREF
  __int128 v39; // [xsp+10h] [xbp-C0h]
  char s[32]; // [xsp+20h] [xbp-B0h] BYREF
  pthread_mutex_t v41; // [xsp+40h] [xbp-90h] BYREF
  __int64 v42; // [xsp+68h] [xbp-68h]

  v42 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !a1 )
    return set_qerrno(0x620u);
  v5 = a2;
  if ( !a2 )
    return set_qerrno(0x620u);
  while ( 1 )
  {
    v10 = *v5;
    if ( v10 != 10 )
      break;
    v5 = deref_idcv(v5, 0);
    if ( !v5 )
    {
      qerrno = get_qerrno();
      goto LABEL_42;
    }
  }
  if ( v10 != 5 )
  {
    if ( v10 == 7 )
    {
      v13 = *((_QWORD *)v5 + 2);
      if ( v13 )
        v14 = v13 - 1;
      else
        v14 = 0;
      if ( (a3 & 0x8000000000000000LL) != 0 )
        a3 = (v14 + a3) & ~((__int64)(v14 + a3) >> 63);
      if ( a3 <= v14 )
        v15 = a3;
      else
        v15 = v14;
      if ( (a5 & 1) != 0 )
        v16 = v15 + 1;
      else
        v16 = a4;
      if ( (v16 & 0x8000000000000000LL) != 0 )
        v16 = (v16 + v14) & ~((__int64)(v16 + v14) >> 63);
      if ( v16 <= v14 )
        v14 = v16;
      if ( v15 > v14 )
        v14 = v15;
      sub_4968C(&v41, (const void *)(*((_QWORD *)v5 + 1) + v15), v14 - v15);
      free_idcv((__int64 *)a1);
      *(_BYTE *)a1 = 7;
      LODWORD(v17) = 0;
      *(_OWORD *)(a1 + 8) = *(_OWORD *)&v41.__lock;
      *(_QWORD *)(a1 + 24) = *(&v41.__align + 2);
      return (unsigned int)v17;
    }
    qerrno = set_qerrno(0x620u);
    goto LABEL_42;
  }
  if ( (a5 & 1) == 0 )
  {
    v39 = 0u;
    LOBYTE(ptr[0]) = 5;
    v18 = operator new(0x20u);
    sub_680D4((__int64)v18, 0);
    ptr[1] = v18;
    v19 = *((_QWORD *)v5 + 1);
    sub_39140(&v41, byte_1043FD);
    v21 = *(char **)(v19 + 8);
    v20 = (char *)(v19 + 8);
    v17 = v21;
    if ( v21 )
    {
      align = (void *)v41.__align;
      v23 = v20;
      if ( *(&v41.__align + 1) )
        v24 = (const char *)v41.__align;
      else
        v24 = &byte_F154B;
      do
      {
        if ( *((_QWORD *)v17 + 5) )
          v25 = *((const char **)v17 + 4);
        else
          v25 = &byte_F154B;
        v26 = strcmp(v25, v24);
        if ( v26 >= 0 )
          v23 = v17;
        v17 = *(char **)&v17[8 * (v26 < 0)];
      }
      while ( v17 );
      if ( !align )
      {
LABEL_46:
        if ( v23 != v20 )
        {
          do
          {
            while ( 1 )
            {
              if ( *((_QWORD *)v23 + 5) )
                v17 = *((char **)v23 + 4);
              else
                v17 = &byte_F154B;
              if ( (strcmp(v17, ":") & 0x80000000) == 0 )
                goto LABEL_70;
              v27 = (unsigned __int8)*v17;
              if ( *v17 )
              {
                if ( v27 == 48 )
                {
                  if ( !v17[1] )
                  {
LABEL_59:
                    qsscanf(v17, "%llu", &v41);
                    if ( v41.__align >= a3 && (a4 == 0x7FFFFFFF || v41.__align < a4) )
                    {
                      qsnprintf((pthread_mutex_t *)s, 32, "%llu", v41.__align - a3);
                      LODWORD(v17) = set_idcv_attr((__int64)ptr, s, (unsigned __int8 *)v23 + 56, 0);
                      if ( (_DWORD)v17 )
                      {
                        v37 = 1;
                        goto LABEL_71;
                      }
                    }
                  }
                }
                else
                {
                  v28 = (unsigned __int8 *)(v17 + 1);
                  while ( ((char)v27 & 0x80000000) == 0 && (unsigned int)(unsigned __int8)v27 - 48 <= 9 )
                  {
                    v29 = *v28++;
                    LOBYTE(v27) = v29;
                    if ( !v29 )
                      goto LABEL_59;
                  }
                }
              }
              v30 = *((char **)v23 + 1);
              if ( !v30 )
                break;
              do
              {
                v23 = v30;
                v30 = *(char **)v30;
              }
              while ( v30 );
LABEL_67:
              if ( v23 == v20 )
                goto LABEL_70;
            }
            v31 = (__int64)(v23 + 16);
            v32 = *((char ***)v23 + 2);
            if ( *v32 != v23 )
            {
              do
              {
                v33 = *(_QWORD *)v31;
                v34 = *(char **)(*(_QWORD *)v31 + 16LL);
                v31 = *(_QWORD *)v31 + 16LL;
                v23 = v34;
              }
              while ( *(_QWORD *)v34 != v33 );
              goto LABEL_67;
            }
            v23 = *((char **)v23 + 2);
          }
          while ( v32 != (char **)v20 );
        }
LABEL_70:
        v35 = *(_OWORD *)(a1 + 16);
        v36 = v39;
        v37 = 0;
        *(_OWORD *)&v41.__lock = *(_OWORD *)a1;
        *((_OWORD *)&v41.__align + 1) = v35;
        *(_OWORD *)a1 = *(_OWORD *)ptr;
        *(_OWORD *)(a1 + 16) = v36;
        *(_OWORD *)ptr = *(_OWORD *)&v41.__lock;
        v39 = *((_OWORD *)&v41.__align + 1);
LABEL_71:
        if ( LOBYTE(ptr[0]) == 5 )
        {
          sub_6F17C((__int64)ptr[1], (unsigned __int8 *)ptr);
        }
        else if ( LOBYTE(ptr[0]) == 7 && ptr[1] )
        {
          *(_QWORD *)&v39 = 0;
          qfree(ptr[1]);
          ptr[1] = nullptr;
          *((_QWORD *)&v39 + 1) = 0;
          if ( v37 )
            return (unsigned int)v17;
LABEL_78:
          LODWORD(v17) = 0;
          return (unsigned int)v17;
        }
        if ( v37 )
          return (unsigned int)v17;
        goto LABEL_78;
      }
    }
    else
    {
      align = (void *)v41.__align;
      v23 = v20;
      if ( !v41.__align )
        goto LABEL_46;
    }
    *(&v41.__align + 1) = 0;
    qfree(align);
    v41.__align = 0;
    *(&v41.__align + 2) = 0;
    goto LABEL_46;
  }
  qsnprintf((pthread_mutex_t *)s, 32, "%llu", a3);
  qerrno = get_idcv_attr(a1, (__int64)v5, s, 0);
LABEL_42:
  LODWORD(v17) = qerrno;
  return (unsigned int)v17;
}
// F154B: using guessed type char byte_F154B;
