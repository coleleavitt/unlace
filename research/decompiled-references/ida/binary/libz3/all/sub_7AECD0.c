__int64 __fastcall sub_7AECD0(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (*v8)(void); // rax
  __int64 v9; // rax
  __int64 result; // rax
  __int64 (__fastcall *v11)(); // rdx
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(int, int, int, int, int, int, __int128, __int64); // rax
  __int32 v16; // edx
  __int64 v17; // rax
  __m128i v18; // xmm0
  __m128i v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+30h] [rbp-28h]

  v8 = *(__int64 (**)(void))(*a1 + 568);
  if ( v8 == sub_7C5740 )
  {
    v9 = a1[20];
    if ( v9 )
      result = *(unsigned __int8 *)(v9 + 832);
    else
      result = *(unsigned __int8 *)(a1[3] + 3184);
  }
  else
  {
    result = v8();
  }
  if ( (_BYTE)result )
    return result;
  result = *a1;
  v11 = *(__int64 (__fastcall **)())(*a1 + 536);
  if ( v11 != sub_7C55E0 )
  {
    result = ((__int64 (__fastcall *)(__int64 *, _QWORD))v11)(a1, a3);
    if ( (_DWORD)result != -1 )
      goto LABEL_11;
    goto LABEL_20;
  }
  v12 = a1[20];
  if ( !v12 )
  {
    result = *(unsigned int *)(*(_QWORD *)(a1[3] + 3288) + 4LL * a3);
    if ( (_DWORD)result != -1 )
    {
LABEL_11:
      if ( (_DWORD)result == 1 )
        return result;
      result = *a1;
      goto LABEL_14;
    }
LABEL_20:
    result = *a1;
    return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(result + 512))(a1, a2, a3);
  }
  v13 = *(_DWORD *)(*(_QWORD *)(v12 + 880) + 4LL * (a3 >> 1));
  if ( v13 < *(_DWORD *)(v12 + 888) )
  {
LABEL_14:
    v14 = a1[3];
    v15 = *(__int64 (__fastcall **)(int, int, int, int, int, int, __int128, __int64))(result + 592);
    ++*((_DWORD *)a1 + 44);
    ++*((_DWORD *)a1 + 212);
    v16 = *(_DWORD *)(v14 + 3612);
    if ( v15 == sub_7C5D10 )
    {
      v17 = a1[20];
      v19.m128i_i32[0] = *(_DWORD *)(v14 + 3612);
      v19.m128i_i64[1] = a2 - 8;
      LODWORD(v20) = 3;
      if ( v17 )
        return sub_11AC5A0(v17, a3);
      else
        return sub_7C5F00(v14, a3, v16, (unsigned int)sub_7C5D10, a5, a6, (__int128)_mm_load_si128(&v19), v20);
    }
    else
    {
      v19.m128i_i64[1] = a2 - 8;
      v19.m128i_i32[0] = v16;
      LODWORD(v20) = 3;
      v18 = _mm_load_si128(&v19);
      return ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, __int64 (__fastcall *)(int, int, int, int, int, int, __int128, __int64), __int64, __int64, __int64, __int64, __int64))v15)(
               a1,
               a3,
               v20,
               sub_7C5D10,
               a5,
               a6,
               v18.m128i_i64[0],
               v18.m128i_i64[1],
               v20);
    }
  }
  if ( (((unsigned __int8)a3 ^ (unsigned __int8)v13) & 1) != 0 )
    return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(result + 512))(a1, a2, a3);
  return result;
}

