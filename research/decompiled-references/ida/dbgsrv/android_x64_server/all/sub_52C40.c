/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52C40
// Address: 0x0000000000052C40

//----- (0000000000052C40) ----------------------------------------------------
unsigned __int64 __fastcall sub_52C40(__int64 *a1, _QWORD *a2)
{
  char v2; // r12
  __int64 *v4; // r15
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  char *v7; // rbx
  char *v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r12
  void *v11; // rdi
  void *v12; // rdi
  char *v13; // rdi
  char v15; // [rsp+7h] [rbp-51h]
  void **v16; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+10h] [rbp-48h]
  __int64 v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v18[1] = __readfsqword(0x28u);
  v2 = *(_BYTE *)(*a1 + 616);
  v18[0] = 0;
  if ( a2[1] )
  {
    v4 = a1 + 1;
    v15 = v2;
    v16 = (void **)(a1 + 1);
    while ( 1 )
    {
      v5 = a1[2];
      v6 = a1[3];
      if ( v6 >= v5 + 1 )
      {
        v7 = (char *)*v4;
      }
      else
      {
        v7 = (char *)qvector_reserve((__int64)v4, nullptr, v5 + 1, 0x38u);
        v17 = a1[3];
        a1[3] = v6;
        v8 = (char *)a1[1];
        v9 = a1[2] - 1;
        if ( v9 < 0 )
        {
          v4 = (__int64 *)v16;
        }
        else
        {
          v10 = 0;
          do
          {
            *(_QWORD *)&v7[v10] = *(_QWORD *)&v8[v10];
            *(_QWORD *)&v8[v10] = 0;
            *(_QWORD *)&v7[v10 + 8] = *(_QWORD *)&v8[v10 + 8];
            *(_QWORD *)&v8[v10 + 8] = 0;
            *(_QWORD *)&v7[v10 + 16] = *(_QWORD *)&v8[v10 + 16];
            *(_QWORD *)&v8[v10 + 16] = 0;
            *(_QWORD *)&v7[v10 + 24] = *(_QWORD *)&v8[v10 + 24];
            *(_QWORD *)&v8[v10 + 24] = 0;
            *(_QWORD *)&v7[v10 + 32] = *(_QWORD *)&v8[v10 + 32];
            *(_QWORD *)&v8[v10 + 32] = 0;
            *(_QWORD *)&v7[v10 + 40] = *(_QWORD *)&v8[v10 + 40];
            *(_QWORD *)&v8[v10 + 40] = 0;
            *(_DWORD *)&v7[v10 + 48] = *(_DWORD *)&v8[v10 + 48];
            v11 = *(void **)&v8[v10 + 24];
            if ( v11 )
            {
              *(_QWORD *)&v8[v10 + 32] = 0;
              qfree(v11);
              *(_QWORD *)&v8[v10 + 24] = 0;
              *(_QWORD *)&v8[v10 + 40] = 0;
            }
            v12 = *(void **)&v8[v10];
            if ( v12 )
            {
              *(_QWORD *)&v8[v10 + 8] = 0;
              qfree(v12);
              *(_QWORD *)&v8[v10] = 0;
              *(_QWORD *)&v8[v10 + 16] = 0;
            }
            v10 += 56;
            --v9;
          }
          while ( v9 >= 0 );
          v4 = (__int64 *)v16;
          v8 = (char *)*v16;
          v2 = v15;
        }
        qfree(v8);
        a1[1] = (__int64)v7;
        a1[3] = v17;
        v5 = a1[2];
      }
      v13 = &v7[56 * v5];
      *((_OWORD *)v13 + 2) = 0;
      *((_OWORD *)v13 + 1) = 0;
      *(_OWORD *)v13 = 0;
      ++a1[2];
      if ( !(unsigned __int8)sub_58950((__int64)v13, v18, a2, v2) )
        break;
      if ( v18[0] >= a2[1] )
        return __readfsqword(0x28u);
    }
    sub_58CB0(v4);
  }
  return __readfsqword(0x28u);
}
