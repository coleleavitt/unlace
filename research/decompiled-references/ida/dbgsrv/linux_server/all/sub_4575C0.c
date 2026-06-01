/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4575C0
// Address: 0x00000000004575C0

//----- (00000000004575C0) ----------------------------------------------------
__int64 __fastcall sub_4575C0(_QWORD *a1, unsigned __int64 a2, int a3, unsigned __int64 a4)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rbp
  __int64 (*v8)(); // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // r12
  unsigned __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax

  v5 = -4096;
  v6 = a2;
  v8 = *(__int64 (**)())(*a1 + 496LL);
  if ( v8 != sub_40C070 )
    v5 = (int)-((__int64 (__fastcall *)(_QWORD *, unsigned __int64, __int64 (*)(), unsigned __int64, __int64))v8)(
                 a1,
                 a2,
                 sub_40C070,
                 a4,
                 -4096);
  v9 = (_QWORD *)a1[78];
  v10 = a1 + 77;
  v11 = a2 & v5;
  v12 = (__int64)(a1 + 77);
  if ( !v9 )
    goto LABEL_16;
  do
  {
    while ( 1 )
    {
      a2 = v9[2];
      a4 = v9[3];
      if ( v9[4] < v11 )
        break;
      v12 = (__int64)v9;
      v9 = (_QWORD *)v9[2];
      if ( !a2 )
        goto LABEL_8;
    }
    v9 = (_QWORD *)v9[3];
  }
  while ( a4 );
LABEL_8:
  if ( v10 == (_QWORD *)v12 || (v13 = a3, v9 = *(_QWORD **)(v12 + 32), a4 = a3 + v6, (unsigned __int64)v9 >= a4) )
  {
LABEL_16:
    if ( v12 == a1[79] )
      return (__int64)v10;
    v12 = std::_Rb_tree_decrement(v12, a2, v9, a4, v11);
    v13 = a3;
    v9 = *(_QWORD **)(v12 + 32);
  }
  if ( v13
    && *(_DWORD *)(v12 + 60)
    && v13 + v6 - 1 >= (unsigned __int64)v9
    && (unsigned __int64)v9 + *(int *)(v12 + 60) - 1 >= v6 )
  {
    return v12;
  }
  return (__int64)v10;
}
// 457699: variable 'a4' is possibly undefined
// 405650: using guessed type __int64 __fastcall std::_Rb_tree_decrement(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 40C070: using guessed type __int64 sub_40C070();
