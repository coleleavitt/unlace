void __fastcall sub_1822260(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        double a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int8 v9; // al
  int v10; // eax
  signed __int64 v11; // rbx
  unsigned int v12; // r15d
  __int64 v13; // rax
  char *v14; // rsi
  void *v15; // r14
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __m128i *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v24; // [rsp+10h] [rbp-68h] BYREF
  __int64 v25; // [rsp+18h] [rbp-60h]
  void *v26[2]; // [rsp+20h] [rbp-58h] BYREF
  void *v27; // [rsp+30h] [rbp-48h]

  v9 = a3[2].m128i_u8[2];
  if ( (v9 & 0xF0) == 0xF0 )
    v10 = sub_FA77D0(a3);
  else
    v10 = v9 >> 4;
  if ( v10 || (unsigned __int8)sub_15EAA10((__int64)a3, a1, 1u) )
  {
    LODWORD(v11) = a3[3].m128i_u16[4];
    v27 = nullptr;
    *(_OWORD *)v26 = 0;
    if ( (_DWORD)v11 )
    {
      v12 = 0;
      while ( 1 )
      {
        v24 = 0;
        v25 = 0;
        if ( !(unsigned __int8)sub_1821C20(a1, (__int64)a3, v12, &v24, (__m128i)0LL, a5) )
          break;
        if ( v26[1] == v27 )
        {
          ++v12;
          sub_1245C50((__int64)v26, (char *)v26[1], &v24);
          if ( v12 == (_DWORD)v11 )
          {
LABEL_9:
            v15 = v26[0];
            v11 = ((char *)v26[1] - (char *)v26[0]) >> 4;
            goto LABEL_10;
          }
        }
        else
        {
          v13 = v25;
          v14 = (char *)v26[1] + 16;
          ++v12;
          *(_QWORD *)v26[1] = v24;
          *((_QWORD *)v14 - 1) = v13;
          v26[1] = v14;
          if ( (_DWORD)v11 == v12 )
            goto LABEL_9;
        }
      }
    }
    else
    {
      v15 = nullptr;
LABEL_10:
      v16 = *(_QWORD **)(a1 + 248);
      v17 = v16[294];
      v16[304] += 56LL;
      v18 = (__m128i *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v16[295] >= (unsigned __int64)&v18[3].m128i_u64[1] && v17 )
        v16[294] = (char *)v18 + 56;
      else
        v18 = (__m128i *)sub_986170((__int64)(v16 + 294), 56, 56, 3, a7, a8);
      sub_B38500(v18, *(__int64 **)(a1 + 248), a3, (__int64)v15, v11);
      sub_B8CC60(a2, (__int64)v18, v19, v20, v21, v22);
    }
    if ( v26[0] )
      operator delete(v26[0]);
  }
}
