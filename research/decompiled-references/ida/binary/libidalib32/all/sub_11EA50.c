__int64 __fastcall sub_11EA50(__int64 a1, _QWORD *a2)
{
  unsigned __int64 i; // rbx
  const char *v4; // rax
  const char *v5; // rax
  __int64 v6; // rax
  const char *v7; // r15
  const char *v8; // rdx
  const char *v9; // rsi
  size_t v11; // rax
  size_t v12; // [rsp+0h] [rbp-108h]
  size_t n; // [rsp+8h] [rbp-100h]
  const char *v14; // [rsp+10h] [rbp-F8h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-F0h]
  void *v16; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v17; // [rsp+38h] [rbp-D0h]
  const char *v18; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+58h] [rbp-B0h]
  __int64 v20; // [rsp+70h] [rbp-98h] BYREF
  int v21; // [rsp+78h] [rbp-90h]
  const char *v22; // [rsp+80h] [rbp-88h]
  const char *v23; // [rsp+88h] [rbp-80h]
  __int128 v24; // [rsp+90h] [rbp-78h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  __int128 v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v28; // [rsp+C8h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  sub_119320((__int64)&v14);
  if ( v15 > 1 || (unsigned __int8)qgetenv() )
  {
    for ( i = 0; i < a2[1]; ++i )
    {
      v6 = *(_QWORD *)(a1 + 184) + 24LL * *(_QWORD *)(*a2 + 8 * i);
      if ( *(_QWORD *)(v6 + 8) )
      {
        v7 = *(const char **)v6;
        v16 = nullptr;
        v17 = 0;
        if ( strchr(v7, 32) )
        {
          sub_94360((__int64 *)&v16);
        }
        else if ( v7 )
        {
          v11 = strlen(v7);
          if ( v11 )
          {
            n = v11;
            v12 = v11 + 1;
            v16 = (void *)qvector_reserve();
            *(_QWORD *)&v17 = v12;
            memmove(v16, v7, n);
            *((_BYTE *)v16 + n) = 0;
          }
        }
      }
      else
      {
        v16 = nullptr;
        v17 = 0;
      }
      v4 = s1;
      v20 = 80;
      v21 = 0;
      v25 = -1;
      v27 = 0;
      v24 = -1;
      v26 = 0;
      if ( v15 )
        v4 = v14;
      v22 = v4;
      v5 = s1;
      if ( (_QWORD)v17 )
        v5 = (const char *)v16;
      v23 = v5;
      v18 = nullptr;
      v19 = 0;
      if ( !sub_175650(&v20, &v18) )
      {
        v8 = s1;
        if ( (_QWORD)v19 )
          v8 = v18;
        v9 = s1;
        if ( v15 )
          v9 = v14;
        sub_92120((__int64)"Error launching the editor '%s'.\n%s", v9, v8);
      }
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree();
      }
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree();
      }
    }
  }
  else
  {
    sub_92120((__int64)"No editor configured", &v14);
  }
  if ( v14 )
  {
    v15 = 0;
    qfree();
  }
  return 0;
}

