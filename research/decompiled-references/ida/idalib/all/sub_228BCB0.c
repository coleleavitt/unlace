__int64 __fastcall sub_228BCB0(char ***a1, unsigned __int8 a2, __mode_t a3)
{
  bool v3; // zf
  unsigned __int8 v4; // cl
  size_t v5; // r13
  char *v6; // r12
  unsigned int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // r15
  unsigned int v10; // ebp
  __int64 v11; // rax
  char *v13; // rax
  size_t v14; // rdx
  char *v16; // [rsp+20h] [rbp-108h] BYREF
  size_t v17; // [rsp+28h] [rbp-100h]
  __int16 v18; // [rsp+40h] [rbp-E8h]
  void *ptr; // [rsp+50h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-D0h]
  _BYTE v21[192]; // [rsp+68h] [rbp-C0h] BYREF

  v3 = *((_BYTE *)a1 + 33) == 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v21;
  if ( v3 && (v4 = *((_BYTE *)a1 + 32), v4 <= 6u) && ((1LL << v4) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a1 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v5 = (size_t)a1[1];
        v6 = (char *)*a1;
        break;
      case 1:
        v5 = 0;
        v6 = nullptr;
        break;
      case 3:
        v6 = (char *)*a1;
        v5 = 0;
        if ( *a1 )
          v5 = j__strlen((const char *)*a1);
        break;
      case 4:
        v6 = **a1;
        v5 = (size_t)(*a1)[1];
        break;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    sub_22538C0((const char **)a1, (__int64)&ptr);
    v5 = si128.m128i_i64[0];
    v6 = (char *)ptr;
  }
  v18 = 261;
  v16 = v6;
  v17 = v5;
  v7 = sub_228BC10((size_t *)&v16, a2, a3);
  v9 = v8;
  v10 = v7;
  v11 = std::_V2::generic_category((std::_V2 *)&v16);
  if ( v7 == 2 && v11 == v9 )
  {
    v13 = sub_228A4B0(v6, v5, 0);
    if ( v14 )
    {
      v17 = v14;
      v18 = 261;
      v16 = v13;
      v10 = sub_228BCB0(&v16, a2, a3);
      if ( !v10 )
      {
        v16 = v6;
        v18 = 261;
        v17 = v5;
        v10 = sub_228BC10((size_t *)&v16, a2, a3);
      }
    }
    else
    {
      v10 = 2;
    }
  }
  if ( ptr != v21 )
    free(ptr);
  return v10;
}
