__int64 __fastcall sub_7B0330(__int64 a1, unsigned int *a2, int a3, double a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  unsigned int v10; // r12d
  __int64 (__fastcall *v11)(); // rax
  __int32 v12; // edx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __m128i v19; // xmm0
  __m128i v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]

  ++*(_DWORD *)(a1 + 180);
  if ( (unsigned int)sub_7B0230((_QWORD *)a1, a2) != -1 )
  {
    sub_180B130(a1);
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v14 = sub_180B150(a1, a2);
      v15 = a1 + 80;
      v17 = v14;
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(a2, v14, v15, 1);
      sub_186A500(a2, v17);
    }
    else
    {
      v18 = sub_180B150(a1, a2);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))(*(_QWORD *)a2 + 136LL))(a2, v18, a1 + 80, 1);
    }
    sub_1872CE0("");
    sub_1873130(114, 40);
  }
  v9 = *(_QWORD *)(a1 + 24);
  v10 = a3 ^ 1;
  v11 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 600LL);
  v12 = *(_DWORD *)(v9 + 3612);
  if ( v11 == sub_7C5940 )
  {
    result = *(_QWORD *)(a1 + 160);
    v20.m128i_i32[0] = *(_DWORD *)(v9 + 3612);
    v20.m128i_i64[1] = (__int64)(a2 - 2);
    LODWORD(v21) = 3;
    if ( result )
      *(_BYTE *)(result + 832) = 1;
    else
      return sub_11B4C90(v9, v10, v12, (unsigned int)sub_7C5940, v7, v8, (__int128)_mm_load_si128(&v20), v21);
  }
  else
  {
    v20.m128i_i64[1] = (__int64)(a2 - 2);
    v20.m128i_i32[0] = v12;
    LODWORD(v21) = 3;
    v19 = _mm_load_si128(&v20);
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64 (__fastcall *)(), __int64, __int64, __int64, __int64, __int64))v11)(
             a1,
             v10,
             v21,
             sub_7C5940,
             v7,
             v8,
             v19.m128i_i64[0],
             v19.m128i_i64[1],
             v21);
  }
  return result;
}

