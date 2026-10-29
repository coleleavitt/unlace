/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4171E0
// Address: 0x00000000004171E0

//----- (00000000004171E0) ----------------------------------------------------
__int64 __fastcall sub_4171E0(__int64 a1, const char *a2, const __m128i *a3)
{
  char *v5; // rdi
  __int64 v6; // rax
  char *v7; // rdi
  unsigned __int64 v8; // rbp
  char *v10; // rax
  __m128i v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v11 = _mm_loadu_si128(a3);
  v12 = a3[1].m128i_i64[0];
  v5 = *(char **)a1;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v5);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v6 = (int)sub_4850F0(nullptr, 0, a2, (__int64)a3);
  if ( (_DWORD)v6 )
  {
    v7 = *(char **)a1;
    v8 = (int)v6 + 1LL;
    if ( *(_QWORD *)(a1 + 16) < v8 )
    {
      v10 = (char *)sub_481540(a1, *(void **)a1, v6 + 1, 1u);
      *(_QWORD *)a1 = v10;
      v7 = v10;
    }
    *(_QWORD *)(a1 + 8) = v8;
    sub_4850F0(v7, v8, a2, (__int64)&v11);
  }
  return a1;
}
