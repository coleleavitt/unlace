_DWORD *__fastcall sub_E51490(_QWORD *a1, void **a2)
{
  _DWORD *result; // rax
  void (__fastcall ***v4)(void *); // rbp
  bool v5; // zf
  _QWORD *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rdi
  void (__fastcall ***v9)(void *); // rbp

  result = (_DWORD *)a1[78];
  if ( result )
  {
    v4 = (void (__fastcall ***)(void *))*a2;
    ++result[4];
    if ( v4 )
    {
      v5 = (*((_DWORD *)v4 + 4))-- == 1;
      if ( v5 )
      {
        (**v4)(v4);
        sub_186B220(v4);
        result = (_DWORD *)a1[78];
      }
    }
    *a2 = result;
    return result;
  }
  v6 = (_QWORD *)a1[13];
  (*(void (__fastcall **)(_QWORD *))(*v6 + 32LL))(v6);
  result = *a2;
  if ( *a2 )
  {
    v7 = v6[7];
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v7 + 32LL))(v7, a2);
      v8 = a1[58];
      if ( !v8 )
        goto LABEL_10;
    }
    else
    {
      v8 = a1[58];
      if ( !v8 )
      {
LABEL_11:
        ++result[4];
        goto LABEL_12;
      }
    }
LABEL_9:
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v8 + 32LL))(v8, a2);
LABEL_10:
    result = *a2;
    if ( !*a2 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v8 = a1[58];
  if ( v8 )
    goto LABEL_9;
LABEL_12:
  v9 = (void (__fastcall ***)(void *))a1[78];
  if ( v9 )
  {
    v5 = (*((_DWORD *)v9 + 4))-- == 1;
    if ( v5 )
    {
      (**v9)(v9);
      sub_186B220(v9);
      result = *a2;
    }
  }
  a1[78] = result;
  return result;
}

