__int64 __fastcall clang_visitChildren(
        __int64 a1,
        const __m128i *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // r9d
  unsigned __int8 v13; // al
  void ***v14; // rbx
  unsigned int v15; // r13d
  void ***v16; // r12
  void **v17; // rbp
  __m128i v19; // [rsp+0h] [rbp-148h]
  __m128i v20; // [rsp+10h] [rbp-138h]
  _QWORD v21[2]; // [rsp+20h] [rbp-128h] BYREF
  int v22; // [rsp+30h] [rbp-118h]
  __int128 v23; // [rsp+38h] [rbp-110h]
  __int128 v24; // [rsp+48h] [rbp-100h]
  __int64 v25; // [rsp+58h] [rbp-F0h]
  __int64 v26; // [rsp+60h] [rbp-E8h]
  const __m128i *v27; // [rsp+68h] [rbp-E0h]
  __int16 v28; // [rsp+70h] [rbp-D8h]
  __int64 v29; // [rsp+74h] [rbp-D4h]
  char v30; // [rsp+7Ch] [rbp-CCh]
  __int128 v31; // [rsp+80h] [rbp-C8h]
  __int64 v32; // [rsp+90h] [rbp-B8h]
  void *ptr; // [rsp+A0h] [rbp-A8h]
  __int64 v34; // [rsp+A8h] [rbp-A0h]
  _BYTE v35[40]; // [rsp+B0h] [rbp-98h] BYREF
  void ***v36; // [rsp+D8h] [rbp-70h]
  __int64 v37; // [rsp+E0h] [rbp-68h]
  _BYTE v38[96]; // [rsp+E8h] [rbp-60h] BYREF

  v19 = _mm_loadu_si128((const __m128i *)&a7);
  v20 = _mm_loadu_si128((const __m128i *)&a8);
  v8 = sub_63A300(
         a1,
         (_DWORD)a2,
         a3,
         a4,
         a5,
         a6,
         v19.m128i_i32[0],
         v19.m128i_i32[2],
         v20.m128i_i32[0],
         v20.m128i_i64[1]);
  v21[0] = v8;
  if ( v8 )
    v8 = *(_QWORD *)(v8 + 8);
  v21[1] = v8;
  v28 = 0;
  v25 = a1;
  v26 = 0;
  v27 = a2;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  ptr = v35;
  v34 = 0x500000000LL;
  v36 = (void ***)v38;
  v37 = 0x500000000LL;
  v22 = 71;
  v23 = 0;
  v24 = 0;
  v13 = sub_616F10(
          (__int64)v21,
          a2,
          v9,
          v10,
          v11,
          v12,
          (__int128)_mm_loadu_si128((const __m128i *)&a7),
          _mm_loadu_si128((const __m128i *)&a8));
  v14 = v36;
  v15 = v13;
  v16 = &v36[(unsigned int)v37];
  if ( v36 != v16 )
  {
    do
    {
      v17 = *v14;
      if ( *v14 )
      {
        if ( *v17 != v17 + 2 )
          free(*v17);
        operator delete(v17, 0x290u);
      }
      ++v14;
    }
    while ( v16 != v14 );
    v16 = v36;
  }
  if ( v16 != (void ***)v38 )
    free(v16);
  if ( ptr != v35 )
    free(ptr);
  return v15;
}

