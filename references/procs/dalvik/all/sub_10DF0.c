__int64 __fastcall sub_10DF0(double a1)
{
  _QWORD *module_data; // rbp
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  const char *v5; // r12
  _QWORD *func; // rax
  const char *v7; // rbx
  int v8; // eax
  const char *v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  const char *v14; // rdi
  const char *v16; // rsi
  const char *v17; // rax
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  struct _Unwind_Exception *v20; // rbx
  const char *v21; // [rsp+8h] [rbp-160h]
  __m128i v22; // [rsp+10h] [rbp-158h] BYREF
  const char *v23; // [rsp+20h] [rbp-148h] BYREF
  __m128i v24; // [rsp+28h] [rbp-140h]
  const char *v25; // [rsp+40h] [rbp-128h] BYREF
  __m128i v26; // [rsp+48h] [rbp-120h] BYREF
  _BYTE v27[200]; // [rsp+60h] [rbp-108h] BYREF
  unsigned __int64 v28; // [rsp+128h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  module_data = (_QWORD *)get_module_data((unsigned int)dword_1A374);
  ((void (__fastcall *)(__int64, const char **, __int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD), __int64, __int64, __int64))callui)(
    11,
    &v25,
    &callui,
    v2,
    v3,
    v4);
  v5 = v25;
  func = (_QWORD *)get_func(v25);
  if ( !func )
  {
    sub_10580((__int64)"This command is only available inside a function");
    return 1;
  }
  if ( netnode_supval(module_data[20], *func, &v25, 4, 333) <= 3 )
  {
    sub_10580((__int64)"Can't find method_idx for function %a", a1);
    return 1;
  }
  v7 = (const char *)(unsigned int)v25;
  v24 = 0;
  v23 = nullptr;
  v8 = sub_C5C0((__int64)(module_data + 15), (unsigned __int64)v5);
  sub_DA70((__int64)(module_data + 15), &v23, v8, (unsigned int)v7, 0, 1);
  v9 = nullptr;
  if ( (unsigned __int8)sub_10D30((__int64)&v23, 0, (__int64)"Name for method %u", (_DWORD)v7) )
  {
    if ( v24.m128i_i64[0] <= 1uLL )
    {
      v16 = (const char *)(module_data + 15);
      sub_DAE0(&v25, (__int64)(module_data + 15), (unsigned __int64)v5, (unsigned int)v7);
      v17 = v25;
      v25 = nullptr;
      v18 = _mm_loadu_si128(&v26);
      v26 = 0;
      if ( v23 )
      {
        v21 = v17;
        v22 = v18;
        v24.m128i_i64[0] = 0;
        qfree(v23, v16);
        v19 = _mm_load_si128(&v22);
        v23 = v21;
        v24 = v19;
        if ( v25 )
        {
          v26.m128i_i64[0] = 0;
          qfree(v25, v16);
        }
      }
      else
      {
        v23 = v17;
        v24 = v18;
      }
    }
    sub_DB80(module_data + 15, (unsigned __int64)v5, (unsigned int)v7, (__int64)&v23);
    memset(v27, 0, sizeof(v27));
    v10 = (unsigned int)sub_C5C0((__int64)(module_data + 15), (unsigned __int64)v5) - 1;
    if ( v10 >= module_data[22] )
    {
      v20 = (struct _Unwind_Exception *)sub_100C0();
      if ( v25 )
      {
        v26.m128i_i64[0] = 0;
        qfree(v25, v5);
      }
      if ( v23 )
      {
        v24.m128i_i64[0] = 0;
        qfree(v23, v5);
      }
      _Unwind_Resume(v20);
    }
    v9 = v7;
    if ( netnode_supval(*(_QWORD *)(module_data[21] + 8 * v10), v7, v27, 200, 77) <= 199 )
    {
      sub_10580((__int64)"Corrupted database: failed to retrieve method info");
      v14 = v23;
      if ( !v23 )
        return 1;
      goto LABEL_12;
    }
    v25 = nullptr;
    v26 = 0;
    sub_CE40(module_data + 15, (__int64)&v25, (__int64)v27, v11, v12, v13);
    v9 = (const char *)&unk_150C8;
    if ( v26.m128i_i64[0] )
      v9 = v25;
    rename_entry(v7, v9, 0);
    if ( v25 )
    {
      v26.m128i_i64[0] = 0;
      qfree(v25, v9);
    }
  }
  v14 = v23;
  if ( v23 )
  {
LABEL_12:
    v24.m128i_i64[0] = 0;
    qfree(v14, v9);
  }
  return 1;
}
