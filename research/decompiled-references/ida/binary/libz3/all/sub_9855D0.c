__int64 __fastcall sub_9855D0(_QWORD *a1, __int64 a2)
{
  char **exception; // rbp
  char **v3; // rbp
  __int64 v5; // rax
  __int64 result; // rax
  int *v7; // rbx
  int *v8; // r14
  int v9; // r13d
  unsigned int v10; // r15d
  __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned int *v13; // rdx
  __int64 v14; // rax
  unsigned int *v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // ecx
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // ebp
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  unsigned int v31; // [rsp+Ch] [rbp-6Ch]
  __int64 v32[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = a1[41];
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  result = sub_984A90((__int64)a1, a2, (__int64)(a1 + 41));
  v7 = (int *)a1[41];
  if ( v7 )
  {
    result = (unsigned int)*(v7 - 1);
    v8 = &v7[result];
    if ( v8 != v7 )
    {
      while ( 1 )
      {
        v9 = *v7;
        v10 = (unsigned int)*v7 >> 1;
        v11 = 16LL * v10;
        v12 = v11 + *(_QWORD *)(a1[3] + 8872LL);
        result = *(unsigned __int8 *)(v12 + 11);
        if ( (result & 1) != 0 )
        {
          if ( (result & 2) == 0 )
            goto LABEL_7;
LABEL_13:
          v16 = (_QWORD *)a1[40];
          if ( v16 )
          {
            v17 = *((unsigned int *)v16 - 1);
            if ( (_DWORD)v17 == *((_DWORD *)v16 - 2) )
            {
              v23 = (unsigned int)(3 * v17 + 1) >> 1;
              v24 = 4 * v23 + 8;
              if ( 4 * (int)v17 + 8 >= (unsigned int)v24 || (unsigned int)v17 >= v23 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v32, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v32);
                sub_233E40((__int64)v32);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v25 = (unsigned int *)sub_186B300(v16 - 1, v24);
              v16 = v25 + 2;
              *v25 = v23;
              v26 = v25[1];
              a1[40] = v16;
              result = (__int64)v16 + 4 * v26;
            }
            else
            {
              result = (__int64)v16 + 4 * v17;
            }
          }
          else
          {
            v30 = (_QWORD *)sub_186B270(0x10u);
            v16 = v30 + 1;
            *v30 = 2;
            a1[40] = v30 + 1;
            result = (__int64)(v30 + 1);
          }
          ++v7;
          *(_DWORD *)result = v9;
          ++*((_DWORD *)v16 - 1);
          if ( v8 == v7 )
            return result;
        }
        else
        {
          *(_BYTE *)(v12 + 11) = result | 1;
          v13 = (unsigned int *)a1[42];
          if ( v13 )
          {
            v14 = *(v13 - 1);
            if ( (_DWORD)v14 == *(v13 - 2) )
            {
              v18 = (unsigned int)(3 * v14 + 1) >> 1;
              v19 = 4 * v18 + 8;
              if ( 4 * (int)v14 + 8 >= (unsigned int)v19 || (unsigned int)v14 >= v18 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v32, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, v32);
                sub_233E40((__int64)v32);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v31 = (unsigned int)(3 * v14 + 1) >> 1;
              v20 = (unsigned int *)sub_186B300(v13 - 2, v19);
              v13 = v20 + 2;
              *v20 = v31;
              v21 = a1[3];
              v22 = v20[1];
              a1[42] = v13;
              v15 = &v13[v22];
              v12 = *(_QWORD *)(v21 + 8872) + v11;
            }
            else
            {
              v15 = &v13[v14];
            }
          }
          else
          {
            v27 = (_QWORD *)sub_186B270(0x10u);
            v13 = (unsigned int *)(v27 + 1);
            *v27 = 2;
            v28 = a1[3];
            a1[42] = v13;
            v29 = *(_QWORD *)(v28 + 8872);
            v15 = v13;
            v12 = v11 + v29;
          }
          *v15 = v10;
          result = *(unsigned __int8 *)(v12 + 11);
          ++*(v13 - 1);
          if ( (result & 2) != 0 )
            goto LABEL_13;
LABEL_7:
          if ( v8 == ++v7 )
            return result;
        }
      }
    }
  }
  return result;
}

