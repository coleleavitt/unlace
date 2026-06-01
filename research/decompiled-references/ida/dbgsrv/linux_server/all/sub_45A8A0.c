/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45A8A0
// Address: 0x000000000045A8A0

//----- (000000000045A8A0) ----------------------------------------------------
__int64 __fastcall sub_45A8A0(__int64 (__fastcall ***a1)(_QWORD, __int64))
{
  __int64 v1; // r13
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(_QWORD, __int64); // rbp
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v7; // ebp

  (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_4C82B8 + 16LL))(qword_4C82B8);
  v1 = qword_4C82B8;
  v2 = *(_QWORD *)(qword_4C82B8 + 32);
  if ( v2 == qword_4C82B8 + 16 )
  {
    v7 = 0;
  }
  else
  {
    do
    {
      v3 = **a1;
      v4 = sub_45F620(*(_QWORD *)(v2 + 32));
      v5 = v3(a1, v4);
      v1 = qword_4C82B8;
      v7 = v5;
      if ( v5 )
        break;
      v2 = std::_Rb_tree_increment(v2);
    }
    while ( v2 != v1 + 16 );
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  return v7;
}
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 4C82B8: using guessed type __int64 qword_4C82B8;
