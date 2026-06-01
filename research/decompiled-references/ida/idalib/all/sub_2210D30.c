unsigned __int64 __fastcall sub_2210D30(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rax
  int v7; // esi
  unsigned int v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 result; // rax
  size_t v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  void *v17; // rsi
  char *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  size_t v21; // r14
  void *v22; // rdi
  __int64 v23; // rbx
  size_t v24; // rax
  void *v25; // rdi
  size_t v26; // r14
  __int64 v27[3]; // [rsp+0h] [rbp-68h] BYREF
  char v28; // [rsp+1Fh] [rbp-49h] BYREF
  void *src; // [rsp+20h] [rbp-48h] BYREF
  size_t n; // [rsp+28h] [rbp-40h]
  char *v31; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-30h]

  v27[0] = a1;
  v27[1] = a2;
  v28 = 10;
  sub_105F1C0(&src, v27, (__int64)&v28, 1);
  v6 = sub_227D600();
  v7 = a3;
  v8 = a3 + 2;
  v9 = sub_227D090(v6, (unsigned int)(v7 - a4));
  v10 = sub_9954E0(v9, " - ", (size_t)&dword_0 + 3);
  v11 = sub_9954E0(v10, "  ", 2u);
  v12 = sub_9954E0(v11, src, n);
  result = sub_995540(v12, "\n");
LABEL_2:
  while ( v32 )
  {
    while ( 1 )
    {
      v28 = 10;
      v14 = sub_2246AB0(&v31, &v28, 1, 0);
      if ( v14 == -1 )
      {
        v17 = v31;
        v14 = v32;
        v16 = 0;
        v18 = nullptr;
      }
      else
      {
        v15 = v14 + 1;
        if ( v14 + 1 > v32 )
        {
          v15 = v32;
          v16 = 0;
        }
        else
        {
          v16 = v32 - v15;
        }
        v17 = v31;
        v18 = &v31[v15];
        if ( v14 > v32 )
          v14 = v32;
      }
      src = v17;
      v31 = v18;
      v32 = v16;
      n = v14;
      v19 = sub_227D600();
      v20 = sub_227D090(v19, v8);
      v21 = n;
      v22 = *(void **)(v20 + 32);
      v23 = v20;
      if ( *(_QWORD *)(v20 + 24) - (_QWORD)v22 < n )
      {
        v23 = sub_227BF10(v20, src, n);
      }
      else if ( n )
      {
        memcpy(v22, src, n);
        *(_QWORD *)(v23 + 32) += v21;
      }
      v24 = j__strlen("\n");
      v25 = *(void **)(v23 + 32);
      v26 = v24;
      result = *(_QWORD *)(v23 + 24) - (_QWORD)v25;
      if ( v26 > result )
        break;
      if ( !v26 )
        goto LABEL_2;
      result = (unsigned __int64)memcpy(v25, "\n", v26);
      *(_QWORD *)(v23 + 32) += v26;
      if ( !v32 )
        return result;
    }
    result = sub_227BF10(v23, "\n", v26);
  }
  return result;
}
