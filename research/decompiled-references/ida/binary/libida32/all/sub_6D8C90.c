size_t __fastcall sub_6D8C90(void *src)
{
  size_t result; // rax
  _QWORD *v2; // r12
  size_t v4; // rbp
  void *v5; // rdi
  size_t v6; // r13
  __int64 v7; // rax

  result = qword_2CA1698;
  v2 = *(_QWORD **)(qword_2CA1698 + 1704);
  if ( src && (result = strlen((const char *)src), (v4 = result) != 0) )
  {
    v5 = (void *)v2[9];
    v6 = result + 1;
    if ( v2[11] < result + 1 )
    {
      v7 = qvector_reserve(v2 + 9, v2[9], v6, 1);
      v2[9] = v7;
      v5 = (void *)v7;
    }
    v2[10] = v6;
    memmove(v5, src, v4);
    result = v2[9];
    *(_BYTE *)(result + v4) = 0;
  }
  else
  {
    v2[10] = 0;
  }
  return result;
}

