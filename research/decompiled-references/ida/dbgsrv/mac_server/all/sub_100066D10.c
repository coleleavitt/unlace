/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100066D10
// Address: 0x0000000100066D10

//----- (0000000100066D10) ----------------------------------------------------
__int64 __fastcall sub_100066D10(void **a1, __int64 a2, char a3)
{
  __int64 *v4; // rbx
  __int64 v5; // r14
  unsigned __int64 v6; // r13
  char *v7; // rax
  size_t v8; // rdx
  __int64 v9; // rbx
  void *v10; // rsi
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  size_t v14; // rbx
  size_t __n; // [rsp+10h] [rbp-50h]
  char v18; // [rsp+1Ch] [rbp-44h]
  void *__src; // [rsp+20h] [rbp-40h]
  unsigned __int8 v20; // [rsp+2Fh] [rbp-31h] BYREF

  v4 = (__int64 *)a2;
  sub_100032FE0(a1, *(_DWORD *)(a2 + 8));
  if ( *(_QWORD *)(a2 + 8) )
  {
    v5 = 16;
    v6 = 0;
    v18 = a3;
    do
    {
      v9 = *v4;
      sub_100032FE0(a1, *(_DWORD *)(v9 + v5 - 16));
      sub_100032FE0(a1, *(_DWORD *)(v9 + v5));
      if ( a3 )
      {
        sub_100032FE0(a1, *(_DWORD *)(v9 + v5 - 12));
        v8 = *(_QWORD *)(v9 + v5);
        if ( v8 )
        {
          v10 = *(void **)(v9 + v5 - 8);
          v11 = (unsigned __int64)a1[1];
          v12 = v8 + v11;
          if ( __CFADD__(v8, v11) )
            v12 = 0x7FFFFFFFFFFFFFFFLL;
          if ( v11 >= v12 )
          {
            if ( v11 != v12 )
            {
              v20 = 0;
              __src = v10;
              v13 = v12;
              v14 = v8;
              sub_10001CE90((__int64)a1, v13, &v20);
              v10 = __src;
              v8 = v14;
            }
          }
          else
          {
            __n = v8;
            v7 = (char *)*a1;
            if ( (unsigned __int64)a1[2] < v12 )
            {
              v7 = (char *)qvector_reserve((__int64)a1, *a1, v12, 1u);
              *a1 = v7;
            }
            __bzero(&v7[(_QWORD)a1[1]], v12 - (_QWORD)a1[1]);
            a1[1] = (void *)v12;
            v8 = __n;
          }
          memcpy((char *)*a1 + v11, v10, v8);
          a3 = v18;
        }
      }
      ++v6;
      v5 += 32;
      v4 = (__int64 *)a2;
    }
    while ( v6 < *(_QWORD *)(a2 + 8) );
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
