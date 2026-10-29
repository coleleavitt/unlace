__int64 __fastcall sub_252CF0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        const char *a10)
{
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rbp
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v18; // rbx
  double v19; // xmm4_8
  double v20; // xmm5_8
  const char *v21; // rsi
  int v22; // edi
  __int64 v23; // rdx
  char *v24; // rcx
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 v27; // rbp
  unsigned int v28; // ebx
  time_t v29; // rbp
  __int64 v30; // r13
  __int64 v31; // rdx
  char *v32; // rcx
  double v33; // xmm4_8
  double v34; // xmm5_8
  _QWORD *v35; // rdi
  int v36; // eax
  const char *v37; // rsi
  int v38; // edi
  __int64 v39; // [rsp+8h] [rbp-60h] BYREF
  int v40; // [rsp+10h] [rbp-58h] BYREF
  __int64 v41; // [rsp+18h] [rbp-50h]
  __int128 v42; // [rsp+20h] [rbp-48h]
  unsigned __int64 v43; // [rsp+38h] [rbp-30h]

  v43 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_debugger_on() || !(_QWORD)xmmword_8CC438 )
    return v43 - __readfsqword(0x28u);
  v10 = xmmword_8CC0F8;
  v11 = 0;
  if ( (_QWORD)xmmword_8CC0F8 )
  {
    do
    {
      v12 = 3 * v11++;
      sub_22C740(qword_8CC0F0 + 16 * v12);
    }
    while ( v10 != v11 );
    v13 = xmmword_8CC0F8;
    if ( (_QWORD)xmmword_8CC0F8 )
    {
      v14 = 0;
      do
      {
        v15 = (__int64 *)(qword_8CC0F0 + 48 * v14);
        v16 = *v15;
        if ( *v15 )
        {
          v15[1] = 0;
          *(double *)a1.m128_u64 = qfree(v16, a10);
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
  }
  *(_QWORD *)&xmmword_8CC0F8 = 0;
  if ( (dword_8BA5B0 & 2) != 0 )
    return v43 - __readfsqword(0x28u);
  v18 = getinf(16);
  if ( v18 == -1 )
  {
    v28 = 8;
    v29 = time(nullptr);
    if ( !dword_8CC5F0 )
      return v43 - __readfsqword(0x28u);
    while ( 1 )
    {
      if ( byte_8CC55A || time(nullptr) - v29 > 1 )
        return v43 - __readfsqword(0x28u);
      if ( dword_8CC5F0 > 0 && (*(_BYTE *)(dbg + 32) & 0x40) != 0 )
        goto LABEL_45;
      v37 = (const char *)(unsigned int)dword_8BA594;
      a1 = 0;
      v38 = *(_DWORD *)qword_8CC430;
      v40 = -2;
      v41 = -1;
      v42 = 0;
      v31 = (unsigned int)sub_23F680(v38, dword_8BA594, (const char *)&v40, 0.0);
      if ( !(_BYTE)v31 )
        break;
      v30 = v41;
      if ( v40 >= -1 && v41 )
      {
        *(_QWORD *)&v42 = 0;
        *(double *)a1.m128_u64 = qfree(v41, v37);
      }
      v39 = v30;
      if ( v30 != -1 )
      {
        v35 = qword_8CC600;
        if ( qword_8CC600 )
        {
          *(_QWORD *)qword_8CC600 = v30;
          v35[1] = &v39;
          v35[2] = 1;
          if ( (int)sub_23D480((__int64)v35, 19, v31, v32, *(double *)a1.m128_u64) > 0
            && *((_QWORD *)qword_8CC600 + 2) == 1 )
          {
            return v43 - __readfsqword(0x28u);
          }
        }
      }
LABEL_35:
      v36 = sub_252A30(v28, 2, v31, v32, a1, a2, a3, a4, v33, v34, a7, a8);
      if ( v36 >= 0 )
      {
        v28 = 8 * (v36 != 0);
        if ( dword_8CC5F0 )
          continue;
      }
      return v43 - __readfsqword(0x28u);
    }
    if ( v40 >= -1 && v41 )
    {
      *(_QWORD *)&v42 = 0;
      *(double *)a1.m128_u64 = qfree(v41, v37);
    }
LABEL_45:
    v39 = -1;
    goto LABEL_35;
  }
  if ( dword_8CC5F0 <= 0 || (*(_BYTE *)(dbg + 32) & 0x40) == 0 )
  {
    v21 = (const char *)(unsigned int)dword_8BA594;
    a1 = 0;
    v22 = *(_DWORD *)qword_8CC430;
    v40 = -2;
    v41 = -1;
    v42 = 0;
    if ( (unsigned __int8)sub_23F680(v22, dword_8BA594, (const char *)&v40, 0.0) )
    {
      v27 = v41;
      if ( v40 >= -1 && v41 )
      {
        *(_QWORD *)&v42 = 0;
        *(double *)a1.m128_u64 = qfree(v41, v21);
      }
      if ( v18 == v27 )
        return v43 - __readfsqword(0x28u);
    }
    else if ( v40 >= -1 )
    {
      if ( v41 )
      {
        *(_QWORD *)&v42 = 0;
        *(double *)a1.m128_u64 = qfree(v41, v21);
      }
    }
  }
  if ( (unsigned int)sub_23D8E0(
                       qword_8CC430,
                       v18,
                       2,
                       nullptr,
                       0,
                       0,
                       *(double *)a1.m128_u64,
                       a2,
                       a3,
                       a4,
                       v19,
                       v20,
                       a7,
                       a8) != 1 )
    return v43 - __readfsqword(0x28u);
  return sub_252A30(8, 2, v23, v24, a1, a2, a3, a4, v25, v26, a7, a8);
}
