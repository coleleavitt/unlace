__int64 __fastcall sub_18C4B0(const char *src, const __m128i *a2)
{
  size_t v2; // rax
  size_t v3; // r13
  size_t v4; // r12
  unsigned int v5; // r13d
  char *v6; // rax
  int v7; // edx
  int v9; // [rsp+Ch] [rbp-94h] BYREF
  int v10; // [rsp+10h] [rbp-90h] BYREF
  int v11; // [rsp+14h] [rbp-8Ch] BYREF
  char *v12; // [rsp+18h] [rbp-88h] BYREF
  _BYTE *v13; // [rsp+20h] [rbp-80h]
  __int128 v14; // [rsp+28h] [rbp-78h]
  __m128i v15; // [rsp+38h] [rbp-68h] BYREF
  __int64 v16; // [rsp+48h] [rbp-58h]
  _QWORD v17[3]; // [rsp+50h] [rbp-50h] BYREF
  char v18; // [rsp+68h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  v13 = nullptr;
  v14 = 0;
  if ( src )
  {
    v2 = strlen(src);
    v3 = v2 + 1;
    v4 = v2;
    v13 = (_BYTE *)qvector_reserve();
    *(_QWORD *)&v14 = v3;
    memmove(v13, src, v4);
    v13[v4] = 0;
  }
  v15 = _mm_loadu_si128(a2);
  v16 = a2[1].m128i_i64[0];
  sub_185A70(v13, v15.m128i_i32, &v9, v17, &v10, nullptr, nullptr, &v11, &v12);
  v5 = 1;
  if ( v17[1] )
  {
    v6 = (char *)v17;
    v7 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)v6 )
      {
        if ( v10 == v7 )
        {
          v5 = dword_1D87F8[v10];
          break;
        }
        ++v7;
      }
      v6 += 8;
      if ( &v18 == v6 )
      {
        v5 = -2;
        break;
      }
    }
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v5;
}

