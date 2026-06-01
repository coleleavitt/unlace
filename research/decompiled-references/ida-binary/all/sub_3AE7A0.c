_BOOL8 __fastcall sub_3AE7A0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v9; // eax
  _BOOL4 v10; // ebp
  const char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 tinfo_size; // rax
  __int64 v17; // rdi
  const char *v18; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v19; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+20h] [rbp-B8h]
  __int128 v21; // [rsp+28h] [rbp-B0h]
  __int64 v22; // [rsp+38h] [rbp-A0h]
  __int128 v23; // [rsp+40h] [rbp-98h]
  __int128 v24; // [rsp+50h] [rbp-88h] BYREF
  __int64 v25; // [rsp+60h] [rbp-78h]
  __int64 v26; // [rsp+68h] [rbp-70h]
  __int64 v27; // [rsp+70h] [rbp-68h]
  int reftype_by_size; // [rsp+78h] [rbp-60h]
  __int64 v29; // [rsp+80h] [rbp-58h]
  int v30; // [rsp+88h] [rbp-50h]
  __int64 v31; // [rsp+90h] [rbp-48h]
  char v32; // [rsp+98h] [rbp-40h]
  unsigned __int64 v33; // [rsp+A8h] [rbp-30h]

  v9 = *(_DWORD *)(a1 + 8);
  v33 = __readfsqword(0x28u);
  if ( v9 == 58 || (v10 = 0, v9 == 25) )
  {
    v12 = *(const char **)(a1 + 208);
    v20 = 0;
    v19 = 0;
    v22 = 0;
    v29 = 1;
    v30 = -1;
    v31 = 0;
    v32 = 0;
    v21 = 0;
    v23 = 0;
    v24 = 0;
    v13 = sub_3AB1C0((__int64)&v19, (__int64)v12, (__m128)0LL, a3, a4, a5, a6, a7, a8, a9);
    v15 = v13;
    if ( v13 < 0 )
    {
      v10 = v13 != -1;
    }
    else
    {
      v18 = nullptr;
      copy_tinfo_t(&v18, &v24, v14);
      v12 = v18;
      tinfo_size = get_tinfo_size(0, v18, 0);
      reftype_by_size = (unsigned __int8)get_reftype_by_size(tinfo_size);
      clear_tinfo_t(&v18);
      if ( reftype_by_size == 255 )
      {
        v10 = 0;
      }
      else
      {
        v17 = *(_QWORD *)(a1 + 208);
        v12 = byte_9 + 5;
        v26 = -1;
        v25 = -1;
        v27 = 0;
        *((_QWORD *)&v24 + 1) = *((_QWORD *)&v24 + 1) & 0xFFFFFFFFFFFFFFF0LL | 9;
        v10 = set_tinfo_property4(v17 + 8, 14, v15, (char *)&v24 + 8, 0, 0) == 0;
      }
    }
    clear_tinfo_t(&v24);
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v22, v12);
    }
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20, v12);
    }
  }
  return v10;
}
