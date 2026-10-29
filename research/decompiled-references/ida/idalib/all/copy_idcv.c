__int64 __fastcall copy_idcv(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rax
  size_t v6; // r12
  void *v7; // rax

  if ( a1 == a2 )
    return 0;
  v2 = (__int64)a1;
  if ( *a1 == 10 )
  {
    v2 = deref_idcv(a1, 1);
    if ( !v2 )
      return get_qerrno(a1);
  }
  free_idcv(v2);
  v3 = *a2;
  *(_BYTE *)v2 = v3;
  switch ( v3 )
  {
    case 2LL:
    case 8LL:
    case 9LL:
      *(_QWORD *)(v2 + 8) = *((_QWORD *)a2 + 1);
      goto LABEL_7;
    case 3LL:
    case 10LL:
      *(__m128i *)(v2 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
      return 0;
    case 5LL:
      v5 = *((_QWORD *)a2 + 1);
      *(_QWORD *)(v2 + 8) = v5;
      ++*(_DWORD *)(v5 + 48);
      goto LABEL_7;
    case 6LL:
      *(_DWORD *)(v2 + 8) = *((_DWORD *)a2 + 2);
      goto LABEL_7;
    case 7LL:
      *(_QWORD *)(v2 + 8) = 0;
      *(_OWORD *)(v2 + 16) = 0;
      v6 = *((_QWORD *)a2 + 2);
      if ( v6 )
      {
        v7 = (void *)qalloc_or_throw(*((_QWORD *)a2 + 2));
        *(_QWORD *)(v2 + 24) = v6;
        *(_QWORD *)(v2 + 8) = v7;
        memcpy(v7, *((const void **)a2 + 1), v6);
        *(_QWORD *)(v2 + 16) = v6;
      }
LABEL_7:
      result = 0;
      break;
    default:
      if ( !under_debugger )
        interr(283);
      BUG();
  }
  return result;
}
