__int64 __fastcall sub_166D70(__int128 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // r14
  const __m128i *v6; // rbx
  __int64 v7; // r13
  _DWORD *v8; // r12
  int v9; // eax
  int v10; // edx
  __int64 v11; // rax
  _DWORD *v12; // rcx
  unsigned int v13; // eax
  __int32 v14; // eax
  __int32 v15; // eax
  int v16; // ecx
  __int64 v17; // [rsp+8h] [rbp-88h]
  __int64 v18; // [rsp+10h] [rbp-80h]
  __int64 v19; // [rsp+10h] [rbp-80h]
  __int64 v20; // [rsp+10h] [rbp-80h]
  __int64 v21; // [rsp+20h] [rbp-70h] BYREF
  __int64 v22; // [rsp+28h] [rbp-68h] BYREF
  __int64 v23[3]; // [rsp+30h] [rbp-60h] BYREF
  __int128 v24; // [rsp+48h] [rbp-48h]
  unsigned __int64 v25; // [rsp+58h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) != 4 )
    return 0;
  v4 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 40LL);
  if ( v4 == 0 || *(_DWORD *)v4 != 24 )
    return 0;
  v6 = (const __m128i *)a1;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( !(unsigned __int8)sub_11B1C0((char *)(v4 + 48), v23, 0) )
    return 0;
  if ( v23[0] != 1 )
    return 0;
  v8 = (_DWORD *)sub_11DDE0(*(_QWORD *)(a2 + 48));
  v9 = sub_32B240(a2);
  v10 = v9;
  if ( v9 <= 0 )
    return 0;
  if ( **(_DWORD **)(a2 + 56) == 55 )
    v10 = v9 - 1;
  if ( v10 == 1
    && *v8 == 12
    && (v11 = sub_117D20((__int64)v8, &v21, 9)) != 0
    && *(_BYTE *)(v11 + 32) == 4
    && (v18 = v11,
        *((_QWORD *)&a1 + 1) = v21,
        v22 = *(_QWORD *)(a1 + 56),
        *(_QWORD *)&a1 = sub_124880(a1, (__int64)&v22, 0),
        (_QWORD)a1)
    && sub_120FD0((unsigned __int8 *)a1, v7, (unsigned int *)v4, 0)
    && (v12 = *(_DWORD **)(v18 + 40), *v12 == 20)
    && (v19 = *(_QWORD *)(v18 + 40), sub_9D790((__int64)(v12 + 12), 1, 0))
    && (unsigned __int8)sub_129EC0(v7, v6, v6[3].m128i_i64[1], v19 + 32, v6[3].m128i_i64[1], v4 + 32, 1) )
  {
    memset(v23, 0, sizeof(v23));
    v24 = 0;
    sub_123420((__int64)v6, v23, (__int64)(v8 + 16), 0);
    v20 = sub_124590((__int64)v6, v23, v6[3].m128i_i64[1], 0, nullptr, 0, 0x101u);
    if ( v20 && (LOBYTE(v13) = sub_120FD0((unsigned __int8 *)v20, v7, (unsigned int *)v4, 0), v2 = v13, (_BYTE)v13) )
    {
      v17 = sub_1632B0(v6[4].m128i_i64[0], *(_DWORD *)(v6[3].m128i_i64[1] + 72));
      sub_1189E0(v6[3].m128i_i64[1]);
      v14 = v6[1].m128i_i32[2];
      BYTE1(v14) &= ~2u;
      LOBYTE(v14) = v14 | 0x80;
      v6[1].m128i_i32[2] = v14;
      sub_1189E0((__int64)v8);
      v15 = v6[1].m128i_i32[2];
      BYTE1(v15) &= ~2u;
      LOBYTE(v15) = v15 | 0x80;
      v6[1].m128i_i32[2] = v15;
      v16 = *(_DWORD *)(v20 + 36);
      *(_DWORD *)v20 = 16;
      sub_11BE50(v20 + 48, v7, 2, v16, -1, 0);
      sub_10D990((__int64)v6, a2, v17);
      sub_9D960((__int64)v6, (__int64)"SDIV2A");
    }
    else
    {
      v2 = 0;
    }
    sub_8EF80(v23);
  }
  else
  {
    return 0;
  }
  return v2;
}
