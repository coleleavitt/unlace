__int64 __fastcall sub_104A000(__int64 a1, char **a2, __int64 a3)
{
  char *v5; // rbx
  char v6; // al
  bool v7; // cc
  unsigned int v8; // ebx
  _QWORD *v10; // rbp
  const void *v11; // r13
  size_t v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // r8
  __int64 v17; // rax
  unsigned int v18; // r9d
  _QWORD *v19; // r8
  _QWORD *v20; // rcx
  unsigned int v21; // eax
  size_t v22; // rax
  size_t v23; // rbp
  char *v24; // r13
  int v25; // r15d
  unsigned __int8 v26; // cl
  int v27; // ecx
  __int64 v28; // rbx
  _BYTE *v29; // rax
  size_t v30; // rax
  unsigned int v31; // eax
  int v32; // eax
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rbx
  char *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rsi
  char *v39; // rdx
  unsigned int v40; // [rsp+8h] [rbp-180h]
  __int64 *v41; // [rsp+8h] [rbp-180h]
  char v42; // [rsp+8h] [rbp-180h]
  __int64 v43; // [rsp+10h] [rbp-178h]
  _QWORD *v44; // [rsp+28h] [rbp-160h]
  unsigned __int64 v45; // [rsp+30h] [rbp-158h] BYREF
  __int64 *v46; // [rsp+38h] [rbp-150h] BYREF
  _QWORD v47[34]; // [rsp+40h] [rbp-148h] BYREF
  _BYTE v48[56]; // [rsp+150h] [rbp-38h] BYREF

  if ( (_BYTE)byte_2CAE5E0 || !__cxa_guard_acquire(&byte_2CAE5E0) )
  {
    v5 = *a2;
    v6 = **a2;
    v7 = v6 <= 73;
    if ( v6 == 73 )
      goto LABEL_19;
    goto LABEL_3;
  }
  qword_2CAE5F0 = 0;
  qword_2CAE600 = 0x800000000LL;
  v10 = v47;
  qmemcpy(v47, &off_2C58700, sizeof(v47));
  qword_2CAE5F8 = 0;
  do
  {
    while ( 1 )
    {
      v11 = (const void *)*v10;
      v12 = v10[1];
      v13 = sub_2220DF0(*v10, v12);
      v14 = (unsigned int)sub_2220F70(&qword_2CAE5F0, v11, v12, v13);
      v16 = (__int64 *)(qword_2CAE5F0 + 8 * v14);
      if ( !*v16 )
        goto LABEL_15;
      if ( *v16 == -8 )
        break;
      v10 += 2;
      sub_A21ED0(&v46, v16, 0);
      if ( v10 == (_QWORD *)v48 )
        goto LABEL_18;
    }
    LODWORD(qword_2CAE600) = qword_2CAE600 - 1;
LABEL_15:
    v43 = qword_2CAE5F0 + 8 * v14;
    v40 = v14;
    v17 = sub_220C370(v12 + 9, 8, v14, v15, v16, v14);
    v18 = v40;
    v19 = (_QWORD *)v43;
    v20 = (_QWORD *)v17;
    if ( v12 )
    {
      v44 = (_QWORD *)v17;
      memcpy((void *)(v17 + 8), v11, v12);
      v20 = v44;
      v19 = (_QWORD *)v43;
      v18 = v40;
    }
    *((_BYTE *)v20 + v12 + 8) = 0;
    v10 += 2;
    *v20 = v12;
    *v19 = v20;
    ++HIDWORD(qword_2CAE5F8);
    v21 = sub_2221390(&qword_2CAE5F0, v18);
    sub_A21ED0(&v46, (__int64 *)(qword_2CAE5F0 + 8LL * v21), 0);
  }
  while ( v10 != (_QWORD *)v48 );
LABEL_18:
  __cxa_atexit((void (*)(void *))sub_10450A0, &qword_2CAE5F0, &off_2AFC540);
  __cxa_guard_release(&byte_2CAE5E0);
  v5 = *a2;
  v6 = **a2;
  v7 = v6 <= 73;
  if ( v6 == 73 )
  {
LABEL_19:
    *(_DWORD *)a3 |= 0x10u;
    v8 = 1;
    *(_QWORD *)(a3 + 8) = 0x40FFFFFFF0LL;
    *(_BYTE *)(a3 + 16) = 1;
    return v8;
  }
LABEL_3:
  if ( v7 )
  {
    if ( (unsigned __int8)(v6 - 65) <= 2u )
      goto LABEL_5;
LABEL_20:
    v47[0] = v5;
    v22 = strlen(v5);
    v23 = v22;
    v47[1] = v22;
    if ( v22 != 2 )
    {
      if ( v22 )
        goto LABEL_23;
      return 0;
    }
    if ( *(_WORD *)v5 == 16708 || *(_WORD *)v5 == 16964 )
    {
      *a2 = v5 + 1;
LABEL_5:
      *(_DWORD *)a3 |= 0x10u;
      return 1;
    }
    else
    {
LABEL_23:
      if ( *v5 != 123 )
      {
        v24 = v5;
        v25 = 0;
        v26 = *v5 - 97;
        if ( v26 <= 0x15u )
          goto LABEL_25;
        return 0;
      }
      v23 = v22 - 1;
      v24 = v5 + 1;
      v47[0] = v5 + 1;
      v47[1] = v22 - 1;
      if ( v22 == 1 )
        return 0;
      v25 = 1;
      v26 = v5[1] - 97;
      if ( v26 > 0x15u )
      {
LABEL_34:
        v28 = -1;
        v29 = memchr(v24, 125, v23);
        if ( v29 )
        {
          v30 = v29 - v24;
          v28 = v30;
          if ( v23 > v30 )
            v23 = v30;
        }
        sub_1038E20(&v46, (__int64 *)(qword_2CAE5F0 + 8LL * (unsigned int)qword_2CAE5F8), 1);
        v41 = v46;
        v31 = sub_2220DF0(v24, v23);
        v32 = sub_2221120(&qword_2CAE5F0, v24, v23, v31);
        if ( v32 == -1 )
          sub_1038E20(&v46, (__int64 *)(qword_2CAE5F0 + 8LL * (unsigned int)qword_2CAE5F8), 1);
        else
          sub_1038E20(&v46, (__int64 *)(qword_2CAE5F0 + 8LL * v32), 1);
        if ( v41 == v46 )
          return 0;
        v33 = v28 + 1;
        if ( v33 > v47[1] )
        {
          v35 = v47[0] + v47[1];
        }
        else
        {
          v34 = v47[1] - v33;
          if ( v47[1] - v33 == -1 )
            return 0;
          v35 = v47[0] + v33;
          if ( v34 )
            return 0;
        }
        v36 = (char *)(v35 - 1);
        *(_DWORD *)a3 |= 2u;
        v8 = 1;
        *a2 = v36;
        return v8;
      }
LABEL_25:
      v27 = ~(0x240001uLL >> v26) & 1;
      if ( v27 )
      {
        if ( !(_BYTE)v25 )
          return 0;
        goto LABEL_34;
      }
      v47[0] = v24 + 1;
      v47[1] = v23 - 1;
      if ( !(_BYTE)v25 )
      {
        if ( v23 == 1 )
        {
          *(_DWORD *)a3 |= 2u;
          v8 = 1;
          *a2 = v24;
          return v8;
        }
        return 0;
      }
      if ( v23 == 1 )
        return 0;
      if ( v24[1] == 91 )
      {
        v47[0] = v24 + 2;
        v47[1] = v23 - 2;
        if ( v23 == 2 )
          return 0;
        LOBYTE(v27) = v25;
      }
      v42 = v27;
      v8 = sub_2223B40(v47, 10, &v45);
      if ( (_BYTE)v8 )
        return 0;
      v37 = v47[1];
      v38 = v47[1];
      if ( !v47[1] )
        return v8;
      v39 = (char *)v47[0];
      if ( *(_BYTE *)v47[0] == 58 )
      {
        ++v47[0];
        --v47[1];
        if ( v42 && !(unsigned __int8)sub_2223B40(v47, 10, &v46) && v45 < (unsigned __int64)v46 )
        {
          v37 = v47[1];
          goto LABEL_60;
        }
      }
      else
      {
        if ( !v42 )
        {
LABEL_50:
          if ( *v39 != 125 )
            return v8;
          if ( v38 == 1 )
          {
            *(_DWORD *)a3 |= 2u;
            v8 = v25;
            *a2 = v39;
            return v8;
          }
          return 0;
        }
LABEL_60:
        if ( v37 )
        {
          if ( *(_BYTE *)v47[0] == 93 )
          {
            v38 = v37 - 1;
            v39 = (char *)++v47[0];
            v47[1] = v37 - 1;
            if ( v37 != 1 )
              goto LABEL_50;
          }
        }
      }
    }
  }
  else
  {
    if ( v6 != 74 )
      goto LABEL_20;
    *(_DWORD *)a3 |= 0x10u;
    v8 = 1;
    *(_QWORD *)(a3 + 8) = 0x7FFFFFFF8000LL;
    *(_BYTE *)(a3 + 16) = 1;
  }
  return v8;
}

