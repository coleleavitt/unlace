__int64 __fastcall sub_10AC260(char **a1, __int64 a2)
{
  char *v3; // rbx
  char v4; // al
  bool v5; // cc
  unsigned int v6; // ebx
  _QWORD *v8; // rbp
  const void *v9; // r13
  size_t v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *v14; // r8
  __int64 v15; // rax
  unsigned int v16; // r9d
  _QWORD *v17; // r8
  _QWORD *v18; // rcx
  unsigned int v19; // eax
  size_t v20; // rax
  size_t v21; // rbp
  char *v22; // r13
  int v23; // r15d
  unsigned __int8 v24; // cl
  int v25; // ecx
  __int64 v26; // rbx
  _BYTE *v27; // rax
  size_t v28; // rax
  unsigned int v29; // eax
  int v30; // eax
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbx
  char *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  char *v37; // rdx
  unsigned int v38; // [rsp+8h] [rbp-180h]
  __int64 *v39; // [rsp+8h] [rbp-180h]
  char v40; // [rsp+8h] [rbp-180h]
  __int64 v41; // [rsp+10h] [rbp-178h]
  _QWORD *v42; // [rsp+28h] [rbp-160h]
  unsigned __int64 v43; // [rsp+30h] [rbp-158h] BYREF
  __int64 *v44; // [rsp+38h] [rbp-150h] BYREF
  _QWORD v45[34]; // [rsp+40h] [rbp-148h] BYREF
  _BYTE v46[56]; // [rsp+150h] [rbp-38h] BYREF

  if ( (_BYTE)byte_2CD8500 || !__cxa_guard_acquire(&byte_2CD8500) )
  {
    v3 = *a1;
    v4 = **a1;
    v5 = v4 <= 73;
    if ( v4 == 73 )
      goto LABEL_19;
    goto LABEL_3;
  }
  qword_2CD8510 = 0;
  qword_2CD8520 = 0x800000000LL;
  v8 = v45;
  qmemcpy(v45, &off_2C86260, sizeof(v45));
  qword_2CD8518 = 0;
  do
  {
    while ( 1 )
    {
      v9 = (const void *)*v8;
      v10 = v8[1];
      v11 = sub_2244B30(*v8, v10);
      v12 = (unsigned int)sub_2244CB0(&qword_2CD8510, v9, v10, v11);
      v14 = (__int64 *)(qword_2CD8510 + 8 * v12);
      if ( !*v14 )
        goto LABEL_15;
      if ( *v14 == -8 )
        break;
      v8 += 2;
      sub_A45C10(&v44, v14, 0);
      if ( v8 == (_QWORD *)v46 )
        goto LABEL_18;
    }
    LODWORD(qword_2CD8520) = qword_2CD8520 - 1;
LABEL_15:
    v41 = qword_2CD8510 + 8 * v12;
    v38 = v12;
    v15 = sub_22300B0(v10 + 9, 8, v12, v13, v14, v12);
    v16 = v38;
    v17 = (_QWORD *)v41;
    v18 = (_QWORD *)v15;
    if ( v10 )
    {
      v42 = (_QWORD *)v15;
      memcpy((void *)(v15 + 8), v9, v10);
      v18 = v42;
      v17 = (_QWORD *)v41;
      v16 = v38;
    }
    *((_BYTE *)v18 + v10 + 8) = 0;
    v8 += 2;
    *v18 = v10;
    *v17 = v18;
    ++HIDWORD(qword_2CD8518);
    v19 = sub_22450D0(&qword_2CD8510, v16);
    sub_A45C10(&v44, (__int64 *)(qword_2CD8510 + 8LL * v19), 0);
  }
  while ( v8 != (_QWORD *)v46 );
LABEL_18:
  __cxa_atexit((void (*)(void *))sub_1068DE0, &qword_2CD8510, &off_2B25620);
  __cxa_guard_release(&byte_2CD8500);
  v3 = *a1;
  v4 = **a1;
  v5 = v4 <= 73;
  if ( v4 == 73 )
  {
LABEL_19:
    *(_DWORD *)a2 |= 0x10u;
    v6 = 1;
    *(_QWORD *)(a2 + 8) = 0x40FFFFFFF0LL;
    *(_BYTE *)(a2 + 16) = 1;
    return v6;
  }
LABEL_3:
  if ( v5 )
  {
    if ( (unsigned __int8)(v4 - 65) <= 2u )
      goto LABEL_5;
LABEL_20:
    v45[0] = v3;
    v20 = strlen(v3);
    v21 = v20;
    v45[1] = v20;
    if ( v20 != 2 )
    {
      if ( v20 )
        goto LABEL_23;
      return 0;
    }
    if ( *(_WORD *)v3 == 16708 || *(_WORD *)v3 == 16964 )
    {
      *a1 = v3 + 1;
LABEL_5:
      *(_DWORD *)a2 |= 0x10u;
      return 1;
    }
    else
    {
LABEL_23:
      if ( *v3 != 123 )
      {
        v22 = v3;
        v23 = 0;
        v24 = *v3 - 97;
        if ( v24 <= 0x15u )
          goto LABEL_25;
        return 0;
      }
      v21 = v20 - 1;
      v22 = v3 + 1;
      v45[0] = v3 + 1;
      v45[1] = v20 - 1;
      if ( v20 == 1 )
        return 0;
      v23 = 1;
      v24 = v3[1] - 97;
      if ( v24 > 0x15u )
      {
LABEL_34:
        v26 = -1;
        v27 = memchr(v22, 125, v21);
        if ( v27 )
        {
          v28 = v27 - v22;
          v26 = v28;
          if ( v21 > v28 )
            v21 = v28;
        }
        sub_105CB60(&v44, (__int64 *)(qword_2CD8510 + 8LL * (unsigned int)qword_2CD8518), 1);
        v39 = v44;
        v29 = sub_2244B30(v22, v21);
        v30 = sub_2244E60(&qword_2CD8510, v22, v21, v29);
        if ( v30 == -1 )
          sub_105CB60(&v44, (__int64 *)(qword_2CD8510 + 8LL * (unsigned int)qword_2CD8518), 1);
        else
          sub_105CB60(&v44, (__int64 *)(qword_2CD8510 + 8LL * v30), 1);
        if ( v39 == v44 )
          return 0;
        v31 = v26 + 1;
        if ( v31 > v45[1] )
        {
          v33 = v45[0] + v45[1];
        }
        else
        {
          v32 = v45[1] - v31;
          if ( v45[1] - v31 == -1 )
            return 0;
          v33 = v45[0] + v31;
          if ( v32 )
            return 0;
        }
        v34 = (char *)(v33 - 1);
        *(_DWORD *)a2 |= 2u;
        v6 = 1;
        *a1 = v34;
        return v6;
      }
LABEL_25:
      v25 = ~(0x240001uLL >> v24) & 1;
      if ( v25 )
      {
        if ( !(_BYTE)v23 )
          return 0;
        goto LABEL_34;
      }
      v45[0] = v22 + 1;
      v45[1] = v21 - 1;
      if ( !(_BYTE)v23 )
      {
        if ( v21 == 1 )
        {
          *(_DWORD *)a2 |= 2u;
          v6 = 1;
          *a1 = v22;
          return v6;
        }
        return 0;
      }
      if ( v21 == 1 )
        return 0;
      if ( v22[1] == 91 )
      {
        v45[0] = v22 + 2;
        v45[1] = v21 - 2;
        if ( v21 == 2 )
          return 0;
        LOBYTE(v25) = v23;
      }
      v40 = v25;
      v6 = sub_2247880(v45, 10, &v43);
      if ( (_BYTE)v6 )
        return 0;
      v35 = v45[1];
      v36 = v45[1];
      if ( !v45[1] )
        return v6;
      v37 = (char *)v45[0];
      if ( *(_BYTE *)v45[0] == 58 )
      {
        ++v45[0];
        --v45[1];
        if ( v40 && !(unsigned __int8)sub_2247880(v45, 10, &v44) && v43 < (unsigned __int64)v44 )
        {
          v35 = v45[1];
          goto LABEL_60;
        }
      }
      else
      {
        if ( !v40 )
        {
LABEL_50:
          if ( *v37 != 125 )
            return v6;
          if ( v36 == 1 )
          {
            *(_DWORD *)a2 |= 2u;
            v6 = v23;
            *a1 = v37;
            return v6;
          }
          return 0;
        }
LABEL_60:
        if ( v35 )
        {
          if ( *(_BYTE *)v45[0] == 93 )
          {
            v36 = v35 - 1;
            v37 = (char *)++v45[0];
            v45[1] = v35 - 1;
            if ( v35 != 1 )
              goto LABEL_50;
          }
        }
      }
    }
  }
  else
  {
    if ( v4 != 74 )
      goto LABEL_20;
    *(_DWORD *)a2 |= 0x10u;
    v6 = 1;
    *(_QWORD *)(a2 + 8) = 0x7FFFFFFF8000LL;
    *(_BYTE *)(a2 + 16) = 1;
  }
  return v6;
}
