unsigned __int64 __fastcall sub_3E2FB0(__int64 *a1, char a2, char a3, double a4)
{
  unsigned __int64 result; // rax
  unsigned int v5; // r12d
  int v6; // r13d
  __int64 v7; // rbp
  __int64 v8; // rax

  result = a1[3];
  if ( a3 )
  {
    if ( !result )
    {
      if ( a2 )
      {
        v6 = 2;
        v5 = 0;
        goto LABEL_6;
      }
      return result;
    }
    v8 = 0;
    v6 = 2;
    v5 = 0;
    goto LABEL_9;
  }
  v5 = result - 1;
  if ( (int)result - 1 >= 0 && v5 < result )
  {
    v8 = 8LL * v5;
    v6 = 3;
LABEL_9:
    result = *(_QWORD *)(a1[2] + v8);
    if ( *(_DWORD *)(result + 56) == 4 && result && *(_DWORD *)(result + 372) == v6 )
    {
      if ( !a2 )
        return sub_3E2F40(a1, result, a4);
    }
    else if ( a2 )
    {
      if ( a3 )
        goto LABEL_6;
      goto LABEL_5;
    }
    return result;
  }
  if ( a2 )
  {
    v6 = 3;
LABEL_5:
    ++v5;
LABEL_6:
    v7 = operator new(0x178u);
    sub_3DE430(v7, a1[1], 4);
    *(_QWORD *)v7 = &spec_node_t___vtable;
    *(_DWORD *)(v7 + 372) = v6;
    return sub_3E2C20(a1, v7, v5);
  }
  return result;
}
