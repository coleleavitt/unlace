__int64 __fastcall sub_5FF360(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rbp
  int v7; // edx
  __int64 result; // rax
  char *v9; // rsi
  const char *v10; // rbp
  char *v11; // rax
  __int64 func; // rdi
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // [rsp+Ch] [rbp-6Ch] BYREF
  char *needle; // [rsp+10h] [rbp-68h] BYREF
  __int128 v17; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+38h] [rbp-40h]
  unsigned __int64 v20; // [rsp+48h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 1480);
  v20 = __readfsqword(0x28u);
  v6 = v4 + 2480;
  v7 = sub_79C090(v4 + 2480, a1, a3, 72);
  result = 0;
  if ( v7 )
  {
    if ( sub_79BFB0(v6, a1, a3, &v15, 4, 65) == 4 )
    {
      if ( (~((unsigned __int16)get_flags_ex(a2, 4) >> 8) & 6) != 0 )
      {
        set_purged(a2, v15, 1);
      }
      else
      {
        func = get_func(a2);
        if ( func )
        {
          v13 = v15;
          v14 = *(_QWORD *)(func + 8);
          if ( v15 == -1 )
          {
            BYTE1(v14) &= ~0x40u;
            v15 = 0;
            v13 = 0;
          }
          else
          {
            BYTE1(v14) |= 0x40u;
          }
          *(_QWORD *)(func + 8) = v14;
          *(_DWORD *)(func + 28) = v13;
          update_func(func);
        }
      }
    }
    v17 = 0;
    needle = nullptr;
    if ( sub_79C010(v6, a1, &needle, a3, 83) > 0 )
    {
      ptr = nullptr;
      v19 = 0;
      if ( get_cmt(&ptr, a2, 1) <= 0 )
        goto LABEL_14;
      v9 = (char *)haystack;
      if ( (_QWORD)v17 )
        v9 = needle;
      v10 = haystack;
      if ( (_QWORD)v19 )
        v10 = (const char *)ptr;
      v11 = strstr(v10, v9);
      if ( v11 )
      {
        if ( v11 - v10 != -1 )
LABEL_14:
          append_cmt();
      }
      if ( ptr )
      {
        *(_QWORD *)&v19 = 0;
        qfree(ptr);
      }
    }
    if ( needle )
    {
      *(_QWORD *)&v17 = 0;
      qfree(needle);
    }
    return 1;
  }
  return result;
}

