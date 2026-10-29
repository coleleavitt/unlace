/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45AF60
// Address: 0x000000000045AF60

//----- (000000000045AF60) ----------------------------------------------------
__int64 __fastcall sub_45AF60(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v11; // rsi
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  void *v17; // r14
  unsigned int v18; // r13d
  int (__fastcall *v19)(__int64, _QWORD, _QWORD, void *, _QWORD); // r15
  unsigned int v20; // eax
  double v21; // xmm4_8
  double v22; // xmm5_8
  char *v23; // rdi
  unsigned int v24; // ebp
  __int64 v25; // r12
  __int64 v26; // rbx
  char *v27; // rax
  void *v28; // rdx
  unsigned int v30; // eax
  unsigned int v31; // [rsp+Ch] [rbp-8Ch] BYREF
  void *v32; // [rsp+10h] [rbp-88h] BYREF
  __int128 v33; // [rsp+18h] [rbp-80h]
  int v34; // [rsp+30h] [rbp-68h] BYREF
  void *v35; // [rsp+38h] [rbp-60h]
  __int128 v36; // [rsp+40h] [rbp-58h]
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v11 = s1;
  v12 = sub_45A880();
  if ( *(_QWORD *)(a1 + 16) )
    v11 = *(const char **)(a1 + 8);
  v13 = (*(__int64 (__fastcall **)(__int64, const char *, unsigned int *))(*(_QWORD *)v12 + 488LL))(v12, v11, &v31);
  v14 = v13;
  if ( v13 < 0 )
    goto LABEL_22;
  v15 = *(_QWORD *)(v12 + 680);
  v16 = (int)v15;
  if ( !v15 )
    v16 = *(int *)(v12 + 776);
  if ( (int)v14 >= (int)v16 )
  {
LABEL_22:
    if ( !byte_4C94E1 )
      sub_481AC0(30056);
    BUG();
  }
  v32 = nullptr;
  v33 = 0;
  v34 = -2;
  v35 = (void *)-1LL;
  v36 = 0;
  sub_4586A0((__int64)&v32, v16, (__int64)&v34);
  if ( v34 >= -1 && v35 )
  {
    *(_QWORD *)&v36 = 0;
    j__free(v35);
  }
  v17 = v32;
  v18 = v31;
  v19 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, void *, _QWORD))(*(_QWORD *)v12 + 224LL);
  v20 = sub_45A890();
  if ( v19(v12, v20, v18, v17, 0) <= 0 )
  {
    v30 = sub_42D8B0(a2, "failed to read register value", 0.0, a4, a5, a6, v21, v22, a9, a10);
    v23 = (char *)v32;
    v24 = v30;
  }
  else
  {
    v23 = (char *)v32;
    v24 = 0;
    *(_QWORD *)(a2 + 8) = *((_QWORD *)v32 + 4 * v14 + 1);
  }
  if ( v23 )
  {
    v25 = v33;
    if ( (_QWORD)v33 )
    {
      v26 = 0;
      do
      {
        v27 = &v23[32 * v26];
        if ( *(int *)v27 >= -1 )
        {
          v28 = *((void **)v27 + 1);
          if ( v28 )
          {
            *((_QWORD *)v27 + 2) = 0;
            j__free(v28);
            v23 = (char *)v32;
          }
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v33 = 0;
    j__free(v23);
  }
  return v24;
}
// 45B112: variable 'v21' is possibly undefined
// 45B112: variable 'v22' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;
