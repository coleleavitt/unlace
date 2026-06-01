__int64 __fastcall sub_1632B0(__int64 a1, __int64 **a2, unsigned __int8 a3)
{
  __int64 v3; // rbx
  bool v4; // zf
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  int v13; // eax
  __int64 v14; // rdi
  __m128i v15; // xmm0
  __int64 v16; // r14
  __m128i v17; // [rsp+0h] [rbp-58h] BYREF
  __m128i v18; // [rsp+10h] [rbp-48h] BYREF
  int v19; // [rsp+20h] [rbp-38h]
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v3 = a1;
  v4 = *(_BYTE *)(a1 + 984) == 0;
  v20 = __readfsqword(0x28u);
  v19 = 0;
  v18.m128i_i64[0] = 0;
  v18.m128i_i64[1] = -1;
  v17 = 0;
  if ( v4 )
  {
    a1 = 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 480) )
      goto LABEL_18;
    a1 = 0;
    if ( *(_DWORD *)(v3 + 472) == 1 )
      a1 = *(_QWORD *)(v3 + 848);
  }
  v8 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, &v17, a3);
  if ( !v8 )
    return 0;
  if ( a3 )
  {
    v13 = v19;
    v11 = v3 + 216;
    v14 = *(_QWORD *)(v3 + 256);
    *(__m128i *)(v3 + 216) = _mm_load_si128(&v17);
    v15 = _mm_load_si128(&v18);
    *(_DWORD *)(v3 + 248) = v13;
    *(__m128i *)(v3 + 232) = v15;
    v16 = *v8;
    if ( v14 )
    {
      qfree();
      *(_QWORD *)(v3 + 256) = 0;
    }
    if ( v16 )
      *(_QWORD *)(v3 + 256) = (*(__int64 (__fastcall **)(__int64, __m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v16 + 16LL))(
                                v16,
                                &v17,
                                v6,
                                v7,
                                v9,
                                v10,
                                v17.m128i_i64[0],
                                v17.m128i_i64[1],
                                v18.m128i_i64[0],
                                v18.m128i_i64[1]);
    goto LABEL_9;
  }
  if ( !*(_QWORD *)(v3 + 480) )
LABEL_18:
    sub_1582F0(a1);
  v11 = v3 + 440;
LABEL_9:
  if ( a2 )
    *a2 = v8;
  return v11;
}

