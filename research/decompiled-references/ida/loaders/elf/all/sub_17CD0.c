__int64 __fastcall sub_17CD0(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  int v11; // esi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __m128i v14; // xmm1
  unsigned __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rcx
  const char *v19; // rax
  unsigned int v21; // [rsp+8h] [rbp-70h] BYREF
  unsigned int v22; // [rsp+Ch] [rbp-6Ch] BYREF
  int v23; // [rsp+10h] [rbp-68h] BYREF
  __m128i v24; // [rsp+14h] [rbp-64h]
  __int64 v25; // [rsp+24h] [rbp-54h]
  int v26; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v6 = a1[2];
  v27 = __readfsqword(0x28u);
  if ( qlseek(*(_QWORD *)(v6 + 472), *(_QWORD *)(v6 + 480) + a2, 0) == -1 )
    return sub_BFC0((__int64)"Truncated file.");
  v8 = a1[2];
  if ( a3 )
  {
    v9 = a1[2];
    v10 = 0;
    while ( (int)sub_39740(v9, &v21) >= 0 && (int)sub_39740(a1[2], &v22) >= 0 )
    {
      if ( (_BYTE)v22 == 46 )
      {
        v10 += 8LL;
        v19 = (const char *)sub_35F50(a1[2], 46, v22, v18);
        sub_EAA0((__int64)"Bad reloc type %s for PSP section\n", v19);
        if ( v10 >= a3 )
          return v27 - __readfsqword(0x28u);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v8 + 560);
        if ( BYTE1(v22) >= v11 || v11 <= BYTE2(v22) )
          break;
        v12 = a1[2];
        if ( !*(_BYTE *)(v12 + 72) )
        {
          if ( !under_debugger )
            interr(20100);
          BUG();
        }
        v13 = *(_QWORD *)(v12 + 32);
        v10 += 8LL;
        v23 = (unsigned __int8)v22;
        v14 = _mm_loadl_epi64((const __m128i *)(v13 + 56LL * BYTE2(v22) + 16));
        v15 = *(_QWORD *)(v13 + 56LL * BYTE1(v22) + 16) + v21;
        v26 = 0;
        v16 = (__m128i)v15;
        v17 = *a1;
        v25 = v14.m128i_i64[0];
        v24 = _mm_unpacklo_epi64(v16, v14);
        (*(void (__fastcall **)(__int64 *, int *, __int64, _QWORD, _QWORD))(v17 + 24))(a1, &v23, a4, 0, 0);
        if ( v10 >= a3 )
          return v27 - __readfsqword(0x28u);
      }
      v9 = a1[2];
    }
    sub_BFC0((__int64)"Bad relocation info");
  }
  return v27 - __readfsqword(0x28u);
}

