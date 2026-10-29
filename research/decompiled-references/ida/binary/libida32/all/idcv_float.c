__int64 __fastcall idcv_float(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  __m128i v3; // xmm0
  __int64 result; // rax
  const char *v5; // [rsp+8h] [rbp-30h] BYREF
  __m128i v6; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( !a1 )
    return set_qerrno(1531, a2);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        eltoe(*(unsigned int *)(a1 + 8), a1 + 8);
        *(_BYTE *)a1 = 3;
        goto LABEL_6;
      case 3:
        goto LABEL_6;
      case 7:
        v2 = haystack;
        if ( *(_QWORD *)(a1 + 16) )
          v2 = *(const char **)(a1 + 8);
        v5 = v2;
        asctoreal(&v5, &v6);
        free_idcv(a1);
        v3 = _mm_load_si128(&v6);
        *(_BYTE *)a1 = 3;
        *(__m128i *)(a1 + 8) = v3;
        goto LABEL_6;
      case 9:
        eltoe64(*(int *)(a1 + 8), a1 + 8);
        *(_BYTE *)a1 = 3;
LABEL_6:
        result = 0;
        break;
      case 0xA:
        a2 = 2;
        if ( deref_idcv(a1, 2) )
          continue;
        result = get_qerrno(a1);
        break;
      default:
        return set_qerrno(1531, a2);
    }
    return result;
  }
}

