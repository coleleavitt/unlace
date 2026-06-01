__int64 __fastcall sub_6885E0(__int64 *a1, unsigned __int64 a2, void *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rbx
  const char *v10; // rdi
  _QWORD *v12; // r15
  size_t v13; // rax
  size_t v14; // rbx
  void *v15; // rdi
  size_t v16; // r12
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-40h]

  if ( a2 >= a1[1] )
  {
    set_error_data(0, a2, a3, a4, a5, a6);
    return 4294967289LL;
  }
  else if ( (unsigned __int8)sub_4BD3C0(*(_QWORD *)(qword_2CA1698 + 1480), (char *)a3, 1, 0) )
  {
    v7 = a1[1];
    v8 = 0;
    v18 = *a1;
    v9 = *a1 + 16;
    if ( !v7 )
    {
LABEL_11:
      v12 = (_QWORD *)(80 * a2 + v18);
      if ( a3 && (v13 = strlen((const char *)a3), (v14 = v13) != 0) )
      {
        v15 = (void *)v12[2];
        v16 = v13 + 1;
        if ( v12[4] < v13 + 1 )
        {
          v17 = qvector_reserve(v12 + 2, v12[2], v16, 1);
          v12[2] = v17;
          v15 = (void *)v17;
        }
        v12[3] = v16;
        memmove(v15, a3, v14);
        *(_BYTE *)(v12[2] + v14) = 0;
      }
      else
      {
        v12[3] = 0;
      }
      return 0;
    }
    while ( 1 )
    {
      v10 = haystack;
      if ( *(_QWORD *)(v9 + 8) )
        v10 = *(const char **)v9;
      if ( !strcmp(v10, (const char *)a3) )
        break;
      ++v8;
      v9 += 80;
      if ( v7 == v8 )
        goto LABEL_11;
    }
    if ( a2 == v8 )
      return 0;
    set_error_string();
    return 4294967275LL;
  }
  else
  {
    set_error_string();
    return 4294967293LL;
  }
}

