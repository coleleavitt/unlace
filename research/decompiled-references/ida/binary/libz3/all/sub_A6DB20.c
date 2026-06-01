__int64 __fastcall sub_A6DB20(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  _DWORD *v5; // r12
  __int64 result; // rax
  __int64 *v8; // rbx
  __int64 *i; // r12
  __int64 v10; // rdi
  _QWORD v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = sub_186B270(0xB8u);
  v3 = *a1;
  v11[0] = 0;
  v4 = v2;
  sub_C07FF0(v2, v3, v11);
  v5 = (_DWORD *)a1[9];
  ++*(_DWORD *)(v4 + 16);
  if ( v5 )
  {
    if ( v5[4]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v5)(v5);
      sub_186B220(v5);
    }
  }
  a1[9] = v4;
  sub_18572D0(v11);
  result = a1[1];
  v8 = *(__int64 **)(result + 8680);
  if ( v8 )
  {
    result = *((unsigned int *)v8 - 1);
    for ( i = &v8[result];
          i != v8;
          result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 320LL))(v10, a1) )
    {
      v10 = *v8++;
    }
  }
  return result;
}

