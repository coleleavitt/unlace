__int64 __fastcall sub_177480(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  result = (__int64)(a1 + 1);
  v4 = qword_2565D0;
  a1[2] = a1 + 1;
  a1[1] = a1 + 1;
  *a1 = &off_22F2F8;
  v6 = xmmword_2565D8;
  if ( (_QWORD)xmmword_2565D8 )
  {
    v7 = (_QWORD *)v4;
    v8 = 0;
    while ( *v7 )
    {
      ++v8;
      v7 += 2;
      if ( (_QWORD)xmmword_2565D8 == v8 )
        goto LABEL_6;
    }
    *v7 = a2;
    v7[1] = a1;
  }
  else
  {
LABEL_6:
    if ( *((_QWORD *)&xmmword_2565D8 + 1) < (unsigned __int64)(xmmword_2565D8 + 1) )
    {
      result = qvector_reserve();
      qword_2565D0 = result;
      v6 = xmmword_2565D8;
      v4 = result;
    }
    v9 = v4 + 16 * v6;
    *(_OWORD *)v9 = 0;
    *(_QWORD *)&xmmword_2565D8 = xmmword_2565D8 + 1;
    *(_QWORD *)v9 = a2;
    *(_QWORD *)(v9 + 8) = a1;
  }
  return result;
}

