__int64 __fastcall sub_A88900(__int64 a1)
{
  __int64 result; // rax
  char *v3; // rdi
  int v4; // ecx
  char *v5; // rdx
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // edx
  __int64 v10; // rbp
  unsigned int *v11; // r14
  __int64 *v12; // r12
  unsigned int v13; // ecx
  _QWORD *v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r13d
  unsigned int v17; // r15d
  __int64 v18; // rax
  int v19; // esi
  unsigned int v20; // ebp
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // r12d
  __int64 v27; // rax
  unsigned int v28; // r12d
  __int64 v29; // rdx
  __int64 v30; // rsi
  unsigned int v31; // edx
  size_t v32; // rsi
  unsigned int *v33; // rax
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rax
  _QWORD *v37; // rax
  unsigned int v38; // esi
  char **exception; // rbp
  __int64 v40; // [rsp+0h] [rbp-98h]
  unsigned int **v41; // [rsp+20h] [rbp-78h]
  __int64 v42; // [rsp+20h] [rbp-78h]
  unsigned int v43; // [rsp+20h] [rbp-78h]
  _QWORD *v44; // [rsp+20h] [rbp-78h]
  unsigned int v45; // [rsp+28h] [rbp-70h]
  unsigned int v46; // [rsp+28h] [rbp-70h]
  __int64 v47; // [rsp+28h] [rbp-70h]
  unsigned int v48; // [rsp+34h] [rbp-64h] BYREF
  unsigned int *v49; // [rsp+38h] [rbp-60h] BYREF
  char *v50[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( *(_QWORD *)(a1 + 328) )
  {
    result = sub_1021C70();
    if ( (_BYTE)result )
      return result;
  }
  *(_DWORD *)(a1 + 296) = 0;
  if ( !*(_DWORD *)(a1 + 412) && !*(_DWORD *)(a1 + 416) )
    goto LABEL_11;
  v3 = *(char **)(a1 + 400);
  v4 = 0;
  v5 = &v3[8 * *(unsigned int *)(a1 + 408)];
  v6 = *(_DWORD *)(a1 + 408);
  v7 = *(_QWORD *)(a1 + 400);
  if ( v3 != v5 )
  {
    do
    {
      while ( *(_DWORD *)(v7 + 4) != 0x80000000 )
      {
        *(_DWORD *)(v7 + 4) = 0x80000000;
        v7 += 8;
        if ( v5 == (char *)v7 )
          goto LABEL_9;
      }
      v7 += 8;
      ++v4;
    }
    while ( v5 != (char *)v7 );
LABEL_9:
    if ( v6 > 0x10 && 3 * v6 < 4 * v4 )
    {
      if ( v3 )
      {
        sub_186B220(v3);
        v20 = *(_DWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 400) = 0;
        v20 >>= 1;
        *(_DWORD *)(a1 + 408) = v20;
        v21 = v20;
        v22 = sub_186B270(8LL * v20);
        if ( !v20 )
        {
LABEL_44:
          *(_QWORD *)(a1 + 400) = v22;
          goto LABEL_10;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 400) = 0;
        v38 = v6 >> 1;
        v21 = v38;
        *(_DWORD *)(a1 + 408) = v38;
        v22 = sub_186B270(8LL * v38);
      }
      v23 = v22 + 8 * v21;
      v24 = v22;
      if ( (v21 & 1) == 0 || (v24 = v22 + 8, *(_DWORD *)(v22 + 4) = 0x80000000, v22 + 8 != v23) )
      {
        do
        {
          *(_DWORD *)(v24 + 4) = 0x80000000;
          v24 += 16;
          *(_DWORD *)(v24 - 4) = 0x80000000;
        }
        while ( v24 != v23 );
      }
      goto LABEL_44;
    }
  }
LABEL_10:
  *(_QWORD *)(a1 + 412) = 0;
LABEL_11:
  v8 = *(_QWORD *)a1;
  result = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( !result )
    return result;
  v9 = *(_DWORD *)(result - 4);
  if ( v9 <= 0 )
    return result;
  v10 = 0;
  v11 = nullptr;
  v40 = (unsigned int)v9;
  while ( 1 )
  {
    v12 = *(__int64 **)(result + 8 * v10);
    result = sub_966310(v8, v12);
    if ( (_BYTE)result )
    {
      if ( !(unsigned __int8)sub_FFAE60(*(_QWORD *)(a1 + 504)) )
        sub_A7A1D0((_QWORD *)a1, (unsigned int)v10);
      v16 = sub_FF9FB0(*(_QWORD *)(a1 + 504), (unsigned int)v10);
      v50[0] = nullptr;
      v48 = v10;
      sub_A755C0(a1 + 384, &v48, v50);
      result = (__int64)v50[0];
      v17 = *((_DWORD *)v50[0] + 1);
      if ( v17 != (_DWORD)v10 )
      {
        v13 = *((_DWORD *)v50[0] + 1);
        result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 8LL * v17);
        if ( *(_QWORD *)(result + 8) != v12[1] )
        {
          if ( !(unsigned __int8)sub_FFADE0(*(_QWORD *)(a1 + 504), v16) )
          {
            if ( !v11 )
              goto LABEL_45;
            result = *(v11 - 1);
            if ( (_DWORD)result == *(v11 - 2) )
              goto LABEL_45;
            goto LABEL_32;
          }
          v18 = *(_QWORD *)(a1 + 312);
          if ( !v18
            || v17 >= *(_DWORD *)(v18 - 4)
            || (v13 = v17, result = *(unsigned int *)(v18 + 4LL * v17), (unsigned int)result >= *(_DWORD *)(a1 + 296))
            || v17 != *(_DWORD *)(*(_QWORD *)(a1 + 304) + 4 * result) )
          {
            v16 = sub_FF9FB0(*(_QWORD *)(a1 + 504), v17);
            result = sub_FFADE0(*(_QWORD *)(a1 + 504), v16);
            if ( !(_BYTE)result )
            {
              v15 = *(_QWORD *)(a1 + 312);
              if ( v15 )
              {
                v45 = *(_DWORD *)(v15 - 4);
                if ( v17 >= v45 || (v25 = *(_DWORD *)(v15 + 4LL * v17), v25 >= *(_DWORD *)(a1 + 296)) )
                {
                  v26 = v17 + 1;
                  v41 = (unsigned int **)(a1 + 312);
                }
                else
                {
                  v26 = v17 + 1;
                  v41 = (unsigned int **)(a1 + 312);
                  if ( v17 == *(_DWORD *)(*(_QWORD *)(a1 + 304) + 4LL * v25) )
                    goto LABEL_56;
                }
                if ( v45 >= v26 )
                {
LABEL_53:
                  v27 = *(unsigned int *)(a1 + 296);
                  v14 = *(_QWORD **)(a1 + 304);
                  v28 = v27 + 1;
                  if ( v14 )
                  {
                    v13 = *((_DWORD *)v14 - 1);
                    v46 = v13;
                    if ( v13 >= v28 )
                    {
LABEL_55:
                      *(_DWORD *)(v15 + 4LL * v17) = v27;
                      *((_DWORD *)v14 + v27) = v17;
                      ++*(_DWORD *)(a1 + 296);
LABEL_56:
                      if ( !v11 || (result = *(v11 - 1), (_DWORD)result == *(v11 - 2)) )
                      {
LABEL_45:
                        v49 = v11;
                        sub_2FD3F0(&v49);
                        v11 = v49;
                        result = *(v49 - 1);
                      }
LABEL_32:
                      v11[result] = v16;
                      ++*(v11 - 1);
                      goto LABEL_23;
                    }
                  }
                  else
                  {
                    v27 = 0xFFFFFFFFLL;
                    if ( !v28 )
                      goto LABEL_55;
                    v37 = (_QWORD *)sub_186B270(0x10u);
                    v14 = v37 + 1;
                    *v37 = 2;
                    *(_QWORD *)(a1 + 304) = v37 + 1;
                    v46 = 0;
                  }
                  while ( 1 )
                  {
                    v34 = *((_DWORD *)v14 - 2);
                    if ( v34 >= v28 )
                      break;
                    v31 = (3 * v34 + 1) >> 1;
                    v32 = 4 * v31 + 8;
                    if ( 4 * v34 + 8 >= (unsigned int)v32 || v34 >= v31 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_137C7A(v50);
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v50);
                      sub_233E40((__int64)v50);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v43 = (3 * v34 + 1) >> 1;
                    v33 = (unsigned int *)sub_186B300(v14 - 1, v32);
                    v14 = v33 + 2;
                    *(_QWORD *)(a1 + 304) = v33 + 2;
                    *v33 = v43;
                  }
                  *((_DWORD *)v14 - 1) = v28;
                  v35 = 4LL * v28;
                  v15 = *(_QWORD *)(a1 + 312);
                  v36 = 4LL * v46;
                  if ( v36 == v35 )
                  {
                    v27 = *(unsigned int *)(a1 + 296);
                  }
                  else
                  {
                    v47 = *(_QWORD *)(a1 + 312);
                    v44 = v14;
                    memset((char *)v14 + v36, 0, v35 - v36);
                    v27 = *(unsigned int *)(a1 + 296);
                    v15 = v47;
                    v14 = v44;
                  }
                  goto LABEL_55;
                }
              }
              else
              {
                v26 = v17 + 1;
                if ( v17 == -1 )
                  goto LABEL_53;
                v45 = 0;
                v41 = (unsigned int **)(a1 + 312);
              }
              while ( !v15 || *(_DWORD *)(v15 - 8) < v26 )
              {
                sub_2FD3F0(v41);
                v15 = *(_QWORD *)(a1 + 312);
              }
              *(_DWORD *)(v15 - 4) = v26;
              v29 = 4LL * v26;
              v30 = 4LL * v45;
              if ( v30 != v29 )
              {
                v42 = v15;
                memset((void *)(v15 + v30), 255, v29 - v30);
                v15 = v42;
              }
              goto LABEL_53;
            }
          }
        }
      }
    }
LABEL_23:
    if ( v40 == ++v10 )
      break;
    v8 = *(_QWORD *)a1;
    result = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  }
  if ( v11 )
  {
    v19 = *(v11 - 1);
    if ( v19 )
      sub_1000B00(*(_QWORD *)(a1 + 504), v19, (_DWORD)v11, v13, (_DWORD)v14, v15, v40);
    return sub_186B220(v11 - 2);
  }
  return result;
}

