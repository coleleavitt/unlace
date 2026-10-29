__int64 __fastcall sub_9C87A0(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rax
  char *v5; // rsi
  char *v6; // rsi
  __int64 v7; // rcx
  __int64 result; // rax
  unsigned int v9; // [rsp+Ch] [rbp-2Ch]
  _QWORD v10[4]; // [rsp+18h] [rbp-20h] BYREF

  v4 = *a3;
  v5 = (char *)a2[1];
  *a3 = 0;
  v10[0] = v4;
  if ( v5 == (char *)a2[2] )
  {
    sub_9C8340((__int64)a2, v5, v10);
  }
  else
  {
    v10[0] = 0;
    v6 = v5 + 8;
    *((_QWORD *)v6 - 1) = v4;
    a2[1] = v6;
  }
  if ( v10[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 8LL))(v10[0]);
  v7 = a1[1];
  result = (unsigned int)((__int64)(a2[1] - *a2) >> 3) - 1;
  if ( (unsigned __int64)(v7 + 1) > a1[2] )
  {
    v9 = ((__int64)(a2[1] - *a2) >> 3) - 1;
    sub_2236E10(a1, a1 + 3, v7 + 1, 2);
    v7 = a1[1];
    result = v9;
  }
  *(_WORD *)(*a1 + 2 * v7) = result;
  ++a1[1];
  return result;
}
