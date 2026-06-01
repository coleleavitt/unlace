__int64 __fastcall sub_C622D0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  __m128i *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int8 v13; // [rsp+Fh] [rbp-F9h]
  unsigned __int8 v14; // [rsp+Fh] [rbp-F9h]
  unsigned __int8 v15; // [rsp+Fh] [rbp-F9h]
  unsigned __int8 v16; // [rsp+Fh] [rbp-F9h]
  unsigned __int8 v17; // [rsp+Fh] [rbp-F9h]
  __m128i v18; // [rsp+10h] [rbp-F8h] BYREF
  char v19; // [rsp+20h] [rbp-E8h]
  _QWORD v20[3]; // [rsp+50h] [rbp-B8h] BYREF
  char v21; // [rsp+68h] [rbp-A0h]
  __int64 v22; // [rsp+78h] [rbp-90h]
  void *ptr; // [rsp+80h] [rbp-88h]
  __int64 v24; // [rsp+88h] [rbp-80h]
  _BYTE v25[120]; // [rsp+90h] [rbp-78h] BYREF

  switch ( ((unsigned __int8)(*(_WORD *)(a2 + 2) >> 3) + 125) & 0x7F )
  {
    case 0:
      v8 = *(_QWORD *)(a2 + 16);
      v9 = *a1;
      v18.m128i_i32[0] = 0;
      v18.m128i_i8[4] &= ~1u;
      BYTE4(v20[0]) &= ~1u;
      LODWORD(v20[0]) = 0;
      result = sub_C15CD0((__int64)v20, v9, v8, a4, a5);
      if ( (_BYTE)result )
        result = sub_C12C20(*a1, (__int64)&v18, (__int64)v20, a2);
      if ( LODWORD(v20[0]) > 1 )
      {
        v13 = result;
        sub_A2BBA0((int *)v20);
        result = v13;
      }
      if ( v18.m128i_i32[0] > 1u )
      {
        v14 = result;
        sub_A2BBA0(v18.m128i_i32);
        result = v14;
      }
      break;
    case 1:
      v10 = *(__m128i **)(a2 + 16);
      v21 |= 1u;
      v18.m128i_i64[1] = (__int64)v20;
      ptr = v25;
      v24 = 0x800000000LL;
      v11 = *a1;
      memset(v20, 0, sizeof(v20));
      v22 = 0;
      v25[65] = 0;
      v18.m128i_i64[0] = v11;
      v19 = 0;
      result = sub_C38AE0(&v18, v10, a3, a4, a5, a6);
      if ( (_BYTE)result )
      {
        v12 = *(_QWORD *)(a2 + 16);
        v18.m128i_i8[4] &= ~1u;
        v18.m128i_i32[0] = 0;
        result = sub_C12830(*a1, (_DWORD *)a2, *(_QWORD *)(v12 + 8), (__int64)v20, (__int64)&v18, 0);
        if ( v18.m128i_i32[0] > 1u )
        {
          v17 = result;
          sub_A2BBA0(v18.m128i_i32);
          result = v17;
        }
      }
      if ( ptr != v25 )
      {
        v15 = result;
        free(ptr);
        result = v15;
      }
      break;
    case 2:
    case 0x10:
      result = sub_C60970((__int64 **)a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6);
      break;
    case 0x37:
    case 0x3C:
      BYTE4(v20[0]) &= ~1u;
      LODWORD(v20[0]) = 0;
      result = sub_C15CD0((__int64)v20, *a1, *(_QWORD *)(a2 + 16), a4, a5);
      if ( LODWORD(v20[0]) > 1 )
      {
        v16 = result;
        sub_A2BBA0((int *)v20);
        result = v16;
      }
      break;
    default:
      result = sub_BF05D0(*a1, a2);
      break;
  }
  return result;
}

