__int64 __fastcall sub_655CA0(__int64 *a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  const char **v5; // r15
  unsigned int *v6; // r14
  __int64 i; // rax
  size_t v8; // rax
  size_t v9; // r9
  __int64 v10; // r10
  unsigned __int64 v11; // r11
  char *v12; // rsi
  __int64 v13; // rax
  __int64 result; // rax
  int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rsi
  unsigned __int64 v20; // [rsp+18h] [rbp-90h]
  unsigned __int64 v21; // [rsp+18h] [rbp-90h]
  size_t na; // [rsp+20h] [rbp-88h]
  size_t n; // [rsp+20h] [rbp-88h]
  __int64 v24; // [rsp+28h] [rbp-80h]
  __int64 v25; // [rsp+28h] [rbp-80h]
  int v26; // [rsp+3Ch] [rbp-6Ch] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v28; // [rsp+48h] [rbp-60h]
  _BYTE src[5]; // [rsp+63h] [rbp-45h] BYREF
  _QWORD v30[8]; // [rsp+68h] [rbp-40h] BYREF

  v30[0] = __readfsqword(0x28u);
  if ( !a2 || *(char *)(a2 + 9) < 0 )
    return 0;
  v4 = *(int *)(a2 + 88);
  if ( (_DWORD)v4 )
  {
    v5 = *(const char ***)(a2 + 96);
    ptr = nullptr;
    v28 = 0;
    if ( (int)v4 > 0 )
    {
      v6 = (unsigned int *)&v5[3 * v4];
      for ( i = pack_dd(src, v30, *(unsigned int *)v5); ; i = pack_dd(src, v30, *(unsigned int *)v5) )
      {
        v8 = i - (_QWORD)src;
        v9 = v8;
        if ( !v8 )
          goto LABEL_6;
        v10 = v28;
        v11 = v28 + v8;
        if ( __CFADD__((_QWORD)v28, v8) )
        {
          if ( (unsigned __int64)v28 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v28 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v28 = 0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_13;
          }
          v11 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v12 = (char *)ptr;
        v13 = v28;
        if ( *((_QWORD *)&v28 + 1) < v11 )
        {
          v25 = v28;
          n = v9;
          v21 = v11;
          ptr = (void *)qvector_reserve(&ptr, ptr, v11, 1);
          v12 = (char *)ptr;
          v10 = v25;
          v13 = v28;
          v9 = n;
          v11 = v21;
        }
        v24 = v10;
        na = v9;
        v20 = v11;
        memset(&v12[v13], 0, v11 - v13);
        v9 = na;
        v10 = v24;
        *(_QWORD *)&v28 = v20;
LABEL_13:
        memcpy((char *)ptr + v10, src, v9);
LABEL_6:
        sub_655A70((__int64 *)&ptr, v5[1]);
        sub_655A70((__int64 *)&ptr, v5[2]);
        v5 += 3;
        if ( v5 == (const char **)v6 )
          break;
      }
    }
    v15 = sub_3B90A0(a1, *(_DWORD *)a2);
    v16 = *a1;
    v26 = v15;
    sub_79BB40(&v26, v16, ptr, v28, 24576, 83);
    if ( ptr )
    {
      *(_QWORD *)&v28 = 0;
      qfree(ptr);
    }
    result = 1;
    if ( a3 )
      return (unsigned __int8)sub_5ACD60((__int64)a1, (unsigned int *)a2, 0);
  }
  else
  {
    v17 = sub_3B90A0(a1, *(_DWORD *)a2);
    v18 = *a1;
    LODWORD(ptr) = v17;
    sub_79BB90(&ptr, v18, 24576, 83);
    result = 1;
    if ( a3 )
      return (unsigned __int8)sub_5ACD60((__int64)a1, (unsigned int *)a2, 0);
  }
  return result;
}

