__int64 __fastcall sub_20FE9A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 *v12; // rax
  const char *v13; // rcx
  __int64 *v14; // rax
  __int128 v15; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+10h] [rbp-B8h]
  int v17; // [rsp+18h] [rbp-B0h]
  __m128i v18[3]; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v19[2]; // [rsp+50h] [rbp-78h] BYREF
  __int16 v20; // [rsp+70h] [rbp-58h]
  __m128i v21; // [rsp+80h] [rbp-48h] BYREF
  _QWORD *v22; // [rsp+90h] [rbp-38h]
  __int64 v23; // [rsp+98h] [rbp-30h]
  __int16 v24; // [rsp+A0h] [rbp-28h]

  if ( (*(_BYTE *)(a2 + 9) & 0x70) != 0x20 )
  {
    v6 = *(_QWORD **)a2;
    if ( *(_QWORD *)a2 )
      return v6[2] + *(_QWORD *)(a2 + 24);
    v20 = 259;
    v19[0].m128i_i64[0] = (__int64)"'";
    v11 = 0;
    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    {
      v12 = *(__int64 **)(a2 - 8);
      v11 = *v12;
      v6 = v12 + 3;
    }
    v24 = 1283;
    v13 = "cannot evaluate undefined symbol '";
LABEL_15:
    v23 = v11;
    v21.m128i_i64[0] = (__int64)v13;
    v22 = v6;
    sub_A41580(v18, &v21, v19, (__int64)v13, a5, a6);
    sub_2221CD0(v18);
  }
  v10 = *(_QWORD *)(a2 + 24);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( !(unsigned __int8)sub_210E1E0(v10, &v15, a1) )
  {
    v20 = 259;
    v19[0].m128i_i64[0] = (__int64)"'";
    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    {
      v14 = *(__int64 **)(a2 - 8);
      v11 = *v14;
      v6 = v14 + 3;
    }
    else
    {
      v11 = 0;
      v6 = nullptr;
    }
    v24 = 1283;
    v13 = "cannot evaluate equated symbol '";
    goto LABEL_15;
  }
  v7 = v16;
  if ( (_QWORD)v15 )
  {
    if ( !(unsigned __int8)sub_20FE650(a1, v15, 1u, &v21, a5, a6) )
      return v7;
    v7 += v21.m128i_i64[0];
  }
  if ( *((_QWORD *)&v15 + 1) && (unsigned __int8)sub_20FE650(a1, *((__int64 *)&v15 + 1), 1u, &v21, a5, a6) )
    v7 -= v21.m128i_i64[0];
  return v7;
}
