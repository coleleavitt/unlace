__int64 __fastcall sub_7A94C0(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned __int8 a5)
{
  char **exception; // rbx
  unsigned int *v6; // r10
  unsigned int *v8; // rbp
  unsigned int v9; // r15d
  __int64 *v10; // r13
  __int64 i; // rcx
  _QWORD *v12; // rdx
  _DWORD *v13; // r12
  __int64 v14; // rax
  _DWORD *v15; // rsi
  __int64 result; // rax
  __int64 v17; // r12
  __int64 j; // r13
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned int v22; // ecx
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  unsigned int *v27; // [rsp+8h] [rbp-80h]
  __int64 v28; // [rsp+10h] [rbp-78h]
  unsigned int v29; // [rsp+18h] [rbp-70h]
  __int64 v31[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = *(unsigned int **)(a1[54] + 48LL * *(unsigned int *)(a3 + 8));
  v28 = a1[54] + 48LL * *(unsigned int *)(a3 + 8);
  if ( v6 )
  {
    v27 = &v6[*(v6 - 1)];
    if ( v6 != v27 )
    {
      v8 = *(unsigned int **)(a1[54] + 48LL * *(unsigned int *)(a3 + 8));
      do
      {
        v9 = 0;
        v10 = (__int64 *)(a1[56] + 8LL * *v8);
        for ( i = *v10; i; ++*((_DWORD *)v12 - 1) )
        {
          if ( v9 >= *(_DWORD *)(i - 4) )
            break;
          v12 = (_QWORD *)*a4;
          v13 = (_DWORD *)(i + 4LL * v9);
          if ( *a4 )
          {
            v14 = *((unsigned int *)v12 - 1);
            v15 = (_DWORD *)v12 + v14;
            if ( (_DWORD)v14 == *((_DWORD *)v12 - 2) )
            {
              v22 = (unsigned int)(3 * v14 + 1) >> 1;
              v23 = 4 * v22 + 8;
              if ( 4 * (int)v14 + 8 >= (unsigned int)v23 || (unsigned int)v14 >= v22 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v31, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v31);
                sub_233E40((__int64)v31);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v29 = (unsigned int)(3 * v14 + 1) >> 1;
              v24 = (unsigned int *)sub_186B300(v12 - 1, v23);
              v12 = v24 + 2;
              *v24 = v29;
              v25 = v24[1];
              *a4 = v12;
              i = *v10;
              v15 = (_DWORD *)v12 + v25;
            }
          }
          else
          {
            v26 = (_QWORD *)sub_186B270(0x10u);
            v12 = v26 + 1;
            *a4 = v26 + 1;
            v15 = v26 + 1;
            i = *v10;
            *v26 = 2;
          }
          ++v9;
          *v15 = *v13;
        }
        ++v8;
      }
      while ( v27 != v8 );
    }
  }
  result = v28;
  v17 = *(_QWORD *)(v28 + 24);
  if ( v17 )
  {
    for ( j = v17 + 16LL * *(unsigned int *)(v17 - 4); j != v17; result = sub_7CCF30(v19, a5, v21, v20) )
    {
      v19 = a1[10];
      v17 += 16;
      v20 = sub_7E4F00(a1);
      v21 = sub_7E4F00(a1);
    }
  }
  return result;
}

