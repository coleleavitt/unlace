/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D88C0
// Address: 0x00000000000D88C0

//----- (00000000000D88C0) ----------------------------------------------------
_QWORD *__fastcall sub_D88C0(_QWORD *a1)
{
  _BYTE *v1; // rax
  _BYTE *v2; // rcx
  _BYTE *v3; // rdx
  char *v4; // rax
  char *v5; // r14
  _BYTE *v6; // rax
  _QWORD *v7; // r15
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *result; // rax

  v1 = (_BYTE *)*a1;
  v2 = (_BYTE *)a1[1];
  if ( (_BYTE *)*a1 == v2 )
    return nullptr;
  if ( *v1 != 68 )
    return nullptr;
  v3 = v1 + 1;
  *a1 = v1 + 1;
  if ( v1 + 1 == v2 || *v3 != 116 && *v3 != 84 )
    return nullptr;
  *a1 = v1 + 2;
  v4 = sub_D97A0((__int64)a1);
  if ( !v4 )
    return nullptr;
  v5 = v4;
  v6 = (_BYTE *)*a1;
  if ( *a1 == a1[1] || *v6 != 69 )
    return nullptr;
  *a1 = v6 + 1;
  v7 = (_QWORD *)a1[604];
  v8 = v7[1];
  if ( (unsigned __int64)(v8 + 64) < 0xFF0 )
  {
    v10 = v7 + 1;
  }
  else
  {
    v9 = (_QWORD *)operator new[](0x1000u);
    *v9 = v7;
    v9[1] = 0;
    a1[604] = v9;
    v8 = 0;
    v10 = v9 + 1;
    v7 = v9;
  }
  *v10 = v8 + 64;
  result = (_QWORD *)((char *)v7 + v8 + 16);
  *(_DWORD *)((char *)v7 + v8 + 24) = 16843050;
  *result = off_1526F8;
  *(__m128i *)((char *)v7 + v8 + 32) = _mm_unpacklo_epi64(
                                         (__m128i)(unsigned __int64)"decltype(",
                                         (__m128i)(unsigned __int64)"");
  *(_QWORD *)((char *)v7 + v8 + 48) = v5;
  *(__m128i *)((char *)v7 + v8 + 56) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)")", (__m128i)(unsigned __int64)"");
  return result;
}
// 1526F8: using guessed type __int64 (__fastcall *off_1526F8[7])();
