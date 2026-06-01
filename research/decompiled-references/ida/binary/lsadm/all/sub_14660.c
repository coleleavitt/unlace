unsigned __int64 __fastcall sub_14660(__int64 a1, _BYTE *a2)
{
  int v3; // r12d
  const char *v4; // rax
  const char *v5; // r12
  size_t v6; // rax
  size_t v7; // r14
  void *v8; // rbx
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  void *v12; // rdi
  size_t v13; // r15
  __m128i v14; // [rsp+0h] [rbp-B8h] BYREF
  void *ptr; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v16; // [rsp+18h] [rbp-A0h]
  void *v17; // [rsp+30h] [rbp-88h] BYREF
  __m128i v18; // [rsp+38h] [rbp-80h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+50h] [rbp-68h] BYREF
  char v20; // [rsp+58h] [rbp-60h]
  int v21; // [rsp+5Ch] [rbp-5Ch]
  void *dest; // [rsp+60h] [rbp-58h] BYREF
  __int128 v23; // [rsp+68h] [rbp-50h]
  unsigned __int64 v24; // [rsp+78h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  sub_1AEF0(&ptr, 10);
  if ( a2[8] != 24 )
  {
    if ( !byte_7BCA0 )
      sub_2A3D0(3274, 10);
    BUG();
  }
  v3 = sub_148B0(a2 + 16);
  if ( a2 )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
  {
    v20 = 11;
    v21 = v3;
    dest = nullptr;
    v23 = 0;
    v19 = &off_795E0;
    v4 = (const char *)sub_27010(0);
    v5 = v4;
    if ( v4 && (v6 = strlen(v4), (v7 = v6) != 0) )
    {
      v12 = dest;
      v13 = v6 + 1;
      if ( *((_QWORD *)&v23 + 1) < v6 + 1 )
      {
        dest = (void *)sub_29E60(&dest, dest, v13, 1);
        v12 = dest;
      }
      *(_QWORD *)&v23 = v13;
      memmove(v12, v5, v7);
      *((_BYTE *)dest + v7) = 0;
    }
    else
    {
      *(_QWORD *)&v23 = 0;
    }
    sub_1AEF0(&v17, 11);
    v8 = v17;
    v17 = nullptr;
    v9 = _mm_loadu_si128(&v18);
    v18 = 0;
    if ( ptr )
    {
      v14 = v9;
      v16.m128i_i64[0] = 0;
      j__free(ptr);
      v10 = _mm_load_si128(&v14);
      ptr = v8;
      v16 = v10;
      if ( v17 )
      {
        v18.m128i_i64[0] = 0;
        j__free(v17);
      }
    }
    else
    {
      ptr = v8;
      v16 = v9;
    }
    sub_313A0(&v19, &ptr, *(unsigned int *)(a1 + 108));
    sub_2F9C0(&v19);
  }
  sub_1A5C0(a1, &ptr);
  if ( ptr )
  {
    v16.m128i_i64[0] = 0;
    j__free(ptr);
  }
  return v24 - __readfsqword(0x28u);
}

