__int64 __fastcall sub_16CDC10(__int64 a1, unsigned __int64 a2, _DWORD *a3, __int64 a4, double a5)
{
  __int64 v5; // r9
  _DWORD *v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // eax
  _DWORD *v10; // r8
  _DWORD *v11; // rcx
  unsigned int v12; // eax
  __int64 result; // rax
  __int64 v14; // [rsp+0h] [rbp-B0h] BYREF
  _BYTE v15[168]; // [rsp+8h] [rbp-A8h] BYREF

  v5 = 4 * a4;
  v6 = &a3[a4];
  v7 = (4 * a4) >> 4;
  v8 = v5 >> 2;
  v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 248LL);
  if ( v7 > 0 )
  {
    if ( v9 != *a3 )
    {
      if ( v9 == a3[1] )
      {
        ++a3;
      }
      else if ( v9 == a3[2] )
      {
        a3 += 2;
      }
      else
      {
        v10 = a3;
        v11 = &a3[4 * v7];
        if ( v9 == a3[3] )
        {
          a3 += 3;
        }
        else
        {
          while ( 1 )
          {
            a3 = v10 + 4;
            if ( v10 + 4 == v11 )
            {
              v8 = v6 - v11;
              goto LABEL_14;
            }
            if ( v9 == v10[4] )
              goto LABEL_18;
            if ( v9 == v10[5] )
            {
              a3 = v10 + 5;
              goto LABEL_18;
            }
            if ( v9 == v10[6] )
            {
              a3 = v10 + 6;
              goto LABEL_18;
            }
            if ( v9 == v10[7] )
              break;
            v10 += 4;
          }
          a3 = v10 + 7;
        }
      }
    }
    goto LABEL_18;
  }
LABEL_14:
  if ( v8 == 2 )
    goto LABEL_22;
  if ( v8 == 3 )
  {
    if ( v9 == *a3 )
      goto LABEL_18;
    ++a3;
LABEL_22:
    if ( v9 == *a3 )
      goto LABEL_18;
    ++a3;
    goto LABEL_24;
  }
  if ( v8 != 1 )
  {
LABEL_17:
    v12 = sub_BF6D70(a2);
    sub_168B9F0((__int64)v15, (__int64 *)(a1 + 8), v12, 0xD29u, 0);
    v14 = sub_EEC8C0(a2, a1 + 8, a5);
    sub_1587DB0((__int64)v15, &v14);
    sub_15F7200(v15);
    return 1;
  }
LABEL_24:
  if ( v9 != *a3 )
    goto LABEL_17;
LABEL_18:
  result = 0;
  if ( v6 == a3 )
    goto LABEL_17;
  return result;
}
