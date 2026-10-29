__int64 __fastcall sub_17A2580(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned __int64 v6; // rax
  unsigned __int8 v7; // dl
  int v8; // ecx
  __int64 v9; // [rsp+0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+8h] [rbp-C0h]
  __int64 v11; // [rsp+10h] [rbp-B8h]
  _BYTE v12[64]; // [rsp+18h] [rbp-B0h] BYREF
  void *v13[2]; // [rsp+58h] [rbp-70h]
  __int64 v14; // [rsp+68h] [rbp-60h]
  __int64 v15; // [rsp+70h] [rbp-58h]
  __int64 v16; // [rsp+78h] [rbp-50h]
  int v17; // [rsp+80h] [rbp-48h]
  __int64 v18; // [rsp+88h] [rbp-40h] BYREF
  __m128i si128; // [rsp+90h] [rbp-38h]
  __int64 v20; // [rsp+A0h] [rbp-28h]

  v15 = a1;
  v16 = a2;
  ptr = v12;
  v11 = 0x800000000LL;
  *(_OWORD *)v13 = 0;
  v9 = 0;
  v14 = 0;
  v17 = 0;
  sub_B85890(&v18, a2);
  v20 = 0x101010000LL;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  sub_1A395A0(&v9);
  v4 = 0;
  sub_1A49A10(a1, &v9, a3, 0, 0);
  *(_WORD *)((char *)&v20 + 3) = 0;
  if ( (_DWORD)v9 == 2 )
  {
    v6 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
    v7 = *(_BYTE *)(v6 + 28) & 0x7F;
    v8 = v7;
    if ( ((v7 + 52) & 0x7Fu) <= 1 || (unsigned int)v7 - 53 <= 1 )
    {
      v6 = sub_B72ED0(*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL);
      v8 = *(_BYTE *)(v6 + 28) & 0x7F;
    }
    v4 = 0;
    if ( (unsigned int)(v8 - 58) <= 4 )
    {
      switch ( *(_BYTE *)(v6 + 73) >> 5 )
      {
        case 0:
          v4 = 25;
          break;
        case 1:
          v4 = 27;
          break;
        case 2:
          v4 = 24;
          break;
        case 3:
          v4 = 26;
          break;
        case 4:
          v4 = 23;
          break;
        default:
          break;
      }
    }
  }
  if ( v13[0] )
    sub_1A39780(v13[0]);
  if ( ptr != v12 )
    free(ptr);
  return v4;
}
