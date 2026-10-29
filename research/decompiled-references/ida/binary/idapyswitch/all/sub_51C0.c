unsigned __int64 __fastcall sub_51C0(char *src, __int64 a2)
{
  _BYTE *v2; // rbx
  unsigned int v3; // edi
  unsigned int v4; // edi
  _BYTE *v5; // r12
  size_t v6; // r12
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rbx
  __m128i v10; // xmm1
  __m128i v11; // xmm1
  void *v12; // rdi
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __m128i v16; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v2 = src;
  v3 = *src;
  if ( (_BYTE)v3 )
  {
    while ( v3 <= 0x7F && isspace(v3) )
    {
      v3 = (char)*++v2;
      if ( !(_BYTE)v3 )
        return v17 - __readfsqword(0x28u);
    }
    v4 = (char)*v2;
    if ( *v2 )
    {
      v5 = v2;
      do
      {
        if ( v4 <= 0x7F && isspace(v4) )
          break;
        v4 = (char)*++v5;
      }
      while ( (_BYTE)v4 );
      if ( a2 && v2 < v5 )
      {
        v6 = v5 - v2;
        v7 = nullptr;
        ptr = nullptr;
        v16 = 0;
        if ( v6 != -1 )
        {
          ptr = (void *)sub_11430(&ptr, 0, v6 + 1, 1);
          v7 = ptr;
        }
        v16.m128i_i64[0] = v6 + 1;
        memmove(v7, v2, v6);
        *((_BYTE *)ptr + v6) = 0;
        v8 = *(void **)a2;
        v9 = ptr;
        v10 = _mm_loadu_si128(&v16);
        v16 = 0;
        ptr = nullptr;
        if ( v8 )
        {
          *(_QWORD *)(a2 + 8) = 0;
          v14 = v10;
          j__free(v8);
          v11 = _mm_load_si128(&v14);
          v12 = ptr;
          *(_QWORD *)a2 = v9;
          *(__m128i *)(a2 + 8) = v11;
          if ( v12 )
          {
            v16.m128i_i64[0] = 0;
            j__free(v12);
          }
        }
        else
        {
          *(_QWORD *)a2 = v9;
          *(__m128i *)(a2 + 8) = v10;
        }
      }
    }
  }
  return v17 - __readfsqword(0x28u);
}

