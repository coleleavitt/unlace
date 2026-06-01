unsigned __int64 __fastcall sub_C11A50(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax

  v1 = *a1;
  v2 = *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_QWORD *)(v2 + 8) & 7LL | (*(__int64 *)(v2 + 8) >> 3) & 1 )
    return sub_F64F00(v1) & 0xFFFFFFFFFFFFFFF0LL;
  else
    return v2 & 0xFFFFFFFFFFFFFFF0LL;
}
