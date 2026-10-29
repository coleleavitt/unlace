unsigned __int64 __fastcall sub_2210B20(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 result; // rax
  unsigned int v11; // r13d
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  void *v14; // rsi
  char *v15; // rdx
  size_t v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  size_t v19; // r14
  void *v20; // rdi
  __int64 v21; // rbx
  size_t v22; // rax
  void *v23; // rdi
  size_t v24; // r14
  __int64 v25[3]; // [rsp+0h] [rbp-68h] BYREF
  char v26; // [rsp+1Fh] [rbp-49h] BYREF
  void *src; // [rsp+20h] [rbp-48h] BYREF
  size_t n; // [rsp+28h] [rbp-40h]
  char *v29; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-30h]

  v25[0] = a1;
  v25[1] = a2;
  v26 = 10;
  sub_105F1C0(&src, v25, (__int64)&v26, 1);
  v6 = sub_227D600();
  v7 = sub_227D090(v6, a3 - a4);
  v8 = sub_9954E0(v7, " - ", (size_t)&dword_0 + 3);
  v9 = sub_9954E0(v8, src, n);
  result = sub_995540(v9, "\n");
  if ( v30 )
  {
    v11 = a3;
    do
    {
      while ( 1 )
      {
        v26 = 10;
        v16 = sub_2246AB0(&v29, &v26, 1, 0);
        if ( v16 == -1 )
        {
          v14 = v29;
          v16 = v30;
          v13 = 0;
          v15 = nullptr;
        }
        else
        {
          v12 = v16 + 1;
          if ( v16 + 1 > v30 )
          {
            v12 = v30;
            v13 = 0;
          }
          else
          {
            v13 = v30 - v12;
          }
          v14 = v29;
          v15 = &v29[v12];
          if ( v16 > v30 )
            v16 = v30;
        }
        src = v14;
        v29 = v15;
        v30 = v13;
        n = v16;
        v17 = sub_227D600();
        v18 = sub_227D090(v17, v11);
        v19 = n;
        v20 = *(void **)(v18 + 32);
        v21 = v18;
        if ( *(_QWORD *)(v18 + 24) - (_QWORD)v20 < n )
        {
          v21 = sub_227BF10(v18, src, n);
        }
        else if ( n )
        {
          memcpy(v20, src, n);
          *(_QWORD *)(v21 + 32) += v19;
        }
        v22 = j__strlen("\n");
        v23 = *(void **)(v21 + 32);
        v24 = v22;
        result = *(_QWORD *)(v21 + 24) - (_QWORD)v23;
        if ( v24 <= result )
          break;
        result = sub_227BF10(v21, "\n", v24);
        if ( !v30 )
          return result;
      }
      if ( v24 )
      {
        result = (unsigned __int64)memcpy(v23, "\n", v24);
        *(_QWORD *)(v21 + 32) += v24;
      }
    }
    while ( v30 );
  }
  return result;
}
