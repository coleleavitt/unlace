/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000483C0
// Address: 0x00000001000483C0

//----- (00000001000483C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1000483C0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  const char *v9; // r13
  char v10; // r15
  char *v11; // r13
  __int64 v12; // rbx
  bool v13; // cf
  __int64 v14; // rbx
  _BYTE *v15; // rax
  unsigned int v17; // [rsp+14h] [rbp-2Ch]

  result = a3;
  v5 = a4;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = 56 * v5;
  if ( *(_QWORD *)(v6 + v7 + 8) > result )
  {
    v8 = *(_QWORD *)(v7 + v6);
    result *= 3LL;
    if ( *(_QWORD *)(v8 + 8 * result + 8) )
    {
      result = v8 + 8 * result;
      v9 = *(const char **)result;
    }
    else
    {
      v9 = _s1;
    }
    v10 = *v9;
    if ( *v9 )
    {
      v17 = a4 - 1;
      v11 = (char *)(v9 + 1);
      do
      {
        if ( v10 < -1 )
        {
          result = sub_1000483C0(a1, a2, v10 & 0x7F, v17);
        }
        else
        {
          v12 = *(_QWORD *)(a2 + 8);
          v13 = v12 == 0;
          v14 = v12 - 1;
          if ( v13 )
            v14 = 0;
          v15 = *(_BYTE **)a2;
          if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v14 + 2) )
          {
            v15 = qvector_reserve(a2, *(void **)a2, v14 + 2, 1u);
            *(_QWORD *)a2 = v15;
          }
          *(_QWORD *)(a2 + 8) = v14 + 2;
          v15[v14] = v10;
          result = *(_QWORD *)a2;
          *(_BYTE *)(*(_QWORD *)a2 + v14 + 1) = 0;
        }
        v10 = *v11++;
      }
      while ( v10 );
    }
  }
  return result;
}
