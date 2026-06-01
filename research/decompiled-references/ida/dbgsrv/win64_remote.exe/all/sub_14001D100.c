/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001D100
// Address: 0x000000014001D100

//----- (000000014001D100) ----------------------------------------------------
void __fastcall sub_14001D100(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  _QWORD *v5; // rbx
  _OWORD *v6; // rcx
  _OWORD *v7; // rax
  __int128 v8; // [rsp+20h] [rbp-28h]
  __int128 v9; // [rsp+30h] [rbp-18h]

  v4 = 2 * a3;
  v8 = *(_OWORD *)(a1 + 8 * v4 + 472);
  v9 = *(_OWORD *)(a1 + 8 * v4 + 728);
  v5 = (_QWORD *)(a2 + 8);
  if ( *(int *)a2 >= -1 )
  {
    v6 = (_OWORD *)*v5;
    if ( *v5 )
    {
      *(_QWORD *)(a2 + 16) = 0;
      j_free(v6);
      *v5 = 0;
      v5[2] = 0;
    }
    *(_DWORD *)a2 = -2;
  }
  if ( v5 )
  {
    *v5 = 0;
    v5[1] = 0;
    v5[2] = 0;
    sub_140002EF0((__int64)v5, 0x20u);
    v7 = (_OWORD *)*v5;
    *v7 = v8;
    v7[1] = v9;
  }
  *(_DWORD *)a2 = 0;
}
