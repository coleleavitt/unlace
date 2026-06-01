/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001C310
// Address: 0x000000010001C310

//----- (000000010001C310) ----------------------------------------------------
__int64 __fastcall sub_10001C310(__int64 a1, unsigned __int64 a2, _OWORD *a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  _OWORD *v9; // r15
  void *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int128 v14; // [rsp+0h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 <= a2 )
  {
    if ( v3 >= a2 )
      return __stack_chk_guard;
    v4 = *(_QWORD *)(a1 + 16);
    if ( *(_QWORD *)a1 <= (unsigned __int64)a3 && *(_QWORD *)a1 + 16 * v4 > (unsigned __int64)a3 )
    {
      v14 = *a3;
      if ( v4 < a2 )
      {
        *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x10u);
        v3 = *(_QWORD *)(a1 + 8);
      }
      if ( a2 > v3 )
      {
        v5 = v3;
        if ( (((_BYTE)a2 - (_BYTE)v3) & 1) != 0 )
        {
          *(_OWORD *)(*(_QWORD *)a1 + 16 * v3) = v14;
          v5 = v3 + 1;
        }
        if ( v3 != a2 - 1 )
        {
          v6 = a2 - v5;
          v7 = 16 * v5;
          do
          {
            *(_OWORD *)(*(_QWORD *)a1 + v7) = v14;
            *(_OWORD *)(*(_QWORD *)a1 + v7 + 16) = v14;
            v7 += 32;
            v6 -= 2LL;
          }
          while ( v6 );
        }
      }
    }
    else
    {
      if ( v4 < a2 )
      {
        v9 = a3;
        v10 = qvector_reserve(a1, *(void **)a1, a2, 0x10u);
        a3 = v9;
        *(_QWORD *)a1 = v10;
        v3 = *(_QWORD *)(a1 + 8);
      }
      if ( a2 > v3 )
      {
        v11 = v3;
        if ( (((_BYTE)a2 - (_BYTE)v3) & 1) != 0 )
        {
          *(_OWORD *)(*(_QWORD *)a1 + 16 * v3) = *a3;
          v11 = v3 + 1;
        }
        if ( v3 != a2 - 1 )
        {
          v12 = a2 - v11;
          v13 = 16 * v11;
          do
          {
            *(_OWORD *)(*(_QWORD *)a1 + v13) = *a3;
            *(_OWORD *)(*(_QWORD *)a1 + v13 + 16) = *a3;
            v13 += 32;
            v12 -= 2LL;
          }
          while ( v12 );
        }
      }
    }
  }
  *(_QWORD *)(a1 + 8) = a2;
  return __stack_chk_guard;
}
