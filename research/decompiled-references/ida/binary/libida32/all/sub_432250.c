unsigned __int64 __fastcall sub_432250(unsigned __int64 *a1, __int64 a2, unsigned __int8 **a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r15
  char *v8; // rbx
  char *v9; // r14
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // r10
  unsigned __int64 v12; // r8
  unsigned __int8 *v13; // r11
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r15
  __int64 v18; // r14
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  _BOOL8 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rsi
  _BOOL8 v24; // r11
  bool v25; // cf
  __int64 v26; // rax
  char *v27; // rbp
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r13
  unsigned __int64 v31; // [rsp+8h] [rbp-60h]
  unsigned __int64 v32; // [rsp+8h] [rbp-60h]
  unsigned __int8 *v33; // [rsp+10h] [rbp-58h]
  char *v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+28h] [rbp-40h]

  v4 = *a1;
  if ( *a1 >> 60 )
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  if ( v4 )
  {
    v31 = a4;
    v35 = 8 * v4;
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
  v12 = *(_QWORD *)(a2 + 16) - a4 + 1;
  v13 = &v10[-a4];
  v14 = (v12 >> 6) + ((v12 & 0x3F) != 0);
  if ( v14 > v4 )
    v14 = v4;
  if ( v10 )
  {
    v34 = v9;
    v15 = 0;
    v16 = 0;
    v17 = a4 - (_QWORD)v10;
    v18 = a2;
    v19 = a4;
    do
    {
      v20 = v16;
      v21 = 0;
      if ( v16 < v14 )
      {
        v32 = v16;
        v33 = v13;
        do
        {
          v22 = *(_QWORD *)&v8[8 * v20];
          v23 = v22 & *(_QWORD *)(a1[4] + 8 * (v20 + a1[3] * *v11));
          v24 = __CFADD__(v22, v21);
          v25 = __CFADD__(v23, v22 + v21);
          v26 = (v23 + v22 + v21) | (v22 - v23);
          v21 = v24 || v25;
          *(_QWORD *)&v8[8 * v20++] = v26;
        }
        while ( v20 != v14 );
        v16 = v32;
        v13 = v33;
      }
      if ( (unsigned __int64)v13 < v15 )
        v16 = (v17 + v15) >> 6;
      if ( *(_QWORD *)(v18 + 16) >= v12 )
        v14 = (v12 >> 6) + ((v12 & 0x3F) != 0);
      ++v15;
      ++v11;
      ++v12;
    }
    while ( v15 < (unsigned __int64)a3[2] );
    v9 = v34;
    a4 = v19;
  }
  if ( v9 == v8 )
  {
    v28 = 0;
  }
  else
  {
    v27 = v8;
    v28 = 0;
    v29 = a4;
    do
    {
      v27 += 8;
      v28 += (int)__popcountdi2();
    }
    while ( v9 != v27 );
    a4 = v29;
  }
  if ( v28 < a4 )
    v28 = 0;
  if ( v8 )
    operator delete(v8, v35);
  return v28;
}

