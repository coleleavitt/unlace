/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_614E0
// Address: 0x00000000000614E0

//----- (00000000000614E0) ----------------------------------------------------
__int64 __fastcall sub_614E0(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  sub_61420(a1 + 112, 0);
  sub_61420(a1 + 136, 0);
  v1 = *(_QWORD *)(a1 + 200);
  if ( v1 && *(_QWORD *)(v1 + 8) )
  {
    if ( *(_QWORD *)(a1 + 168) )
    {
      if ( !(_BYTE)under_debugger )
        interr(262);
      goto LABEL_33;
    }
    if ( *(_QWORD *)(a1 + 232) )
    {
      if ( !(_BYTE)under_debugger )
        interr(263);
      goto LABEL_33;
    }
    if ( *(_QWORD *)(a1 + 256) )
    {
      if ( !(_BYTE)under_debugger )
        interr(264);
      goto LABEL_33;
    }
    if ( *(_QWORD *)(a1 + 280) )
    {
      if ( !(_BYTE)under_debugger )
        interr(265);
      goto LABEL_33;
    }
    if ( *(_QWORD *)(a1 + 304) )
    {
      if ( !(_BYTE)under_debugger )
        interr(266);
      goto LABEL_33;
    }
    if ( *(_QWORD *)(a1 + 328) )
    {
      if ( !(_BYTE)under_debugger )
        interr(267);
      goto LABEL_33;
    }
    if ( *(_QWORD *)(a1 + 352) )
    {
      if ( !(_BYTE)under_debugger )
        interr(268);
      goto LABEL_33;
    }
    if ( *(_QWORD *)(a1 + 376) )
    {
      if ( !(_BYTE)under_debugger )
        interr(269);
      goto LABEL_33;
    }
  }
  result = *(_QWORD *)(a1 + 192);
  if ( result )
  {
    if ( *(_DWORD *)(result + 136) == -1 )
    {
      *(_DWORD *)(result + 136) = 0;
      *(_QWORD *)(a1 + 192) = 0;
      goto LABEL_14;
    }
    if ( !(_BYTE)under_debugger )
      interr(485);
LABEL_33:
    BUG();
  }
LABEL_14:
  *(_QWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 208) = -1;
  *(_QWORD *)(a1 + 416) = 0;
  return result;
}
// 158B40: using guessed type __int64 under_debugger;
