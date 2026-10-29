/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_434860
// Address: 0x0000000000434860

//----- (0000000000434860) ----------------------------------------------------
__int64 __fastcall sub_434860(
        const char *a1,
        int a2,
        const void *a3,
        unsigned __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  pthread_mutex_t *v14; // r13
  __int64 *v15; // r14
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r15
  unsigned __int64 v21; // rdx
  char *v22; // rdi
  unsigned int v23; // ebx
  unsigned __int64 v25; // rax
  char *v26; // rax
  char *v27; // rax
  char v28; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v29; // [rsp+8h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v14 = (pthread_mutex_t *)qword_4C8210;
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
  v15 = (__int64 *)sub_438630();
  v18 = sub_4396E0(v15, a1, a5, a6, a7, a8, v16, v17, a11, a12);
  if ( v18 == -1 )
  {
    v23 = 0;
    goto LABEL_5;
  }
  v19 = *v15;
  v28 = 0;
  v20 = *(_QWORD *)(v19 + 8 * v18);
  v21 = *(_QWORD *)(v20 + 40);
  v22 = *(char **)(v20 + 32);
  if ( a4 >= v21 )
  {
    if ( v21 >= a4 )
      goto LABEL_4;
    v25 = *(_QWORD *)(v20 + 48);
    if ( &v28 < v22 || &v28 >= &v22[v25] )
    {
      if ( v25 >= a4
        || (v26 = (char *)sub_481540(v20 + 32, *(void **)(v20 + 32), a4, 1u),
            v21 = *(_QWORD *)(v20 + 40),
            *(_QWORD *)(v20 + 32) = v26,
            v22 = v26,
            v21 < a4) )
      {
        do
        {
          v22[v21++] = 0;
          v22 = *(char **)(v20 + 32);
        }
        while ( a4 != v21 );
      }
    }
    else if ( v25 >= a4
           || (v27 = (char *)sub_481540(v20 + 32, *(void **)(v20 + 32), a4, 1u),
               v21 = *(_QWORD *)(v20 + 40),
               *(_QWORD *)(v20 + 32) = v27,
               v22 = v27,
               v21 < a4) )
    {
      do
      {
        v22[v21++] = 0;
        v22 = *(char **)(v20 + 32);
      }
      while ( a4 != v21 );
    }
  }
  *(_QWORD *)(v20 + 40) = a4;
LABEL_4:
  memcpy(v22, a3, a4);
  sub_438C80((_QWORD *)(v20 + 32));
  *(_DWORD *)(v20 + 24) = a2;
  v23 = 1;
  *(_DWORD *)(v20 + 136) = 0;
LABEL_5:
  sub_482F10(v14);
  return v23;
}
// 4348A7: variable 'v16' is possibly undefined
// 4348A7: variable 'v17' is possibly undefined
