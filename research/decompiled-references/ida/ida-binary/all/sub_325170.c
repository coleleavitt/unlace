__int64 __fastcall sub_325170(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  _QWORD *first_seg; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  char v24; // [rsp+0h] [rbp-38h]
  __int16 v25; // [rsp+Ch] [rbp-2Ch] BYREF
  __int16 v26; // [rsp+Eh] [rbp-2Ah] BYREF
  _QWORD v27[5]; // [rsp+10h] [rbp-28h] BYREF

  v27[1] = __readfsqword(0x28u);
  first_seg = (_QWORD *)get_first_seg();
  if ( first_seg )
  {
    v9 = first_seg;
    v10 = *first_seg;
    v25 = 0;
    v26 = 3;
    v27[0] = v10;
    v11 = getinf(93);
    if ( v11 || !v27[0] )
    {
      v27[0] = v11;
      v25 = 2;
    }
    if ( (unsigned int)sub_507F10(
                         1028,
                         (unsigned int)sub_323640,
                         (unsigned int)&v25,
                         (unsigned int)v27,
                         (unsigned int)&v26,
                         v12) )
    {
      v13 = v27[0];
      if ( v25 )
      {
        if ( v25 != 1 )
          v13 = v27[0] - v11;
        v14 = v13;
      }
      else
      {
        v14 = v27[0] - *v9;
      }
      if ( v14 )
      {
        if ( sub_323E80(0, -1, v14) )
        {
          v15 = rebase_program(v14, (4 * (_BYTE)v26) & 8 | (2 * (unsigned int)((v26 & 1) == 0)));
          if ( v15 )
          {
            v16 = move_segm_strerror(v15);
            sub_169630((int)"%s", v16, v17, v18, v19, v20, a1, a2, a3, a4, v21, v22, a7, a8, v24);
          }
        }
      }
    }
  }
  return 1;
}
