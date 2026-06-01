__int64 __fastcall sub_20FE650(__int64 a1, __int64 a2, unsigned __int8 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rax
  unsigned int v8; // ebp
  __int64 v11; // rdi
  unsigned int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 *v15; // rax
  const char *v16; // rcx
  __int64 *v17; // rax
  __int128 v18; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+10h] [rbp-C8h]
  int v20; // [rsp+18h] [rbp-C0h]
  __m128i v21[3]; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v22[2]; // [rsp+50h] [rbp-88h] BYREF
  __int16 v23; // [rsp+70h] [rbp-68h]
  __m128i v24; // [rsp+80h] [rbp-58h] BYREF
  _QWORD *v25; // [rsp+90h] [rbp-48h]
  __int64 v26; // [rsp+98h] [rbp-40h]
  __int16 v27; // [rsp+A0h] [rbp-38h]

  if ( (*(_BYTE *)(a2 + 9) & 0x70) == 0x20 )
  {
    v11 = *(_QWORD *)(a2 + 24);
    v12 = a3;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v8 = sub_210E1E0(v11, &v18, a1);
    if ( (_BYTE)v8 )
    {
      v13 = v19;
      if ( (_QWORD)v18 )
      {
        if ( !(unsigned __int8)sub_20FE650(a1, v18, v12, &v24) )
          return 0;
        v13 += v24.m128i_i64[0];
      }
      if ( *((_QWORD *)&v18 + 1) )
      {
        if ( !(unsigned __int8)sub_20FE650(a1, *((_QWORD *)&v18 + 1), v12, &v24) )
          return 0;
        v13 -= v24.m128i_i64[0];
      }
      *a4 = v13;
      return v8;
    }
    v23 = 259;
    v22[0].m128i_i64[0] = (__int64)"'";
    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    {
      v17 = *(__int64 **)(a2 - 8);
      v14 = *v17;
      v7 = v17 + 3;
    }
    else
    {
      v14 = 0;
      v7 = nullptr;
    }
    v27 = 1283;
    v16 = "cannot evaluate equated symbol '";
LABEL_18:
    v26 = v14;
    v24.m128i_i64[0] = (__int64)v16;
    v25 = v7;
    sub_A41580(v21, &v24, v22, (__int64)v16, a5, a6);
    sub_2221CD0(v21);
  }
  v7 = *(_QWORD **)a2;
  if ( !*(_QWORD *)a2 )
  {
    if ( !a3 )
      return 0;
    v23 = 259;
    v14 = 0;
    v22[0].m128i_i64[0] = (__int64)"'";
    if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
    {
      v15 = *(__int64 **)(a2 - 8);
      v14 = *v15;
      v7 = v15 + 3;
    }
    v27 = 1283;
    v16 = "cannot evaluate undefined symbol '";
    goto LABEL_18;
  }
  v8 = 1;
  *a4 = v7[2] + *(_QWORD *)(a2 + 24);
  return v8;
}
