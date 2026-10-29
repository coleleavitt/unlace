unsigned int *__fastcall sub_AF5DD0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  unsigned int *result; // rax
  __int64 v5; // rbx
  __int64 v8; // rbx
  __int64 v9; // r15
  char v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx
  char v22; // al
  _QWORD *v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // r8d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // [rsp+0h] [rbp-70h]
  unsigned int v31; // [rsp+0h] [rbp-70h]
  unsigned int v32; // [rsp+0h] [rbp-70h]
  unsigned int v33; // [rsp+4h] [rbp-6Ch]
  __int64 v34; // [rsp+10h] [rbp-60h] BYREF
  __int64 v35[11]; // [rsp+18h] [rbp-58h] BYREF

  result = *(unsigned int **)(a2 + 40);
  if ( result )
  {
    v5 = *(result - 1);
    if ( (_DWORD)v5 )
    {
      v8 = 32 * v5;
      v9 = 0;
      while ( 1 )
      {
        result = (unsigned int *)((char *)result + v9);
        v10 = *((_BYTE *)result + 24);
        if ( v10 )
        {
          if ( !result[2] )
          {
            v11 = *result;
            v12 = result[1];
            v13 = *(_QWORD *)(a1 + 32);
            v14 = v12;
            v15 = *(_QWORD *)(v13 + 8 * v12);
            result = *(unsigned int **)(*(_QWORD *)(v13 + 8 * v11) + 8LL);
            if ( *(unsigned int **)(v15 + 8) != result )
            {
              v34 = 0;
              v16 = sub_AF1F90(a2, v11, v14, -1, &v34);
              result = (unsigned int *)(*(_QWORD *)(a2 + 40) + 32LL * v16);
              if ( !*((_BYTE *)result + 24) )
              {
                v17 = *(_DWORD *)(a2 + 128);
                v18 = *(_QWORD *)(a2 + 24);
                *((_BYTE *)result + 24) = 1;
                v19 = *result;
                result[3] = v17;
                *(_DWORD *)(a2 + 128) = v17 + 1;
                v20 = result[1];
                *(_DWORD *)(a2 + 132) = v16;
                v21 = (unsigned int)(*(_DWORD *)(v18 + 4 * v20) - *(_DWORD *)(v18 + 4 * v19));
                if ( (int)v21 > (int)result[2] )
                {
                  v30 = v16;
                  v22 = sub_AFB440(a2, v16, v21);
                  v16 = v30;
                  v10 = v22;
                }
                v23 = *(_QWORD **)(a2 + 136);
                if ( v23 )
                {
                  v24 = *((unsigned int *)v23 - 1);
                  if ( (_DWORD)v24 == *((_DWORD *)v23 - 2) )
                  {
                    v25 = (unsigned int)(3 * v24 + 1) >> 1;
                    v26 = 4 * v25 + 8;
                    if ( 4 * (int)v24 + 8 >= (unsigned int)v26 || (unsigned int)v24 >= v25 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_140FB4(v35, "Overflow encountered when expanding vector", v3);
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, v35);
                      sub_233E40((__int64)v35);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v33 = (unsigned int)(3 * v24 + 1) >> 1;
                    v31 = v16;
                    v27 = (unsigned int *)sub_186B300(v23 - 1, v26);
                    v16 = v31;
                    v23 = v27 + 2;
                    *v27 = v33;
                    v28 = v27[1];
                    *(_QWORD *)(a2 + 136) = v23;
                    result = (unsigned int *)v23 + v28;
                  }
                  else
                  {
                    result = (unsigned int *)v23 + v24;
                  }
                }
                else
                {
                  v32 = v16;
                  v29 = (_QWORD *)sub_186B270(0x10u);
                  v16 = v32;
                  v23 = v29 + 1;
                  *v29 = 2;
                  *(_QWORD *)(a2 + 136) = v29 + 1;
                  result = (unsigned int *)(v29 + 1);
                }
                *result = v16;
                ++*((_DWORD *)v23 - 1);
                if ( !v10 )
                {
                  sub_1872CE0("");
                  sub_1873130(114, 723);
                }
              }
            }
          }
        }
        v9 += 32;
        if ( v9 == v8 )
          break;
        result = *(unsigned int **)(a2 + 40);
      }
    }
  }
  return result;
}

