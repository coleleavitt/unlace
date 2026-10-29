__int64 __fastcall sub_1602260(__int64 *a1, int a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 result; // rax
  unsigned __int8 v8; // al

  if ( a2 < 0 )
    v3 = (__int64 *)(*(_QWORD *)a3 + 8 * (*(unsigned int *)(a3 + 8) + (__int64)a2));
  else
    v3 = (__int64 *)(*(_QWORD *)(a3 + 32) + 8LL * a2);
  v4 = *v3;
  v5 = *a1;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v3 + 56LL))(*v3);
  result = sub_B8C400(v6, 1);
  if ( !(_BYTE)result )
  {
    v8 = sub_B81B70(v4);
    if ( !v8 )
      goto LABEL_10;
    if ( v8 <= 3u )
      return sub_1601E90(v5, v4);
    if ( v8 > 6u )
LABEL_10:
      abort();
    return 1;
  }
  return result;
}
