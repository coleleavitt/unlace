__int64 __fastcall sub_7D9D0(__int64 a1, __int64 *a2)
{
  int v3; // eax
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r12
  _QWORD *v6; // rbx
  _QWORD *i; // r12
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v11; // rsi
  __int64 v12; // rax

  if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
    sub_7A510(a1);
  v3 = unpack_dd();
  v4 = v3;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 < (unsigned __int64)v3 || v3 < 0 )
    return 0;
  v5 = a2[1];
  if ( v5 < v3 )
  {
    v11 = *a2;
    if ( a2[2] < (unsigned __int64)v3 )
    {
      v12 = qvector_reserve((__int64)a2, v11, v3, 16);
      v5 = a2[1];
      *a2 = v12;
      v11 = v12;
    }
    memset((void *)(v11 + 16 * v5), 0, 16 * (v4 - v5));
    goto LABEL_6;
  }
  if ( v3 != v5 )
  {
LABEL_6:
    a2[1] = v4;
    v5 = v4;
  }
  v6 = (_QWORD *)*a2;
  for ( i = &v6[2 * v5]; i != v6; *(v6 - 1) = sub_7CF00((_QWORD *)a1) )
  {
    if ( *(_DWORD *)(a1 + 48) <= 3u )
    {
      if ( (unsigned __int8)is_cvt64() )
        v8 = (int)sub_7CD20((_QWORD *)a1);
      else
        v8 = sub_7CD40(a1);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 32);
      v8 = v9 + sub_7CF00((_QWORD *)a1);
    }
    *v6 = v8;
    v6 += 2;
  }
  return 1;
}
