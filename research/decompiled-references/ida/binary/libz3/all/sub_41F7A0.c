void __fastcall sub_41F7A0(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  char *v7; // r14
  __int64 v8; // r12
  bool v9; // cc
  __int64 v10; // rcx
  char *v11; // rsi
  __int64 v12; // rcx
  char *v13; // rbx
  __int64 v14; // r15
  char *v15; // r12
  char *v16; // r14
  __int64 v17; // rbx
  char *v18; // rbp
  char *v19; // rbp
  __int64 v20; // rax
  char *v21; // rsi
  size_t v22; // r14
  signed __int64 v23; // rcx
  size_t v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // r15
  char *v28; // r12
  __int64 v29; // rbx
  char *v30; // rbp
  signed __int64 v31; // r8
  size_t v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // [rsp+8h] [rbp-A0h]
  __int64 v36; // [rsp+10h] [rbp-98h]
  char *srca; // [rsp+18h] [rbp-90h]
  char *v39; // [rsp+20h] [rbp-88h]
  __int64 v40; // [rsp+28h] [rbp-80h]
  __int64 v41; // [rsp+28h] [rbp-80h]
  char *dest; // [rsp+30h] [rbp-78h]
  __int64 v43; // [rsp+40h] [rbp-68h]
  size_t n; // [rsp+58h] [rbp-50h]
  _BYTE v46[57]; // [rsp+6Fh] [rbp-39h] BYREF

  v7 = a1;
  v8 = a4;
  v9 = a5 <= a4;
  v10 = a5;
  if ( !v9 )
    v10 = v8;
  v11 = a3;
  v39 = a1;
  v36 = a5;
  if ( a7 < v10 )
  {
    v35 = v8;
    v12 = v8;
    dest = a6;
    if ( a5 >= v8 )
      goto LABEL_21;
LABEL_5:
    v43 = v12 / 2;
    v13 = &v39[8 * (v12 / 2)];
    v14 = (a3 - a2) >> 3;
    if ( a3 - a2 > 0 )
    {
      v40 = v12 / 2;
      v15 = &v39[8 * (v12 / 2)];
      v16 = a2;
      while ( 1 )
      {
        while ( 1 )
        {
          v17 = v14 >> 1;
          v18 = &v16[8 * (v14 >> 1)];
          if ( !(unsigned __int8)sub_422720(v46, *(_QWORD *)v18, *(_QWORD *)v15) )
            break;
          v16 = v18 + 8;
          v14 = v14 - v17 - 1;
          if ( v14 <= 0 )
            goto LABEL_9;
        }
        if ( !v17 )
          break;
        v14 >>= 1;
      }
LABEL_9:
      v19 = v16;
      v13 = v15;
      v35 -= v40;
      v36 -= (v16 - a2) >> 3;
      v41 = (v16 - a2) >> 3;
      v20 = v41;
      if ( v41 >= v35 )
        goto LABEL_27;
LABEL_10:
      if ( v20 > a7 )
        goto LABEL_27;
      if ( !v20 )
      {
        a2 = v19;
        v7 = v13;
        goto LABEL_17;
      }
      v21 = a2;
      v22 = v19 - a2;
      v23 = a2 - v13;
      if ( v19 - a2 > 8 )
      {
        v24 = v19 - a2;
        srca = (char *)(a2 - v13);
        memmove(dest, v21, v24);
        if ( (__int64)srca <= 8 )
        {
          if ( srca == &byte_8 )
            *((_QWORD *)v19 - 1) = *(_QWORD *)v13;
        }
        else
        {
          memmove((void *)(v19 - srca), v13, (size_t)srca);
        }
        memmove(v13, dest, v22);
        goto LABEL_16;
      }
      if ( v19 - a2 != 8 )
      {
        if ( v23 <= 8 )
        {
          if ( v23 == 8 )
            *((_QWORD *)v19 - 1) = *(_QWORD *)v13;
        }
        else
        {
          memmove(&v19[-v23], v13, a2 - v13);
        }
        goto LABEL_16;
      }
      v33 = *(_QWORD *)a2;
      *(_QWORD *)dest = *(_QWORD *)a2;
      if ( v23 <= 8 )
      {
        if ( v23 != 8 )
          goto LABEL_55;
        *((_QWORD *)v19 - 1) = *(_QWORD *)v13;
      }
      else
      {
        memmove(&v19[-v23], v13, v23);
      }
      v33 = *(_QWORD *)dest;
LABEL_55:
      *(_QWORD *)v13 = v33;
LABEL_16:
      a2 = v19;
      v7 = &v13[v22];
      goto LABEL_17;
    }
    v35 -= v12 / 2;
    if ( v35 <= 0 || (v7 = &v39[8 * (v12 / 2)], LODWORD(v41) = 0, a7 < 0) )
    {
      LODWORD(v41) = 0;
      v19 = a2;
      goto LABEL_27;
    }
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_17:
        sub_41F7A0((_DWORD)v39, (_DWORD)v13, (_DWORD)v7, v43, v41, (_DWORD)dest, a7);
        v25 = v36;
        if ( v35 <= v36 )
          v25 = v35;
        if ( a7 >= v25 )
        {
          v11 = a3;
          v8 = v35;
          a6 = dest;
          goto LABEL_39;
        }
        v39 = v7;
        v12 = v35;
        if ( v36 < v35 )
          goto LABEL_5;
LABEL_21:
        v13 = v39;
        v26 = v36 / 2;
        v19 = &a2[8 * (v36 / 2)];
        v41 = v36 / 2;
        v27 = (a2 - v39) >> 3;
        if ( a2 - v39 <= 0 )
        {
          LODWORD(v43) = 0;
        }
        else
        {
          v28 = v39;
          while ( 1 )
          {
            while ( 1 )
            {
              v29 = v27 >> 1;
              v30 = &v28[8 * (v27 >> 1)];
              if ( (unsigned __int8)sub_422720(v46, *(_QWORD *)&a2[8 * (v36 / 2)], *(_QWORD *)v30) )
                break;
              v28 = v30 + 8;
              v27 = v27 - v29 - 1;
              if ( v27 <= 0 )
                goto LABEL_25;
            }
            if ( !v29 )
              break;
            v27 >>= 1;
          }
LABEL_25:
          v19 = &a2[8 * (v36 / 2)];
          v26 = v36 / 2;
          v13 = v28;
          v35 -= (v28 - v39) >> 3;
          v43 = (v28 - v39) >> 3;
        }
        v20 = v36 / 2;
        v36 -= v26;
        if ( v41 < v35 )
          goto LABEL_10;
LABEL_27:
        if ( a7 < v35 )
        {
          v7 = sub_3FD1D0(v13, a2, v19);
          goto LABEL_33;
        }
        if ( v35 )
          break;
        a2 = v19;
        v7 = v19;
      }
      v31 = v19 - a2;
      v7 = &v19[-(a2 - v13)];
      if ( a2 - v13 <= 8 )
      {
        if ( a2 - v13 == 8 )
        {
          v34 = *(_QWORD *)v13;
          *(_QWORD *)dest = *(_QWORD *)v13;
          if ( v31 > 8 )
          {
            memmove(v13, a2, v31);
            goto LABEL_63;
          }
          if ( v31 == 8 )
          {
            *(_QWORD *)v13 = *(_QWORD *)a2;
LABEL_63:
            v34 = *(_QWORD *)dest;
          }
          *((_QWORD *)v19 - 1) = v34;
          goto LABEL_33;
        }
        if ( v31 <= 8 )
        {
          if ( v31 == 8 )
            *(_QWORD *)v13 = *(_QWORD *)a2;
        }
        else
        {
          memmove(v13, a2, v19 - a2);
        }
      }
      else
      {
        n = v19 - a2;
        memmove(dest, v13, a2 - v13);
        v32 = a2 - v13;
        if ( v19 - a2 <= 8 )
        {
          if ( n == 8 )
            *(_QWORD *)v13 = *(_QWORD *)a2;
        }
        else
        {
          memmove(v13, a2, n);
          v32 = a2 - v13;
        }
        memmove(v7, dest, v32);
      }
LABEL_33:
      a2 = v19;
    }
  }
LABEL_39:
  sub_41F190(v7, a2, v11, v8, v36, a6);
}

