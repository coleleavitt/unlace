__int64 __fastcall sub_21B7DF0(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  _QWORD *v8; // rbp
  __int64 result; // rax
  __int64 v10; // rsi
  int v11; // edx
  int *v12; // rcx
  int v13; // edi
  int v14; // ecx
  int v15; // r8d
  int v16; // edi
  unsigned int v17[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v17[0] = a2;
  v4 = sub_21B6DA0(a1, (int *)v17, 1);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 != v7 )
  {
    if ( a2 )
    {
      do
      {
        if ( *v6 && (unsigned __int8)sub_21B9810(*v6, a2) )
          break;
        ++v6;
      }
      while ( v7 != v6 );
    }
    else
    {
      v6 += ((unsigned __int64)((char *)(v7 - 1) - (char *)v6) >> 3) + 1;
    }
  }
  while ( v7 != v6 )
  {
    v8 = v6 + 1;
    *v6 = 0;
    if ( v6 + 1 == v7 )
      break;
    if ( a2 )
    {
      while ( !*v8 || !(unsigned __int8)sub_21B9810(*v8, a2) )
      {
        if ( v7 == ++v8 )
          goto LABEL_12;
      }
      v6 = v8;
    }
    else
    {
      v6 = &v8[((unsigned __int64)((char *)(v7 - 2) - (char *)v6) >> 3) + 1];
    }
  }
LABEL_12:
  result = *(unsigned int *)(a1 + 168);
  v10 = *(_QWORD *)(a1 + 152);
  if ( (_DWORD)result )
  {
    v11 = result - 1;
    result = ((_DWORD)result - 1) & (37 * a2);
    v12 = (int *)(v10 + 12 * result);
    v13 = *v12;
    if ( a2 == *v12 )
    {
LABEL_14:
      *v12 = -2;
      --*(_DWORD *)(a1 + 160);
      ++*(_DWORD *)(a1 + 164);
      return result;
    }
    v14 = 1;
    if ( v13 != -1 )
    {
      while ( 1 )
      {
        v15 = v14 + 1;
        result = v11 & (unsigned int)(v14 + result);
        v12 = (int *)(v10 + 12LL * (unsigned int)result);
        v16 = *v12;
        if ( *v12 == a2 )
          break;
        v14 = v15;
        if ( v16 == -1 )
          return result;
      }
      goto LABEL_14;
    }
  }
  return result;
}
