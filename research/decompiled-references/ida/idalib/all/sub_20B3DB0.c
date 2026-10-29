unsigned __int64 __fastcall sub_20B3DB0(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned int *v6; // r12
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  _QWORD *v10; // rsi
  __int64 v11; // r12
  int vars0; // [rsp+0h] [rbp+0h] BYREF
  _QWORD vars8[4]; // [rsp+8h] [rbp+8h] BYREF

  vars0 = a2;
  vars8[0] = a3;
  sub_20B2EE0((__int64)vars8, a3, 1);
  v3 = *(unsigned int *)(a1 + 8);
  v4 = v3 + 1;
  if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    v11 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 > (unsigned __int64)&vars0 )
    {
      v6 = (unsigned int *)&vars0;
      sub_20B3AD0(a1, v4);
      v5 = *(_QWORD *)a1;
      v3 = *(unsigned int *)(a1 + 8);
    }
    else if ( (unsigned __int64)&vars0 >= v11 + 16 * v3 )
    {
      sub_20B3AD0(a1, v4);
      v6 = (unsigned int *)&vars0;
      v5 = *(_QWORD *)a1;
      v3 = *(unsigned int *)(a1 + 8);
    }
    else
    {
      sub_20B3AD0(a1, v4);
      v5 = *(_QWORD *)a1;
      v3 = *(unsigned int *)(a1 + 8);
      v6 = (unsigned int *)((char *)vars8 + *(_QWORD *)a1 - v11);
    }
  }
  else
  {
    v5 = *(_QWORD *)a1;
    v6 = (unsigned int *)&vars0;
  }
  v7 = *((_QWORD **)v6 + 1);
  v8 = v5 + 16 * v3;
  result = *v6;
  *(_QWORD *)(v8 + 8) = v7;
  *(_DWORD *)v8 = result;
  if ( v7 )
  {
    result = sub_20B3430((__int64)(v6 + 2), v7, v8 + 8);
    *((_QWORD *)v6 + 1) = 0;
  }
  v10 = (_QWORD *)vars8[0];
  ++*(_DWORD *)(a1 + 8);
  if ( v10 )
    return sub_20A0850((__int64)vars8, v10);
  return result;
}
