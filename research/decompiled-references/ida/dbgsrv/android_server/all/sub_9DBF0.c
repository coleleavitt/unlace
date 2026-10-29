/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9DBF0
// Address: 0x000000000009DBF0

//----- (000000000009DBF0) ----------------------------------------------------
__int64 __fastcall sub_9DBF0(__int64 (__fastcall ***a1)(_QWORD, __int64))
{
  __int64 v2; // x0
  _QWORD *v3; // x22
  __int64 v4; // x0
  unsigned int v5; // w0
  _QWORD *v6; // x8
  __int64 v7; // x8
  __int64 v8; // x9
  _QWORD *v9; // t1
  unsigned int v10; // w20

  (*(void (__fastcall **)(__int64 __return_ptr, __int64))(*(_QWORD *)qword_166C78 + 16LL))(qword_166C78, qword_166C78);
  v2 = qword_166C78;
  v3 = *(_QWORD **)(qword_166C78 + 8);
  while ( 1 )
  {
    if ( v3 == (_QWORD *)(v2 + 16) )
    {
      v10 = 0;
      goto LABEL_14;
    }
    v4 = sub_8CA28(v3[4]);
    v5 = (**a1)(a1, v4);
    if ( v5 )
      break;
    v6 = (_QWORD *)v3[1];
    if ( v6 )
    {
      do
      {
        v3 = v6;
        v6 = (_QWORD *)*v6;
      }
      while ( v6 );
      goto LABEL_2;
    }
    v7 = (__int64)(v3 + 2);
    if ( *(_QWORD **)v3[2] == v3 )
    {
      v2 = qword_166C78;
      v3 = (_QWORD *)v3[2];
    }
    else
    {
      do
      {
        v8 = *(_QWORD *)v7;
        v9 = *(_QWORD **)(*(_QWORD *)v7 + 16LL);
        v7 = *(_QWORD *)v7 + 16LL;
        v3 = v9;
      }
      while ( *v9 != v8 );
LABEL_2:
      v2 = qword_166C78;
    }
  }
  v10 = v5;
  v2 = qword_166C78;
LABEL_14:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  return v10;
}
// 166C78: using guessed type __int64 qword_166C78;
