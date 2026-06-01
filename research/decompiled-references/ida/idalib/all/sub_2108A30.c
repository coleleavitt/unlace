__int64 __fastcall sub_2108A30(__int64 a1, const void ***a2)
{
  bool v2; // zf
  unsigned __int8 v3; // cl
  size_t v4; // r14
  const void *v5; // r15
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v10; // rax
  size_t v11; // rdx
  char v12; // dl
  _QWORD v13[4]; // [rsp+0h] [rbp-108h] BYREF
  __int16 v14; // [rsp+20h] [rbp-E8h]
  void *ptr; // [rsp+30h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-D0h]
  _BYTE v17[192]; // [rsp+48h] [rbp-C0h] BYREF

  v2 = *((_BYTE *)a2 + 33) == 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v17;
  if ( v2 && (v3 = *((_BYTE *)a2 + 32), v3 <= 6u) && ((1LL << v3) & 0x7A) != 0 )
  {
    switch ( *((_BYTE *)a2 + 32) )
    {
      case 0:
      case 2:
      case 5:
      case 6:
        v4 = (size_t)a2[1];
        v5 = *a2;
        break;
      case 1:
        v4 = 0;
        v5 = nullptr;
        break;
      case 3:
        v5 = *a2;
        v4 = 0;
        if ( *a2 )
          v4 = j__strlen((const char *)*a2);
        break;
      case 4:
        v5 = **a2;
        v4 = (size_t)(*a2)[1];
        break;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    sub_22538C0(a2, &ptr);
    v4 = si128.m128i_i64[0];
    v5 = ptr;
  }
  v6 = sub_2107740(a1, v5, v4);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = v6;
  if ( !v7 )
  {
    v10 = *(_QWORD *)(a1 + 152);
    v11 = *(_QWORD *)(v10 + 96);
    if ( v11 > v4 || v11 && memcmp(v5, *(const void **)(v10 + 88), v11) )
    {
      v12 = 0;
      if ( *(_BYTE *)(v8 + 20) )
      {
LABEL_16:
        v14 = 261;
        v13[0] = v5;
        v13[1] = v4;
        v7 = sub_21083D0((_DWORD *)a1, (__int64)v13, 0, v12);
        *(_QWORD *)(v8 + 8) = v7;
        goto LABEL_5;
      }
    }
    else
    {
      v12 = *(_BYTE *)(a1 + 1883) ^ 1;
      if ( *(_BYTE *)(v8 + 20) )
        goto LABEL_16;
    }
    *(_BYTE *)(v8 + 20) = 1;
    v7 = sub_21080E0((_DWORD *)a1, (_QWORD *)v8, v12);
    *(_QWORD *)(v8 + 8) = v7;
  }
LABEL_5:
  if ( ptr != v17 )
    free(ptr);
  return v7;
}
