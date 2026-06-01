/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002D780
// Address: 0x000000014002D780

//----- (000000014002D780) ----------------------------------------------------
char __fastcall sub_14002D780(_QWORD *a1, unsigned __int64 a2, unsigned int *a3)
{
  __int16 *v5; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // esi
  int v8; // r15d
  int v9; // ebx
  unsigned int v10; // r13d
  unsigned int v11; // eax
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = (__int16 *)(a1[1] + *a1 - 2LL);
  if ( *v5 <= 0 )
    return 0;
  v6 = 0;
  v7 = 0;
  v13 = *a1 + a1[3];
  v8 = sub_14005B690(&v13, (unsigned __int64)v5);
  v9 = 0;
  if ( v8 <= 0 || v13 >= (unsigned __int64)v5 )
    return 0;
  while ( 1 )
  {
    v6 += sub_14005B690(&v13, (unsigned __int64)v5);
    v7 += sub_14005B690(&v13, (unsigned __int64)v5);
    v10 = sub_14005B690(&v13, (unsigned __int64)v5);
    v11 = sub_14005B690(&v13, (unsigned __int64)v5);
    if ( a2 >= v6 && a2 < v7 )
      break;
    if ( ++v9 >= v8 || v13 >= (unsigned __int64)v5 )
      return 0;
  }
  *a3 = v6;
  a3[1] = v7;
  a3[2] = v10;
  a3[3] = v11;
  return 1;
}
