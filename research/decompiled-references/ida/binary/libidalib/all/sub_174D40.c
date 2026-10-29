void *__fastcall sub_174D40(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v4; // rdi
  void *result; // rax
  _QWORD *v6; // rbp

  v4 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 24 * a2);
  if ( a3 )
  {
    v6 = (_QWORD *)*v4;
    result = memmove(v4, v4 + 3, 24 * (*(_QWORD *)(a1 + 24) - a2) - 24);
    --*(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      if ( (v6[1] & 4) != 0 )
      {
        return (void *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      }
      else
      {
        v6[1] = -1;
        return (void *)qsem_post();
      }
    }
  }
  else
  {
    result = memmove(v4, v4 + 3, 24 * (*(_QWORD *)(a1 + 24) - a2) - 24);
    --*(_QWORD *)(a1 + 24);
  }
  return result;
}

