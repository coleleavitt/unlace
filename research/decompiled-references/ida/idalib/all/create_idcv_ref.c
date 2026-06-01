__int64 __fastcall create_idcv_ref(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  void *v3; // r13
  __int64 v4; // rax
  unsigned __int64 v5; // r15

  v3 = qword_2CD4690;
  qmutex_lock(qword_2CD4690);
  v4 = sub_78C130();
  v5 = *(_QWORD *)(v4 + 88);
  LOBYTE(v2) = a2 - 24 >= v5 && a2 - 24 < v5 + 56LL * *(_QWORD *)(v4 + 96);
  if ( (_BYTE)v2 )
  {
    free_idcv(a1);
    *(_BYTE *)a1 = 10;
    if ( *(_BYTE *)a2 == 10 )
    {
      *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 16) = ~(-1227133513 * ((__int64)(a2 - 24 - v5) >> 3));
    }
  }
  qmutex_unlock(v3);
  return v2;
}
