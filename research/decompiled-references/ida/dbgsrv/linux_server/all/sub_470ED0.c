/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_470ED0
// Address: 0x0000000000470ED0

//----- (0000000000470ED0) ----------------------------------------------------
__int64 __fastcall sub_470ED0(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  int v13; // edi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  char v36; // [rsp+0h] [rbp-28h]
  int optval; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v38; // [rsp+8h] [rbp-20h]

  v38 = __readfsqword(0x28u);
  v13 = socket(a2, a3, a4);
  *(_QWORD *)(a1 + 56) = v13;
  if ( v13 == -1 )
  {
    *(_QWORD *)(a1 + 88) = "socket";
    *(_DWORD *)(a1 + 96) = *__errno_location();
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 100) = a2 == 10;
    optval = 1;
    if ( setsockopt(v13, 1, 2, &optval, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_REUSEADDR)";
      if ( (dword_4C94E4 & 0x100000) != 0 )
      {
        v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        *(double *)a5.m128_u64 = sub_470E00((int)"%s", v29, v30, v31, v32, v33, a5, a6, a7, a8, v34, v35, a11, a12, v36);
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 56), 1, 9, &optval, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_KEEPALIVE)";
      if ( (dword_4C94E4 & 0x100000) != 0 )
      {
        v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        *(double *)a5.m128_u64 = sub_470E00((int)"%s", v22, v23, v24, v25, v26, a5, a6, a7, a8, v27, v28, a11, a12, v36);
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 56), 6, 1, &optval, 4u)
      && (*(_QWORD *)(a1 + 88) = "setsockopt(TCP_NODELAY)", (dword_4C94E4 & 0x100000) != 0) )
    {
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
      sub_470E00((int)"%s", v15, v16, v17, v18, v19, a5, a6, a7, a8, v20, v21, a11, a12, v36);
      return 1;
    }
    else
    {
      return 1;
    }
  }
}
// 470FB8: variable 'v16' is possibly undefined
// 470FB8: variable 'v17' is possibly undefined
// 470FB8: variable 'v18' is possibly undefined
// 470FB8: variable 'v19' is possibly undefined
// 470FB8: variable 'v20' is possibly undefined
// 470FB8: variable 'v21' is possibly undefined
// 470FB8: variable 'v36' is possibly undefined
// 471004: variable 'v23' is possibly undefined
// 471004: variable 'v24' is possibly undefined
// 471004: variable 'v25' is possibly undefined
// 471004: variable 'v26' is possibly undefined
// 471004: variable 'v27' is possibly undefined
// 471004: variable 'v28' is possibly undefined
// 471044: variable 'v30' is possibly undefined
// 471044: variable 'v31' is possibly undefined
// 471044: variable 'v32' is possibly undefined
// 471044: variable 'v33' is possibly undefined
// 471044: variable 'v34' is possibly undefined
// 471044: variable 'v35' is possibly undefined
// 4C94E4: using guessed type int dword_4C94E4;
