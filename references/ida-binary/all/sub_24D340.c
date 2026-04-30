__int64 __fastcall pathmap_chooser_t__::vfunc_10(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v9; // rsi
  const char *v10; // r12
  __int64 *v11; // r13
  _QWORD *v12; // rbx
  size_t v13; // rax
  size_t v14; // rbp
  unsigned int v15; // ebx
  void *v17; // rdi
  size_t v18; // r13
  __int64 v19; // rax
  const char *v20; // [rsp+0h] [rbp-1058h] BYREF
  __int128 v21; // [rsp+8h] [rbp-1050h]
  char v22[4104]; // [rsp+20h] [rbp-1038h] BYREF
  unsigned __int64 v23; // [rsp+1028h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v22[0] = 0;
  v9 = v22;
  v20 = nullptr;
  v21 = 0;
  if ( (unsigned __int8)sub_24CCD0((__int64 *)&v20, v22, nullptr, 0.0, a3, a4, a5, a6, a7, a8, a9) )
  {
    v10 = &s1;
    if ( (_QWORD)v21 )
    {
      v10 = v20;
      if ( v22[0] )
        goto LABEL_4;
    }
    else if ( v22[0] )
    {
LABEL_4:
      v11 = *(__int64 **)(a1 + 184);
      v9 = v22;
      v12 = (_QWORD *)sub_239CC0(v11, v22);
      if ( !v12 )
      {
        v9 = v22;
        v12 = sub_239A90(v11, v22, v10);
      }
      if ( v10 && (v13 = strlen(v10), (v14 = v13) != 0) )
      {
        v17 = (void *)v12[3];
        v18 = v13 + 1;
        if ( v12[5] < v13 + 1 )
        {
          v19 = qvector_reserve(v12 + 3, v12[3], v18, 1);
          v12[3] = v19;
          v17 = (void *)v19;
        }
        v12[4] = v18;
        v9 = v10;
        memmove(v17, v10, v14);
        *(_BYTE *)(v12[3] + v14) = 0;
      }
      else
      {
        v12[4] = 0;
      }
    }
    v15 = 1;
    goto LABEL_11;
  }
  v15 = 0;
LABEL_11:
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20, v9);
  }
  return v15;
}
