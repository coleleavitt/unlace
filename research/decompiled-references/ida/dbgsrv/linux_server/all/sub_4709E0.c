/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4709E0
// Address: 0x00000000004709E0

//----- (00000000004709E0) ----------------------------------------------------
__int64 __fastcall sub_4709E0(void **a1, const struct sockaddr *a2, socklen_t a3, char a4)
{
  void *v5; // rbp
  unsigned __int64 v7; // rbp
  char *v8; // r12
  unsigned __int64 v9; // r15
  size_t v10; // r13
  size_t v11; // r8
  void *v12; // rsi
  unsigned __int64 v13; // rdx
  char *v14; // rax
  unsigned int v15; // edx
  void *v17; // rax
  size_t v18; // rax
  char *v19; // r15
  size_t v20; // r8
  size_t v21; // r9
  void *v22; // rsi
  unsigned __int64 v23; // rdx
  _BYTE *v24; // r12
  unsigned __int64 v25; // r13
  __int64 v26; // r14
  void *v27; // rsi
  void *v28; // rsi
  size_t v29; // rax
  void *v30; // rax
  void *v31; // rax
  void *v32; // rax
  unsigned __int64 v33; // [rsp+8h] [rbp-460h]
  unsigned __int64 v34; // [rsp+8h] [rbp-460h]
  size_t v35; // [rsp+10h] [rbp-458h]
  size_t v36; // [rsp+10h] [rbp-458h]
  size_t v37; // [rsp+18h] [rbp-450h]
  char host[1032]; // [rsp+20h] [rbp-448h] BYREF
  unsigned __int64 v39; // [rsp+428h] [rbp-40h]

  v5 = a1[1];
  v39 = __readfsqword(0x28u);
  v7 = (unsigned __int64)v5 + (v5 == nullptr) - 1;
  if ( a4 && !getnameinfo(a2, a3, host, 0x400u, nullptr, 0, 8) )
  {
    v18 = strlen(host);
    v19 = (char *)a1[1];
    v20 = v18;
    v21 = v18;
    if ( v19 )
    {
      --v19;
      v21 = (size_t)&v19[v18];
    }
    v22 = *a1;
    v23 = v21 + 1;
    if ( (unsigned __int64)a1[2] < v21 + 1 )
    {
      v37 = v18;
      v36 = v21;
      v34 = v21 + 1;
      v31 = sub_481540((__int64)a1, v22, v23, 1u);
      v20 = v37;
      v21 = v36;
      *a1 = v31;
      v23 = v34;
      v22 = v31;
    }
    a1[1] = (void *)v23;
    *((_BYTE *)v22 + v21) = 0;
    memmove((char *)*a1 + (_QWORD)v19, host, v20);
  }
  if ( !getnameinfo(a2, a3, host, 0x400u, nullptr, 0, 1) )
  {
    v8 = (char *)a1[1];
    if ( !v8 )
    {
      v9 = 0;
      v10 = strlen(host);
      v11 = v10;
      goto LABEL_5;
    }
    v9 = (unsigned __int64)(v8 - 1);
    if ( v7 < (unsigned __int64)(v8 - 1) )
    {
      v28 = *a1;
      if ( a1[2] < v8 + 1 )
      {
        v32 = sub_481540((__int64)a1, v28, (unsigned __int64)(v8 + 1), 1u);
        *a1 = v32;
        v28 = v32;
      }
      a1[1] = v8 + 1;
      *((_BYTE *)v28 + v9) = 40;
      v8[(_QWORD)*a1] = 0;
      v29 = strlen(host);
      v8 = (char *)a1[1];
      v10 = v29;
      if ( !v8 )
      {
        v11 = v29;
LABEL_5:
        v12 = *a1;
        v13 = v11 + 1;
        if ( (unsigned __int64)a1[2] >= v11 + 1 )
          goto LABEL_6;
LABEL_13:
        v35 = v11;
        v33 = v13;
        v17 = sub_481540((__int64)a1, v12, v13, 1u);
        v11 = v35;
        v13 = v33;
        *a1 = v17;
        v12 = v17;
LABEL_6:
        a1[1] = (void *)v13;
        *((_BYTE *)v12 + v11) = 0;
        memmove((char *)*a1 + (_QWORD)v8, host, v10);
        if ( v7 < v9 )
        {
          v24 = a1[1];
          if ( v24 )
          {
            v25 = (unsigned __int64)(v24 + 1);
            v26 = (__int64)a1[1];
            --v24;
          }
          else
          {
            v26 = 1;
            v25 = 2;
          }
          v27 = *a1;
          if ( (unsigned __int64)a1[2] < v25 )
          {
            v30 = sub_481540((__int64)a1, v27, v25, 1u);
            *a1 = v30;
            v27 = v30;
          }
          a1[1] = (void *)v25;
          v24[(_QWORD)v27] = 41;
          *((_BYTE *)*a1 + v26) = 0;
        }
        goto LABEL_7;
      }
      --v8;
    }
    else
    {
      --v8;
      v10 = strlen(host);
    }
    v11 = (size_t)&v8[v10];
    v12 = *a1;
    v13 = (unsigned __int64)&v8[v10 + 1];
    if ( (unsigned __int64)a1[2] >= v13 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_7:
  v14 = (char *)a1[1];
  v15 = 0;
  if ( v14 )
    LOBYTE(v15) = v7 < (unsigned __int64)(v14 - 1);
  return v15;
}
