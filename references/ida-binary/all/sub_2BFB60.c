bool __fastcall sub_2BFB60(__int64 a1, unsigned int a2)
{
  __int64 (*v2)(); // rax
  bool result; // al
  _QWORD *hidden_range; // rbp
  __int64 v5; // rbx
  const char *v6; // rsi
  const char *v7; // rdi
  bool v8; // [rsp+Fh] [rbp-49h]
  __int64 v9; // [rsp+10h] [rbp-48h] BYREF
  __int64 v10; // [rsp+18h] [rbp-40h] BYREF
  const char *v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+28h] [rbp-30h]
  unsigned __int64 v13; // [rsp+38h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v2 = *(__int64 (**)())(*(_QWORD *)a1 + 744LL);
  if ( v2 == sub_2B2350 )
    return 0;
  if ( !((unsigned __int8 (__fastcall *)(__int64, __int64 *, __int64 *, _QWORD))v2)(a1, &v9, &v10, a2) )
    return 0;
  hidden_range = (_QWORD *)get_hidden_range(v9);
  if ( !hidden_range || *hidden_range != v9 || hidden_range[1] != v10 )
    return 0;
  v12 = 0;
  v11 = nullptr;
  sub_169A50((__int64 *)&v11, (__int64)"Node #%d", a2);
  v5 = (__int64)v11;
  v6 = (const char *)hidden_range[2];
  v7 = v11;
  if ( !(_QWORD)v12 )
    v7 = &s1;
  result = strcmp(v7, v6) == 0;
  if ( v5 )
  {
    v8 = result;
    *(_QWORD *)&v12 = 0;
    qfree(v5, v6);
    return v8;
  }
  return result;
}
