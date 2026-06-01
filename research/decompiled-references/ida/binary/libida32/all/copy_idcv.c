__int64 __fastcall copy_idcv(const char *a1, const char *a2)
{
  const char *v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax
  size_t v6; // r12
  void *v7; // rax
  __int64 v8; // rax

  if ( a1 == a2 )
    return 0;
  v2 = a2;
  v3 = (__int64)a1;
  if ( *a1 == 10 )
  {
    a2 = (_BYTE *)(&dword_0 + 1);
    v3 = deref_idcv(a1, 1);
    if ( !v3 )
      return get_qerrno(a1);
  }
  free_idcv(v3);
  v4 = *(unsigned __int8 *)v2;
  *(_BYTE *)v3 = v4;
  switch ( v4 )
  {
    case 2LL:
    case 6LL:
      *(_DWORD *)(v3 + 8) = *((_DWORD *)v2 + 2);
      goto LABEL_8;
    case 3LL:
    case 10LL:
      *(__m128i *)(v3 + 8) = _mm_loadu_si128((const __m128i *)(v2 + 8));
      return 0;
    case 5LL:
      v8 = *((_QWORD *)v2 + 1);
      *(_QWORD *)(v3 + 8) = v8;
      ++*(_DWORD *)(v8 + 48);
      goto LABEL_8;
    case 7LL:
      *(_QWORD *)(v3 + 8) = 0;
      *(_OWORD *)(v3 + 16) = 0;
      v6 = *((_QWORD *)v2 + 2);
      if ( v6 )
      {
        v7 = (void *)qalloc_or_throw(*((_QWORD *)v2 + 2), a2);
        *(_QWORD *)(v3 + 24) = v6;
        *(_QWORD *)(v3 + 8) = v7;
        memcpy(v7, *((const void **)v2 + 1), v6);
        *(_QWORD *)(v3 + 16) = v6;
      }
LABEL_8:
      result = 0;
      break;
    case 8LL:
    case 9LL:
      *(_QWORD *)(v3 + 8) = *((_QWORD *)v2 + 1);
      result = 0;
      break;
    default:
      if ( !under_debugger )
        interr(283);
      BUG();
  }
  return result;
}

