/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006E6C8
// Address: 0x000000014006E6C8

//----- (000000014006E6C8) ----------------------------------------------------
__int64 __fastcall sub_14006E6C8(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r13d
  int v8; // edi
  _DWORD *v9; // r14
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  FH4::UWMap4 *v13; // rdx
  _BYTE *v14; // rdx
  __int64 v15; // rcx
  FH4::UWMap4 *v16; // r15
  FH4::UWMap4 *v17; // rbx
  __m128i v18; // xmm6
  __int32 v19; // r9d
  __int32 v20; // ecx
  __int64 v21; // rdx
  __m128i v22; // xmm6
  __int64 v23; // r8
  __int64 result; // rax
  FH4::UWMap4 *v25[2]; // [rsp+30h] [rbp-108h] BYREF
  __int32 v26; // [rsp+40h] [rbp-F8h]
  int v27; // [rsp+44h] [rbp-F4h]
  int v28; // [rsp+48h] [rbp-F0h]
  int *v29; // [rsp+50h] [rbp-E8h] BYREF
  FH4::UWMap4 *v30; // [rsp+58h] [rbp-E0h]
  __int64 *v31; // [rsp+60h] [rbp-D8h]
  __int64 ImageBase; // [rsp+68h] [rbp-D0h]
  __int64 v33; // [rsp+70h] [rbp-C8h]
  _QWORD *v34; // [rsp+78h] [rbp-C0h]
  _QWORD *v35; // [rsp+80h] [rbp-B8h]
  int *v36; // [rsp+88h] [rbp-B0h]
  FH4::UWMap4 *v37; // [rsp+90h] [rbp-A8h]
  __int128 v38; // [rsp+A0h] [rbp-98h] BYREF
  __m128i v39; // [rsp+B0h] [rbp-88h]
  int v40; // [rsp+C0h] [rbp-78h] BYREF
  FH4::UWMap4 *v41; // [rsp+C8h] [rbp-70h]
  __int128 v42; // [rsp+D0h] [rbp-68h]

  v4 = a4;
  v34 = a1;
  v31 = a1;
  v28 = a4;
  ImageBase = GetImageBase(a1, a2, a3, a4);
  v8 = __FrameHandler4::StateFromControlPc((struct FH4::FuncInfo4 *)a3, (struct _xDISPATCHER_CONTEXT *)a2);
  v9 = (_DWORD *)(a2 + 72);
  v33 = a2 + 72;
  if ( *(_DWORD *)(a2 + 72) )
  {
    if ( *(_DWORD *)(sub_14006CCF8() + 120) != -2 )
      abort();
    v8 = *v9 - 2;
  }
  else if ( *(_DWORD *)(sub_14006CCF8() + 120) != -2 )
  {
    v8 = *(_DWORD *)(sub_14006CCF8() + 120);
    *(_DWORD *)(sub_14006CCF8() + 120) = -2;
  }
  v10 = sub_14006CCF8();
  ++*(_DWORD *)(v10 + 48);
  v11 = (_QWORD *)(a2 + 8);
  v35 = v11;
  v12 = *v11;
  v13 = nullptr;
  v41 = nullptr;
  v42 = 0;
  if ( *(_DWORD *)(a3 + 8) )
  {
    v14 = (_BYTE *)(v12 + *(int *)(a3 + 8));
    v15 = *v14 & 0xF;
    v13 = (FH4::UWMap4 *)&v14[-*((char *)qword_1400AE700 + v15)];
    v40 = *((_DWORD *)v13 - 1) >> *((_BYTE *)&qword_1400AE700[2] + v15);
    v41 = v13;
  }
  else
  {
    v40 = 0;
  }
  v25[0] = (FH4::UWMap4 *)&v40;
  v25[1] = v13;
  v29 = &v40;
  v30 = v13;
  FH4::UWMap4::getStartStop(
    (FH4::UWMap4 *)&v40,
    v8,
    v4,
    (struct FH4::UWMap4::iterator *)v25,
    (struct FH4::UWMap4::iterator *)&v29);
  while ( 1 )
  {
    v36 = &v40;
    v37 = v41;
    v16 = v25[1];
    if ( v25[1] < v41 || v25[1] <= v30 )
      break;
    FH4::UWMap4::ReadEntry(v25[0], (unsigned __int8 **)&v25[1]);
    v25[1] = v16;
    v17 = v25[0];
    v39 = *((__m128i *)v25[0] + 1);
    v18 = v39;
    v38 = *(_OWORD *)v25;
    FH4::UWMap4::ReadEntry(v25[0], (unsigned __int8 **)&v25[1]);
    v25[1] = (FH4::UWMap4 *)((char *)v16 - *((unsigned int *)v17 + 4));
    v8 = sub_14006ECD0((__int64)&v29, v4, (__int64)&v38, v8, (__int64)v25);
    v27 = v8;
    v26 = 0;
    v19 = 0;
    v20 = v18.m128i_i32[1];
    if ( v18.m128i_i32[1] )
      v19 = v18.m128i_i32[2];
    v26 = v19;
    if ( v19 )
    {
      *v9 = v8 + 2;
      if ( (unsigned int)(v18.m128i_i32[1] - 1) <= 1 )
      {
        v21 = *v31;
        v22 = _mm_srli_si128(v18, 12);
        if ( v20 == 2 )
          v23 = *(_QWORD *)((unsigned int)_mm_cvtsi128_si32(v22) + v21);
        else
          v23 = v21 + (unsigned int)_mm_cvtsi128_si32(v22);
        CallSettingFrameEncoded(*v11 + v19, v21, v23, 259);
      }
      else
      {
        CallSettingFrame(*v11 + v19, a1, 259);
      }
      SetImageBase(ImageBase);
    }
  }
  result = sub_14006CCF8();
  if ( *(int *)(result + 48) > 0 )
  {
    result = sub_14006CCF8();
    --*(_DWORD *)(result + 48);
  }
  return result;
}
// 14006C370: using guessed type __int64 __fastcall GetImageBase(_QWORD, _QWORD, _QWORD, _QWORD);
// 14006C398: using guessed type __int64 __fastcall SetImageBase(_QWORD);
// 14006F200: using guessed type __int64 __fastcall CallSettingFrame(_QWORD, _QWORD, _QWORD);
// 14006F2A0: using guessed type __int64 __fastcall CallSettingFrameEncoded(_QWORD, _QWORD, _QWORD, _QWORD);
// 1400AE700: using guessed type __int64 qword_1400AE700[4];
