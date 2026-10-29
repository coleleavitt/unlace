__int64 __fastcall sub_F9FB0(__int64 *a1, int a2, int a3, int a4)
{
  __int64 v7; // rdi
  int v9; // eax
  __int64 v10; // rdx
  int v11; // r12d
  const __m128i *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  __m128i v22; // [rsp+0h] [rbp-58h] BYREF
  __m128i v23; // [rsp+10h] [rbp-48h]
  __int64 v24; // [rsp+20h] [rbp-38h]
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  sub_91990((unsigned __int8 *)a1);
  if ( a2 < 0 )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 144))(a1, 1);
    return 1;
  }
  v7 = a1[1];
  if ( a2 >= *(_DWORD *)(v7 + 16) )
  {
    (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 144))(a1, 0);
    return 1;
  }
  if ( a3 < 0 )
  {
    if ( (unsigned int)(a4 - 1) <= 1 )
    {
      v9 = *(_DWORD *)(v7 + 760);
      if ( v9 <= 0 )
      {
        v21 = v9 - 1;
        *(_DWORD *)(v7 + 760) = v21;
        v10 = *a1;
        if ( v21 < -64 )
        {
          (*(void (__fastcall **)(__int64 *, __int64))(v10 + 160))(a1, 1);
          return 1;
        }
      }
      else
      {
        *(_DWORD *)(v7 + 760) = -1;
        v10 = *a1;
      }
      (*(void (__fastcall **)(__int64 *, __int64))(v10 + 152))(a1, 1);
      return 1;
    }
    return 0;
  }
  if ( a3 >= *(_DWORD *)(v7 + 20) )
  {
    if ( (unsigned int)(a4 - 1) <= 1 )
    {
      v18 = *(_DWORD *)(v7 + 760);
      if ( v18 <= 0 )
      {
        *(_DWORD *)(v7 + 760) = 1;
        v20 = *a1;
      }
      else
      {
        v19 = v18 + 1;
        *(_DWORD *)(v7 + 760) = v19;
        v20 = *a1;
        if ( v19 > 64 )
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(v20 + 160))(a1, 0);
          return 1;
        }
      }
      (*(void (__fastcall **)(__int64 *, _QWORD))(v20 + 152))(a1, 0);
      return 1;
    }
    return 0;
  }
  v11 = *(_DWORD *)(*(_QWORD *)(v7 + 960) + 72LL);
  v12 = (const __m128i *)sub_15D010(v7 + 440);
  v13 = a1[1];
  v22 = _mm_loadu_si128(v12);
  v23 = _mm_loadu_si128(v12 + 1);
  v14 = v12[2].m128i_i64[0];
  v23.m128i_i16[6] = v11 + a2;
  v24 = v14;
  v23.m128i_i16[7] = a3;
  ((void (__fastcall *)(__int64, __m128i *, _QWORD, __int64, __int64, __int64))sub_16AB10)(v13, &v22, 0, v15, v16, v17);
  return 0;
}

