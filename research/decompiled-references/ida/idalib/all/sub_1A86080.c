__int64 __fastcall sub_1A86080(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  _QWORD *v8; // rsi
  __int64 result; // rax
  __int16 v10; // dx
  __int64 v11; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+8h] [rbp-20h]

  v11 = a5;
  v8 = (_QWORD *)sub_168B6C0(a1);
  if ( !a4 || (result = 1, *(char *)(a4 + 28) >= 0) )
  {
    result = sub_EEE9A0(32, v8, 8u);
    v10 = *(_WORD *)result & 0xFE00;
    LOBYTE(v10) = -96;
    *(_WORD *)result = v10;
    if ( unk_2CD7484 )
    {
      v12 = result;
      sub_EE9B50(160);
      result = v12;
    }
    v12 = a4;
    *(_DWORD *)(result + 24) = a2;
    *(_DWORD *)(result + 28) = a3;
    *(__m128 *)(result + 8) = _mm_loadh_ps((const double *)&v11);
  }
  return result;
}
