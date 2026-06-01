__int64 __fastcall sub_24D4C0(
        const char *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  double v9; // xmm4_8
  double v10; // xmm5_8
  unsigned int v11; // ebp
  double v13; // xmm4_8
  double v14; // xmm5_8
  const char *v15; // rsi
  const char *v16; // r14
  _QWORD *v17; // rbx
  size_t v18; // rax
  size_t v19; // r12
  void *v20; // rdi
  size_t v21; // r13
  __int64 v22; // rax
  const char *v23; // [rsp+0h] [rbp-1058h] BYREF
  __int128 v24; // [rsp+8h] [rbp-1050h]
  char v25[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v26; // [rsp+1028h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  if ( !(unsigned int)reg_int_op("ShowSourcePaths", 0, 1, 0) )
    return 0;
  if ( !a1 )
  {
    v11 = 1;
    sub_249C10((__int64)&qword_8CC000, a2, a3, a4, *(double *)a5.m128_u64, v9, v10, a8, a9);
    return v11;
  }
  v23 = nullptr;
  byte_8CBC80 = 0;
  v24 = 0;
  if ( (unsigned __int8)qdirname(v25, 4096, a1) )
  {
    v15 = v25;
    v11 = sub_24CCD0((__int64 *)&v23, v25, a1, 0.0, a3, a4, a5, v13, v14, a8, a9);
    if ( (_BYTE)v11 )
    {
      v16 = &s1;
      if ( (_QWORD)v24 )
        v16 = v23;
      if ( v25[0] )
      {
        v15 = v25;
        v17 = (_QWORD *)sub_239CC0(&qword_8CC000, v25);
        if ( !v17 )
        {
          v15 = v25;
          v17 = sub_239A90(&qword_8CC000, v25, v16);
        }
        if ( v16 && (v18 = strlen(v16), (v19 = v18) != 0) )
        {
          v20 = (void *)v17[3];
          v21 = v18 + 1;
          if ( v17[5] < v18 + 1 )
          {
            v22 = qvector_reserve(v17 + 3, v17[3], v21, 1);
            v17[3] = v22;
            v20 = (void *)v22;
          }
          v17[4] = v21;
          v15 = v16;
          memmove(v20, v16, v19);
          *(_BYTE *)(v17[3] + v19) = 0;
        }
        else
        {
          v17[4] = 0;
        }
      }
    }
    else
    {
      v15 = a1;
      sub_23B2D0(&qword_8CC000, (__int64)a1);
    }
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v23, v15);
    }
  }
  else
  {
    return 0;
  }
  return v11;
}
