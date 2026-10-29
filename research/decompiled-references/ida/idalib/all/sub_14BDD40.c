__int64 __fastcall sub_14BDD40(
        __int64 a1,
        __int64 a2,
        void (__fastcall *a3)(__int64),
        __int64 a4,
        unsigned __int8 a5,
        __m128i a6)
{
  unsigned int v7; // r14d
  __int64 v11; // rax
  __int16 v12; // dx
  __int64 *v13; // rdi
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v20; // rax
  __int64 *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v24; // [rsp+8h] [rbp-A0h]
  __int64 v25; // [rsp+10h] [rbp-98h]
  __m128i v28; // [rsp+20h] [rbp-88h] BYREF
  __int64 v29; // [rsp+30h] [rbp-78h]

  v7 = 0;
  while ( 1 )
  {
    if ( a3 )
      a3(a4);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) != 0 && *(_WORD *)(a1 + 32) == 24 )
    {
      sub_1564840(&v28, a1, a1 + 16, 2118);
      sub_AEA040((__int64)&v28);
      v11 = sub_14EE310(a1);
    }
    else
    {
      v11 = sub_14BDAD0(a1, 0, a6);
    }
    v12 = *(_WORD *)(a1 + 32);
    if ( v12 != 27 )
      break;
    v25 = v11;
    v20 = *(_QWORD *)(a1 + 96);
    v21 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    v23 = v20;
    sub_14634E0(v21, (int *)(a1 + 16));
    v11 = sub_1E53840(v23, v25 & 0xFFFFFFFFFFFFFFFELL, *(unsigned int *)(a1 + 40));
LABEL_9:
    if ( v11 == 1 )
    {
      if ( a5 )
        return a5;
      v28.m128i_i32[0] = 1507394;
      v7 = 1;
      sub_15680D0(a1, &v28, 2, 3);
      if ( *(_WORD *)(a1 + 32) != 66 )
        return v7;
    }
    else
    {
      v17 = *(unsigned int *)(a2 + 8);
      v18 = v11 & 0xFFFFFFFFFFFFFFFELL;
      if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
      {
        v24 = v18;
        sub_2237220(a2, a2 + 16, v17 + 1, 8);
        v17 = *(unsigned int *)(a2 + 8);
        v18 = v24;
      }
      *(_QWORD *)(*(_QWORD *)a2 + 8 * v17) = v18;
      ++*(_DWORD *)(a2 + 8);
      if ( *(_WORD *)(a1 + 32) != 66 )
        return v7;
    }
    a6 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    v13 = *(__int64 **)(a1 + 8);
    v29 = *(_QWORD *)(a1 + 32);
    v14 = *(_DWORD *)(a1 + 16);
    v28 = a6;
    *(_DWORD *)(a1 + 40) = v14;
    sub_14634E0(v13, (int *)(a1 + 16));
    v15 = *(unsigned int *)(a1 + 2792);
    if ( (_DWORD)v15 )
    {
      v16 = *(_QWORD *)(a1 + 2784) + 24 * v15 - 24;
      if ( *(_WORD *)(a1 + 88) == *(_WORD *)(v16 + 14) && *(_DWORD *)(v16 + 16) == *(_DWORD *)(a1 + 90) )
        sub_1555D30(a1, v16, &v28);
    }
  }
  if ( v12 != 3 )
    goto LABEL_9;
  v22 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v22 + 760) )
  {
    *(_BYTE *)(v22 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v22 + 48) + 6LL) = 1;
  }
  v7 = 1;
  *(_WORD *)(a1 + 32) = 1;
  return v7;
}
