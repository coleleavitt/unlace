__int64 __fastcall idcv_float(__int64 a1)
{
  const char *v1; // rax
  __m128i v2; // xmm0
  __int64 result; // rax
  const char *v4; // [rsp+8h] [rbp-30h] BYREF
  __m128i v5; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  if ( !a1 )
    return set_qerrno(1531);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        eltoe(*(_QWORD *)(a1 + 8), a1 + 8);
        *(_BYTE *)a1 = 3;
        goto LABEL_6;
      case 3:
        goto LABEL_6;
      case 7:
        v1 = haystack;
        if ( *(_QWORD *)(a1 + 16) )
          v1 = *(const char **)(a1 + 8);
        v4 = v1;
        asctoreal(&v4, &v5);
        free_idcv(a1);
        v2 = _mm_load_si128(&v5);
        *(_BYTE *)a1 = 3;
        *(__m128i *)(a1 + 8) = v2;
        goto LABEL_6;
      case 9:
        eltoe64(*(_QWORD *)(a1 + 8), a1 + 8);
        *(_BYTE *)a1 = 3;
LABEL_6:
        result = 0;
        break;
      case 0xA:
        if ( deref_idcv(a1, 2) )
          continue;
        result = get_qerrno(a1);
        break;
      default:
        return set_qerrno(1531);
    }
    return result;
  }
}
