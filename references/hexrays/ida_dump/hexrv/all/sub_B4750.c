__int64 __fastcall sub_B4750(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, char *a5, int a6, _QWORD *a7)
{
  unsigned int v7; // ebx
  char v11; // al
  __int64 v12; // rax
  _QWORD *v13; // r15
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // r11
  __int64 v18; // rax
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v25; // r15
  unsigned __int64 v26; // rax
  _DWORD *v27; // r8
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __int64 v30; // r9
  const char *v31; // rdx
  __int64 v33; // [rsp+18h] [rbp-80h]
  __int64 v34; // [rsp+18h] [rbp-80h]
  __int64 v35; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+20h] [rbp-78h]
  __int64 v37; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v38[24]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v11 = *a5;
  LOBYTE(v7) = v11 == 15 || v11 == 1;
  if ( (_BYTE)v7 )
  {
    v12 = sub_1F7110(a4, a5);
    v13 = (_QWORD *)v12;
    if ( !v12 )
      return 0;
    v14 = *(_QWORD *)v12;
    v15 = *(int *)(v12 + 16);
    if ( *(_QWORD *)(v14 + 440) >= v15 )
    {
      v16 = *a5 == 4;
      v17 = *(_QWORD *)(v14 + 432) + 104 * v15;
      v18 = v13[1];
      v37 = v18;
      if ( !v16 )
      {
        v35 = v17;
        v33 = *(_QWORD *)(a1 + 96);
        v19 = sub_118790(a5, v33, 0);
        v17 = v35;
        if ( v19 == *(_BYTE *)(v33 + 145) )
        {
          v18 = v37;
        }
        else
        {
          v20 = *((int *)a5 + 1);
          v21 = *(_QWORD *)(a1 + 96);
          *(_QWORD *)v38 = v13[1];
          if ( !(unsigned __int8)sub_1C0A40(v35, v21, v38, v20, *(int *)(v35 + 88)) )
            return 0;
          v22 = *(_QWORD *)(a1 + 96);
          v23 = *(int *)(v35 + 88);
          v37 = *(_QWORD *)v38;
          if ( !(unsigned __int8)sub_1C0A40(v35, v22, &v37, a6, v23) )
            return 0;
          v18 = v37;
          v17 = v35;
        }
      }
      if ( v18 < 0 || a6 + v18 > *(int *)(v17 + 88) )
        return 0;
      v26 = *((int *)v13 + 4);
      if ( *(_QWORD *)(*v13 + 440LL) >= v26 )
      {
        v27 = (_DWORD *)(*(_QWORD *)(*v13 + 432LL) + 104 * v26);
        if ( *v27 == 2 )
        {
          v36 = *(_QWORD *)(*v13 + 432LL) + 104 * v26;
          *(_QWORD *)v38 = 0;
          copy_tinfo_t(v38, v27 + 20);
          v31 = s1;
          if ( *(_QWORD *)(v36 + 40) )
            v31 = *(const char **)(v36 + 32);
          sub_118C90(a2, *v13, v31, v38, v36);
          clear_tinfo_t(v38);
          v30 = a6;
        }
        else
        {
          if ( *v27 != 3 )
            return 0;
          v28 = _mm_cvtsi32_si128(v27[22]);
          v29 = _mm_cvtsi32_si128(v27[2]);
          *(_DWORD *)v38 = 1;
          *(_QWORD *)&v38[4] = _mm_unpacklo_epi32(v28, v29).m128i_u64[0];
          sub_120CC0(a2);
          sub_1188E0(v38);
          v30 = a6;
        }
        if ( *(_BYTE *)a2 == 15 )
        {
          v34 = v30;
          if ( !(unsigned __int8)sub_1224C0(a2, (unsigned int)v37, (unsigned int)a6, 0) )
          {
            if ( !a7 )
              return 0;
            if ( v34 != get_tinfo_size(0, *a7, 0) )
            {
              if ( !under_debugger )
                sub_37DDE0(52865);
              BUG();
            }
            if ( !(unsigned __int8)sub_1224C0(a2, (unsigned int)v37, (unsigned int)a6, 2) )
              return 0;
            if ( *(_BYTE *)a2 == 15 )
              copy_tinfo_t(*(_QWORD *)(a2 + 8) + 48LL, a7);
          }
        }
        else if ( !(unsigned __int8)sub_122A50(a2, a1, (unsigned int)v37)
               || !(unsigned __int8)sub_126690(a2, a1, (unsigned int)a6, 256) )
        {
          return 0;
        }
        if ( (a5[1] & 0x40) != 0 )
          *(_BYTE *)(a2 + 1) |= 0x40u;
        *a3 = v13;
        return v7;
      }
    }
    sub_B3700();
  }
  if ( v11 != 4 )
  {
    v25 = *(_QWORD *)(a1 + 96);
    if ( (unsigned __int8)sub_118790(a5, v25, 0) != *(_BYTE *)(v25 + 145) )
      return v7;
  }
  *a3 = 0;
  sub_120CC0(a2);
  if ( *a5 == 2 && a6 > 8 )
    a6 = 8;
  return sub_126690(a2, a1, (unsigned int)a6, 256);
}
