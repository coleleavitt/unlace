__int64 __fastcall sub_35ED60(__int64 a1)
{
  __m128i v1; // xmm0
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // ebp
  unsigned __int64 v7; // r13
  unsigned __int8 *v8; // r13
  int v9; // eax
  int v10; // r14d
  __int64 v11; // rax
  unsigned int v12; // esi
  int v13; // r12d
  __int64 result; // rax
  unsigned __int64 v15; // r12
  unsigned __int64 i; // rdi
  __int64 v17; // rax
  unsigned int v18; // [rsp+Ch] [rbp-7Ch] BYREF
  _BYTE v19[24]; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v20[24]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h]
  _BYTE v22[8]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-30h]

  v1 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v2 = *(_QWORD *)(a1 + 104);
  v23 = __readfsqword(0x28u);
  *(_WORD *)(a1 + 17) = 256;
  *(_QWORD *)&v19[16] = v2;
  *(__m128i *)v19 = v1;
  sub_35E100((_QWORD *)a1);
  if ( *(_BYTE *)(a1 + 19) && !(unsigned __int8)sub_35E530(a1) )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)a1;
  v18 = -1;
  v5 = *(_QWORD *)(v4 + 32);
  *(__m128i *)v20 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v6 = 0;
  *(_QWORD *)(a1 + 32) = (v5 == 0) + v5 - 1;
  v21 = 0xFFFFFFFFLL;
  *(_QWORD *)&v20[16] = *(_QWORD *)(a1 + 104);
  while ( 1 )
  {
    v7 = *(_QWORD *)(a1 + 24) + 1LL;
    if ( v7 >= (unsigned __int16)getinf(42)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 16LL))(*(_QWORD *)(a1 + 120)) )
    {
      sub_35E460((_QWORD *)a1);
      if ( !*(_BYTE *)(a1 + 46) )
        goto LABEL_28;
LABEL_20:
      v13 = 1;
      if ( !v6 )
        goto LABEL_15;
      goto LABEL_21;
    }
    v8 = v22;
    v9 = sub_8B7CF0(a1 + 120, v22, &v18);
    if ( v9 == 1 )
      break;
    if ( v9 == 2 )
    {
      while ( 1 )
      {
        v12 = *v8;
        if ( !(_BYTE)v12 )
          break;
        ++v8;
        if ( !(unsigned __int8)sub_35EC40((_QWORD *)a1, v12) )
          goto LABEL_13;
      }
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 46)
        && (v10 = v21, v10 == (unsigned __int8)getinf(50))
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 16LL))(*(_QWORD *)(a1 + 120))
        || !(unsigned int)sub_35ECE0((__int64 *)a1, v18, (__int64)v22) )
      {
        sub_3599E0(a1 + 48, (__int64)v20);
        sub_35E460((_QWORD *)a1);
        if ( *(_BYTE *)(a1 + 46) )
          goto LABEL_20;
LABEL_28:
        if ( v6 )
          return (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 16LL))(*(_QWORD *)(a1 + 120))
               ^ 1u;
LABEL_29:
        if ( *(_BYTE *)(a1 + 45) )
        {
          v15 = *(_QWORD *)(a1 + 80);
          for ( i = *(_QWORD *)(a1 + 96); i < v15; ++i )
          {
            if ( (unsigned __int8)get_byte(i) )
              goto LABEL_15;
          }
          if ( *(_BYTE *)(a1 + 19) )
          {
            sub_35E260((_QWORD *)a1);
            sub_35E460((_QWORD *)a1);
          }
          *(_QWORD *)(a1 + 96) = *(_QWORD *)(a1 + 80);
          return 0;
        }
LABEL_15:
        sub_3599E0(a1 + 48, (__int64)v19);
        *(_QWORD *)(*(_QWORD *)a1 + 32LL) = 0;
        return 0xFFFFFFFFLL;
      }
      v11 = *(_QWORD *)(a1 + 101);
      ++v6;
      *(__m128i *)v20 = _mm_loadu_si128((const __m128i *)(a1 + 88));
      *(_QWORD *)&v20[13] = v11;
      LODWORD(v21) = v18;
    }
  }
LABEL_13:
  sub_35E460((_QWORD *)a1);
  if ( !*(_BYTE *)(a1 + 46) )
  {
    if ( !v6 )
      goto LABEL_29;
    goto LABEL_15;
  }
  v13 = -1;
  if ( !v6 )
    goto LABEL_15;
LABEL_21:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 16LL))(*(_QWORD *)(a1 + 120)) )
    return 0;
  if ( v18 || (result = *(unsigned int *)(a1 + 104), (_DWORD)result) )
  {
    if ( v13 == 1
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 120) + 16LL))(*(_QWORD *)(a1 + 120)) )
    {
      return 1;
    }
    v17 = *(_QWORD *)&v19[13];
    *(__m128i *)(a1 + 88) = _mm_load_si128((const __m128i *)v19);
    *(_QWORD *)(a1 + 101) = v17;
    goto LABEL_15;
  }
  return result;
}
