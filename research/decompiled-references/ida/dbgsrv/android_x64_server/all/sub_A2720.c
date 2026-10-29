/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A2720
// Address: 0x00000000000A2720

//----- (00000000000A2720) ----------------------------------------------------
__int64 __fastcall sub_A2720(__int64 a1, int *a2, __int64 a3, int a4)
{
  int v4; // r15d
  __int64 **v6; // r13
  __int64 *v7; // r12
  int v8; // ebp
  unsigned __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rsi
  char *v12; // r14
  unsigned __int64 v13; // r13
  char **v14; // r15
  const void *v15; // rsi
  char *v16; // rdi
  __int64 **v19; // [rsp+8h] [rbp-70h]
  __int64 *v20; // [rsp+10h] [rbp-68h]
  unsigned __int64 v22; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v23[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = a4;
  v23[1] = (_QWORD *)__readfsqword(0x28u);
  if ( a4 > 0 )
  {
    v6 = (__int64 **)(a1 + 328);
    v7 = (__int64 *)(a1 + 336);
    v8 = 0;
    v20 = (__int64 *)(a1 + 336);
    v19 = (__int64 **)(a1 + 328);
    do
    {
      v9 = *(_QWORD *)a3;
      v22 = *(_QWORD *)a3;
      if ( *(_QWORD *)(a3 + 16) > 1u )
      {
        v23[0] = &v22;
        v12 = sub_A3D20(v6, &v22, (__int64)byte_103B50, v23);
        *((_QWORD *)v12 + 5) = *(_QWORD *)a3;
        if ( (char *)a3 != v12 + 40 )
        {
          v13 = *(_QWORD *)(a3 + 16);
          if ( v13 < 2 )
          {
            *((_QWORD *)v12 + 7) = 0;
          }
          else
          {
            v14 = (char **)(v12 + 48);
            v15 = *(const void **)(a3 + 8);
            if ( *((_QWORD *)v12 + 8) >= v13 )
            {
              v16 = *v14;
            }
            else
            {
              v15 = *(const void **)(a3 + 8);
              v16 = (char *)qvector_reserve((__int64)(v12 + 48), *v14, v13, 1u);
              *v14 = v16;
            }
            *((_QWORD *)v12 + 7) = v13;
            memmove(v16, v15, v13 - 1);
            *(_BYTE *)(*((_QWORD *)v12 + 6) + v13 - 1) = 0;
            v4 = a4;
          }
          v7 = v20;
          v6 = v19;
        }
        *((_DWORD *)v12 + 18) = *(_DWORD *)(a3 + 32);
        sub_9E530((__int64)(v12 + 80), a3 + 40);
        memcpy(v12 + 104, (const void *)(a3 + 64), 0x170u);
      }
      else
      {
        v10 = (__int64 *)*v7;
        if ( *v7 )
        {
          v11 = v7;
          do
          {
            if ( v10[4] >= v9 )
              v11 = v10;
            v10 = (__int64 *)v10[v10[4] < v9];
          }
          while ( v10 );
          if ( v11 != v7 && v9 >= v11[4] )
            sub_A3C60((__int64)v6, v11);
        }
      }
      ++v8;
      a3 += 432;
    }
    while ( v8 != v4 );
  }
  if ( a2 )
    *a2 = v4;
  return 1;
}
