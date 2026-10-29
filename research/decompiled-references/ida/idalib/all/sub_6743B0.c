__int64 __fastcall sub_6743B0(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rbx
  size_t v9; // rbx
  __int64 v10; // r14
  __int64 v11; // r8
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  size_t v14; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-40h]

  if ( a2 )
    a2[1] = 0;
  v8 = sub_3792E0(0x33u, a2, a3, a4, a5);
  if ( !v8 )
  {
    if ( a5 != -1 )
    {
      v9 = sub_6742B0(a1, a2, a5);
      if ( v9 == -1 )
        return -1;
      if ( a2 )
      {
        v10 = a2[1];
        if ( v10 )
        {
          v12 = v10 + 1;
          v11 = a2[1];
          --v10;
        }
        else
        {
          v11 = 1;
          v12 = 2;
        }
        v13 = *a2;
        if ( a2[2] < v12 )
        {
          v17 = v11;
          v16 = qvector_reserve(a2, v13, v12, 1);
          v11 = v17;
          *a2 = v16;
          v13 = v16;
        }
        a2[1] = v12;
        *(_BYTE *)(v13 + v10) = 58;
        *(_BYTE *)(*a2 + v11) = 0;
      }
      v8 = v9 + 1;
    }
    v14 = sub_6742B0(a1, a2, a3);
    if ( v14 != -1 )
    {
      v8 += v14;
      return v8;
    }
    return -1;
  }
  return v8;
}
