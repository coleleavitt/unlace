__int64 __fastcall sub_87ABE0(__int64 a1, unsigned int *a2, __int64 a3)
{
  char **exception; // rbp
  char *v6; // rdx
  __int64 v7; // r13
  __int64 *v8; // r13
  __int64 result; // rax
  int v10; // edx
  int v11; // edx
  __int64 v12; // rbp
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 v22; // rsi
  __int64 v23; // rdi
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  size_t v27; // rsi
  unsigned int *v28; // rax
  _DWORD *v29; // rdx
  __int64 *v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdi
  _QWORD *v33; // rax
  unsigned int v34; // [rsp+Ch] [rbp-7Ch]
  __m128i v35; // [rsp+20h] [rbp-68h] BYREF
  __m128i v36[5]; // [rsp+30h] [rbp-58h] BYREF

  v6 = (char *)(sub_7E4F00(a1, a2) + 88);
  if ( *(int *)v6 >> 8 == -1 )
  {
LABEL_32:
    v7 = 0x7FFFFFFF8LL;
  }
  else
  {
    while ( *(_DWORD *)(a1 + 12) != *v6 )
    {
      v6 = *((char **)v6 + 1);
      if ( !v6 )
        goto LABEL_32;
    }
    v7 = 8LL * (unsigned int)(*(int *)v6 >> 8);
  }
  v8 = (__int64 *)(*(_QWORD *)(a1 + 600) + v7);
  result = *v8;
  if ( *v8 )
  {
    v10 = *(_DWORD *)(result - 4);
    if ( v10 )
    {
      sub_7E4F90(&v35, a1, *(_DWORD *)(result + 4LL * (unsigned int)(v10 - 1)));
      result = *v8;
      if ( !*v8 )
      {
        v12 = 4294967294LL;
        goto LABEL_10;
      }
      v11 = *(_DWORD *)(result - 4);
      v12 = (unsigned int)(v11 - 2);
      if ( v11 != 1 )
      {
LABEL_10:
        v13 = 4 * v12;
        while ( 1 )
        {
          v16 = *(_QWORD *)(a1 + 72);
          sub_7E4F90(v36, a1, *(_DWORD *)(result + v13));
          v17 = sub_15E1B70(v16);
          v18 = v17;
          if ( v17 )
            ++*(_DWORD *)(v17 + 8);
          v19 = v35.m128i_i64[0];
          if ( v35.m128i_i64[0] )
          {
            v20 = v35.m128i_i64[1];
            v21 = (*(_DWORD *)(v35.m128i_i64[0] + 8))-- == 1;
            if ( v21 )
              sub_15D7BC0(v20, v19);
          }
          v22 = v36[0].m128i_i64[0];
          v35.m128i_i64[0] = v18;
          if ( v36[0].m128i_i64[0] )
          {
            v23 = v36[0].m128i_i64[1];
            v21 = (*(_DWORD *)(v36[0].m128i_i64[0] + 8))-- == 1;
            if ( v21 )
            {
              sub_15D7BC0(v23, v22);
              v18 = v35.m128i_i64[0];
            }
          }
          if ( v18 )
            ++*(_DWORD *)(v18 + 8);
          v24 = *(_QWORD **)(a3 + 8);
          if ( !v24 )
            break;
          v25 = *((_DWORD *)v24 - 1);
          if ( v25 != *((_DWORD *)v24 - 2) )
          {
            v14 = v25;
            result = v25 + 1;
            v15 = &v24[v14];
            goto LABEL_12;
          }
          v26 = (3 * v25 + 1) >> 1;
          v27 = 8 * v26 + 8;
          if ( 8 * v25 + 8 >= (unsigned int)v27 || v25 >= v26 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v36[0].m128i_i64, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v36);
            sub_233E40((__int64)v36);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v34 = (3 * v25 + 1) >> 1;
          v28 = (unsigned int *)sub_186B300(v24 - 1, v27);
          v29 = v28 + 2;
          v13 -= 4;
          *(_QWORD *)(a3 + 8) = v28 + 2;
          *v28 = v34;
          LODWORD(v28) = v28[1];
          v30 = (__int64 *)&v29[2 * (unsigned int)v28];
          result = (unsigned int)((_DWORD)v28 + 1);
          *v30 = v18;
          *(v29 - 1) = result;
          if ( v13 == -4 )
            goto LABEL_29;
LABEL_13:
          result = *v8;
        }
        v33 = (_QWORD *)sub_186B270(0x18u);
        v24 = v33 + 1;
        *v33 = 2;
        result = 1;
        *(_QWORD *)(a3 + 8) = v24;
        v15 = v24;
LABEL_12:
        v13 -= 4;
        *v15 = v18;
        *((_DWORD *)v24 - 1) = result;
        if ( v13 == -4 )
          goto LABEL_29;
        goto LABEL_13;
      }
LABEL_29:
      v31 = v35.m128i_i64[0];
      if ( v35.m128i_i64[0] )
      {
        v32 = v35.m128i_i64[1];
        v21 = (*(_DWORD *)(v35.m128i_i64[0] + 8))-- == 1;
        if ( v21 )
          return sub_15D7BC0(v32, v31);
      }
    }
  }
  return result;
}

