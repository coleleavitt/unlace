__int64 __fastcall sub_7C970(__int64 a1, _BYTE *a2)
{
  bool v2; // zf
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // r12
  __int64 *v6; // rbx
  const char *v7; // rsi
  size_t v8; // rax
  size_t v9; // r13
  size_t v10; // r12
  const char *v11; // rsi
  size_t v12; // rax
  size_t v13; // r13
  size_t v14; // r12
  const char *v15; // rsi
  unsigned int v16; // ebp
  void *v18; // [rsp+60h] [rbp-48h] BYREF
  __int128 v19; // [rsp+68h] [rbp-40h]
  unsigned __int64 v20; // [rsp+78h] [rbp-30h]

  v2 = *a2 == 0;
  v20 = __readfsqword(0x28u);
  if ( !v2 )
  {
    v16 = serialize_tinfo();
    if ( !(_BYTE)v16 )
      return v16;
  }
  v18 = nullptr;
  v19 = 0;
  if ( !src )
  {
    v6 = (__int64 *)(a1 + 72);
    goto LABEL_17;
  }
  v3 = strlen(src);
  v4 = v3 + 1;
  v5 = v3;
  v18 = (void *)qvector_reserve((__int64)&v18, 0, v3 + 1, 1);
  *(_QWORD *)&v19 = v4;
  v6 = (__int64 *)(a1 + 72);
  memmove(v18, src, v5);
  *((_BYTE *)v18 + v5) = 0;
  v7 = (const char *)v18;
  if ( !(_QWORD)v19 )
LABEL_17:
    v7 = s1;
  sub_7C850(v6, v7);
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree((__int64)v18);
  }
  v18 = nullptr;
  v19 = 0;
  if ( !src )
    goto LABEL_19;
  v8 = strlen(src);
  v9 = v8 + 1;
  v10 = v8;
  v18 = (void *)qvector_reserve((__int64)&v18, 0, v8 + 1, 1);
  *(_QWORD *)&v19 = v9;
  memmove(v18, src, v10);
  *((_BYTE *)v18 + v10) = 0;
  v11 = (const char *)v18;
  if ( !(_QWORD)v19 )
LABEL_19:
    v11 = s1;
  sub_7C850(v6, v11);
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree((__int64)v18);
  }
  v18 = nullptr;
  v19 = 0;
  if ( !src )
    goto LABEL_18;
  v12 = strlen(src);
  v13 = v12 + 1;
  v14 = v12;
  v18 = (void *)qvector_reserve((__int64)&v18, 0, v12 + 1, 1);
  *(_QWORD *)&v19 = v13;
  memmove(v18, src, v14);
  *((_BYTE *)v18 + v14) = 0;
  v15 = (const char *)v18;
  if ( !(_QWORD)v19 )
LABEL_18:
    v15 = s1;
  sub_7C850(v6, v15);
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree((__int64)v18);
  }
  return 1;
}
