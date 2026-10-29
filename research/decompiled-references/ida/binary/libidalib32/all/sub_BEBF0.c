const char *__fastcall sub_BEBF0(int a1, const char *a2, const char *a3, int a4)
{
  const char *result; // rax
  __int64 v5; // r15
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  int v10; // r14d
  __int64 v11; // rdx
  const char *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  size_t v16; // rax
  size_t v17; // r13
  size_t v18; // rax
  size_t v19; // rbx
  __int64 v20; // rax
  size_t v21; // r14
  void *v22; // rax
  void *v23; // rdi
  size_t v24; // r13
  __int64 v25; // rax

  result = "No debugger";
  if ( dbg )
  {
    v5 = *(_QWORD *)(dbg + 32LL);
    result = "Exceptions are not supported";
    if ( (v5 & 0x1000000000LL) != 0 )
    {
      result = "Exception code zero is not allowed";
      if ( a1 )
      {
        result = "Empty exception name is not allowed";
        if ( a2 )
        {
          if ( *a2 )
          {
            v8 = xmmword_2512E8;
            if ( (_QWORD)xmmword_2512E8 )
            {
              v9 = qword_2512E0;
              v10 = 0;
              v11 = 0;
              while ( 1 )
              {
                v13 = v9 + 56 * v11;
                if ( *(_DWORD *)v13 == a1 )
                  return "Exception with this code already exists";
                v12 = s1;
                if ( *(_QWORD *)(v13 + 16) )
                  v12 = *(const char **)(v13 + 8);
                if ( !strcmp(v12, a2) )
                  return "Exception with this name already exists";
                v11 = ++v10;
                if ( v10 >= v8 )
                  goto LABEL_15;
              }
            }
            else
            {
LABEL_15:
              if ( dword_2515A4 <= 0 || (result = "Debugger is busy", (v5 & 0x40) == 0) )
              {
                v14 = qword_2512E0;
                if ( *((_QWORD *)&xmmword_2512E8 + 1) < v8 + 1 )
                {
                  v20 = qvector_reserve();
                  v8 = xmmword_2512E8;
                  qword_2512E0 = v20;
                  v14 = v20;
                }
                v15 = v14 + 56 * v8;
                *(_QWORD *)v15 = 0;
                *(_QWORD *)(v15 + 8) = 0;
                *(_QWORD *)(v15 + 32) = 0;
                *(_OWORD *)(v15 + 16) = 0;
                *(_OWORD *)(v15 + 40) = 0;
                *(_QWORD *)&xmmword_2512E8 = xmmword_2512E8 + 1;
                v16 = strlen(a2);
                v17 = v16;
                if ( v16 )
                {
                  v21 = v16 + 1;
                  v22 = (void *)qvector_reserve();
                  *(_QWORD *)(v15 + 16) = v21;
                  *(_QWORD *)(v15 + 8) = v22;
                  memmove(v22, a2, v17);
                  *(_BYTE *)(*(_QWORD *)(v15 + 8) + v17) = 0;
                }
                if ( a3 )
                {
                  v18 = strlen(a3);
                  v19 = v18;
                  if ( v18 )
                  {
                    v23 = *(void **)(v15 + 32);
                    v24 = v18 + 1;
                    if ( *(_QWORD *)(v15 + 48) < v18 + 1 )
                    {
                      v25 = qvector_reserve();
                      *(_QWORD *)(v15 + 32) = v25;
                      v23 = (void *)v25;
                    }
                    *(_QWORD *)(v15 + 40) = v24;
                    memmove(v23, a3, v19);
                    *(_BYTE *)(*(_QWORD *)(v15 + 32) + v19) = 0;
                  }
                  else
                  {
                    *(_QWORD *)(v15 + 40) = 0;
                  }
                }
                *(_DWORD *)v15 = a1;
                *(_DWORD *)(v15 + 4) = a4;
                return nullptr;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

