void __fastcall sub_180C3D0(__int64 a1, __int64 a2, const __m128i *a3)
{
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // edx
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __m128i *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  bool v20; // [rsp+Fh] [rbp-B9h] BYREF
  _BYTE v21[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 <= 2 )
  {
    v6 = sub_B8D340(a2);
  }
  else
  {
    v5 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v5 = (_QWORD *)*v5;
    v6 = sub_B8EAA0((__int64)v5);
  }
  if ( (*(_BYTE *)(v6 + 8) & 0x7Fu) - 59 <= 2 )
  {
    while ( 1 )
    {
      v9 = v6 - 64;
      if ( !v9 )
        break;
      v10 = *(_QWORD *)(v9 + 16);
      v6 = v10 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v10 & 4) != 0 )
        v6 = *(_QWORD *)v6;
      v11 = *(_BYTE *)(v6 + 8) & 0x7F;
      if ( (unsigned int)(v11 - 59) > 2 )
      {
        if ( (unsigned int)(v11 - 34) <= 5 && v6 != 72 )
        {
          sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19A3u, 0);
          v12 = sub_15DD120((__int64)v21, (__int64)a3);
          v20 = (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 > 2;
          sub_1588420(v12, (unsigned __int8 *)&v20);
          sub_15F7200(v21);
          return;
        }
        break;
      }
    }
  }
  v13 = *(_QWORD **)(a1 + 248);
  v14 = v13[294];
  v13[304] += 40LL;
  v15 = (__m128i *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v13[295] >= (unsigned __int64)&v15[2].m128i_u64[1] && v14 )
    v13[294] = (char *)v15 + 40;
  else
    v15 = (__m128i *)sub_986170((__int64)(v13 + 294), 40, 40, 3, v7, v8);
  sub_B12970(v15, *(_QWORD *)(a1 + 248), a3);
  sub_B8CC60(a2, (__int64)v15, v16, v17, v18, v19);
}
