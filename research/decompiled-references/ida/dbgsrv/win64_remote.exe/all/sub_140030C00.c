/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140030C00
// Address: 0x0000000140030C00

//----- (0000000140030C00) ----------------------------------------------------
__int64 __fastcall sub_140030C00(__int64 a1)
{
  __int64 v2; // rbx
  void **v3; // rbx
  unsigned __int64 v4; // r8
  __int64 v5; // rcx
  char v7[8]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v8; // [rsp+28h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h]
  char v10[8]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v11; // [rsp+48h] [rbp-18h]
  __int64 v12; // [rsp+58h] [rbp-8h]

  v7[0] = 2;
  v9 = 0;
  v8 = 0u;
  switch ( *(_WORD *)(a1 + 56) )
  {
    case 3:
      goto LABEL_9;
    case 4:
      sub_140029390((__int64)v7);
      v7[0] = 7;
      v8 = 0;
      v9 = 0;
      sub_140032B60((__int64)&v8, a1 + 32);
      break;
    case 5:
LABEL_9:
      v7[0] = 2;
      *(_QWORD *)&v8 = *(_QWORD *)(a1 + 64);
      break;
    case 7:
      sub_140029390((__int64)v7);
      v7[0] = 3;
      v8 = *(_OWORD *)(a1 + 80);
      break;
    case 8:
      v2 = *(_QWORD *)(a1 + 80);
      sub_140029390((__int64)v7);
      v7[0] = 9;
      *(_QWORD *)&v8 = v2;
      break;
    default:
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(1438);
  }
  v3 = (void **)(a1 + 416);
  v10[0] = 2;
  v11 = 0;
  v12 = 0;
  sub_140028E70(v10, v7);
  v4 = *(_QWORD *)(a1 + 424) + 1LL;
  if ( v4 > *(_QWORD *)(a1 + 432) )
    *v3 = sub_14005ABE0(a1 + 416, *v3, v4, 0x20u);
  v5 = (__int64)*v3 + 32 * *(_QWORD *)(a1 + 424);
  *(_BYTE *)v5 = 2;
  *(_OWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  sub_140028E70((char *)v5, v10);
  ++*(_QWORD *)(a1 + 424);
  sub_140029390((__int64)v10);
  sub_140029390((__int64)v7);
  return 0;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
