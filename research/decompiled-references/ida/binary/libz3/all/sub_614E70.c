__int64 __fastcall sub_614E70(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r13
  char v7; // r15
  __int64 v8; // rax
  int v9; // r9d
  __int64 *v10; // rcx
  unsigned int v11; // edx
  char *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r10
  __int64 v15; // rdx
  char v16; // [rsp+7h] [rbp-41h]

  do
  {
    result = a2;
    v3 = *(__int64 **)(a2 + 24);
    if ( !v3 )
      break;
    result = *((unsigned int *)v3 - 1);
    v4 = &v3[result];
    if ( v3 == v4 )
      break;
    v16 = 0;
    do
    {
      v5 = *v3;
      v6 = *(_QWORD *)(*(_QWORD *)(*v3 + 40) + 16LL);
      result = sub_614550(a1, *v3);
      v7 = result;
      if ( (_BYTE)result )
      {
        v8 = *(unsigned int *)(a1 + 64);
        v9 = *(_DWORD *)(v6 + 12);
        v10 = *(__int64 **)(a1 + 56);
        v11 = v8 - 1;
        v8 *= 8;
        v12 = (char *)v10 + v8;
        v13 = 8LL * (v9 & v11);
        v14 = &v10[(unsigned __int64)v13 / 8];
        if ( v13 != v8 )
        {
          for ( result = (__int64)&v10[(unsigned __int64)v13 / 8]; v12 != (char *)result; result += 8 )
          {
            v15 = *(_QWORD *)result;
            if ( *(_QWORD *)result > 1u )
            {
              if ( *(_DWORD *)(v15 + 12) == v9 && v6 == v15 )
                goto LABEL_13;
            }
            else if ( !v15 )
            {
              goto LABEL_12;
            }
          }
        }
        for ( ; v14 != v10; ++v10 )
        {
          result = *v10;
          if ( (unsigned __int64)*v10 > 1 )
          {
            if ( *(_DWORD *)(result + 12) == v9 && v6 == result )
              goto LABEL_13;
          }
          else if ( !result )
          {
            break;
          }
        }
LABEL_12:
        result = sub_6147C0(a1, v6, v5);
        v16 = v7;
      }
LABEL_13:
      ++v3;
    }
    while ( v3 != v4 );
  }
  while ( v16 );
  return result;
}

