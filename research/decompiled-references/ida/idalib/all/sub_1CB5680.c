unsigned __int64 __fastcall sub_1CB5680(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        double a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 result; // rax
  char v11; // r13
  void *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // [rsp+8h] [rbp-50h]
  void *v17; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-40h]
  char v19; // [rsp+1Ch] [rbp-3Ch]
  void *v20; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-30h]

  switch ( *(_DWORD *)a2 & 0x7FFFFFFF )
  {
    case 0:
    case 1:
    case 6:
    case 7:
    case 8:
      result = *(_QWORD *)(a2 + 8);
      break;
    case 2:
    case 3:
      v14 = sub_F1D610(a2);
      result = sub_1CB5030(a1, a2, v14, a3, 0, v15, a4, a5);
      break;
    case 4:
      v11 = *(_BYTE *)(a2 + 7) >> 7;
      v12 = *(void **)(a2 + 8);
      v13 = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
      if ( (unsigned int)v13 > 0x40 )
      {
        sub_2205600(&v20, v13, v12, ((unsigned __int64)(unsigned int)v13 + 63) >> 6);
        v19 = v11;
        v18 = v21;
        v17 = v20;
      }
      else
      {
        v18 = v13;
        v17 = v12;
        v19 = v11;
      }
      result = sub_1CB1D20(a1, *(_QWORD *)(a2 + 16), (__int64)&v17, a3, a7, a8);
      if ( v18 > 0x40 )
      {
        if ( v17 )
        {
          v16 = result;
          operator delete[](v17);
          result = v16;
        }
      }
      break;
    case 5:
      result = sub_1CB20B0(a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 8), a3, a7, a8);
      break;
  }
  return result;
}
