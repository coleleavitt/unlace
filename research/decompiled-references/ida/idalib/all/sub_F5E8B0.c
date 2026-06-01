unsigned __int64 __fastcall sub_F5E8B0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v7; // rax
  _QWORD *v8; // rsi

  v3 = *a1;
  v5 = a3 & 7;
  if ( (*a1 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return a3 & 0xFFFFFFFFFFFFFFF8LL | (unsigned int)v3 | (unsigned int)v5;
  v7 = v3 | v5;
  v8 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (a3 & 8) != 0 )
  {
    v7 |= *(__int64 *)((char *)&qword_18 + (a3 & 0xFFFFFFFFFFFFFFF0LL));
    v8 = (_QWORD *)*v8;
  }
  return sub_A70C40(a2, (__int64)v8, v7);
}
