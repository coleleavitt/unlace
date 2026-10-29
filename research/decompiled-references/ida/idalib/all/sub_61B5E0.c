__int64 __fastcall sub_61B5E0(__int64 a1, void *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v7; // rbp
  int v8; // edx
  __int64 result; // rax
  __int64 cmt; // rax
  __int64 v11; // rbx
  char *v12; // rsi
  const char *v13; // rbp
  char *v14; // rax
  char *v15; // rsi
  __int64 func; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // [rsp+Ch] [rbp-6Ch] BYREF
  char *needle; // [rsp+10h] [rbp-68h] BYREF
  __int128 v21; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+30h] [rbp-48h] BYREF
  __int128 v23; // [rsp+38h] [rbp-40h]
  unsigned __int64 v24; // [rsp+48h] [rbp-30h]

  v5 = *(_QWORD *)(a1 + 1672);
  v24 = __readfsqword(0x28u);
  v7 = v5 + 2600;
  v8 = sub_7BF490(v5 + 2600, a1, a3, 72);
  result = 0;
  if ( v8 )
  {
    if ( sub_7BF3B0(v7, a1, a3, &v19, 4, 65) == 4 )
    {
      if ( (~((unsigned __int16)get_flags_ex(a2, 4) >> 8) & 6) != 0 )
      {
        set_purged((unsigned __int64)a2, v19, 1);
      }
      else
      {
        func = get_func(a2);
        if ( func )
        {
          v17 = v19;
          v18 = *(_QWORD *)(func + 16);
          if ( v19 == -1 )
          {
            BYTE1(v18) &= ~0x40u;
            v19 = 0;
            v17 = 0;
          }
          else
          {
            BYTE1(v18) |= 0x40u;
          }
          *(_QWORD *)(func + 16) = v18;
          *(_QWORD *)(func + 48) = v17;
          update_func(func);
        }
      }
    }
    v21 = 0;
    needle = nullptr;
    if ( sub_7BF410(v7, a1, &needle, a3, 83) > 0 )
    {
      ptr = nullptr;
      v23 = 0;
      cmt = get_cmt(&ptr, a2, 1);
      v11 = v21;
      if ( cmt <= 0 )
        goto LABEL_14;
      v12 = (char *)haystack;
      if ( (_QWORD)v21 )
        v12 = needle;
      v13 = haystack;
      if ( (_QWORD)v23 )
        v13 = (const char *)ptr;
      v14 = strstr(v13, v12);
      if ( v14 )
      {
        if ( v14 - v13 != -1 )
        {
LABEL_14:
          v15 = (char *)haystack;
          if ( v11 )
            v15 = needle;
          append_cmt(a2, v15, 1u);
        }
      }
      if ( ptr )
      {
        *(_QWORD *)&v23 = 0;
        qfree(ptr);
      }
    }
    if ( needle )
    {
      *(_QWORD *)&v21 = 0;
      qfree(needle);
    }
    return 1;
  }
  return result;
}
