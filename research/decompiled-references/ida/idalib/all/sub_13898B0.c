__int64 __fastcall sub_13898B0(unsigned __int8 **a1, _QWORD *a2)
{
  unsigned __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // r8
  unsigned int v5; // eax
  unsigned __int64 v6; // rbx
  unsigned __int8 *v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int8 *v10; // rdx
  _QWORD v11[4]; // [rsp+0h] [rbp-20h] BYREF

  v2 = (unsigned __int64)a1[1];
  result = 0;
  if ( v2 )
  {
    v4 = (__int64)*a1;
    if ( (byte_2411740[2 * **a1] & 8) != 0 )
    {
      if ( v2 > 1 && (v5 = 1, (byte_2411740[2 * *(unsigned __int8 *)(v4 + 1)] & 8) != 0) )
      {
        do
          v6 = ++v5;
        while ( v2 > v5 && (byte_2411740[2 * *(unsigned __int8 *)(v4 + v5)] & 8) != 0 );
      }
      else
      {
        v6 = 1;
      }
      v8 = a1[1];
      if ( v2 > v6 )
        v8 = (unsigned __int8 *)v6;
      if ( !(unsigned __int8)sub_2247970(v4, v8, 10, v11) )
        *a2 = v11[0];
      v9 = (unsigned __int64)a1[1];
      v10 = nullptr;
      if ( v6 <= v9 )
      {
        v10 = (unsigned __int8 *)(v9 - v6);
        v9 = v6;
      }
      *a1 += v9;
      a1[1] = v10;
      return 1;
    }
  }
  return result;
}
