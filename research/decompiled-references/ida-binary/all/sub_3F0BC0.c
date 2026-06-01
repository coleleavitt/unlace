__int64 __fastcall sub_3F0BC0(__int64 a1, unsigned __int64 a2, char **a3, char a4)
{
  unsigned __int64 head; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 *func; // rax
  __m128i v10; // xmm0
  __int64 v11; // rax
  _QWORD *v12; // rbx
  void *v13; // rdi
  const char *v14; // rsi
  __int64 v15; // rdi
  __m128i v17; // xmm0
  __int64 v18; // rax
  _QWORD *v19; // rbx
  void *v20; // rdi
  _BYTE v22[24]; // [rsp+8h] [rbp-98h] BYREF
  void *s; // [rsp+20h] [rbp-80h]
  __int64 v24; // [rsp+28h] [rbp-78h]
  void *v25; // [rsp+30h] [rbp-70h]
  __int64 v26; // [rsp+38h] [rbp-68h]
  int v27; // [rsp+40h] [rbp-60h]
  __int64 v28; // [rsp+48h] [rbp-58h]
  __int64 v29; // [rsp+50h] [rbp-50h] BYREF
  char v30; // [rsp+58h] [rbp-48h]
  unsigned __int64 v31; // [rsp+60h] [rbp-40h]

  head = a2;
  v31 = __readfsqword(0x28u);
  *(_OWORD *)v22 = 0;
  getinf_buf(26, v22, 16);
  if ( a2 >= *(_QWORD *)v22 && a2 < *(_QWORD *)&v22[8] )
  {
    s = &v29;
    memset(v22, 0, sizeof(v22));
    v24 = 1;
    v25 = nullptr;
    v26 = 0;
    v27 = 1065353216;
    v28 = 0;
    v29 = 0;
    v30 = a4;
    sub_3F0540((__int64)v22, a2, a3);
    v17 = _mm_loadu_si128((const __m128i *)&v22[8]);
    v18 = *(_QWORD *)v22;
    *(_QWORD *)v22 = 0;
    v19 = v25;
    *(__m128i *)(a1 + 8) = v17;
    *(_QWORD *)a1 = v18;
    *(_OWORD *)&v22[8] = 0;
    while ( v19 )
    {
      v20 = v19;
      v19 = (_QWORD *)*v19;
      operator delete(v20, 0x18u);
    }
    memset(s, 0, 8 * v24);
    v14 = (const char *)v24;
    v26 = 0;
    v25 = nullptr;
    if ( s != &v29 )
    {
      v14 = (const char *)(8 * v24);
      operator delete(s, 8 * v24);
    }
    v15 = *(_QWORD *)v22;
    if ( *(_QWORD *)v22 )
      goto LABEL_13;
  }
  else
  {
    v8 = a2 + 1;
    func = (unsigned __int64 *)get_func(a2);
    if ( func )
    {
      head = *func;
      v8 = func[1];
    }
    memset(v22, 0, sizeof(v22));
    s = &v29;
    v24 = 1;
    v25 = nullptr;
    v26 = 0;
    v27 = 1065353216;
    v28 = 0;
    v29 = 0;
    v30 = a4;
    while ( head < v8 )
    {
      sub_3F0540((__int64)v22, head, a3);
      head = next_head(head, v8);
    }
    v10 = _mm_loadu_si128((const __m128i *)&v22[8]);
    v11 = *(_QWORD *)v22;
    *(_QWORD *)v22 = 0;
    v12 = v25;
    *(__m128i *)(a1 + 8) = v10;
    *(_QWORD *)a1 = v11;
    *(_OWORD *)&v22[8] = 0;
    while ( v12 )
    {
      v13 = v12;
      v12 = (_QWORD *)*v12;
      operator delete(v13, 0x18u);
    }
    memset(s, 0, 8 * v24);
    v14 = (const char *)v24;
    v26 = 0;
    v25 = nullptr;
    if ( s != &v29 )
    {
      v14 = (const char *)(8 * v24);
      operator delete(s, 8 * v24);
    }
    v15 = *(_QWORD *)v22;
    if ( *(_QWORD *)v22 )
    {
LABEL_13:
      *(_QWORD *)&v22[8] = 0;
      qfree(v15, v14);
    }
  }
  return a1;
}
