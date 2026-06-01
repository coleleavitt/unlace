unsigned __int64 __fastcall sub_6A0430(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // rbx
  bool v5; // zf
  __int64 v6; // rax
  unsigned __int64 result; // rax
  __int64 *v8; // r13

  v2 = sub_6A0250(
         *(_QWORD *)(a1 + 16),
         *(_QWORD *)(a1 + 16) + 16LL * *(_QWORD *)(a1 + 24),
         (__int64)a2,
         (unsigned __int8 (__fastcall *)(__int64, __int64))sub_697F40);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = (__int64 *)(v2 - 16);
  v5 = v2 == v3;
  v6 = *(_QWORD *)(a1 + 24);
  if ( v5 )
    v4 = *(__int64 **)(a1 + 16);
LABEL_3:
  result = v3 + 16 * v6;
  if ( v4 != (__int64 *)result )
  {
    do
    {
      result = *v4;
      if ( *v4 >= a2[1] )
        break;
      v8 = v4 + 2;
      if ( result >= *a2 )
      {
        sub_699EE0(((__int64)v4 - v3) >> 4, v4, nullptr, 0xABu);
        memmove(v4, v4 + 2, *(_QWORD *)(a1 + 16) + 16LL * *(_QWORD *)(a1 + 24) - (_QWORD)v4 - 16);
        v3 = *(_QWORD *)(a1 + 16);
        v6 = *(_QWORD *)(a1 + 24) - 1LL;
        *(_QWORD *)(a1 + 24) = v6;
        goto LABEL_3;
      }
      v4 += 2;
      result = v3 + 16LL * *(_QWORD *)(a1 + 24);
    }
    while ( v8 != (__int64 *)result );
  }
  return result;
}
