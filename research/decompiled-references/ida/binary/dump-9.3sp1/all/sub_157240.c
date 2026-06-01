__int64 __fastcall sub_157240(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int128 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  char v9; // bp
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdi
  char v14; // al
  int v15; // [rsp+0h] [rbp-D8h]
  __int64 *v16; // [rsp+8h] [rbp-D0h]
  __int64 v17; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v18; // [rsp+18h] [rbp-C0h]
  __int64 v19[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-98h] BYREF
  __int128 v21; // [rsp+48h] [rbp-90h]
  __int64 v22[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v23; // [rsp+70h] [rbp-68h] BYREF
  __int128 v24; // [rsp+78h] [rbp-60h]
  __int64 v25; // [rsp+88h] [rbp-50h]
  __int64 v26; // [rsp+90h] [rbp-48h]
  __int64 v27; // [rsp+98h] [rbp-40h]
  unsigned __int64 v28; // [rsp+A8h] [rbp-30h]

  v3 = 1;
  v28 = __readfsqword(0x28u);
  v26 = a2;
  v27 = a3;
  while ( 1 )
  {
    *((_QWORD *)&v5 + 1) = v19;
    *(_QWORD *)&v5 = a1;
    v21 = 0;
    v19[0] = 0;
    v19[1] = 0;
    v20 = 0;
    sub_123EA0(v5, a3, 1, 0xFFFF0000);
    v6 = *(_QWORD *)(a1 + 64);
    v22[0] = 0;
    v22[1] = 0;
    v7 = *(_QWORD *)(v6 + 128);
    v8 = *(_QWORD *)(v6 + 568);
    v23 = 0;
    v17 = 0;
    v24 = 0;
    v18 = 0;
    if ( v7 + v8 - 1 >= v8 )
    {
      v16 = &v17;
      v17 = qvector_reserve((__int64)&v17, 0, 1, 16);
      *(__m128i *)(v17 + 16 * v18) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v7);
      *(_QWORD *)&v18 = v18 + 1;
    }
    v9 = sub_317F40(&v17, &v20);
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
    }
    sub_128EE0(
      a1,
      (__int64)v22,
      (unsigned __int8 *)*(&v25 + v3),
      v9 == 0 ? 1 : 16385,
      v10,
      v11,
      v15,
      (int)v16,
      v17,
      v18,
      *((__int64 *)&v18 + 1));
    if ( (unsigned __int8)sub_64880(v22) && !(_QWORD)v24 )
    {
      if ( v23 )
        qfree(v23);
      qfree(v22[0]);
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(v20);
      }
      goto LABEL_19;
    }
    if ( (unsigned __int8)sub_64780(v22, v19) )
      break;
    v14 = sub_318470(&v23, &v20);
    v12 = v23;
    if ( v14 )
      goto LABEL_10;
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23);
    }
    qfree(v22[0]);
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20);
    }
LABEL_19:
    qfree(v19[0]);
    if ( v3 == 2 )
      return 1;
    a3 = v26;
    v3 = 2;
  }
  v12 = v23;
LABEL_10:
  if ( v12 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v12);
  }
  qfree(v22[0]);
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  qfree(v19[0]);
  return 0;
}
