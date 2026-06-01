__int64 __fastcall sub_BD6A00(_QWORD *a1, unsigned int a2, __m128 a3, __m128 a4, __m128 a5)
{
  char **exception; // rbx
  __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 result; // rax
  __int64 *v10; // r13
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // r14
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 *v20; // rbp
  __int64 i; // r13
  __int64 v22; // rbx
  __int64 j; // r13
  __int64 v24; // rbx
  __int64 k; // rbp
  unsigned int v26; // r15d
  unsigned int v27; // ecx
  unsigned int *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rdx
  __int64 v31[11]; // [rsp+10h] [rbp-58h] BYREF

  do
  {
    v7 = a2;
    v8 = a2;
    a2 = *(_DWORD *)(a1[43] + 4LL * a2);
  }
  while ( v8 != a2 );
  result = a1[32];
  v10 = *(__int64 **)(result + 8 * v7);
  if ( !*((_BYTE *)v10 + 24) )
  {
    if ( *(_BYTE *)(a1[33] + 8LL) )
    {
      return sub_BDFAB0(a1, a2);
    }
    else
    {
      v11 = (_QWORD *)sub_180C100(a1 + 50, 16);
      v12 = (_QWORD *)a1[48];
      v13 = v11;
      *v11 = off_1C54E98;
      v11[1] = v10 + 3;
      if ( v12 )
      {
        v14 = *((_DWORD *)v12 - 1);
        if ( v14 == *((_DWORD *)v12 - 2) )
        {
          v26 = (3 * v14 + 1) >> 1;
          v27 = 8 * v26 + 8;
          if ( 8 * v14 + 8 >= v27 || v14 >= v26 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v31, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v31);
            sub_233E40((__int64)v31);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v28 = (unsigned int *)sub_186B300(v12 - 1, v27);
          v29 = v28[1];
          v12 = v28 + 2;
          *v28 = v26;
          a1[48] = v28 + 2;
          LODWORD(v28) = v29;
          v17 = &v12[v29];
          v16 = (_DWORD)v28 + 1;
        }
        else
        {
          v15 = v14;
          v16 = v14 + 1;
          v17 = &v12[v15];
        }
      }
      else
      {
        v30 = (_QWORD *)sub_186B270(0x18u);
        *v30 = 2;
        v16 = 1;
        v12 = v30 + 1;
        a1[48] = v12;
        v17 = v12;
      }
      *v17 = v13;
      *((_DWORD *)v12 - 1) = v16;
      v18 = a1[33];
      *((_BYTE *)v10 + 24) = 1;
      if ( !*(_BYTE *)(v18 + 16) )
      {
        sub_B31820((__int64)a1, a2);
        sub_BD6940((__int64)a1, a2, a3, a4, a5);
      }
      result = a1[56];
      v19 = *v10;
      v20 = *(__int64 **)(result + 8 * v7);
      if ( *v10 )
      {
        result = *(unsigned int *)(v19 - 4);
        for ( i = v19 + 8 * result; i != v19; result = sub_BD6C20((int)a1) )
          v19 += 8;
      }
      v22 = *v20;
      if ( *v20 )
      {
        result = *(unsigned int *)(v22 - 4);
        for ( j = v22 + 8 * result; j != v22; result = sub_BD6C20((int)a1) )
          v22 += 8;
      }
      v24 = v20[1];
      if ( v24 )
      {
        result = *(unsigned int *)(v24 - 4);
        for ( k = v24 + 8 * result; k != v24; result = sub_BD6C20((int)a1) )
          v24 += 8;
      }
    }
  }
  return result;
}

