__int64 __fastcall sub_1DD7690(__int64 a1, __m128 *a2, __int64 *a3, __int64 a4, unsigned int a5, __m128 a6, __m128 a7)
{
  __int64 v10; // rsi
  const __m128i *v11; // rax
  __int32 v12; // edx
  __int64 v13; // rdx
  unsigned int v14; // ebx
  int v15; // edi
  __int64 v16; // rax
  __int32 v18; // ecx
  __int64 v19; // [rsp+0h] [rbp-188h] BYREF
  __int64 v20; // [rsp+8h] [rbp-180h]
  __int64 v21; // [rsp+10h] [rbp-178h]
  unsigned int v22; // [rsp+18h] [rbp-170h]
  __int64 v23; // [rsp+20h] [rbp-168h]
  int v24; // [rsp+28h] [rbp-160h]
  __int64 v25; // [rsp+30h] [rbp-158h]
  __int16 v26; // [rsp+38h] [rbp-150h]
  char v27; // [rsp+3Ah] [rbp-14Eh]
  void *ptr[2]; // [rsp+40h] [rbp-148h] BYREF
  _BYTE v29[256]; // [rsp+50h] [rbp-138h] BYREF
  __int64 v30; // [rsp+150h] [rbp-38h]

  v10 = a3[1];
  if ( (_BYTE)a5 )
  {
    v11 = *(const __m128i **)(v10 + 64);
    v30 = 0;
    ptr[1] = (void *)0x800000000LL;
    ptr[0] = v29;
    if ( !v11
      || (LODWORD(v30) = v11->m128i_i32[0],
          v12 = v11->m128i_i32[1],
          v19 = a1,
          HIDWORD(v30) = v12,
          v13 = v11->m128i_u32[2],
          v23 = a4,
          v22 = 0,
          v24 = 0,
          v20 = 0,
          v21 = 0,
          v25 = 0,
          v26 = 1,
          v27 = 0,
          v14 = sub_1DD6C30(&v19, v11 + 1, &v11[2 * v13 + 1], (__int64)ptr, a6, a7),
          operator delete(v20, 16LL * v22, 8),
          !(_BYTE)v14) )
    {
      v15 = 0;
      if ( sub_BBE5D0((__int64)a2) )
        v15 = *(_DWORD *)(*a3 + 20);
      v16 = a3[1];
      v14 = sub_1CD1CD0(
              a1,
              *(_QWORD *)v16,
              *(_QWORD *)(v16 + 8),
              *(_QWORD *)(v16 + 56),
              *(_QWORD *)(v16 + 48),
              (__int64 *)ptr,
              *(_OWORD *)(v16 + 24),
              *(_QWORD *)(v16 + 40),
              a2,
              v15);
    }
    if ( ptr[0] != v29 )
      free(ptr[0]);
  }
  else
  {
    v18 = *((_DWORD *)a3 + 4);
    v14 = a5;
    if ( !v18 )
      v18 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12632LL);
    sub_BBE5F0(a2, v10, *a3, v18);
  }
  return v14;
}
