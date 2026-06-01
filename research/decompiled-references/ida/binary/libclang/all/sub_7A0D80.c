__int64 __fastcall sub_7A0D80(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // r12d
  unsigned int v8; // eax
  char *v9; // r13
  char *v10; // rdi
  char *v11; // rbp
  char *v12; // r15
  char *v13; // rbx
  char *v14; // rdi
  _QWORD v15[2]; // [rsp+10h] [rbp-68h] BYREF
  int v16; // [rsp+20h] [rbp-58h]
  void *ptr; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h]
  _BYTE v19[64]; // [rsp+38h] [rbp-40h] BYREF

  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 24);
    v3 = v2 + 48LL * *(unsigned int *)(a2 + 32);
    if ( v3 == v2 )
    {
      return 0;
    }
    else
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(v2 + 32);
        v5 = v4 + 120LL * *(unsigned int *)(v2 + 40);
        if ( v5 != v4 )
          break;
LABEL_9:
        v2 += 48;
        if ( v3 == v2 )
          return 0;
      }
      while ( (*(_BYTE *)(**(_QWORD **)(v4 + 8) + 82LL) & 8) == 0 )
      {
        v4 += 120;
        if ( v4 == v5 )
          goto LABEL_9;
      }
      return 1;
    }
  }
  else
  {
    ptr = v19;
    v16 = 0;
    v15[0] = 0;
    v15[1] = 0;
    v18 = 0;
    sub_7762C0(a1, (__int64)v15);
    v8 = sub_7A0D80(a1, v15);
    v9 = (char *)ptr;
    v6 = v8;
    v10 = (char *)ptr + 48 * (unsigned int)v18;
    if ( ptr != v10 )
    {
      v11 = (char *)ptr + 48 * (unsigned int)v18;
      do
      {
        v12 = *((char **)v11 - 2);
        v13 = &v12[120 * *((unsigned int *)v11 - 2)];
        if ( v12 != v13 )
        {
          do
          {
            v13 -= 120;
            v14 = *((char **)v13 + 1);
            if ( v14 != v13 + 24 )
              free(v14);
          }
          while ( v12 != v13 );
          v13 = *((char **)v11 - 2);
        }
        if ( v11 != v13 )
          free(v13);
        v11 -= 48;
        operator delete();
      }
      while ( v9 != v11 );
      v10 = (char *)ptr;
    }
    if ( v10 != v19 )
      free(v10);
    operator delete();
  }
  return v6;
}

