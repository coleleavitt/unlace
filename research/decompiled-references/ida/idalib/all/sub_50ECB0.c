__int64 __fastcall sub_50ECB0(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r14
  __int64 v3; // rax
  size_t v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // r14
  const char *v7; // r12
  size_t v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rax
  size_t v11; // r10
  __int64 v12; // r9
  unsigned __int64 v13; // r11
  char *v14; // rsi
  __int64 v15; // rax
  size_t v16; // r9
  unsigned __int64 v17; // r10
  char *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  void *v21; // rdi
  __int64 v22; // rbx
  __int64 v24; // r12
  unsigned __int64 v25; // r15
  char *v26; // rsi
  __int64 v27; // rax
  _QWORD *v28; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v29; // [rsp+8h] [rbp-A0h]
  size_t n; // [rsp+10h] [rbp-98h]
  __int64 v31; // [rsp+18h] [rbp-90h]
  __int64 v32; // [rsp+20h] [rbp-88h]
  void **p_ptr; // [rsp+28h] [rbp-80h]
  __int64 v34; // [rsp+38h] [rbp-70h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v36; // [rsp+48h] [rbp-60h]
  _BYTE src[5]; // [rsp+63h] [rbp-45h] BYREF
  _QWORD v38[8]; // [rsp+68h] [rbp-40h] BYREF

  v32 = a1;
  v38[0] = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1760);
  if ( !*(_BYTE *)(v1 + 168) )
    return -1;
  p_ptr = &ptr;
  ptr = nullptr;
  v36 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v36) = 1;
  v2 = *(_QWORD *)(v1 + 152);
  *(_QWORD *)&v36 = v36 + 1;
  v28 = v38;
  v3 = pack_dd(src, v38, (unsigned int)v2) - (_QWORD)src;
  v4 = v3;
  if ( v3 )
  {
    v24 = v36;
    v25 = v36 + v3;
    if ( __CFADD__((_QWORD)v36, v3) )
    {
      if ( (unsigned __int64)v36 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_37:
        memcpy((char *)ptr + v24, src, v4);
        goto LABEL_3;
      }
      v25 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v26 = (char *)ptr;
    v27 = v36;
    if ( *((_QWORD *)&v36 + 1) < v25 )
    {
      ptr = (void *)qvector_reserve(p_ptr, ptr, v25, 1);
      v26 = (char *)ptr;
      v27 = v36;
    }
    memset(&v26[v27], 0, v25 - v27);
    *(_QWORD *)&v36 = v25;
    goto LABEL_37;
  }
LABEL_3:
  if ( (int)v2 > 1 )
  {
    v5 = 56;
    v6 = 56LL * (unsigned int)(v2 - 2) + 112;
    do
    {
      v20 = v5 + *(_QWORD *)(v1 + 144);
      v8 = *(_QWORD *)(v20 + 8);
      if ( v8 )
      {
        v7 = *(const char **)v20;
        if ( *(_QWORD *)v20 )
        {
          v8 = strlen(*(const char **)v20);
          if ( v8 > 0xFFFFFFFF )
          {
            if ( !under_debugger )
              interr(4);
            BUG();
          }
          goto LABEL_7;
        }
        v9 = 0;
        v8 = 0;
        v7 = &byte_22F0C30;
      }
      else
      {
        v9 = 0;
        v7 = &byte_22F0C30;
        if ( haystack )
        {
          v7 = haystack;
LABEL_7:
          v9 = (unsigned int)v8;
        }
      }
      v10 = pack_dd(src, v28, v9) - (_QWORD)src;
      v11 = v10;
      if ( !v10 )
        goto LABEL_14;
      v12 = v36;
      v13 = v36 + v10;
      if ( __CFADD__((_QWORD)v36, v10) )
      {
        if ( (unsigned __int64)v36 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_13;
        }
        v13 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v14 = (char *)ptr;
      v15 = v36;
      if ( *((_QWORD *)&v36 + 1) < v13 )
      {
        v31 = v36;
        n = v11;
        v29 = v13;
        ptr = (void *)qvector_reserve(p_ptr, ptr, v13, 1);
        v14 = (char *)ptr;
        v12 = v31;
        v15 = v36;
        v11 = n;
        v13 = v29;
      }
      v31 = v12;
      n = v11;
      v29 = v13;
      memset(&v14[v15], 0, v13 - v15);
      v11 = n;
      v12 = v31;
      *(_QWORD *)&v36 = v29;
LABEL_13:
      memcpy((char *)ptr + v12, src, v11);
LABEL_14:
      if ( v8 )
      {
        v16 = v36;
        v17 = v8 + v36;
        if ( __CFADD__(v8, (_QWORD)v36) )
        {
          if ( (unsigned __int64)v36 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v18 = (char *)ptr;
            v19 = v36;
            v17 = 0x7FFFFFFFFFFFFFFFLL;
            if ( *((_QWORD *)&v36 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
              goto LABEL_39;
            goto LABEL_17;
          }
          if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v18 = (char *)ptr;
          v19 = v36;
          if ( *((_QWORD *)&v36 + 1) >= v17 )
            goto LABEL_17;
LABEL_39:
          n = v36;
          v29 = v17;
          ptr = (void *)qvector_reserve(p_ptr, v18, v17, 1);
          v18 = (char *)ptr;
          v16 = n;
          v19 = v36;
          v17 = v29;
LABEL_17:
          n = v16;
          v29 = v17;
          memset(&v18[v19], 0, v17 - v19);
          v16 = n;
          *(_QWORD *)&v36 = v29;
        }
        memcpy((char *)ptr + v16, v7, v8);
      }
      v5 += 56;
    }
    while ( v5 != v6 );
  }
  v34 = -1;
  netnode_check(&v34, "$ segstrings", 0, 1);
  sub_7BEF30(&v34, v32, ptr, v36, 0, 83);
  v21 = ptr;
  *(_BYTE *)(v1 + 168) = 0;
  v22 = v34;
  if ( v21 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v21);
  }
  return v22;
}
