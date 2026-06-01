__int64 __fastcall sub_7CBB70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r14
  const char *v7; // rdx
  const char *v8; // rsi
  const void *src; // [rsp+8h] [rbp-F0h]
  size_t n; // [rsp+10h] [rbp-E8h]
  void *v11; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v12; // [rsp+28h] [rbp-D0h]
  void *v13; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v14; // [rsp+48h] [rbp-B0h]
  void *v15; // [rsp+60h] [rbp-98h] BYREF
  __int128 v16; // [rsp+68h] [rbp-90h]
  void *ptr; // [rsp+80h] [rbp-78h] BYREF
  __int128 v18; // [rsp+88h] [rbp-70h]
  void *dest; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v20; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+B8h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  result = sub_7C9900(a1, a2, a3, (__int64)"lumina");
  if ( !(_BYTE)result )
  {
    v6 = sub_7C1590();
    v11 = nullptr;
    v13 = nullptr;
    v15 = nullptr;
    v12 = 0;
    v14 = 0;
    v16 = 0;
    if ( (unsigned __int8)reg_str_get(&v11, "LuminaHost", 0)
      && (unsigned __int8)reg_str_get(&v13, "LuminaUser", 0)
      && (unsigned __int8)reg_str_get(&v15, "LuminaPass", 0) )
    {
      ptr = nullptr;
      v18 = 0;
      if ( (_QWORD)v16 )
      {
        n = v16;
        src = v15;
        dest = nullptr;
        v20 = 0;
        dest = (void *)qvector_reserve(&dest, 0, v16, 1);
        memset((char *)dest + v20, 0, n - v20);
        *(_QWORD *)&v20 = n;
        memcpy(dest, src, n);
      }
      else
      {
        v20 = 0;
        dest = nullptr;
      }
      v7 = haystack;
      if ( (_QWORD)v12 )
        v7 = (const char *)v11;
      v8 = haystack;
      if ( (_QWORD)v14 )
        v8 = (const char *)v13;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, const char *, const char *, char *, void **, void **))(*(_QWORD *)v6 + 24LL))(
             v6,
             v8,
             v7,
             "lumina",
             &dest,
             &ptr) )
      {
        reg_delete("LuminaPass", 0);
      }
      if ( dest )
      {
        *(_QWORD *)&v20 = 0;
        qfree(dest);
      }
      if ( ptr )
      {
        *(_QWORD *)&v18 = 0;
        qfree(ptr);
      }
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15);
    }
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree(v13);
    }
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11);
    }
    return sub_7C9900(a1, a2, a3, (__int64)"lumina");
  }
  return result;
}
