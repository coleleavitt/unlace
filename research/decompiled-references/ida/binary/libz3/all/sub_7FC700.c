_QWORD *__fastcall sub_7FC700(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 *v7; // rbp
  __int64 *v8; // r15
  __int64 v9; // rsi
  int v10; // eax
  _QWORD *v11; // rsi
  __int64 v12; // rbx
  _DWORD *v13; // rax
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // r9d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rsi
  __int64 *v20; // rbp
  __int64 *v21; // r14
  __int64 v22; // rsi
  int v23; // eax
  _QWORD *v24; // rsi
  __int64 v25; // rbx
  _DWORD *v26; // rax
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // r15d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rsi
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  char **v36; // rbp
  char **exception; // rbp
  unsigned int v38; // [rsp+14h] [rbp-84h]
  __int64 v39; // [rsp+18h] [rbp-80h]
  __int64 v40; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v41; // [rsp+38h] [rbp-60h]
  __int64 v42[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  a1[1] = 0;
  v5 = a3[4];
  v6 = *(_QWORD *)(a2 + 16);
  *a1 = v4;
  v39 = a3[6];
  sub_7F5440((__int64)&v40, v6, a3[5]);
  v7 = v41;
  if ( v41 )
  {
    v8 = &v41[*((unsigned int *)v41 - 1)];
    if ( v8 != v41 )
    {
      do
      {
        v12 = *v7;
        if ( v5 == *v7 )
          goto LABEL_6;
        if ( !*(_WORD *)(v12 + 4)
          && (v13 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL)) != nullptr
          && !*v13
          && v13[1] == 8
          && *(_DWORD *)(v12 + 24) == 1 )
        {
          if ( v5 == *(_QWORD *)(v12 + 32) )
            goto LABEL_6;
          v14 = (_QWORD *)a1[1];
          ++*(_DWORD *)(v12 + 8);
          if ( v14 )
          {
LABEL_12:
            v15 = *((_DWORD *)v14 - 1);
            if ( v15 == *((_DWORD *)v14 - 2) )
            {
              v16 = (3 * v15 + 1) >> 1;
              v17 = 8 * v16 + 8;
              if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v42, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v42);
                sub_233E40((__int64)v42);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v38 = (3 * v15 + 1) >> 1;
              v18 = (unsigned int *)sub_186B300(v14 - 1, v17);
              v19 = v18[1];
              v14 = v18 + 2;
              a1[1] = v18 + 2;
              *v18 = v38;
              LODWORD(v18) = v19;
              v11 = &v14[v19];
              v10 = (_DWORD)v18 + 1;
            }
            else
            {
              v9 = v15;
              v10 = v15 + 1;
              v11 = &v14[v9];
            }
            goto LABEL_5;
          }
        }
        else
        {
          v14 = (_QWORD *)a1[1];
          ++*(_DWORD *)(v12 + 8);
          if ( v14 )
            goto LABEL_12;
        }
        v34 = (_QWORD *)sub_186B270(0x18u);
        v14 = v34 + 1;
        *v34 = 2;
        v10 = 1;
        a1[1] = v14;
        v11 = v14;
LABEL_5:
        *v11 = v12;
        *((_DWORD *)v14 - 1) = v10;
LABEL_6:
        ++v7;
      }
      while ( v8 != v7 );
    }
  }
  sub_2334C0(&v40);
  sub_7F5440((__int64)&v40, *(_QWORD *)(a2 + 16), v39);
  v20 = v41;
  if ( v41 )
  {
    v21 = &v41[*((unsigned int *)v41 - 1)];
    if ( v21 != v41 )
    {
      do
      {
        v25 = *v20;
        if ( v5 == *v20 )
          goto LABEL_21;
        if ( !*(_WORD *)(v25 + 4)
          && (v26 = *(_DWORD **)(*(_QWORD *)(v25 + 16) + 24LL)) != nullptr
          && !*v26
          && v26[1] == 8
          && *(_DWORD *)(v25 + 24) == 1 )
        {
          if ( v5 == *(_QWORD *)(v25 + 32) )
            goto LABEL_21;
          v27 = (_QWORD *)a1[1];
          ++*(_DWORD *)(v25 + 8);
          if ( v27 )
          {
LABEL_27:
            v28 = *((_DWORD *)v27 - 1);
            if ( v28 == *((_DWORD *)v27 - 2) )
            {
              v29 = (3 * v28 + 1) >> 1;
              v30 = 8 * v29 + 8;
              if ( 8 * v28 + 8 >= (unsigned int)v30 || v28 >= v29 )
              {
                v36 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v42, "Overflow encountered when expanding vector");
                *v36 = (char *)off_1C63128;
                sub_2333C0(v36 + 1, v42);
                sub_233E40((__int64)v42);
                __cxa_throw(v36, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v31 = (unsigned int *)sub_186B300(v27 - 1, v30);
              v32 = v31[1];
              v27 = v31 + 2;
              *v31 = v29;
              a1[1] = v31 + 2;
              LODWORD(v31) = v32;
              v24 = &v27[v32];
              v23 = (_DWORD)v31 + 1;
            }
            else
            {
              v22 = v28;
              v23 = v28 + 1;
              v24 = &v27[v22];
            }
            goto LABEL_20;
          }
        }
        else
        {
          v27 = (_QWORD *)a1[1];
          ++*(_DWORD *)(v25 + 8);
          if ( v27 )
            goto LABEL_27;
        }
        v35 = (_QWORD *)sub_186B270(0x18u);
        v27 = v35 + 1;
        *v35 = 2;
        v23 = 1;
        a1[1] = v27;
        v24 = v27;
LABEL_20:
        *v24 = v25;
        *((_DWORD *)v27 - 1) = v23;
LABEL_21:
        ++v20;
      }
      while ( v21 != v20 );
    }
  }
  sub_2334C0(&v40);
  return a1;
}

