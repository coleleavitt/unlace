unsigned __int64 __fastcall sub_A5020(__int64 a1, __int64 *a2)
{
  const char *v3; // rsi
  const char *v4; // rsi
  const char *v5; // rsi
  const char *v6; // rsi
  size_t v7; // rax
  __int64 v8; // rsi
  char v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v16; // rax
  __int16 v17; // [rsp+Ch] [rbp-F4h] BYREF
  const char *v18; // [rsp+10h] [rbp-F0h] BYREF
  __int128 v19; // [rsp+18h] [rbp-E8h]
  const char *v20; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v21; // [rsp+38h] [rbp-C8h]
  const char *v22; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+58h] [rbp-A8h]
  const char *v24; // [rsp+70h] [rbp-90h] BYREF
  __int128 v25; // [rsp+78h] [rbp-88h]
  __int64 v26; // [rsp+90h] [rbp-70h] BYREF
  __int128 v27; // [rsp+98h] [rbp-68h]
  __int64 v28; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v29; // [rsp+B8h] [rbp-48h]
  char v30; // [rsp+C8h] [rbp-38h]
  _BYTE v31[3]; // [rsp+D5h] [rbp-2Bh] BYREF
  unsigned __int64 v32; // [rsp+D8h] [rbp-28h]

  v32 = __readfsqword(0x28u);
  sub_9D5D0(a2);
  v30 = 1;
  v18 = nullptr;
  v26 = 0;
  v20 = nullptr;
  v22 = nullptr;
  v24 = nullptr;
  v28 = 0;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  sub_E4FB0(
    (unsigned int)&v18,
    (unsigned int)&v20,
    (unsigned int)&v28,
    (unsigned int)&v22,
    (unsigned int)&v24,
    (unsigned int)&v26,
    (__int64)&v17);
  v3 = s1;
  if ( (_QWORD)v19 )
    v3 = v18;
  sub_9D7F0(a2, v3);
  v4 = s1;
  if ( (_QWORD)v21 )
    v4 = v20;
  sub_9D7F0(a2, v4);
  v5 = s1;
  if ( (_QWORD)v23 )
    v5 = v22;
  sub_9D7F0(a2, v5);
  v6 = s1;
  if ( (_QWORD)v25 )
    v6 = v24;
  sub_9D7F0(a2, v6);
  v7 = pack_dw() - (_QWORD)v31;
  if ( v7 )
    sub_9CF80(a2, v31, v7);
  v8 = *a2;
  v9 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 352LL);
  v10 = a2[1];
  if ( a2[2] < (unsigned __int64)(v10 + 1) )
  {
    v16 = qvector_reserve();
    *a2 = v16;
    v8 = v16;
    v10 = a2[1];
  }
  *(_BYTE *)(v8 + v10) = v9;
  v11 = v28;
  ++a2[1];
  if ( v11 )
  {
    v12 = v29;
    if ( (_QWORD)v29 )
    {
      v13 = 0;
      do
      {
        v14 = (_QWORD *)(v11 + 24 * v13);
        if ( *v14 )
        {
          v14[1] = 0;
          qfree();
          v11 = v28;
        }
        ++v13;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree();
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree();
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  return v32 - __readfsqword(0x28u);
}

