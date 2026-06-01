__int64 __fastcall sub_1B724E0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r14
  void **p_ptr; // r9
  __int64 *v10; // rbx
  _BYTE *v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  void **v18; // rbx
  __int64 v20; // r12
  unsigned int v21; // ebp
  char v22; // al
  __int64 v23; // rax
  void **v24; // [rsp+8h] [rbp-70h]
  unsigned __int64 v25; // [rsp+8h] [rbp-70h]
  _BYTE *v26; // [rsp+10h] [rbp-68h]
  void **v27; // [rsp+10h] [rbp-68h]
  unsigned __int64 v28; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int64 v30; // [rsp+28h] [rbp-50h]
  _BYTE v31[72]; // [rsp+30h] [rbp-48h] BYREF

  v8 = sub_1B71AD0(a1, *(const __m128i **)(a2 + 8), a3, a7, a8, a4, a5, a6);
  if ( v8 == 1 )
    return v8;
  p_ptr = &ptr;
  v10 = (__int64 *)(a2 + 16);
  v11 = v31;
  v12 = v8 & 0xFFFFFFFFFFFFFFFELL;
  v13 = *(_DWORD *)a2 >> 9;
  ptr = v31;
  v14 = a2 + 16 + 8 * v13;
  v30 = 0x100000000LL;
  if ( a2 + 16 == v14 )
  {
    v18 = (void **)v31;
    if ( *(_QWORD *)(a2 + 8) != v12 )
      goto LABEL_10;
  }
  else
  {
    do
    {
      v15 = *v10;
      if ( *v10 )
      {
        v16 = (unsigned int)v30;
        v17 = (unsigned int)v30 + 1LL;
        if ( v17 > HIDWORD(v30) )
        {
          v28 = v12;
          v26 = v11;
          v24 = p_ptr;
          sub_2237220(p_ptr, v11, v17, 8);
          v16 = (unsigned int)v30;
          v12 = v28;
          v11 = v26;
          p_ptr = v24;
        }
        *((_QWORD *)ptr + v16) = v15;
        LODWORD(v30) = v30 + 1;
      }
      ++v10;
    }
    while ( (__int64 *)v14 != v10 );
    v18 = (void **)ptr;
    if ( *(_QWORD *)(a2 + 8) != v12 )
    {
      if ( (_DWORD)v30 )
      {
        v20 = (unsigned int)v30;
        v27 = p_ptr;
        v25 = v12;
        v21 = *(_DWORD *)(a2 + 4);
        v8 = 1;
        v22 = sub_1C5F970(*a1, ptr, (unsigned int)v30);
        p_ptr = v27;
        if ( !v22 )
        {
          v23 = sub_1C497E0(*a1, v21, v18, v20, v25);
          p_ptr = v27;
          v8 = v23;
        }
        v18 = (void **)ptr;
      }
      goto LABEL_10;
    }
  }
  v8 = a2;
LABEL_10:
  if ( v18 != p_ptr + 2 )
    free(v18);
  return v8;
}
