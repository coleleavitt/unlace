__int64 __fastcall sub_4B88D0(__int64 *a1, __int64 *a2, __m128i *a3, const char *a4, int a5)
{
  const char *v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // r13d
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v16; // rsi
  bool v17; // zf
  const char *v18; // rcx
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  __int64 v22; // r12
  __int64 v23; // rbp
  __int64 v24; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v27[8]; // [rsp+18h] [rbp-C0h] BYREF
  void *v28; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-B0h]
  _BYTE ptr[24]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v31; // [rsp+58h] [rbp-80h]
  __int64 v32; // [rsp+60h] [rbp-78h]
  _OWORD v33[2]; // [rsp+68h] [rbp-70h] BYREF
  __int64 v34; // [rsp+88h] [rbp-50h] BYREF
  __int128 v35; // [rsp+90h] [rbp-48h]
  unsigned __int64 v36; // [rsp+A8h] [rbp-30h]

  v36 = __readfsqword(0x28u);
  if ( *a2 != -1 )
  {
    if ( !under_debugger )
      interr(3409);
LABEL_35:
    BUG();
  }
  if ( !a3 || a3[3].m128i_i64[1] <= 1uLL )
  {
    if ( !under_debugger )
      interr(3410);
    goto LABEL_35;
  }
  sub_4B5400((__int64)&v28, a4);
  v9 = haystack;
  if ( v29 )
    v9 = (const char *)v28;
  v10 = netnode_check(a2, v9, 0, 1);
  *((_DWORD *)a2 + 2) = a5;
  v11 = v10;
  if ( (a5 & 1) == 0 )
  {
    v12 = a3[2].m128i_i64[1];
    memset(ptr, 0, sizeof(ptr));
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 96LL))(v12, ptr);
    if ( (unsigned __int64)(*(_QWORD *)&ptr[8] - 1LL) > 0xFFFFFFFFFFFFFFFDLL )
      *((_DWORD *)a2 + 2) |= 1u;
    if ( *(_QWORD *)ptr )
    {
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(void **)ptr);
    }
  }
  if ( (_BYTE)v11 || (v16 = *a1, v24 = *a2, !sub_7BE710(&v24, v16, 1, 65)) )
  {
    v13 = *a2;
    v14 = *a1;
    v26 = 1;
    v25 = v13;
    sub_7BE7C0(&v25, v14, 1, &v26, 8, 65);
    navstack_t_set_current(a2, a3, 1);
  }
  else
  {
    v17 = a3[3].m128i_i64[1] == 0;
    v18 = haystack;
    memset(ptr, 0, sizeof(ptr));
    v31 = -1;
    v32 = 0;
    v34 = 0;
    memset(v33, 0, sizeof(v33));
    v35 = 0;
    if ( !v17 )
      v18 = (const char *)a3[3].m128i_i64[0];
    if ( (unsigned __int8)sub_4B8320((__int64)ptr, *a1, *a2, v18) )
    {
      v19 = (void *)a3[2].m128i_i64[1];
      if ( v19 )
      {
        qfree(v19);
        a3[2].m128i_i64[1] = 0;
      }
      v20 = (void *)a3[3].m128i_i64[0];
      if ( v20 )
      {
        a3[3].m128i_i64[1] = 0;
        qfree(v20);
        a3[3].m128i_i64[0] = 0;
        a3[4].m128i_i64[0] = 0;
      }
      v21 = (void *)a3[4].m128i_i64[1];
      if ( v21 )
      {
        a3[5].m128i_i64[0] = 0;
        qfree(v21);
        a3[4].m128i_i64[1] = 0;
        a3[5].m128i_i64[1] = 0;
      }
      sub_4B50E0(a3, (const __m128i *)ptr);
      sub_4B5360((__int64)a3[3].m128i_i64, (__int64)v33 + 8);
      sub_4B5360((__int64)&a3[4].m128i_i64[1], (__int64)&v34);
    }
    else
    {
      navstack_t_set_current(a2, a3, 0);
    }
    sub_4B66E0(ptr);
  }
  if ( (a2[1] & 1) == 0 )
  {
    v22 = *a2;
    v23 = *a1;
    netnode_check(v27, "$ curlocs", 0, 1);
    *(_QWORD *)ptr = 1;
    sub_7BE7C0(v27, v23, v22, ptr, 8, 65);
  }
  if ( v28 )
  {
    v29 = 0;
    qfree(v28);
  }
  return v11;
}
