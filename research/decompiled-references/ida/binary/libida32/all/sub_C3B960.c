__int64 __fastcall sub_C3B960(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r12d
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __m128i *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v15; // [rsp+0h] [rbp-F8h] BYREF
  char v16; // [rsp+10h] [rbp-E8h]
  _QWORD v17[3]; // [rsp+40h] [rbp-B8h] BYREF
  char v18; // [rsp+58h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-90h]
  void *ptr; // [rsp+70h] [rbp-88h]
  __int64 v21; // [rsp+78h] [rbp-80h]
  _BYTE v22[120]; // [rsp+80h] [rbp-78h] BYREF

  switch ( ((unsigned __int8)(*(_WORD *)(a2 + 2) >> 3) + 125) & 0x7F )
  {
    case 0:
      v10 = *(_QWORD *)(a2 + 16);
      v11 = *a1;
      v15.m128i_i32[0] = 0;
      v15.m128i_i8[4] &= ~1u;
      BYTE4(v17[0]) &= ~1u;
      LODWORD(v17[0]) = 0;
      if ( (unsigned __int8)sub_C15CD0((__int64)v17, v11, v10, a4, a5)
        && (v7 = sub_C12C20(*a1, (__int64)&v15, (__int64)v17, a2), (_BYTE)v7) )
      {
        sub_C00890(a1[1], *(_QWORD **)(*a1 + 16), (__int64)&v15);
      }
      else
      {
        v7 = 0;
      }
      if ( LODWORD(v17[0]) > 1 )
        sub_A2BBA0((int *)v17);
      if ( v15.m128i_i32[0] > 1u )
        sub_A2BBA0(v15.m128i_i32);
      return v7;
    case 1:
      v12 = *(__m128i **)(a2 + 16);
      memset(v17, 0, sizeof(v17));
      v18 |= 1u;
      ptr = v22;
      v21 = 0x800000000LL;
      v13 = *a1;
      v19 = 0;
      v22[65] = 0;
      v15.m128i_i64[0] = v13;
      v15.m128i_i64[1] = (__int64)v17;
      v16 = 0;
      v7 = sub_C38AE0(&v15, v12, a3, a4, a5, a6);
      if ( (_BYTE)v7 )
      {
        v14 = *(_QWORD *)(a2 + 16);
        v15.m128i_i8[4] &= ~1u;
        v15.m128i_i32[0] = 0;
        v7 = sub_C12830(*a1, (_DWORD *)a2, *(_QWORD *)(v14 + 8), (__int64)v17, (__int64)&v15, 0);
        if ( (_BYTE)v7 )
          sub_C00890(a1[1], *(_QWORD **)(*a1 + 16), (__int64)&v15);
        if ( v15.m128i_i32[0] > 1u )
          sub_A2BBA0(v15.m128i_i32);
      }
      if ( ptr != v22 )
        free(ptr);
      return v7;
    case 2:
    case 0x10:
      LOBYTE(v9) = sub_C3A520(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6);
      return v9;
    case 0x37:
    case 0x3C:
      LODWORD(v17[0]) = 0;
      BYTE4(v17[0]) &= ~1u;
      v7 = sub_C15CD0((__int64)v17, *a1, *(_QWORD *)(a2 + 16), a4, a5);
      if ( (_BYTE)v7 )
      {
        sub_C00890(a1[1], *(_QWORD **)(*a1 + 16), (__int64)v17);
        if ( LODWORD(v17[0]) <= 1 )
          return v7;
      }
      else if ( LODWORD(v17[0]) <= 1 )
      {
        return v7;
      }
      sub_A2BBA0((int *)v17);
      return v7;
    default:
      return (unsigned int)sub_BF05D0(*a1, a2);
  }
}

