__int64 __fastcall sub_F43C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r10
  int v6; // r11d
  __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // r10
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  float v13; // xmm0_4
  float v14; // xmm1_4
  __int64 result; // rax

  if ( !(unsigned __int8)sub_13C2E0() )
    return sub_158490(a1, a2, a3);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 128LL))(a2);
  v5 = *(_QWORD *)(a1 + 1176);
  v6 = *(_DWORD *)(a3 + 100);
  if ( v5 )
  {
    v7 = *(__int64 **)(a1 + 1168);
    v8 = 0;
    v9 = 0;
    v10 = &v7[2 * v5];
    do
    {
      v11 = v7[1];
      v12 = *v7;
      if ( !v9 && v11 >= v4 )
        v9 = v4 + v8 - v12;
      v7 += 2;
      v8 = v11 + v8 - v12;
    }
    while ( v7 != v10 );
    if ( v6 && v8 )
    {
      if ( v9 < 0 )
      {
        v13 = (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1))
            + (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1));
        if ( v8 >= 0 )
          goto LABEL_12;
      }
      else
      {
        v13 = (float)(int)v9;
        if ( v8 >= 0 )
        {
LABEL_12:
          v14 = (float)(int)v8;
LABEL_13:
          result = (unsigned int)(int)(float)((float)(v13 / v14) * (float)v6);
          if ( (int)result < 0 )
            result = 0;
          if ( (int)result > v6 )
            return (unsigned int)v6;
          return result;
        }
      }
      v14 = (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1))
          + (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1));
      goto LABEL_13;
    }
  }
  result = 0;
  if ( v6 < 0 )
    return (unsigned int)v6;
  return result;
}

