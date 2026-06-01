unsigned __int8 *__fastcall sub_4D9860(__int64 a1, unsigned __int8 **a2)
{
  unsigned __int8 *v3; // rax
  unsigned __int8 *v5; // rdi
  unsigned __int8 *v6; // rsi
  size_t v7; // rdx
  bool v8; // zf
  unsigned __int8 *result; // rax
  unsigned __int8 *v10; // rcx

  v3 = (unsigned __int8 *)(a1 + 16);
  v5 = *(unsigned __int8 **)a1;
  v6 = *a2;
  v7 = (size_t)a2[1];
  v8 = v5 == v3;
  result = (unsigned __int8 *)(a2 + 2);
  if ( v8 )
  {
    if ( result != v6 )
    {
      *(_QWORD *)a1 = v6;
      v5 = (unsigned __int8 *)(a2 + 2);
      *(_QWORD *)(a1 + 8) = v7;
      *(_QWORD *)(a1 + 16) = a2[2];
      goto LABEL_8;
    }
  }
  else if ( result != v6 )
  {
    *(_QWORD *)a1 = v6;
    v10 = *(unsigned __int8 **)(a1 + 16);
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 16) = a2[2];
    if ( v5 )
    {
      *a2 = v5;
      a2[2] = v10;
      goto LABEL_5;
    }
    v5 = (unsigned __int8 *)(a2 + 2);
LABEL_8:
    *a2 = v5;
    goto LABEL_5;
  }
  if ( (unsigned __int8 **)a1 == a2 )
  {
    v5 = v6;
  }
  else
  {
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        result = (unsigned __int8 *)*v6;
        *v5 = (unsigned __int8)result;
      }
      else
      {
        result = (unsigned __int8 *)memcpy(v5, v6, v7);
      }
      v7 = (size_t)a2[1];
      v5 = *(unsigned __int8 **)a1;
    }
    *(_QWORD *)(a1 + 8) = v7;
    v5[v7] = 0;
    v5 = *a2;
  }
LABEL_5:
  a2[1] = nullptr;
  *v5 = 0;
  return result;
}

