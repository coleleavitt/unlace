__int64 __fastcall sub_8E7580(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  const __m128i *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rbx
  _QWORD *v16; // r8
  _QWORD *v17; // r12
  _QWORD *v18; // r15
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 result; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rsi
  char v31[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v7 = *(const __m128i **)(a2 + 8);
  v7[2].m128i_i32[0] -= *(_DWORD *)(a2 + 32);
  v8 = v7[1].m128i_i64[0];
  v7[2].m128i_i8[13] = v7[2].m128i_i8[13] & 0xF9 | 4;
  v9 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = v8;
  v10 = v7[3].m128i_i64[1];
  v7[1].m128i_i64[0] = v9;
  if ( v10 )
  {
    v11 = 8LL * *(unsigned int *)(v10 - 4);
    v12 = v10 + v11;
  }
  else
  {
    v12 = 0;
    v11 = 0;
  }
  v13 = 8LL * a4;
  v14 = v10 + v13;
  if ( v13 != v11 )
  {
    do
    {
      while ( (*(_BYTE *)(*(_QWORD *)v14 + 45LL) & 1) == 0 )
      {
        v14 += 8;
        if ( v14 == v12 )
          goto LABEL_8;
      }
      v14 += 8;
      sub_97A460(a1 + 8712);
    }
    while ( v14 != v12 );
LABEL_8:
    v10 = v7[3].m128i_i64[1];
  }
  v15 = a2;
  do
  {
    *(_QWORD *)(v15 + 8) = a2;
    v15 = *(_QWORD *)(v15 + 16);
  }
  while ( a2 != v15 );
  if ( v10 )
    *(_DWORD *)(v10 - 4) = a4;
  v16 = *(_QWORD **)(v15 + 56);
  if ( v16 )
  {
    v17 = &v16[*((unsigned int *)v16 - 1)];
    if ( v17 != v16 )
    {
      v18 = *(_QWORD **)(v15 + 56);
      do
      {
        v19 = *v18;
        if ( (*(_BYTE *)(*v18 + 45LL) & 1) != 0 )
        {
          v20 = *(_QWORD *)(v19 + 24);
          if ( ((*(_BYTE *)(v19 + 44) & 0x10) == 0
             || *(_QWORD *)(*(_QWORD *)(v19 + 112) + 8LL) != *(_QWORD *)(*(_QWORD *)(v19 + 120) + 8LL))
            && (v19 == v20 || !(unsigned __int8)sub_B39690(*v18, v20, v31)) )
          {
            *(_QWORD *)(v19 + 24) = sub_97A910(a1 + 8712, v19);
          }
        }
        ++v18;
      }
      while ( v17 != v18 );
    }
  }
  v21 = v7[4].m128i_i64[1];
  if ( v21 )
  {
    sub_8E74D0(a1, v7);
  }
  else
  {
    v27 = (unsigned int)(v7[4].m128i_i32[0] >> 8);
    if ( (_DWORD)v27 != -1 )
    {
      v28 = v7[4].m128i_i8[0];
      if ( v7[4].m128i_i8[0] == -1 )
        BUG();
      v29 = *(_QWORD *)(a1 + 8672);
      if ( v29 && v28 < *(_DWORD *)(v29 - 4) )
        v21 = *(_QWORD *)(v29 + 8LL * v28);
      if ( v7 != *(const __m128i **)(*(_QWORD *)(*(_QWORD *)(v21 + 32) + 8 * v27) + 8LL) )
        v7[4].m128i_i32[0] = -1;
    }
  }
  v22 = qword_1C7EC58;
  *(_QWORD *)(a3 + 80) = 0;
  *(_QWORD *)(a3 + 88) = v22;
  v23 = *(_QWORD *)(v15 + 88);
  *(_BYTE *)(a3 + 52) = 0;
  result = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 88) = v22;
  *(_QWORD *)(v15 + 80) = 0;
  *(_BYTE *)(v15 + 52) = 0;
  if ( result )
  {
    while ( 1 )
    {
      v25 = *(_QWORD *)(result + 80);
      v26 = v23;
      v23 = *(_QWORD *)(result + 88);
      *(_QWORD *)(result + 80) = v15;
      *(_QWORD *)(result + 88) = v26;
      v15 = result;
      *(_BYTE *)(result + 52) = 0;
      if ( !v25 )
        break;
      result = v25;
    }
  }
  return result;
}

