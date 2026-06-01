__int64 __fastcall sub_C986D0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 v6; // r15
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned __int64 v13; // r12
  int v14; // eax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // r9d
  unsigned __int64 v18; // rcx
  int v19; // r8d
  __int64 result; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rdi
  __m128i v27; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v28; // [rsp+20h] [rbp-78h] BYREF
  __m128i v29; // [rsp+28h] [rbp-70h] BYREF
  __m128i v30[5]; // [rsp+40h] [rbp-58h] BYREF

  v6 = a3;
  v11 = *a2;
  if ( !*a2 )
  {
    v16 = a3 & 0xFFFFFFFFFFFFFFF0LL;
    v17 = 0;
    v13 = 0;
    v15 = 0;
    goto LABEL_12;
  }
  v12 = (v11 >> 1) & 1;
  if ( ((v11 >> 1) & 1) != 0 )
    goto LABEL_27;
  v13 = v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v11 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
LABEL_28:
    v15 = 0;
    v16 = v6 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_8;
  }
  v14 = *(_BYTE *)(v13 + 28) & 0x7F;
  if ( (unsigned int)(v14 - 26) > 0x1A )
  {
LABEL_27:
    v13 = 0;
    goto LABEL_28;
  }
  v6 = *(_QWORD *)(v13 + 48);
  if ( (unsigned int)(v14 - 40) > 6 )
    goto LABEL_28;
  v15 = sub_B4F900(v11 & 0xFFFFFFFFFFFFFFFCLL);
  v16 = v6 & 0xFFFFFFFFFFFFFFF0LL;
  v11 = *a2;
  if ( !*a2 )
  {
    v17 = 0;
    goto LABEL_12;
  }
  v12 = (v11 >> 1) & 1;
LABEL_8:
  v17 = 0;
  if ( v12 )
  {
    v18 = v11 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v18 )
    {
      v17 = 1;
      if ( !v16 )
      {
        v6 = *(_QWORD *)(v18 + 8);
        v16 = v6 & 0xFFFFFFFFFFFFFFF0LL;
      }
    }
  }
LABEL_12:
  v19 = 1;
  if ( (v6 & 1) == 0 )
    v19 = *(_DWORD *)(v16 + 8) & 1;
  result = sub_E07C70(*(_QWORD *)(a1 + 496), (_DWORD)a2, *(_QWORD *)v16, unk_23CAED8, v19, v17, 0, 0, v15);
  if ( result )
  {
    *(_BYTE *)(result + 62) = a6;
    v27.m128i_i32[0] = sub_C7B590(a1, result);
    v27.m128i_i64[1] = v23;
    if ( v13 )
    {
      v24 = _mm_load_si128(&v27);
      v28 = v13;
      v29 = v24;
      sub_C97F80(v30, a1 + 504, (__int64 *)&v28, &v29, v21, v22);
    }
    v25 = *(_QWORD *)(a1 + 552);
    if ( a4 )
    {
      if ( v25 )
      {
        if ( *(_QWORD *)(v25 + 24) != a4 )
        {
          v26 = *(_QWORD *)(v25 + 16);
          if ( v26 )
          {
            v25 = *(_QWORD *)(v25 + 16);
            while ( a4 != *(_QWORD *)(v25 + 24) )
            {
              v25 = *(_QWORD *)(v25 + 16);
              if ( !v25 )
                goto LABEL_31;
            }
          }
        }
        goto LABEL_24;
      }
      v26 = 0x1003E0003LL;
LABEL_31:
      (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v26 + 16LL))(v26, &v27);
      return v27.m128i_u32[0] | 0x100000000LL;
    }
    if ( v25 )
    {
      if ( a5 == *(_DWORD *)(v25 + 32) )
      {
        v26 = *(_QWORD *)(a1 + 552);
        goto LABEL_31;
      }
      v26 = *(_QWORD *)(v25 + 16);
      if ( v26 )
      {
        while ( a5 != *(_DWORD *)(v26 + 32) )
        {
          v26 = *(_QWORD *)(v26 + 16);
          if ( !v26 )
            goto LABEL_24;
        }
        goto LABEL_31;
      }
    }
LABEL_24:
    (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v25 + 16LL))(v25, &v27);
    return v27.m128i_u32[0] | 0x100000000LL;
  }
  return result;
}

