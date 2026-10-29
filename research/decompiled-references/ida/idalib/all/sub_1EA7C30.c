__int64 __fastcall sub_1EA7C30(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 *i; // r13
  _QWORD *v5; // rdi
  __int64 v6; // rbp

  v2 = *(__int64 **)(a1 + 160);
  result = *(unsigned int *)(a1 + 168);
  for ( i = &v2[result]; i != v2; *a2 += v6 )
  {
    while ( 1 )
    {
      result = *v2;
      v5 = *(_QWORD **)(*v2 + 416);
      if ( v5 )
        break;
LABEL_5:
      if ( i == ++v2 )
        return result;
    }
    v6 = v5[2] - v5[1];
    result = (*(__int64 (**)(void))(*v5 + 32LL))();
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 1 )
        a2[1] += v6;
      goto LABEL_5;
    }
    ++v2;
  }
  return result;
}
