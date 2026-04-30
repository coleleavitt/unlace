unsigned __int64 __fastcall sub_213DA0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  double v4; // xmm0_8
  const char *v5; // rsi
  const char *v6; // rsi
  const char *v7; // rsi
  const char *v8; // rsi
  size_t v9; // rax
  const char *v10; // rsi
  char v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v19; // rax
  unsigned __int16 v20; // [rsp+Ch] [rbp-F4h] BYREF
  const char *v21; // [rsp+10h] [rbp-F0h] BYREF
  __int128 v22; // [rsp+18h] [rbp-E8h]
  const char *v23; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+38h] [rbp-C8h]
  const char *v25; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+58h] [rbp-A8h]
  const char *v27; // [rsp+70h] [rbp-90h] BYREF
  __int128 v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+90h] [rbp-70h] BYREF
  __int128 v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-48h]
  char v33; // [rsp+C8h] [rbp-38h]
  _BYTE v34[3]; // [rsp+D5h] [rbp-2Bh] BYREF
  unsigned __int64 v35[5]; // [rsp+D8h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v35[0] = __readfsqword(0x28u);
  sub_20C550(a2, *(_DWORD *)(v2 + 352));
  v4 = 0.0;
  v33 = 1;
  v21 = nullptr;
  v29 = 0;
  v23 = nullptr;
  v25 = nullptr;
  v27 = nullptr;
  v31 = 0;
  v22 = 0;
  v24 = 0;
  v26 = 0;
  v28 = 0;
  v30 = 0;
  v32 = 0;
  sub_256D60(
    (unsigned int)&v21,
    (unsigned int)&v23,
    (unsigned int)&v31,
    (unsigned int)&v25,
    (unsigned int)&v27,
    (unsigned int)&v29,
    (__int64)&v20);
  v5 = &s1;
  if ( (_QWORD)v22 )
    v5 = v21;
  sub_20C770(a2, v5, 0.0);
  v6 = &s1;
  if ( (_QWORD)v24 )
    v6 = v23;
  sub_20C770(a2, v6, 0.0);
  v7 = &s1;
  if ( (_QWORD)v26 )
    v7 = v25;
  sub_20C770(a2, v7, 0.0);
  v8 = &s1;
  if ( (_QWORD)v28 )
    v8 = v27;
  sub_20C770(a2, v8, 0.0);
  v9 = pack_dw(v34, v35, v20) - (_QWORD)v34;
  if ( v9 )
    sub_20BED0(a2, v34, v9);
  v10 = (const char *)*a2;
  v11 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 360LL);
  v12 = a2[1];
  if ( a2[2] < (unsigned __int64)(v12 + 1) )
  {
    v19 = qvector_reserve(a2, v10, v12 + 1, 1);
    *a2 = v19;
    v10 = (const char *)v19;
    v12 = a2[1];
  }
  v10[v12] = v11;
  v13 = v31;
  ++a2[1];
  if ( v13 )
  {
    v14 = v32;
    if ( (_QWORD)v32 )
    {
      v15 = 0;
      do
      {
        v16 = (__int64 *)(v13 + 24 * v15);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17, v10);
          v13 = v31;
        }
        ++v15;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v32 = 0;
    v4 = qfree(v13, v10);
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    v4 = qfree(v29, v10, v4);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    v4 = qfree(v27, v10, v4);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    v4 = qfree(v25, v10, v4);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    v4 = qfree(v23, v10, v4);
  }
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, v10, v4);
  }
  return v35[0] - __readfsqword(0x28u);
}
