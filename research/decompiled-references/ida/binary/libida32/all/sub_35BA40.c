__int64 __fastcall sub_35BA40(__int64 a1)
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
  __m128i v11; // xmm0
  unsigned int v12; // esi
  int v13; // r12d
  __int64 result; // rax
  unsigned int v15; // r12d
  __int64 i; // rdi
  char v17; // al
  unsigned int v18; // [rsp+Ch] [rbp-7Ch] BYREF
  __m128i v19; // [rsp+10h] [rbp-78h] BYREF
  __int64 v20; // [rsp+20h] [rbp-68h]
  __m128i v21; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22; // [rsp+40h] [rbp-48h]
  __int64 v23; // [rsp+48h] [rbp-40h]
  _BYTE v24[8]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-30h]

  v1 = _mm_loadu_si128((const __m128i *)(a1 + 80));
  v2 = *(_QWORD *)(a1 + 96);
  v25 = __readfsqword(0x28u);
  *(_WORD *)(a1 + 17) = 256;
  v20 = v2;
  v19 = v1;
  sub_35ADF0((_QWORD *)a1);
  if ( *(_BYTE *)(a1 + 19) && !(unsigned __int8)sub_35B220(a1) )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)a1;
  v18 = -1;
  v5 = *(_QWORD *)(v4 + 32);
  v21 = _mm_loadu_si128((const __m128i *)(a1 + 80));
  v6 = 0;
  *(_QWORD *)(a1 + 32) = (v5 == 0) + v5 - 1;
  v23 = 0xFFFFFFFFLL;
  v22 = *(_QWORD *)(a1 + 96);
  while ( 1 )
  {
    v7 = *(_QWORD *)(a1 + 24) + 1LL;
    if ( v7 >= (unsigned __int16)getinf(42)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 16LL))(*(_QWORD *)(a1 + 112)) )
    {
      sub_35B150((_QWORD *)a1);
      if ( !*(_BYTE *)(a1 + 46) )
        goto LABEL_28;
LABEL_20:
      v13 = 1;
      if ( !v6 )
        goto LABEL_15;
      goto LABEL_21;
    }
    v8 = v24;
    v9 = sub_894330(a1 + 112, v24, &v18);
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
        if ( !(unsigned __int8)sub_35B920((_QWORD *)a1, v12) )
          goto LABEL_13;
      }
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 46)
        && (v10 = v23, v10 == (unsigned __int8)getinf(50))
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 16LL))(*(_QWORD *)(a1 + 112))
        || !(unsigned int)sub_35B9C0((__int64 *)a1, v18, (__int64)v24) )
      {
        sub_356620((__m128i *)(a1 + 48), &v21);
        sub_35B150((_QWORD *)a1);
        if ( *(_BYTE *)(a1 + 46) )
          goto LABEL_20;
LABEL_28:
        if ( v6 )
          return (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 16LL))(*(_QWORD *)(a1 + 112))
               ^ 1u;
LABEL_29:
        if ( *(_BYTE *)(a1 + 45) )
        {
          v15 = *(_DWORD *)(a1 + 76);
          for ( i = *(unsigned int *)(a1 + 88); (unsigned int)i < v15; i = (unsigned int)(i + 1) )
          {
            if ( (unsigned __int8)get_byte(i) )
              goto LABEL_15;
          }
          if ( *(_BYTE *)(a1 + 19) )
          {
            sub_35AF50((_QWORD *)a1);
            sub_35B150((_QWORD *)a1);
          }
          *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 76);
          return 0;
        }
LABEL_15:
        sub_356620((__m128i *)(a1 + 48), &v19);
        *(_QWORD *)(*(_QWORD *)a1 + 32LL) = 0;
        return 0xFFFFFFFFLL;
      }
      v11 = _mm_loadu_si128((const __m128i *)(a1 + 80));
      ++v6;
      LOBYTE(v22) = *(_BYTE *)(a1 + 96);
      v21 = v11;
      LODWORD(v23) = v18;
    }
  }
LABEL_13:
  sub_35B150((_QWORD *)a1);
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
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 16LL))(*(_QWORD *)(a1 + 112)) )
    return 0;
  if ( v18 || (result = *(unsigned int *)(a1 + 92), (_DWORD)result) )
  {
    if ( v13 == 1
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 16LL))(*(_QWORD *)(a1 + 112)) )
    {
      return 1;
    }
    v17 = v20;
    *(__m128i *)(a1 + 80) = _mm_load_si128(&v19);
    *(_BYTE *)(a1 + 96) = v17;
    goto LABEL_15;
  }
  return result;
}

