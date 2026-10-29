_QWORD *__fastcall sub_3AAA80(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _QWORD *result; // rax
  _QWORD *v6; // r12
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rcx
  char *v10; // rsi
  unsigned __int64 v11; // rdi
  size_t v12; // r8
  int v13; // eax
  __int64 v14; // r15
  void *v15; // r14
  char *v16; // rdi
  unsigned __int64 v17; // rdx
  int v18; // r9d
  char *v19; // rax
  size_t v20; // [rsp+0h] [rbp-40h]

  result = *(_QWORD **)(a1 + 16);
  if ( result )
  {
    v6 = (_QWORD *)(a1 + 8);
    v8 = (_QWORD *)(a1 + 8);
    do
    {
      v9 = result[2];
      v10 = (char *)result[3];
      if ( result[4] < a3 )
      {
        result = (_QWORD *)result[3];
      }
      else
      {
        v8 = result;
        result = (_QWORD *)result[2];
      }
    }
    while ( result );
    while ( 1 )
    {
      if ( v6 == v8 )
        return result;
      result = (_QWORD *)v8[4];
      if ( (unsigned __int64)result >= a4 )
        return result;
      v17 = v8[9];
      if ( v17 )
      {
        v11 = *(_QWORD *)(a2 + 8);
        v12 = (int)v17;
        v10 = (char *)result + (int)v17;
        v9 = v11 + *(int *)(a2 + 24);
        if ( v11 < (unsigned __int64)v10 && (unsigned __int64)result < v9 )
        {
          if ( (unsigned __int64)result >= v11 )
          {
            if ( v9 < (unsigned __int64)v10 )
            {
              v9 = (unsigned int)(v9 - (_DWORD)result);
              if ( (int)v9 <= 0 )
                goto LABEL_16;
              v13 = (_DWORD)result - v11;
              v12 = (unsigned int)v9;
              v14 = 0;
            }
            else
            {
              if ( (int)v17 <= 0 )
                goto LABEL_16;
              v13 = (_DWORD)result - v11;
              v14 = 0;
            }
            goto LABEL_13;
          }
          v18 = v11 - (_DWORD)result;
          LODWORD(v12) = v17 - (v11 - (_DWORD)result);
          v14 = (int)v11 - (int)result;
          v19 = (char *)result + v14;
          v10 = &v19[(int)v12];
          if ( v9 < (unsigned __int64)v10 )
            LODWORD(v12) = v9 - (_DWORD)v19;
          if ( (int)v12 > 0 && v18 != -1 && v18 < v17 )
          {
            v13 = (_DWORD)v19 - v11;
            v12 = (int)v12;
LABEL_13:
            v15 = (void *)(*(_QWORD *)(a2 + 16) + v13);
            v16 = (char *)(v14 + v8[8]);
            if ( *(_BYTE *)(a2 + 28) )
            {
              v20 = v12;
              memcpy(v16, (const void *)(*(_QWORD *)(a2 + 16) + v13), v12);
              v12 = v20;
              v16 = (char *)(v14 + *(_QWORD *)(dbg + 72LL));
            }
            v10 = v16;
            memcpy(v15, v16, v12);
          }
        }
      }
LABEL_16:
      result = (_QWORD *)std::_Rb_tree_increment(v8, v10, v17, v9);
      v8 = result;
    }
  }
  return result;
}
