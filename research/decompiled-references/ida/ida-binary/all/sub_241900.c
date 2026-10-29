__int64 __fastcall sub_241900(
        __int64 a1,
        unsigned int *a2,
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
  char *v13; // rcx
  __int64 v14; // r9
  unsigned __int64 *v15; // rax
  char *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rsi
  _QWORD *v20; // rdi
  double v22; // xmm4_8
  double v23; // xmm5_8
  unsigned __int64 v24; // rsi
  __int64 v25; // rdx
  _DWORD *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rsi
  char *v31; // rcx
  _QWORD *v32; // rdi
  __int128 v33; // [rsp+0h] [rbp-188h] BYREF
  __int64 v34; // [rsp+10h] [rbp-178h]
  __int64 v35; // [rsp+18h] [rbp-170h]
  __int64 v36; // [rsp+20h] [rbp-168h]
  char v37; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v38; // [rsp+168h] [rbp-20h] BYREF

  v38 = __readfsqword(0x28u);
  if ( !*(_DWORD *)(get_ph(a1, a2, a3) + 4) && *(_QWORD *)(a1 + 136) != -1 )
  {
    v25 = *a2;
    if ( (_DWORD)v25 )
    {
      v26 = (_DWORD *)qword_8CC430;
      v27 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
      if ( qword_8CC430 != v27 )
      {
        while ( (_DWORD)v25 != *v26 )
        {
          v26 += 64;
          if ( (_DWORD *)v27 == v26 )
            goto LABEL_3;
        }
        if ( v26 )
        {
          v28 = sub_23F1C0((__int64)v26, -1, a4, v25, v13);
          if ( v28 )
          {
            v29 = (unsigned int)dword_8BA590;
            if ( dword_8BA590 == -1 )
              return 0;
            v30 = *(_QWORD *)(v28 + 32LL * dword_8BA590 + 8);
            v31 = (char *)dbg;
            if ( dbg )
            {
              if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 )
              {
                v32 = qword_8CC600;
                if ( qword_8CC600 )
                {
                  *(_QWORD *)qword_8CC600 = v30;
                  v32[1] = v28;
                  *((_DWORD *)v32 + 4) = v29;
                  if ( (unsigned int)sub_23D480((__int64)v32, 11, v29, v31, a4) != 1 )
                    return 0;
                  v30 = *(_QWORD *)qword_8CC600;
                }
              }
            }
            if ( v30 >= *(_QWORD *)(a1 + 136) )
              return 0;
          }
        }
      }
    }
  }
LABEL_3:
  sub_240EA0(0, a4);
  v34 = -1;
  v15 = (unsigned __int64 *)&v37;
  v33 = -1;
  v35 = 0;
  v36 = 0;
  do
  {
    v16 = nullptr;
    v17 = 0;
    *(_WORD *)v15 = 0;
    v15 += 5;
    *((_WORD *)v15 - 19) = 0;
    *((_WORD *)v15 - 18) = 0;
    *((_DWORD *)v15 - 2) = 0;
    *((_WORD *)v15 - 17) = 0;
    *((_OWORD *)v15 - 2) = 0;
    *(v15 - 2) = 0;
  }
  while ( v15 != &v38 );
  v18 = *((_QWORD *)a2 + 5);
  if ( !v18 )
    goto LABEL_31;
  v16 = (char *)dword_8BA594;
  v19 = *(_QWORD *)(v18 + 32LL * dword_8BA594 + 8);
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 )
    {
      v20 = qword_8CC600;
      if ( qword_8CC600 )
      {
        *(_QWORD *)qword_8CC600 = v19;
        v20[1] = v18;
        *((_DWORD *)v20 + 4) = (_DWORD)v16;
        if ( (unsigned int)sub_23D480((__int64)v20, 11, v18, v16, 0.0) == 1 )
        {
          v19 = *(_QWORD *)qword_8CC600;
          goto LABEL_11;
        }
LABEL_31:
        if ( !(unsigned int)decode_insn(&v33, -1, v18, v16, v17, v14, 0.0) )
          return 0;
        goto LABEL_13;
      }
    }
  }
LABEL_11:
  if ( !(unsigned int)decode_insn(&v33, v19, v18, v16, v17, v14, 0.0) )
    return 0;
LABEL_13:
  if ( !(unsigned __int8)is_ret_insn(&v33, 3) )
    return 0;
  v24 = *(_QWORD *)(a1 + 128) - 1LL;
  if ( v24 > 0xFFFFFFFFFFFFFFFDLL )
    return 0;
  return sub_23D8E0((__int64)a2, v24, 2, nullptr, 0, 1, 0.0, a5, a6, a7, v22, v23, a10, a11);
}
