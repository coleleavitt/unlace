unsigned __int64 __fastcall sub_445E00(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int8 **a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // r13
  char *v8; // rbx
  char *v9; // r14
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // r10
  unsigned __int64 v12; // r8
  unsigned __int8 *v13; // r11
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rcx
  _BOOL8 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rsi
  _BOOL8 v23; // r11
  bool v24; // cf
  __int64 v25; // rax
  char *v26; // rbp
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // r13
  __int64 v29; // rdi
  unsigned __int64 v31; // [rsp+8h] [rbp-60h]
  unsigned __int64 v32; // [rsp+8h] [rbp-60h]
  unsigned __int8 *v33; // [rsp+10h] [rbp-58h]
  char *v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+28h] [rbp-40h]

  v4 = *a1;
  if ( *a1 >> 60 )
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  v6 = a2;
  if ( v4 )
  {
    v31 = a4;
    v35 = 8 * v4;
    a2 = 255;
    v8 = (char *)operator new(8 * v4);
    v9 = &v8[8 * v4];
    memset(v8, 255, 8 * v4);
    a4 = v31;
  }
  else
  {
    v35 = 0;
    v8 = nullptr;
    v9 = nullptr;
  }
  v10 = a3[2];
  v11 = *a3;
  v12 = *(_QWORD *)(v6 + 16) - a4 + 1;
  v13 = &v10[-a4];
  v14 = v12 >> 6;
  v15 = (v12 >> 6) + ((v12 & 0x3F) != 0);
  if ( v15 > v4 )
    v15 = v4;
  if ( v10 )
  {
    v34 = v9;
    v16 = 0;
    a2 = 0;
    v17 = a4 - (_QWORD)v10;
    v18 = v6;
    v14 = a4;
    do
    {
      v19 = a2;
      v20 = 0;
      if ( a2 < v15 )
      {
        v32 = a2;
        v33 = v13;
        do
        {
          v21 = *(_QWORD *)&v8[8 * v19];
          v22 = v21 & *(_QWORD *)(a1[4] + 8 * (v19 + a1[3] * *v11));
          v23 = __CFADD__(v21, v20);
          v24 = __CFADD__(v22, v21 + v20);
          v25 = (v22 + v21 + v20) | (v21 - v22);
          v20 = v23 || v24;
          *(_QWORD *)&v8[8 * v19++] = v25;
        }
        while ( v19 != v15 );
        a2 = v32;
        v13 = v33;
      }
      if ( (unsigned __int64)v13 < v16 )
        a2 = (v17 + v16) >> 6;
      if ( *(_QWORD *)(v18 + 16) >= v12 )
        v15 = (v12 >> 6) + ((v12 & 0x3F) != 0);
      ++v16;
      ++v11;
      ++v12;
    }
    while ( v16 < (unsigned __int64)a3[2] );
    v9 = v34;
    a4 = v14;
  }
  if ( v9 == v8 )
  {
    v27 = 0;
  }
  else
  {
    v26 = v8;
    v27 = 0;
    v28 = a4;
    do
    {
      v29 = *(_QWORD *)v26;
      v26 += 8;
      v27 += (int)__popcountdi2(~v29, a2, v14, a4, v12, v15);
    }
    while ( v9 != v26 );
    a4 = v28;
  }
  if ( v27 < a4 )
    v27 = 0;
  if ( v8 )
    operator delete(v8, v35);
  return v27;
}
