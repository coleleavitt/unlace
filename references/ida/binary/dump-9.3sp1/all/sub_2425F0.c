__int64 __fastcall sub_2425F0(char a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx

  qvsnprintf();
  v3 = j__qalloc_or_throw(64, 1024, v1, v2);
  *(_QWORD *)v3 = -1;
  *(_QWORD *)(v3 + 8) = -4294967228LL;
  *(_QWORD *)(v3 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 24) = qstrdup();
  copy_tinfo_t();
  if ( a1 )
    *(_DWORD *)(v3 + 56) |= 8u;
  return v3;
}
