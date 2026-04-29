__int64 __fastcall sub_7C970(__int64 a1, _BYTE *a2)
{
  bool v2; // zf
  const char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  __int64 *v7; // rbx
  const char *v8; // rsi
  const char *v9; // rbp
  size_t v10; // rax
  size_t v11; // r13
  size_t v12; // r12
  const char *v13; // rsi
  const char *v14; // rbp
  size_t v15; // rax
  size_t v16; // r13
  size_t v17; // r12
  const char *v18; // rsi
  unsigned int v19; // ebp
  const char *v21; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+8h] [rbp-A0h]
  const char *v23; // [rsp+20h] [rbp-88h] BYREF
  __int128 v24; // [rsp+28h] [rbp-80h]
  const char *v25; // [rsp+40h] [rbp-68h] BYREF
  __int128 v26; // [rsp+48h] [rbp-60h]
  void *v27; // [rsp+60h] [rbp-48h] BYREF
  __int128 v28; // [rsp+68h] [rbp-40h]
  unsigned __int64 v29; // [rsp+78h] [rbp-30h]

  v2 = *a2 == 0;
  v29 = __readfsqword(0x28u);
  v21 = nullptr;
  v23 = nullptr;
  v25 = nullptr;
  v22 = 0;
  v24 = 0;
  v26 = 0;
  if ( v2 )
    goto LABEL_2;
  v19 = serialize_tinfo(&v21, &v23, &v25, a2, 272);
  if ( !(_BYTE)v19 )
    goto LABEL_20;
  if ( !(_QWORD)v22 )
LABEL_2:
    v3 = src;
  else
    v3 = v21;
  v27 = nullptr;
  v28 = 0;
  if ( !v3 )
  {
    v7 = (__int64 *)(a1 + 72);
    goto LABEL_28;
  }
  v4 = strlen(v3);
  v5 = v4 + 1;
  v6 = v4;
  v27 = (void *)qvector_reserve(&v27, 0, v4 + 1, 1);
  *(_QWORD *)&v28 = v5;
  v7 = (__int64 *)(a1 + 72);
  memmove(v27, v3, v6);
  *((_BYTE *)v27 + v6) = 0;
  v8 = (const char *)v27;
  if ( !(_QWORD)v28 )
LABEL_28:
    v8 = s1;
  sub_7C850(v7, v8);
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  v9 = src;
  if ( (_QWORD)v24 )
    v9 = v23;
  v27 = nullptr;
  v28 = 0;
  if ( !v9
    || (v10 = strlen(v9),
        v11 = v10 + 1,
        v12 = v10,
        v27 = (void *)qvector_reserve(&v27, 0, v10 + 1, 1),
        *(_QWORD *)&v28 = v11,
        memmove(v27, v9, v12),
        *((_BYTE *)v27 + v12) = 0,
        v13 = (const char *)v27,
        !(_QWORD)v28) )
  {
    v13 = s1;
  }
  sub_7C850(v7, v13);
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  v14 = src;
  if ( (_QWORD)v26 )
    v14 = v25;
  v27 = nullptr;
  v28 = 0;
  if ( !v14
    || (v15 = strlen(v14),
        v16 = v15 + 1,
        v17 = v15,
        v27 = (void *)qvector_reserve(&v27, 0, v15 + 1, 1),
        *(_QWORD *)&v28 = v16,
        memmove(v27, v14, v17),
        *((_BYTE *)v27 + v17) = 0,
        v18 = (const char *)v27,
        !(_QWORD)v28) )
  {
    v18 = s1;
  }
  sub_7C850(v7, v18);
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  v19 = 1;
LABEL_20:
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  return v19;
}
