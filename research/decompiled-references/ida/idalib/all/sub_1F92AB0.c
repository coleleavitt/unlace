__int64 __fastcall sub_1F92AB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v8; // rax
  int i; // ecx
  __int64 v10; // r10

  if ( *(char *)(a2 + 29) < 0 )
    goto LABEL_4;
  result = *(unsigned int *)(a1 + 440);
  v4 = *(_QWORD *)(a1 + 424);
  if ( !(_DWORD)result )
    return result;
  v5 = result - 1;
  result = ((_DWORD)result - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v6 = *(_QWORD *)(v4 + 16 * result);
  if ( a2 == v6 )
    goto LABEL_4;
  if ( v6 != -4096 )
  {
    for ( i = 1; ; ++i )
    {
      result = v5 & (unsigned int)(i + result);
      v10 = *(_QWORD *)(v4 + 16LL * (unsigned int)result);
      if ( a2 == v10 )
        break;
      if ( v10 == -4096 )
        return result;
    }
LABEL_4:
    v8 = sub_1F92240(a1, a2);
    return sub_9B9C90(a3, v8);
  }
  return result;
}
