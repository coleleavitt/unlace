__int64 __fastcall sub_4E84D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  int v8; // eax
  int v9; // r15d
  const __m128i *v10; // roff
  __int64 (*v11)(); // rax
  unsigned int v12; // eax
  char v13; // cl
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // edx
  int v18; // eax
  __m128i v19; // [rsp+10h] [rbp-58h] BYREF
  __int64 v20; // [rsp+20h] [rbp-48h]
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v4 = *(_DWORD *)a3 == 0x10000;
  v21 = __readfsqword(0x28u);
  if ( !v4 )
  {
    *(_DWORD *)a2 = *(_DWORD *)a3;
    return 0;
  }
  v8 = sub_4E7E40(a1, *(_DWORD *)a2, *(const __m128i **)(a3 + 8), a4);
  if ( v8 == 2 )
    return *(_DWORD *)a2 >= 0;
  if ( v8 == 1 )
    return 2;
  v9 = 1 << ((*(_DWORD *)a2 >> 29) & 3);
  if ( v9 > (int)get_dtype_size(*(unsigned __int8 *)(*(_QWORD *)(a3 + 8) + 5LL)) )
    return 2;
  v10 = *(const __m128i **)(a3 + 16);
  v19 = _mm_loadu_si128(v10);
  v20 = v10[1].m128i_i64[0];
  v11 = *(__int64 (**)())(*(_QWORD *)a1 + 64LL);
  if ( v11 == sub_4DC710
    || !((unsigned __int8 (__fastcall *)(__int64, __m128i *, __int64, _QWORD))v11)(a1, &v19, a4, *(_QWORD *)(a1 + 24)) )
  {
    return 1;
  }
  v12 = sub_4E83B0(a1, (__int64)&v19, a4, *(__int64 **)(a1 + 24));
  if ( v12 == 0x10000 )
    return 2;
  if ( v9 <= 1 << ((v12 >> 29) & 3) )
  {
    v16 = dword_238A060[v9 - 1];
    if ( v16 != 0x10000 )
    {
      v17 = v16 | v12 & 0x9FFFFFFF;
      v18 = v17 | 0x10000000;
      v16 = v17 & 0xEFFFFFFF;
      if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 )
        v16 = v18;
    }
    goto LABEL_17;
  }
  v13 = *(_BYTE *)(a3 + 24);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 8LL) != v9 && ((*(_BYTE *)(a2 + 3) & 0x10) != 0) != v13 )
    return 2;
  v14 = v12;
  v15 = v12 | 0x10000000;
  v16 = v14 & 0xEFFFFFFF;
  if ( v13 )
    v16 = v15;
LABEL_17:
  *(_DWORD *)a2 = v16;
  return 0;
}

