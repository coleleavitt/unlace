__int64 __fastcall sub_220A790(__int64 a1, __int64 a2, unsigned int a3, bool *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned __int64 v13; // rdx
  bool v14; // al

  v4 = *(_DWORD *)(a2 + 8);
  *a4 = a3 >= v4;
  if ( a3 < v4 )
  {
    v8 = *(_QWORD *)a2;
    v9 = 1LL << ((unsigned __int8)v4 - 1);
    if ( v4 <= 0x40 )
    {
      if ( (v9 & v8) == 0 )
        goto LABEL_7;
      if ( v4 )
      {
        v12 = 64;
        if ( v8 << (64 - (unsigned __int8)v4) != -1 )
        {
          _BitScanReverse64(&v13, ~(v8 << (64 - (unsigned __int8)v4)));
          v12 = v13 ^ 0x3F;
        }
        v14 = a3 >= v12;
      }
      else
      {
        v14 = 1;
      }
    }
    else
    {
      if ( (v9 & *(_QWORD *)(v8 + 8LL * ((v4 - 1) >> 6))) == 0 )
      {
LABEL_7:
        *a4 = (unsigned int)sub_C16760(a2) <= a3;
        goto LABEL_8;
      }
      v14 = a3 >= (unsigned int)sub_2206800((__int64 *)a2);
    }
    *a4 = v14;
LABEL_8:
    *(_DWORD *)(a1 + 8) = v4;
    if ( v4 > 0x40 )
    {
      sub_2205510(a1, (const void **)a2);
      v11 = *(_DWORD *)(a1 + 8);
      if ( v11 > 0x40 )
      {
        sub_220A060(*(_QWORD **)a1, ((unsigned __int64)v11 + 63) >> 6, a3);
        sub_CF8100((unsigned __int64 *)a1);
        return a1;
      }
      if ( a3 == v11 )
      {
        v10 = 0;
        goto LABEL_11;
      }
    }
    else
    {
      *(_QWORD *)a1 = v8;
    }
    v10 = *(_QWORD *)a1 << a3;
LABEL_11:
    *(_QWORD *)a1 = v10;
    sub_CF8100((unsigned __int64 *)a1);
    return a1;
  }
  *(_DWORD *)(a1 + 8) = v4;
  if ( v4 > 0x40 )
    sub_2205470(a1, 0, 0);
  else
    *(_QWORD *)a1 = 0;
  return a1;
}
