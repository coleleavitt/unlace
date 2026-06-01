void __fastcall sub_17531C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v8; // r13
  void **v9; // rdi
  int v10; // r15d
  __int64 v11; // rax
  unsigned __int64 v12; // r12
  char ***v14; // [rsp+18h] [rbp-160h] BYREF
  void *v15[2]; // [rsp+20h] [rbp-158h] BYREF
  _DWORD v16[32]; // [rsp+30h] [rbp-148h] BYREF
  void *ptr; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+B8h] [rbp-C0h]
  _DWORD v19[46]; // [rsp+C0h] [rbp-B8h] BYREF

  v3 = a2;
  v5 = *(_QWORD *)a1 & 1LL;
  *(_QWORD *)a1 = (unsigned int)v5;
  ptr = v19;
  v18 = 0x2000000001LL;
  v19[0] = -1;
  if ( (_DWORD)v5 )
  {
    v6 = a1 + 8;
    v7 = 640;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = 160LL * *(unsigned int *)(a1 + 16);
  }
  v8 = v6 + v7;
  if ( v6 != v8 )
  {
    do
    {
      while ( 1 )
      {
        *(_DWORD *)(v6 + 8) = 0;
        *(_QWORD *)v6 = v6 + 16;
        *(_DWORD *)(v6 + 12) = 32;
        if ( (_DWORD)v18 )
          break;
        v6 += 160;
        if ( v8 == v6 )
          goto LABEL_8;
      }
      v9 = (void **)v6;
      v6 += 160;
      sub_A6DB70(v9, (char **)&ptr);
    }
    while ( v8 != v6 );
LABEL_8:
    if ( ptr != v19 )
      free(ptr);
  }
  v16[0] = -1;
  v10 = 35;
  ptr = v19;
  v15[0] = v16;
  v15[1] = (void *)0x2000000001LL;
  v18 = 0x2000000001LL;
  v11 = 1;
  v19[0] = -1;
  do
  {
    if ( v11 + 1 <= (unsigned __int64)HIDWORD(v18) )
    {
      *((_DWORD *)ptr + v11) = -1;
    }
    else
    {
      sub_2237220(&ptr, v19, v11 + 1, 4);
      *((_DWORD *)ptr + (unsigned int)v18) = -1;
    }
    v11 = (unsigned int)(v18 + 1);
    LODWORD(v18) = v18 + 1;
    --v10;
  }
  while ( v10 );
  if ( a2 != a3 )
  {
    v12 = a2 + 32 * (5 * ((0x4CCCCCCCCCCCCCDLL * ((unsigned __int64)(a3 - 160 - a2) >> 5)) & 0x7FFFFFFFFFFFFFFLL) + 5);
    do
    {
      if ( !(unsigned __int8)sub_2222ED0(v3, v15) )
        goto LABEL_27;
      while ( *(_QWORD *)v3 == v3 + 16 )
      {
        v3 += 160;
        if ( v3 == v12 )
          goto LABEL_20;
        if ( !(unsigned __int8)sub_2222ED0(v3, v15) )
        {
LABEL_27:
          if ( !(unsigned __int8)sub_2222ED0(v3, &ptr) )
          {
            sub_1745860(a1, v3, &v14);
            sub_1744C20(v14, (char ***)v3);
            *((__m128i *)v14 + 9) = _mm_loadu_si128((const __m128i *)(v3 + 144));
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
      }
      free(*(void **)v3);
      v3 += 160;
    }
    while ( v3 != v12 );
  }
LABEL_20:
  if ( ptr != v19 )
    free(ptr);
  if ( v15[0] != v16 )
    free(v15[0]);
}
