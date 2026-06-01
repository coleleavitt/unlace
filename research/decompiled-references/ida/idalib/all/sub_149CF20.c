__m128i *__fastcall sub_149CF20(const __m128i *a1, __int64 a2, __m128i a3, __m128 a4)
{
  unsigned int v4; // r14d
  __int8 v6; // al
  bool v7; // zf
  __int16 v8; // ax
  __int64 v9; // rdi
  _BYTE *v10; // rdx
  __int32 v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  _DWORD *v14; // rax
  _DWORD *v15; // rdx
  __m128i *result; // rax
  char v17; // dl
  unsigned int v18; // r14d
  bool v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __m128i *v26; // [rsp+0h] [rbp-158h] BYREF
  __int8 v27; // [rsp+8h] [rbp-150h]
  const __m128i *v28; // [rsp+10h] [rbp-148h]
  int v29; // [rsp+18h] [rbp-140h]
  __int16 v30; // [rsp+1Ch] [rbp-13Ch]
  __int64 (__fastcall *v31)(__int64); // [rsp+20h] [rbp-138h]
  __int64 v32; // [rsp+28h] [rbp-130h]
  __int64 v33; // [rsp+30h] [rbp-128h]
  _QWORD v34[3]; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v35[5]; // [rsp+58h] [rbp-100h] BYREF
  __int64 v36; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v37[3]; // [rsp+90h] [rbp-C8h] BYREF
  void *ptr; // [rsp+A8h] [rbp-B0h]
  __int64 v39; // [rsp+B0h] [rbp-A8h]
  _BYTE v40[160]; // [rsp+B8h] [rbp-A0h] BYREF

  v4 = 0;
  v26 = (__m128i *)&a1[122];
  v6 = a1[122].m128i_i8[0];
  a1[122].m128i_i8[0] = 1;
  v27 = v6;
  v28 = a1;
  v30 = 63;
  v29 = 1507350;
  v31 = sub_146A990;
  v32 = 0;
  v33 = 0;
  sub_1477FA0((__int64)&v26);
  v7 = a1[2].m128i_i16[0] == 189;
  v34[1] = v35;
  v35[2] = (char *)a1 + 504;
  v34[0] = 0;
  v34[2] = 0x200000000LL;
  v35[3] = &v36;
  v35[4] = 0x200000000LL;
  if ( v7 )
  {
    sub_1490230(a1, (__int64)v34, 0, 0, a3, a4);
    v4 = 1;
  }
  sub_147B5E0((__int64)a1, (__int64)v34);
  if ( a1[2].m128i_i16[0] == 367 )
    sub_147B980((__int64)a1, (__int64)v34);
  if ( ((1LL << *(_DWORD *)(a2 + 96)) & 0xF91) == 0 )
  {
    if ( (v8 = a1[2].m128i_i16[0], v8 == 23)
      || ((v9 = a1->m128i_i64[1], v10 = *(_BYTE **)(v9 + 56), (v10[1] & 8) != 0) || (*v10 & 8) != 0)
      && v8 == 27
      && ((v24 = *(_QWORD *)(v9 + 2944), v24 >= *(unsigned int *)(v9 + 2912))
        ? (v25 = sub_14180A0(v9, 1u))
        : (v25 = *(_QWORD *)(v9 + 2904) + 24 * v24),
          *(_WORD *)(v25 + 16) == 23)
      || sub_147EA80((__int64)a1, 0, 0)
      || (unsigned int)sub_155CBC0(a1, 0, 0) )
    {
      v11 = a1[1].m128i_i32[0];
      *(_DWORD *)(a2 + 56) = 0;
      v12 = 264;
      *(_QWORD *)(a2 + 64) = 0;
      *(_DWORD *)(a2 + 84) = v11;
      *(_DWORD *)(a2 + 80) = v11;
      if ( (**(_BYTE **)a2 & 7) != 1 && ((1LL << *(_DWORD *)(a2 + 96)) & 0x781) != 0 )
      {
        v13 = *(_DWORD *)(a2 + 136);
        if ( v13 )
        {
          v14 = *(_DWORD **)(a2 + 128);
          if ( *v14 != 6 )
            goto LABEL_18;
          v15 = &v14[36 * (v13 - 1)];
          while ( v14 != v15 )
          {
            v14 += 36;
            if ( *v14 != 6 )
            {
              v12 = 264;
              goto LABEL_18;
            }
          }
        }
        v12 = 776;
      }
LABEL_18:
      sub_146B5E0(v37, (__int64)a1, v12, 1, 0);
      sub_149C200(a1, a2, (int *)v34, (__int64)&v26, 0, v4, a3, a4);
      if ( v37[0] )
        sub_1564F70(v37[0]);
      goto LABEL_20;
    }
  }
  v17 = *(_BYTE *)(a2 + 720);
  v18 = *(_DWORD *)(a2 + 2652);
  *(_DWORD *)(a2 + 2652) = 0;
  *(_BYTE *)(a2 + 720) = v17 | 2;
  v19 = (v17 & 2) != 0;
  sub_1498040(a1, a2, (char *)sub_149D2E0, 0, a3, a4);
  sub_14808E0((__int64)&v26, (__int64 *)a2, v20, v21, v22, v23);
  v37[2] = 0;
  v39 = 0x200000000LL;
  ptr = v40;
  LODWORD(v37[0]) = 6;
  *(__int64 *)((char *)v37 + 4) = v33;
  sub_1497E40(a2, (unsigned __int64)v37, (__int64)v34, SHIDWORD(v33));
  if ( ptr != v40 )
    free(ptr);
  *(_BYTE *)(a2 + 720) = (2 * v19) | *(_BYTE *)(a2 + 720) & 0xFD;
  if ( v18 )
    sub_1550E90(a1, v18, a2);
LABEL_20:
  sub_147A450(v34);
  result = v26;
  v26->m128i_i8[0] = v27;
  return result;
}
