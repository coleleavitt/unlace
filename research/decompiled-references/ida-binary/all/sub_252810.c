__int64 __fastcall sub_252810(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 result; // rax
  int v13; // ebx
  unsigned int v14; // ebp
  const char *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  char v31; // [rsp+0h] [rbp-38h]
  int v32; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v33; // [rsp+8h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  result = a1 & 0xFFFFFEE7;
  if ( (a1 & 0xFFFFFEE7) == 0 )
  {
    if ( dword_8CC5F0 )
    {
      if ( byte_8CC55A )
      {
        sub_24FC00(a5, a6, a7, a8, a9, a10, a11, a12);
        byte_8CC55A = 0;
      }
      else
      {
        if ( dword_8CC5F0 < 0 )
          return result;
        v13 = a1;
        v14 = a2;
        if ( (*(_BYTE *)(dbg + 34) & 8) != 0 )
          JUMPOUT(0x23D5C0);
        if ( (_DWORD)a2 == -1 )
          v14 = dword_8BA5B4;
        free_debug_event(&qword_8CC340);
        v15 = (const char *)dbg;
        qword_8CC348 = -1;
        LOBYTE(qword_8CC350) = 0;
        qword_8CC340 = 0xFFFFFFFFLL;
        v32 = -1;
        sub_20CEA0(dbg, 10, &v32, &qword_8CC340, v14);
        v18 = v32;
        if ( v32 >= 0 )
        {
          if ( (*(_BYTE *)(dbg + 32) & 0x40) != 0 )
          {
            if ( byte_8CC0EA )
            {
              if ( (unsigned __int8)sub_541EF0() )
              {
                sub_541E70();
                v13 |= 2u;
                if ( v18 )
                  goto LABEL_11;
                if ( !sub_23DDB0(*(double *)a5.m128_u64, (__int64)v15, 10) )
                  sub_169700(
                    (int)"Failed to suspend the application\n",
                    10,
                    v25,
                    v26,
                    v27,
                    v28,
                    a5,
                    a6,
                    a7,
                    a8,
                    v29,
                    v30,
                    a11,
                    a12,
                    v31);
                return 2;
              }
            }
            else
            {
              sub_541EF0();
              v15 = (const char *)&unk_8BA570;
              if ( (unsigned __int8)QT::QElapsedTimer::isValid((QT::QElapsedTimer *)&unk_8BA570) )
              {
                v15 = (const char *)&unk_8BA570;
                if ( (__int64)QT::QElapsedTimer::elapsed((QT::QElapsedTimer *)&unk_8BA570) > 999 )
                {
                  v15 = "CANCEL Suspend\nRunning";
                  sub_1C76F0((int)"CANCEL Suspend\nRunning");
                  byte_8CC0EA = 1;
                }
              }
            }
          }
          if ( v18 )
          {
LABEL_11:
            sub_2334C0(*(double *)a5.m128_u64, (__int64)v15, 10, v16, v17);
            return (unsigned __int8)sub_24FE80(v13, 10, v19, v20, v21, v22, a5, a6, a7, a8, v23, v24, a11, a12);
          }
          return 2;
        }
        byte_8CC55A = 1;
      }
    }
    return 0xFFFFFFFFLL;
  }
  if ( under_debugger )
    BUG();
  interr(40055, a2, a3, a4, *(double *)a5.m128_u64);
  return sub_252A30();
}
