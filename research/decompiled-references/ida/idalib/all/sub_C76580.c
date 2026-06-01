__int64 __fastcall sub_C76580(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r12d
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  __m128i *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __m128i v14; // [rsp+0h] [rbp-F8h] BYREF
  char v15; // [rsp+10h] [rbp-E8h]
  _QWORD v16[3]; // [rsp+40h] [rbp-B8h] BYREF
  char v17; // [rsp+58h] [rbp-A0h]
  __int64 v18; // [rsp+68h] [rbp-90h]
  void *ptr; // [rsp+70h] [rbp-88h]
  __int64 v20; // [rsp+78h] [rbp-80h]
  _BYTE v21[120]; // [rsp+80h] [rbp-78h] BYREF

  switch ( ((unsigned __int8)(*(_WORD *)(a2 + 2) >> 3) + 125) & 0x7F )
  {
    case 0:
      v9 = *(_QWORD *)(a2 + 16);
      v10 = *(_QWORD *)a1;
      v14.m128i_i32[0] = 0;
      v14.m128i_i8[4] &= ~1u;
      BYTE4(v16[0]) &= ~1u;
      LODWORD(v16[0]) = 0;
      if ( (unsigned __int8)sub_C39A10((__int64)v16, v10, v9, a4, a5)
        && (v7 = sub_C36960(*(_QWORD *)a1, (__int64)&v14, (__int64)v16, a2), (_BYTE)v7) )
      {
        sub_C23540(*(unsigned __int64 **)(a1 + 8), (__int64)&v14);
      }
      else
      {
        v7 = 0;
      }
      if ( LODWORD(v16[0]) > 1 )
        sub_A4F8E0((int *)v16);
      if ( v14.m128i_i32[0] > 1u )
        sub_A4F8E0(v14.m128i_i32);
      return v7;
    case 1:
      v11 = *(__m128i **)(a2 + 16);
      memset(v16, 0, sizeof(v16));
      v17 |= 1u;
      ptr = v21;
      v20 = 0x800000000LL;
      v12 = *(_QWORD *)a1;
      v18 = 0;
      v21[65] = 0;
      v14.m128i_i64[0] = v12;
      v14.m128i_i64[1] = (__int64)v16;
      v15 = 0;
      v7 = sub_C5C820(&v14, v11, a3, a4, a5, a6);
      if ( (_BYTE)v7 )
      {
        v13 = *(_QWORD *)(a2 + 16);
        v14.m128i_i8[4] &= ~1u;
        v14.m128i_i32[0] = 0;
        v7 = sub_C36570(*(_QWORD *)a1, (_DWORD *)a2, *(_QWORD *)(v13 + 8), (__int64)v16, (__int64)&v14, 0);
        if ( (_BYTE)v7 )
          sub_C23540(*(unsigned __int64 **)(a1 + 8), (__int64)&v14);
        if ( v14.m128i_i32[0] > 1u )
          sub_A4F8E0(v14.m128i_i32);
      }
      if ( ptr != v21 )
        free(ptr);
      return v7;
    case 2:
    case 0x10:
      return (unsigned int)sub_C37DE0((__int64 *)a1, *(unsigned __int16 **)(a2 + 16), a3, a4, a5, a6);
    case 0x37:
    case 0x3C:
      LODWORD(v16[0]) = 0;
      BYTE4(v16[0]) &= ~1u;
      v7 = sub_C39A10((__int64)v16, *(_QWORD *)a1, *(_QWORD *)(a2 + 16), a4, a5);
      if ( (_BYTE)v7 )
      {
        sub_C23540(*(unsigned __int64 **)(a1 + 8), (__int64)v16);
        if ( LODWORD(v16[0]) <= 1 )
          return v7;
      }
      else if ( LODWORD(v16[0]) <= 1 )
      {
        return v7;
      }
      sub_A4F8E0((int *)v16);
      return v7;
    default:
      return (unsigned int)sub_C14310(*(_QWORD *)a1, a2);
  }
}
