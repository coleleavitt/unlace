__int64 __fastcall sub_2109620(__int64 a1, void ***a2)
{
  bool v2; // zf
  unsigned __int8 v3; // cl
  size_t v4; // r13
  void *v5; // r12
  unsigned int v6; // eax
  int v7; // eax
  __int64 *v8; // rsi
  __int64 *v9; // r13
  __int64 v10; // rbp
  __int64 *v12; // [rsp+8h] [rbp-D0h] BYREF
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+18h] [rbp-C0h]
  _BYTE v15[176]; // [rsp+28h] [rbp-B0h] BYREF

  v2 = *((_BYTE *)a2 + 33) == 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v15;
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
  v6 = sub_2244B30(v5, v4);
  v7 = sub_2244E60(a1 + 1344, v5, v4, v6);
  if ( v7 == -1 )
    v8 = (__int64 *)(*(_QWORD *)(a1 + 1344) + 8LL * *(unsigned int *)(a1 + 1352));
  else
    v8 = (__int64 *)(*(_QWORD *)(a1 + 1344) + 8LL * v7);
  sub_21095E0(&v12, v8, 1);
  v9 = v12;
  v10 = 0;
  sub_21095E0(&v12, (__int64 *)(*(_QWORD *)(a1 + 1344) + 8LL * *(unsigned int *)(a1 + 1352)), 1);
  if ( v12 != v9 )
    v10 = *(_QWORD *)(*v9 + 8);
  if ( ptr != v15 )
    free(ptr);
  return v10;
}
