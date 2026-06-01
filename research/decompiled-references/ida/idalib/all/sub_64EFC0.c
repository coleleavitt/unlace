__int64 __fastcall sub_64EFC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        __int64 *a7)
{
  unsigned int v10; // eax
  __int64 *v11; // r8
  unsigned int v12; // eax
  void *v13; // rdi
  unsigned int v14; // ebp
  void *v16; // rdx
  __int64 v17; // rcx
  __m128 v18; // xmm0
  _QWORD v20[2]; // [rsp+18h] [rbp-70h] BYREF
  __int64 v21; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v23; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v20[0] = a4;
  v24 = __readfsqword(0x28u);
  v10 = sub_6A9DF0(a2, v20, 0);
  v11 = a7;
  v21 = 0;
  if ( v10 != 32 )
    a6 = v10;
  if ( !a6 )
    a6 = 16;
  if ( v20[0] && !a7 )
  {
    v14 = deserialize_tinfo(&v21, a2, v20, 0, 0, 0);
    if ( !(_BYTE)v14 )
      goto LABEL_10;
    v11 = &v21;
  }
  v23 = 0;
  ptr = nullptr;
  v12 = decorate_name(&ptr, a3, a5, a6, v11);
  v13 = ptr;
  v14 = v12;
  if ( (_BYTE)v12 )
  {
    if ( (unsigned __int64)v23 <= 1 )
    {
      v14 = 0;
    }
    else
    {
      v16 = *(void **)a1;
      v17 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)a1 = ptr;
      v18 = _mm_loadh_ps((const double *)&v23 + 1);
      ptr = v16;
      v13 = v16;
      *((_QWORD *)&v23 + 1) = v17;
      *(__m128 *)(a1 + 8) = v18;
    }
  }
  if ( v13 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v13);
  }
LABEL_10:
  clear_tinfo_t(&v21);
  return v14;
}
