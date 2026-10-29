__int64 __fastcall sub_2EF430(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // r13
  __int64 server_connection2; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  const char *v22; // rsi
  __int64 v24; // r12
  __int64 v25; // r15
  __int64 i; // r13
  __int64 v27; // rdx
  __m128 v28; // xmm0
  __m128 v29; // xmm1
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  const char *v36; // [rsp+0h] [rbp-58h] BYREF
  __int128 v37; // [rsp+8h] [rbp-50h]
  unsigned __int64 v38; // [rsp+18h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( (_DWORD)a1 )
  {
    v13 = *(_QWORD *)(get_current_config(a1, a2, a3) + 640);
    if ( !*(_QWORD *)(v13 + 16) )
      goto LABEL_3;
  }
  else
  {
    v13 = *(_QWORD *)(get_current_config(a1, a2, a3) + 632);
    if ( !*(_QWORD *)(v13 + 16) )
      goto LABEL_3;
  }
  if ( !strcmp(*(const char **)(v13 + 8), "lumina.hex-rays.com")
    && *(_WORD *)(v13 + 32) == 443
    && (int)sub_1698A0(
              0,
              (int)"AUTOHIDE REGISTRY\nHIDECANCEL\nDo you wish to send metadata to the public Lumina server?") <= 0 )
  {
    return 0;
  }
LABEL_3:
  server_connection2 = get_server_connection2((unsigned int)a1);
  if ( !server_connection2 )
    return 0;
  v36 = nullptr;
  v37 = 0;
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, const char **, _QWORD, _QWORD))(*(_QWORD *)server_connection2
                                                                                             + 80LL))(
          server_connection2,
          a2,
          a3,
          &v36,
          0,
          0);
  if ( (_BYTE)v17 )
  {
    v24 = a2[7];
    v22 = (const char *)a2[4];
    if ( (const char *)v24 == v22 && v24 == a2[1] )
    {
      if ( v24 )
      {
        v25 = 0;
        for ( i = 0; i != v24; ++i )
        {
          v27 = *(unsigned int *)(a2[3] + 4 * i);
          if ( (_DWORD)v27 )
          {
            if ( (_DWORD)v27 == 1 )
              ++v25;
            else
              sub_169700(
                (int)"%a: error %d\n",
                *(_QWORD *)(*a2 + 8 * i),
                v27,
                v16,
                v18,
                v19,
                (__m128)0LL,
                a5,
                a6,
                a7,
                v20,
                v21,
                a10,
                a11,
                (char)v36);
          }
        }
        v28 = 0;
        if ( v25 < 0 )
          v28.m128_f32[0] = (float)(v25 & 1 | (unsigned int)((unsigned __int64)v25 >> 1))
                          + (float)(v25 & 1 | (unsigned int)((unsigned __int64)v25 >> 1));
        else
          v28.m128_f32[0] = (float)(int)v25;
        v29 = 0;
        if ( v24 < 0 )
          v29.m128_f32[0] = (float)(v24 & 1 | (unsigned int)((unsigned __int64)v24 >> 1))
                          + (float)(v24 & 1 | (unsigned int)((unsigned __int64)v24 >> 1));
        else
          v29.m128_f32[0] = (float)(int)v24;
        v22 = (const char *)v25;
        *(double *)v28.m128_u64 = (float)(v28.m128_f32[0] / v29.m128_f32[0]);
        sub_169700(
          (int)"%zu new out of %zu (%f ratio)\n",
          v25,
          v24,
          v16,
          v18,
          v19,
          v28,
          v29,
          a6,
          a7,
          v20,
          v21,
          a10,
          a11,
          (char)v36);
        if ( v25 )
          sub_169700(
            (int)"*** Thank you for your contribution! ***\n",
            v25,
            v30,
            v31,
            v32,
            v33,
            v28,
            v29,
            a6,
            a7,
            v34,
            v35,
            a10,
            a11,
            (char)v36);
      }
    }
    else
    {
      sub_169700(
        (int)"The reported number of pushed entries (%zu), differs from the amount that had to be pushed (%zu).\n",
        (__int64)v22,
        a2[7],
        v16,
        v18,
        v19,
        (__m128)0LL,
        a5,
        a6,
        a7,
        v20,
        v21,
        a10,
        a11,
        (char)v36);
    }
  }
  else
  {
    v22 = &s1;
    if ( (_QWORD)v37 )
      v22 = v36;
    sub_169700(
      (int)"lumina: %s\n",
      (__int64)v22,
      v15,
      v16,
      v18,
      v19,
      (__m128)0LL,
      a5,
      a6,
      a7,
      v20,
      v21,
      a10,
      a11,
      (char)v36);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36, v22);
  }
  return v17;
}
