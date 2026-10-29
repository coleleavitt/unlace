__int64 __fastcall sub_B9C4A0(_QWORD *a1, int *a2)
{
  char **exception; // rbp
  char **v3; // rbp
  int *v4; // r15
  _QWORD *v5; // r12
  _DWORD *v6; // rbx
  unsigned int v7; // r13d
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  __int64 result; // rax
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // r14
  char v14; // cl
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 **v17; // rbp
  __int64 **v18; // rdx
  __int64 v19; // r13
  __int64 i; // rbx
  __int64 *v21; // r15
  __int64 v22; // r14
  __int64 **v23; // rdx
  __int64 *v24; // r14
  __int64 *v25; // rbx
  __int64 v26; // rbp
  __int64 v27; // r15
  __int64 v28; // r12
  _QWORD *v29; // r13
  _QWORD *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // rsi
  _QWORD *v33; // rsi
  unsigned int v34; // r10d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rsi
  _QWORD *v38; // rax
  __int64 v39; // rax
  unsigned int v40; // edx
  _DWORD *v41; // rdi
  unsigned int v43; // r15d
  _QWORD *v44; // r13
  unsigned int v45; // r12d
  unsigned int v46; // ebp
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rdx
  int v50; // ebp
  char *v51; // rdi
  char *v52; // rdx
  __int64 **v53; // [rsp+0h] [rbp-88h]
  _QWORD *v54; // [rsp+0h] [rbp-88h]
  __int64 **v55; // [rsp+8h] [rbp-80h]
  _QWORD *v56; // [rsp+10h] [rbp-78h]
  unsigned int v57; // [rsp+1Ch] [rbp-6Ch]
  __int64 **v58; // [rsp+20h] [rbp-68h]
  char *v59[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2;
  v5 = a1;
  v6 = (_DWORD *)a1[67];
  v7 = *a2 + 0x80000000;
  v8 = *a2 - 0x7FFFFFFF;
  if ( v6 )
  {
    v9 = *(v6 - 1);
    if ( v9 >= v8 )
      goto LABEL_3;
    v40 = *(v6 - 2);
    if ( v40 >= v8 )
    {
      *(v6 - 1) = v8;
      v51 = (char *)v6 + v9;
      v52 = (char *)v6 + v8;
LABEL_37:
      memset(v51, 0, v52 - v51);
      goto LABEL_3;
    }
  }
  else
  {
    if ( *a2 == 0x7FFFFFFF )
      goto LABEL_3;
    v9 = 0;
    v39 = sub_186B270(0xAu);
    v40 = 2;
    v6 = (_DWORD *)(v39 + 8);
    *(_QWORD *)v39 = 2;
    a1[67] = v39 + 8;
    if ( v8 <= 2 )
    {
      *(_DWORD *)(v39 + 4) = v8;
      v51 = (char *)(v39 + 8);
      v52 = (char *)v6 + v8;
      goto LABEL_37;
    }
  }
  v41 = v6;
  v43 = v7;
  v44 = v5;
  v45 = v8;
  do
  {
    v46 = (3 * v40 + 1) >> 1;
    v47 = v46 + 8;
    if ( v40 + 8 >= (unsigned int)v47 || v40 >= v46 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_151CF2(v59);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v59);
      sub_233E40((__int64)v59);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v48 = (unsigned int *)sub_186B300(v41 - 2, v47);
    v40 = v46;
    v41 = v48 + 2;
    *v48 = v46;
    v44[67] = v48 + 2;
  }
  while ( v46 < v45 );
  v49 = v45;
  v5 = v44;
  v7 = v43;
  v4 = a2;
  v50 = v49;
  v6 = v48 + 2;
  v48[1] = v49;
  v51 = (char *)v41 + v9;
  v52 = (char *)v48 + v49 + 8;
  if ( v50 != v9 )
    goto LABEL_37;
LABEL_3:
  result = (__int64)v6 + v7;
  if ( !*(_BYTE *)result )
  {
    *(_BYTE *)result = 1;
    v56 = v5 + 6;
    v11 = sub_180C100(v5 + 6, 24);
    *(_QWORD *)v11 = off_1C57AD0;
    *(_QWORD *)(v11 + 8) = v5 + 67;
    *(_DWORD *)(v11 + 16) = v7;
    v59[0] = (char *)v11;
    sub_B9B610(v5 + 4, v59);
    v12 = sub_B9B270(v5 + 11, v4);
    v13 = v5[1];
    v14 = v12;
    v15 = *(_QWORD *)(v13 + 8696);
    v16 = *v4 + 0x80000000;
    if ( v15 && (unsigned int)v16 < *(_DWORD *)(v15 - 4) )
      result = v15 + 8 * v16;
    else
      result = v13 + 8704;
    v17 = *(__int64 ***)result;
    if ( *(_QWORD *)result )
    {
      result = *((unsigned int *)v17 - 1);
      if ( &v17[result] != v17 )
      {
        v55 = &v17[result];
        v18 = v17;
        v19 = 1LL << v14;
        for ( i = v5[1]; ; i = v5[1] )
        {
          v21 = *v18;
          v53 = v18;
          v22 = **v18;
          result = sub_8E7030(i);
          v23 = v53;
          if ( !(_DWORD)result
            || (result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(i + 7488) + 56LL))(
                           *(_QWORD *)(i + 7488),
                           v22),
                v23 = v53,
                (_BYTE)result) )
          {
            if ( (*((_BYTE *)v21 + 44) & 8) == 0 )
            {
              result = *(unsigned int *)(*v21 + 24);
              if ( (_DWORD)result )
              {
                v58 = v23;
                v24 = v21;
                v25 = &v21[result];
                v26 = v19;
                v54 = v5;
                do
                {
                  while ( 1 )
                  {
                    result = v24[14];
                    v27 = *(_QWORD *)(result + 8);
                    v28 = *(_QWORD *)(v27 + 104);
                    if ( (v26 & v28) == 0 )
                      break;
                    if ( ++v24 == v25 )
                      goto LABEL_22;
                  }
                  v29 = (_QWORD *)sub_180C100(v56, 24);
                  *v29 = off_1C56EA8;
                  v29[1] = v27 + 104;
                  v29[2] = v28;
                  v30 = (_QWORD *)v54[4];
                  if ( v30 )
                  {
                    v31 = *((_DWORD *)v30 - 1);
                    if ( v31 == *((_DWORD *)v30 - 2) )
                    {
                      v34 = (3 * v31 + 1) >> 1;
                      v35 = 8 * v34 + 8;
                      if ( 8 * v31 + 8 >= (unsigned int)v35 || v31 >= v34 )
                      {
                        v3 = (char **)__cxa_allocate_exception(0x28u);
                        sub_151CF2(v59);
                        *v3 = (char *)off_1C63128;
                        sub_2333C0(v3 + 1, v59);
                        sub_233E40((__int64)v59);
                        __cxa_throw(
                          v3,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v57 = (3 * v31 + 1) >> 1;
                      v36 = (unsigned int *)sub_186B300(v30 - 1, v35);
                      v37 = v36[1];
                      v30 = v36 + 2;
                      *v36 = v57;
                      LODWORD(v36) = v37;
                      v54[4] = v30;
                      v33 = &v30[v37];
                      result = (unsigned int)((_DWORD)v36 + 1);
                    }
                    else
                    {
                      v32 = v31;
                      result = v31 + 1;
                      v33 = &v30[v32];
                    }
                  }
                  else
                  {
                    v38 = (_QWORD *)sub_186B270(0x18u);
                    v30 = v38 + 1;
                    *v38 = 2;
                    v33 = v38 + 1;
                    v54[4] = v38 + 1;
                    result = 1;
                  }
                  ++v24;
                  *v33 = v29;
                  *((_DWORD *)v30 - 1) = result;
                  *(_QWORD *)(v27 + 104) |= v26;
                }
                while ( v24 != v25 );
LABEL_22:
                v23 = v58;
                v5 = v54;
                v19 = v26;
              }
            }
          }
          v18 = v23 + 1;
          if ( v55 == v18 )
            break;
        }
      }
    }
  }
  return result;
}

