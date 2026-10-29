_QWORD *__fastcall sub_19100(__int64 a1, const void **a2, const char *a3)
{
  _QWORD *result; // rax
  _QWORD *v6; // rbx
  size_t v7; // rax
  size_t v8; // rbp
  void *v9; // rdi
  size_t v10; // r15
  _QWORD *v11; // r14
  char *v12; // r15
  size_t v13; // r8
  const void *v14; // rbp
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax

  result = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  v6 = result;
  if ( !result[7] )
  {
    v11 = result + 1;
    if ( result + 1 != a2 )
    {
      v12 = (char *)a2[1];
      if ( v12 && (v13 = (size_t)(v12 - 1), v12 != (_BYTE *)&dword_0 + 1) )
      {
        v14 = *a2;
        v15 = (void *)result[1];
        if ( result[3] < (unsigned __int64)v12 )
        {
          v17 = sub_96080(result + 1, result[1], v12, 1);
          v13 = (size_t)(v12 - 1);
          v6[1] = v17;
          v15 = (void *)v17;
        }
        v6[2] = v12;
        memmove(v15, v14, v13);
        v12[v6[1] - 1] = 0;
      }
      else
      {
        result[2] = 0;
      }
    }
    result = (_QWORD *)sub_62780(v11, sub_16380, *(unsigned int *)(a1 + 128));
    v6[7] = result;
  }
  if ( a3 )
  {
    v7 = strlen(a3);
    v8 = v7;
    if ( v7 )
    {
      v9 = (void *)v6[4];
      v10 = v7 + 1;
      if ( v6[6] < v7 + 1 )
      {
        v16 = sub_96080(v6 + 4, v6[4], v7 + 1, 1);
        v6[4] = v16;
        v9 = (void *)v16;
      }
      v6[5] = v10;
      memmove(v9, a3, v8);
      *(_BYTE *)(v6[4] + v8) = 0;
    }
    else
    {
      v6[5] = 0;
    }
    sub_97680(v6[4], 92, 47);
    result = (_QWORD *)sub_644B0(v6 + 4);
  }
  *(_QWORD *)(a1 + 16) = v6;
  return result;
}

