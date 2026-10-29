__int64 __fastcall sub_1571A90(const __m128i *a1, unsigned int a2, _QWORD *a3, __int64 a4, __m128i a5, double a6)
{
  char v8; // al
  unsigned __int64 v9; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int16 v16; // ax
  char v17; // al
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r15
  __int64 v20; // rcx
  unsigned __int64 v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int16 v24; // ax
  char v25; // [rsp+Ch] [rbp-4Ch]
  char v26; // [rsp+Ch] [rbp-4Ch]
  int v27[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v8 = sub_1571800(a1, a2, a5);
  if ( v9 <= 1 )
  {
LABEL_2:
    v27[0] = 29556759;
    sub_15680D0((__int64)a1, v27, (_WORD *)&dword_0 + 1, 2);
    return 1;
  }
  v11 = a3[1];
  v12 = v9;
  if ( (unsigned __int64)(v11 + 1) > a3[2] )
  {
    v26 = v8;
    sub_2236E10(a3, a3 + 3, v11 + 1, 1);
    v11 = a3[1];
    v8 = v26;
  }
  v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
  *(_BYTE *)(*a3 + v11) = v8;
  v14 = *(unsigned int *)(a4 + 8);
  v15 = *(unsigned int *)(a4 + 12);
  ++a3[1];
  if ( v14 + 1 > v15 )
  {
    sub_2237220(a4, a4 + 16, v14 + 1, 8);
    v14 = *(unsigned int *)(a4 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a4 + 8 * v14) = v13;
  v16 = a1[2].m128i_i16[0];
  ++*(_DWORD *)(a4 + 8);
  if ( v16 != 23 )
  {
LABEL_8:
    if ( v16 != 451 )
    {
      while ( 1 )
      {
        sub_1569A00((__int64)a1, 0x42u, 14, &byte_22F0C30, 0, a5, a6);
        v17 = sub_1571800(a1, a2, a5);
        v19 = v18;
        if ( v18 <= 1 )
          goto LABEL_2;
        v20 = a3[1];
        if ( (unsigned __int64)(v20 + 1) > a3[2] )
        {
          v25 = v17;
          sub_2236E10(a3, a3 + 3, v20 + 1, 1);
          v20 = a3[1];
          v17 = v25;
        }
        v21 = v19 & 0xFFFFFFFFFFFFFFFELL;
        *(_BYTE *)(*a3 + v20) = v17;
        v22 = *(unsigned int *)(a4 + 8);
        v23 = *(unsigned int *)(a4 + 12);
        ++a3[1];
        if ( v22 + 1 > v23 )
        {
          sub_2237220(a4, a4 + 16, v22 + 1, 8);
          *(_QWORD *)(*(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8)) = v21;
          v16 = a1[2].m128i_i16[0];
          ++*(_DWORD *)(a4 + 8);
          if ( v16 != 23 )
            goto LABEL_8;
          return 0;
        }
        *(_QWORD *)(*(_QWORD *)a4 + 8 * v22) = v21;
        v24 = a1[2].m128i_i16[0];
        ++*(_DWORD *)(a4 + 8);
        if ( v24 == 451 || v24 == 23 )
          return 0;
      }
    }
  }
  return 0;
}
