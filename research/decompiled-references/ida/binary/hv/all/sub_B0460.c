__m128i *__fastcall sub_B0460(__m128i *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, int a5, __int64 a6)
{
  int v9; // ebp
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __m128i v17; // xmm2
  __int64 v18; // rdx
  __int64 v20; // rdi
  const __m128i *v21; // roff
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __m128i v26; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+30h] [rbp-48h]
  unsigned int v28; // [rsp+38h] [rbp-40h]
  unsigned __int64 v29; // [rsp+48h] [rbp-30h]

  v9 = a2;
  v29 = __readfsqword(0x28u);
  v11 = 0;
  if ( a5 == 1 )
  {
    v12 = 0;
    v13 = 0;
  }
  else
  {
    LOBYTE(v11) = a4 != 0;
    v12 = v11;
    if ( a3 == -1 && (_BYTE)v11 )
    {
      v13 = a4 + 500;
LABEL_5:
      v14 = a3 + v13;
      v12 = v14 <= (unsigned __int64)&loc_20000;
      v15 = (v14 <= 0x4000) + (unsigned int)v12 + (v14 <= (unsigned __int64)&loc_40000);
      goto LABEL_6;
    }
    v13 = a4;
  }
  if ( a3 != -1 )
    goto LABEL_5;
  v15 = 0;
  if ( (_BYTE)v12 )
    goto LABEL_5;
LABEL_6:
  if ( (_DWORD)a2 )
  {
    v20 = 22;
    if ( (int)a2 <= 22 )
      v20 = (int)a2;
    if ( (int)v20 < 0 )
      v20 = 0;
    v21 = (const __m128i *)((char *)qword_1345E0 + 644 * v15 + 28 * v20);
    v22 = v21[1].m128i_i64[0];
    v23 = v21[1].m128i_u32[2];
    v26 = _mm_loadu_si128(v21);
    v27 = v22;
    v28 = v23;
    if ( (int)a2 < 0 )
    {
      if ( (int)sub_AF300(v20, a2, v22, v12) > (int)a2 )
        v9 = sub_AF300(v20, a2, v24, v25);
      HIDWORD(v27) = -v9;
    }
  }
  else
  {
    v16 = 644 * v15;
    v17 = _mm_loadu_si128((const __m128i *)((char *)&dword_134634 + v16));
    v18 = *(_QWORD *)((char *)&dword_134634 + v16 + 16);
    LODWORD(v16) = *(int *)((char *)&dword_134634 + v16 + 24);
    v27 = v18;
    v28 = v16;
    v26 = v17;
  }
  sub_A7900(a1, a3, a4, a5, 0, a6, (__int128)_mm_load_si128(&v26), v27, v28);
  return a1;
}

