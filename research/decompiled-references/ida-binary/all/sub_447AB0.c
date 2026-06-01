__int64 __fastcall sub_447AB0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void **p_src; // rsi
  unsigned int v8; // ebx
  __int64 v10; // rax
  size_t v11; // r12
  void *v12; // r14
  __int128 v13; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v15; // [rsp+18h] [rbp-B0h]
  __int64 v16; // [rsp+30h] [rbp-98h] BYREF
  __int128 v17; // [rsp+38h] [rbp-90h]
  void *src; // [rsp+50h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-70h]
  int v20; // [rsp+68h] [rbp-60h]
  void *v21; // [rsp+70h] [rbp-58h] BYREF
  __int128 v22; // [rsp+78h] [rbp-50h]
  int v23; // [rsp+88h] [rbp-40h]
  unsigned __int64 v24; // [rsp+98h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  v15 = 0;
  v17 = 0;
  p_src = (void **)&v14;
  v14 = 0;
  v16 = 0;
  v13 = -1;
  v8 = ((__int64 (__fastcall *)(__int64 *, __int64 *, __int64 *, __int128 *, __int64, __int64))sub_4916A0)(
         a1,
         &v14,
         &v16,
         &v13,
         a2,
         a5);
  if ( (_BYTE)v8 )
  {
    v10 = *a1;
    p_src = &src;
    src = nullptr;
    v20 = 0;
    *(_OWORD *)n = 0;
    v8 = (*(__int64 (__fastcall **)(__int64 *, void **, __int128 *))(v10 + 536))(a1, &src, &v13);
    if ( (_BYTE)v8 )
    {
      v11 = n[0];
      v22 = 0;
      if ( n[0] )
      {
        v12 = (void *)qalloc_or_throw(n[0]);
        *((_QWORD *)&v22 + 1) = v11;
        memcpy(v12, src, v11);
        p_src = (void **)&v14;
        *(_QWORD *)&v22 = v11;
        v23 = v20;
        v21 = v12;
        sub_447440((__int64)a1, &v14, (__int64)&v21);
        if ( v12 )
          qfree(v12, (const char *)&v14);
      }
      else
      {
        p_src = (void **)&v14;
        v21 = nullptr;
        v23 = v20;
        sub_447440((__int64)a1, &v14, (__int64)&v21);
      }
    }
    if ( src )
    {
      n[0] = 0;
      qfree(src, (const char *)p_src);
    }
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, (const char *)p_src);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, (const char *)p_src);
  }
  return v8;
}
