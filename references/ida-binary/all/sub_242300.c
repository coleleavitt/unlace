__int64 __fastcall sub_242300(
        __int64 a1,
        char a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v12; // r9
  unsigned __int64 *v13; // rax
  char *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rsi
  _QWORD *v18; // rdi
  __int64 v20; // rdx
  char *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  __int128 v26; // [rsp+0h] [rbp-188h] BYREF
  __int64 v27; // [rsp+10h] [rbp-178h]
  __int64 v28; // [rsp+18h] [rbp-170h]
  __int64 v29; // [rsp+20h] [rbp-168h]
  char v30; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v31; // [rsp+168h] [rbp-20h] BYREF

  v31 = __readfsqword(0x28u);
  sub_240EA0(0, a3);
  v27 = -1;
  v13 = (unsigned __int64 *)&v30;
  v26 = -1;
  v28 = 0;
  v29 = 0;
  do
  {
    v14 = nullptr;
    v15 = 0;
    *(_WORD *)v13 = 0;
    v13 += 5;
    *((_WORD *)v13 - 19) = 0;
    *((_WORD *)v13 - 18) = 0;
    *((_DWORD *)v13 - 2) = 0;
    *((_WORD *)v13 - 17) = 0;
    *((_OWORD *)v13 - 2) = 0;
    *(v13 - 2) = 0;
  }
  while ( v13 != &v31 );
  v16 = *(_QWORD *)(a1 + 40);
  if ( !v16 )
    goto LABEL_13;
  v14 = (char *)dword_8BA594;
  v17 = *(_QWORD *)(v16 + 32LL * dword_8BA594 + 8);
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 )
    {
      v18 = qword_8CC600;
      if ( qword_8CC600 )
      {
        *(_QWORD *)qword_8CC600 = v17;
        v18[1] = v16;
        *((_DWORD *)v18 + 4) = (_DWORD)v14;
        if ( (unsigned int)sub_23D480((__int64)v18, 11, v16, v14, 0.0) == 1 )
        {
          v17 = *(_QWORD *)qword_8CC600;
          goto LABEL_9;
        }
LABEL_13:
        if ( (int)decode_insn(&v26, -1, v16, v14, v15, v12, 0.0) <= 0 )
          return 0;
        goto LABEL_11;
      }
    }
  }
LABEL_9:
  if ( (int)decode_insn(&v26, v17, v16, v14, v15, v12, 0.0) <= 0 )
    return 0;
LABEL_11:
  if ( !(unsigned __int8)is_ret_insn(&v26, 3) )
    return 0;
  return sub_241C80(a1, a2 == 0 ? 4098 : 4106, v20, v21, v22, v23, (__m128)0LL, a4, a5, a6, v24, v25, a9, a10);
}
