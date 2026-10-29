__int64 __fastcall sub_7AEE70(__int64 a1)
{
  unsigned __int16 *v1; // rax
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  unsigned __int16 v5; // dx
  unsigned __int8 v6; // cl
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  __m128i v10; // xmm0
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // [rsp+8h] [rbp-A0h] BYREF
  _BYTE v18[136]; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v19; // [rsp+98h] [rbp-10h]

  v19 = __readfsqword(0x28u);
  v1 = (unsigned __int16 *)sub_7443D0(a1, word_23BA509);
  if ( !v1 )
  {
    v8 = -1;
    if ( (*(_BYTE *)(a1 + 6016) & 2) != 0 )
      return v8;
    v12 = (unsigned __int16 *)sub_7443D0(a1, word_23BA529);
    if ( v12 )
    {
      v13 = (unsigned __int16 *)((char *)v12 + *v12 + 2);
      v7 = *v13;
      if ( v7 != 8 )
        goto LABEL_19;
      *(_QWORD *)(a1 + 5904) = *(_QWORD *)(v13 + 1);
      v14 = (unsigned __int16 *)sub_7443D0(a1, word_23BA519);
      if ( v14 )
      {
        *(_QWORD *)(a1 + 5912) = *(_QWORD *)((char *)v14 + *v14 + 4);
        netnode_check(&v17, "Root Node", 0, 0);
        v8 = v17;
        v15 = *(_QWORD *)(a1 + 5904) + 1LL;
        v16 = (__m128i)(unsigned __int64)v17;
        *(_QWORD *)(a1 + 5904) = v15;
        *(__m128i *)(a1 + 5888) = _mm_unpacklo_epi64(v16, (__m128i)(unsigned __int64)v15);
        goto LABEL_8;
      }
    }
    sub_7AE0E0((__int64)"The btree database is empty");
  }
  v4 = (__int64)v1 + *v1 + 2;
  v5 = *(_WORD *)v4;
  if ( *(_WORD *)v4 <= 3u )
    goto LABEL_18;
  v6 = *(_BYTE *)(v4 + 2);
  if ( v6 > 1u )
    sub_7AE0E0((__int64)"Unexpected netnode metainfo version");
  if ( (*(_BYTE *)(a1 + 6016) & 2) != 0 )
  {
    if ( v5 > 0x17u )
    {
      *(_BYTE *)(a1 + 5880) = v6;
      *(_BYTE *)(a1 + 5881) = *(_BYTE *)(v4 + 3);
      *(_DWORD *)(a1 + 5882) = *(_DWORD *)(v4 + 4);
      *(_WORD *)(a1 + 5886) = *(_WORD *)(v4 + 8);
      v8 = *(unsigned int *)(v4 + 10);
      *(_QWORD *)(a1 + 5888) = v8;
      *(_QWORD *)(a1 + 5896) = *(unsigned int *)(v4 + 14);
      *(_QWORD *)(a1 + 5904) = *(unsigned int *)(v4 + 18);
      *(_QWORD *)(a1 + 5912) = *(unsigned int *)(v4 + 22);
      goto LABEL_8;
    }
LABEL_18:
    sub_7AE0E0((__int64)"Corrupted netnode metainfo");
  }
  v7 = *(unsigned __int8 *)(v4 + 3);
  if ( (_BYTE)v7 != 8 )
  {
LABEL_19:
    qsnprintf((unsigned int)v18, 128, (unsigned int)"Please use %d-bit IDA to open this database", 8 * v7, v2, v3);
    sub_7AE0E0((__int64)v18);
  }
  if ( v5 <= 0x27u )
    goto LABEL_18;
  *(__m128i *)(a1 + 5880) = _mm_loadu_si128((const __m128i *)(v4 + 2));
  v8 = *(_QWORD *)(a1 + 5888);
  *(__m128i *)(a1 + 5896) = _mm_loadu_si128((const __m128i *)(v4 + 18));
  *(_QWORD *)(a1 + 5912) = *(_QWORD *)(v4 + 34);
LABEL_8:
  v9 = *(_QWORD *)(a1 + 5912);
  *(__m128i *)(a1 + 5840) = _mm_loadu_si128((const __m128i *)(a1 + 5880));
  v10 = _mm_loadu_si128((const __m128i *)(a1 + 5896));
  *(_QWORD *)(a1 + 5872) = v9;
  *(__m128i *)(a1 + 5856) = v10;
  return v8;
}
