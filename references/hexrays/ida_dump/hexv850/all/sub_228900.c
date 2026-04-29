unsigned __int64 __fastcall sub_228900(__int64 a1, _DWORD *a2, __int64 *a3)
{
  int v3; // eax
  signed int v5; // r14d
  __int64 v6; // r15
  int v7; // eax
  __int64 v8; // r12
  const char *v9; // r13
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rsi
  _QWORD *v13; // rax
  unsigned __int64 v14; // rdx
  char *v15; // rax
  const char *v16; // r13
  unsigned int v17; // r12d
  unsigned int v18; // r12d
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // rbp
  unsigned __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rsi
  __m128i si128; // xmm0
  __int64 v27; // rbp
  __int64 v28; // rbp
  __int64 v29; // rsi
  unsigned __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+8h] [rbp-50h]
  unsigned __int64 v38; // [rsp+18h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 56);
  v38 = __readfsqword(0x28u);
  if ( (v3 & 2) != 0 && (v3 & 0x200) == 0 )
  {
    if ( *(_QWORD *)(a1 + 8) > 1u )
      sub_F5F10(a3, (__int64)"stkvar \"%s\" ", *(const char **)a1);
  }
  else if ( (v3 & 0x24) != 0 && *(_QWORD *)(a1 + 8) > 1u )
  {
    sub_F5F10(a3, (__int64)"lvar \"%s\" ", *(const char **)a1);
  }
  v5 = *(_DWORD *)(a1 + 52);
  v6 = *(_QWORD *)(a1 + 32);
  v36 = 0;
  v37 = 0;
  cleanup_argloc(&v36);
  LODWORD(v36) = 1;
  v37 = v6;
  sub_1C2D00((__int64)&v36, a2, a3, v5, 2);
  cleanup_argloc(&v36);
  v7 = *(_DWORD *)(a1 + 56);
  if ( (v7 & 0x200) != 0 )
  {
    v28 = a3[1];
    if ( v28 )
    {
      v31 = v28 + 8;
      v30 = v28 + 9;
      v29 = *a3;
      --v28;
      if ( a3[2] >= v30 )
        goto LABEL_27;
    }
    else
    {
      v29 = *a3;
      v30 = 10;
      v31 = 9;
      if ( (unsigned __int64)a3[2] >= 0xA )
      {
LABEL_27:
        a3[1] = v30;
        *(_BYTE *)(v29 + v31) = 0;
        v32 = *a3 + v28;
        *(_QWORD *)v32 = 0x7264646174657228LL;
        *(_BYTE *)(v32 + 8) = 41;
        return v38 - __readfsqword(0x28u);
      }
    }
    v33 = qvector_reserve(a3, v29, v30, 1);
    *a3 = v33;
    v29 = v33;
    goto LABEL_27;
  }
  if ( (v7 & 0x10) == 0 )
  {
    if ( (v7 & 8) == 0 )
      return v38 - __readfsqword(0x28u);
    v8 = 15;
    v9 = "(has user info)";
    if ( (v7 & 2) != 0 )
    {
      v10 = a3[1];
      v11 = 15;
      if ( !v10 )
      {
LABEL_12:
        v12 = *a3;
        if ( a3[2] < (unsigned __int64)(v11 + 1) )
        {
          v34 = qvector_reserve(a3, v12, v11 + 1, 1);
          *a3 = v34;
          v12 = v34;
        }
        a3[1] = v11 + 1;
        *(_BYTE *)(v12 + v11) = 0;
        v13 = (_QWORD *)(v10 + *a3);
        *v13 = *(_QWORD *)v9;
        *(_QWORD *)((char *)v13 + v8 - 8) = *(_QWORD *)&v9[v8 - 8];
        v14 = (unsigned __int64)(v13 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v15 = (char *)v13 - v14;
        v16 = (const char *)(v9 - v15);
        v17 = ((_DWORD)v15 + v8) & 0xFFFFFFF8;
        if ( v17 >= 8 )
        {
          v18 = v17 & 0xFFFFFFF8;
          v19 = 0;
          do
          {
            v20 = v19;
            v19 += 8;
            *(_QWORD *)(v14 + v20) = *(_QWORD *)&v16[v20];
          }
          while ( v19 < v18 );
        }
        return v38 - __readfsqword(0x28u);
      }
    }
    else
    {
      v10 = a3[1];
      v8 = 14;
      v9 = "(user-defined)";
      v11 = 14;
      if ( !v10 )
        goto LABEL_12;
    }
    --v10;
    v11 = v8 + v10;
    goto LABEL_12;
  }
  v22 = a3[1];
  if ( v22 )
  {
    v24 = v22 + 21;
    v23 = v22 + 22;
    --v22;
  }
  else
  {
    v23 = 23;
    v24 = 22;
  }
  v25 = *a3;
  if ( a3[2] < v23 )
  {
    v35 = qvector_reserve(a3, v25, v23, 1);
    *a3 = v35;
    v25 = v35;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_4002A0);
  a3[1] = v23;
  *(_BYTE *)(v25 + v24) = 0;
  v27 = *a3 + v22;
  *(__m128i *)v27 = si128;
  *(_QWORD *)(v27 + 14) = 0x297265626D656D20LL;
  return v38 - __readfsqword(0x28u);
}
