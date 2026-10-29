/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A4130
// Address: 0x00000000000A4130

//----- (00000000000A4130) ----------------------------------------------------
__int64 __fastcall sub_A4130(__int64 (__fastcall ***a1)(_QWORD, __int64))
{
  __int64 v2; // rdi
  _QWORD *v3; // rbp
  unsigned int v4; // r14d
  __int64 v5; // rax
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rbp
  bool v10; // zf

  (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1559C0 + 16LL))(qword_1559C0);
  v2 = qword_1559C0;
  v3 = *(_QWORD **)(qword_1559C0 + 8);
  v4 = 0;
  if ( v3 != (_QWORD *)(qword_1559C0 + 16) )
  {
    while ( 1 )
    {
      v5 = sub_926A0(v3[4]);
      v6 = (**a1)(a1, v5);
      if ( v6 )
        break;
      v7 = (_QWORD *)v3[1];
      if ( v7 )
      {
        do
        {
          v8 = v7;
          v7 = (_QWORD *)*v7;
        }
        while ( v7 );
      }
      else
      {
        v8 = (_QWORD *)v3[2];
        if ( (_QWORD *)*v8 != v3 )
        {
          v9 = (__int64)(v3 + 2);
          do
          {
            v8 = *(_QWORD **)(*(_QWORD *)v9 + 16LL);
            v10 = *v8 == *(_QWORD *)v9;
            v9 = *(_QWORD *)v9 + 16LL;
          }
          while ( !v10 );
        }
      }
      v2 = qword_1559C0;
      v3 = v8;
      if ( v8 == (_QWORD *)(qword_1559C0 + 16) )
        goto LABEL_12;
    }
    v2 = qword_1559C0;
    v4 = v6;
  }
LABEL_12:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  return v4;
}
// 1559C0: using guessed type __int64 qword_1559C0;
