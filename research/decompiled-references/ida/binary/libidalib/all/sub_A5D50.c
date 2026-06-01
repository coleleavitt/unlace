__int64 __fastcall sub_A5D50(_QWORD *a1)
{
  const char *v2; // rax
  const char *v3; // rbx
  size_t v4; // rax
  size_t v5; // rbp
  const char *v6; // rdx
  unsigned int v7; // ebp
  const char *v8; // rsi
  size_t v9; // r15
  void *v10; // rdi
  const char *v12; // [rsp+0h] [rbp-78h] BYREF
  __int128 v13; // [rsp+8h] [rbp-70h]
  const char *v14; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+28h] [rbp-50h]
  unsigned __int64 v16; // [rsp+38h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  do
  {
    v2 = (const char *)sub_9DC30(1u, (__int64)qword_251AE0, (__int64)"FILTER Trace files|*.trc\nSave trace file");
    v3 = v2;
    if ( !v2 )
      return 0;
    v4 = strlen(v2);
    v5 = v4;
    if ( v4 )
    {
      v9 = v4 + 1;
      v10 = qword_251AE0;
      if ( *((_QWORD *)&xmmword_251AE8 + 1) < v4 + 1 )
      {
        v10 = (void *)qvector_reserve();
        qword_251AE0 = v10;
      }
      *(_QWORD *)&xmmword_251AE8 = v9;
      memmove(v10, v3, v5);
      *((_BYTE *)qword_251AE0 + v5) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_251AE8 = 0;
    }
  }
  while ( (unsigned __int8)qfileexist()
       && (unsigned int)sub_92580(0, (__int64)"HIDECANCEL\nFile %s already exists, overwrite?", v3) != 1 );
  v12 = nullptr;
  v13 = 0;
  if ( !(unsigned int)sub_8F810(
                        (__int64)"Trace description\n<Enter ~d~escription (or leave empty):q:128:30:::>\n",
                        &v12)
    && v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
    v12 = nullptr;
    *((_QWORD *)&v13 + 1) = 0;
  }
  v14 = nullptr;
  v6 = s1;
  v15 = 0;
  if ( (_QWORD)v13 )
    v6 = v12;
  v7 = sub_A5A20(a1, (__int64)v3, (__int64)v6, 0, (__int64)&v14);
  if ( (_BYTE)v7 )
  {
    v8 = s1;
    if ( (_QWORD)v13 )
      v8 = v12;
    sub_9C440(a1[1] + 304LL, v8);
    sub_9C440(a1[1] + 328LL, v3);
  }
  else if ( (_QWORD)v15 )
  {
    sub_92200((__int64)"%s", v14);
  }
  else
  {
    sub_92200((__int64)"%s", s1);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v7;
}

