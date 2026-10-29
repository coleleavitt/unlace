__int64 __fastcall sub_13CE5D0(__int64 a1, void ****a2, unsigned int a3, char a4, __int64 a5)
{
  void **v7; // rbp
  char v8; // bl
  bool v9; // zf
  void **v10; // rax
  void **v11; // rdx
  char v12; // al
  __int64 result; // rax
  unsigned __int8 v14; // cl
  char v15; // al
  unsigned __int8 v16; // [rsp+0h] [rbp-198h]
  void **v17; // [rsp+0h] [rbp-198h]
  void **v18; // [rsp+8h] [rbp-190h]
  void **v19[4]; // [rsp+10h] [rbp-188h] BYREF
  __int16 v20; // [rsp+30h] [rbp-168h]
  void *ptr; // [rsp+40h] [rbp-158h] BYREF
  __m128i si128; // [rsp+48h] [rbp-150h]
  _BYTE v23[320]; // [rsp+58h] [rbp-140h] BYREF

  v7 = (void **)a2;
  v8 = a4;
  if ( !*(_BYTE *)(a1 + 96) )
    return sub_13CDBD0(a1, (void ***)a2, a3, a4, a5);
  v9 = *((_BYTE *)a2 + 33) == 1;
  ptr = v23;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  if ( v9 && (v14 = *((_BYTE *)a2 + 32), v14 <= 6u) && ((1LL << v14) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a2 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v10 = (void **)a2[1];
        v11 = (void **)*a2;
        break;
      case 1:
        v10 = nullptr;
        v11 = nullptr;
        break;
      case 3:
        v11 = (void **)*a2;
        v10 = nullptr;
        if ( *a2 )
        {
          v17 = (void **)*a2;
          v10 = (void **)strlen((const char *)*a2);
          v11 = v17;
        }
        break;
      case 4:
        v11 = **a2;
        v10 = (*a2)[1];
        break;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    sub_22538C0(a2, &ptr);
    v10 = (void **)si128.m128i_i64[0];
    v11 = (void **)ptr;
  }
  v19[0] = v11;
  v20 = 261;
  v19[1] = v10;
  v12 = sub_228B020(v19, 0);
  a4 = v8;
  if ( !v12 )
  {
    if ( ptr != v23 )
    {
      free(ptr);
      a4 = v8;
    }
    return sub_13CDBD0(a1, (void ***)a2, a3, a4, a5);
  }
  v15 = *((_BYTE *)a2 + 32);
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      v19[0] = (void **)(a1 + 64);
      v20 = 260;
    }
    else
    {
      if ( *((_BYTE *)a2 + 33) == 1 )
      {
        v7 = (void **)*a2;
        v18 = (void **)a2[1];
      }
      else
      {
        v15 = 2;
      }
      v19[0] = (void **)(a1 + 64);
      v19[2] = v7;
      v19[3] = v18;
      LOBYTE(v20) = 4;
      HIBYTE(v20) = v15;
    }
  }
  else
  {
    v20 = 256;
  }
  result = sub_13CDBD0(a1, v19, a3, v8, a5);
  if ( ptr != v23 )
  {
    v16 = result;
    free(ptr);
    return v16;
  }
  return result;
}
