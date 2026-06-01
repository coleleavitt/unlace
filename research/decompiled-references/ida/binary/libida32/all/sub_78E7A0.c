__int64 __fastcall sub_78E7A0(__int64 a1)
{
  unsigned __int16 *v1; // rax
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  int v5; // ecx
  __int64 result; // rax
  __m128i v7; // xmm0
  unsigned __int16 *v8; // rax
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // rax
  unsigned int v11; // edx
  __m128i v12; // xmm0
  char v13; // [rsp+0h] [rbp-A8h]
  unsigned int v14; // [rsp+Ch] [rbp-9Ch] BYREF
  _BYTE v15[136]; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp-10h]

  v16 = __readfsqword(0x28u);
  v1 = (unsigned __int16 *)sub_723E90(a1, word_23963A9);
  if ( !v1 )
  {
    v8 = (unsigned __int16 *)sub_723E90(a1, word_23963C9);
    if ( v8 )
    {
      v9 = (unsigned __int16 *)((char *)v8 + *v8 + 2);
      v5 = *v9;
      if ( v5 != 4 )
        goto LABEL_14;
      *(_DWORD *)(a1 + 5880) = *(_DWORD *)(v9 + 1);
      v10 = (unsigned __int16 *)sub_723E90(a1, word_23963B9);
      if ( v10 )
      {
        *(_DWORD *)(a1 + 5884) = *(_DWORD *)((char *)v10 + *v10 + 4);
        netnode_check(&v14, "Root Node", 0, 0);
        result = v14;
        v11 = *(_DWORD *)(a1 + 5880) + 1;
        v12 = _mm_cvtsi32_si128(v14);
        *(_DWORD *)(a1 + 5880) = v11;
        *(_QWORD *)(a1 + 5872) = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(v11)).m128i_u64[0];
        goto LABEL_7;
      }
    }
    sub_78DA40((__int64)"The btree database is empty");
  }
  v4 = (__int64)v1 + *v1 + 2;
  if ( *(_WORD *)v4 <= 3u )
    goto LABEL_13;
  if ( *(_BYTE *)(v4 + 2) > 1u )
    sub_78DA40((__int64)"Unexpected netnode metainfo version");
  v5 = *(unsigned __int8 *)(v4 + 3);
  if ( (_BYTE)v5 != 4 )
  {
LABEL_14:
    qsnprintf((int)v15, 128, (int)"Please use %d-bit IDA to open this database", 8 * v5, v2, v3, v13);
    sub_78DA40((__int64)v15);
  }
  if ( *(_WORD *)v4 <= 0x17u )
LABEL_13:
    sub_78DA40((__int64)"Corrupted netnode metainfo");
  *(__m128i *)(a1 + 5864) = _mm_loadu_si128((const __m128i *)(v4 + 2));
  *(_QWORD *)(a1 + 5880) = *(_QWORD *)(v4 + 18);
  result = *(unsigned int *)(a1 + 5872);
LABEL_7:
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 5864));
  *(_QWORD *)(a1 + 5856) = *(_QWORD *)(a1 + 5880);
  *(__m128i *)(a1 + 5840) = v7;
  return result;
}

