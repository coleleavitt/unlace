__int64 __fastcall sub_37440(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // ebx
  __int64 v12; // rax
  size_t v13; // rsi
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // [rsp+8h] [rbp-78h] BYREF
  __int128 v18; // [rsp+10h] [rbp-70h]
  __int64 v19; // [rsp+20h] [rbp-60h]
  __int64 v20; // [rsp+28h] [rbp-58h] BYREF
  __m128i v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+40h] [rbp-40h]
  unsigned __int64 v23; // [rsp+50h] [rbp-30h]

  v3 = (unsigned __int64 *)(a2 + 584);
  v4 = 0;
  v5 = *(_QWORD *)(a2 + 176);
  v6 = *(_QWORD *)(a2 + 592);
  v23 = __readfsqword(0x28u);
  v18 = 0;
  v17 = 0;
  v19 = v5;
  if ( v6 )
  {
    do
    {
      v8 = (__int64 *)(*(_QWORD *)(a2 + 584) + 32 * v4);
      v9 = *v8;
      if ( *v8 )
      {
        v8[1] = 0;
        qfree(v9);
      }
      ++v4;
    }
    while ( v6 != v4 );
  }
  v10 = *(int *)(a2 + 272);
  *(_QWORD *)(a2 + 592) = 0;
  v11 = 1;
  sub_37040(v3, v10 + 1, (unsigned __int64)&v17);
  if ( *(int *)(a2 + 204) > 0 )
  {
    while ( 1 )
    {
      while ( (!*(_BYTE *)(a2 + 672) || v11 < *(_DWORD *)(a2 + 652) || v11 > *(_DWORD *)(a2 + 656))
           && !(unsigned __int8)((unsigned __int64)sub_322C0((__int64 *)(a2 + 560), v11) >> 32) )
      {
        if ( *(_DWORD *)(a2 + 204) < ++v11 )
          goto LABEL_14;
      }
      sub_33800((__int64)&v20, a2, v11, (unsigned __int64 *)(*(_QWORD *)(a2 + 584) + 32LL * v11));
      if ( (_BYTE)v22 )
        break;
      if ( *(_DWORD *)(a2 + 204) < ++v11 )
        goto LABEL_14;
    }
    v15 = v20;
    v16 = _mm_loadu_si128(&v21);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v15;
    *(__m128i *)(a1 + 8) = v16;
  }
  else
  {
LABEL_14:
    v12 = *(_QWORD *)(a2 + 176);
    v13 = *(_QWORD *)(a2 + 592);
    v21 = 0;
    v20 = 0;
    v22 = v12;
    sub_37040((unsigned __int64 *)(a2 + 736), v13, (unsigned __int64)&v20);
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}
