unsigned __int64 __fastcall sub_569F0(__int64 *a1, int a2, int a3, int a4, int a5, int a6)
{
  size_t v6; // rbx
  const void *v7; // rbp
  unsigned __int64 v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // ebx
  size_t v12; // rax
  void *v13; // rdi
  void *v15; // rdi
  __int64 v16; // rbp
  unsigned __int64 v17; // rax
  unsigned int v18; // edx
  char v19; // al
  const char *v20; // rbp
  unsigned __int64 v21; // r13
  size_t v22; // rax
  unsigned __int64 v23; // rbx
  _BYTE *v24; // rsi
  size_t v25; // r15
  size_t v26; // r8
  size_t v27; // r14
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  size_t v30; // rdx
  unsigned __int64 v31; // rax
  char *v32; // rsi
  char *v33; // rsi
  unsigned __int64 v34; // rbp
  _BYTE *v35; // rsi
  size_t v36; // [rsp+0h] [rbp-A0h]
  char *endptr; // [rsp+10h] [rbp-90h] BYREF
  void *ptr; // [rsp+18h] [rbp-88h] BYREF
  __int128 v39; // [rsp+20h] [rbp-80h]
  char s[40]; // [rsp+38h] [rbp-68h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp-40h]

  v6 = a1[1];
  v7 = (const void *)*a1;
  v41 = __readfsqword(0x28u);
  v39 = 0;
  ptr = nullptr;
  if ( !v6 )
  {
    v9 = __readfsqword(0);
    v10 = 1103515245 * *(_DWORD *)(v9 - 260) + 12345;
    *(_DWORD *)(v9 - 260) = v10;
    v11 = v10 % 0x7FFFFFFF;
LABEL_3:
    sub_9A810((unsigned int)s, 32, (unsigned int)"%u", v11, a5, a6);
    v12 = strlen(s);
    if ( v12 )
      sub_56700(a1, s, v12);
    goto LABEL_5;
  }
  v15 = nullptr;
  if ( v6 != -1 )
  {
    ptr = (void *)sub_96080(&ptr, 0, v6 + 1, 1);
    v15 = ptr;
  }
  *(_QWORD *)&v39 = v6 + 1;
  memmove(v15, v7, v6);
  *((_BYTE *)ptr + v6) = 0;
  v16 = a1[1];
  v17 = __readfsqword(0);
  v18 = 1103515245 * *(_DWORD *)(v17 - 260) + 12345;
  *(_DWORD *)(v17 - 260) = v18;
  v11 = v18 % 0x7FFFFFFF;
  if ( !v16 )
    goto LABEL_3;
  v19 = *(_BYTE *)ptr;
  if ( *(_BYTE *)ptr )
  {
    v20 = (const char *)ptr;
    while ( (unsigned __int8)(v19 - 48) > 9u )
    {
      v19 = *++v20;
      if ( !v19 )
      {
        v21 = v20 - (_BYTE *)ptr;
        goto LABEL_16;
      }
    }
    v21 = v20 - (_BYTE *)ptr;
    v11 ^= strtoul(v20, &endptr, 10);
    if ( (_QWORD)v39 )
    {
      v31 = v39 - 1;
      v32 = (char *)(endptr - v20);
      if ( v21 < (__int64)v39 - 1 )
      {
        if ( v32 )
        {
          v33 = &v32[v21];
          v34 = v21;
          if ( (unsigned __int64)v33 < v31 )
          {
            v34 = v21 + v31 - (_QWORD)v33;
            memmove((char *)ptr + v21, &v33[(_QWORD)ptr], v31 - (_QWORD)v33);
          }
          v35 = ptr;
          if ( *((_QWORD *)&v39 + 1) < v34 + 1 )
          {
            ptr = (void *)sub_96080(&ptr, ptr, v34 + 1, 1);
            v35 = ptr;
          }
          *(_QWORD *)&v39 = v34 + 1;
          v35[v34] = 0;
        }
      }
    }
  }
  else
  {
    v21 = 0;
  }
LABEL_16:
  sub_9A810((unsigned int)s, 32, (unsigned int)"%u", v11, a5, a6);
  v22 = strlen(s);
  v23 = v39;
  v24 = ptr;
  v25 = v22;
  if ( (_QWORD)v39 )
  {
    v23 = v39 - 1;
    v26 = v22 + v39 - 1;
    v27 = v22 + v39;
    if ( *((_QWORD *)&v39 + 1) >= v22 + (unsigned __int64)v39 )
      goto LABEL_18;
  }
  else
  {
    v27 = v22 + 1;
    if ( *((_QWORD *)&v39 + 1) >= v22 + 1 )
    {
      *(_QWORD *)&v39 = v22 + 1;
      *((_BYTE *)ptr + v22) = 0;
      goto LABEL_20;
    }
    v26 = v22;
  }
  v36 = v26;
  ptr = (void *)sub_96080(&ptr, ptr, v27, 1);
  v26 = v36;
  v24 = ptr;
LABEL_18:
  *(_QWORD *)&v39 = v27;
  v24[v26] = 0;
  if ( v21 < v23 )
  {
    v28 = v23;
    v23 = v21;
    memmove((char *)ptr + v21 + v25, (char *)ptr + v21, v28 - v21);
  }
LABEL_20:
  memmove((char *)ptr + v23, s, v25);
  v29 = v39;
  v13 = ptr;
  a1[1] = 0;
  if ( v29 )
  {
    v30 = v29 - 1;
    if ( v30 )
    {
      sub_56700(a1, v13, v30);
LABEL_5:
      v13 = ptr;
    }
  }
  if ( v13 )
  {
    *(_QWORD *)&v39 = 0;
    j__free(v13);
  }
  return v41 - __readfsqword(0x28u);
}

