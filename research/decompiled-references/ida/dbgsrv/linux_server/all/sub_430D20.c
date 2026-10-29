/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_430D20
// Address: 0x0000000000430D20

//----- (0000000000430D20) ----------------------------------------------------
__int64 __fastcall sub_430D20(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 120) )
    sub_42E7E0((_QWORD *)(a1 + 112));
  if ( *(_QWORD *)(a1 + 144) )
    sub_42E7E0((_QWORD *)(a1 + 136));
  v1 = *(_QWORD *)(a1 + 200);
  if ( v1 && *(_QWORD *)(v1 + 8) )
  {
    if ( *(_QWORD *)(a1 + 168) )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(262);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 232) )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(263);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 256) )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(264);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 280) )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(265);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 304) )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(266);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 328) )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(267);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 352) )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(268);
      goto LABEL_37;
    }
    if ( *(_QWORD *)(a1 + 376) )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(269);
      goto LABEL_37;
    }
  }
  result = *(_QWORD *)(a1 + 192);
  if ( result )
  {
    if ( *(_DWORD *)(result + 136) == -1 )
    {
      *(_DWORD *)(result + 136) = 0;
      *(_QWORD *)(a1 + 192) = 0;
      goto LABEL_18;
    }
    if ( !byte_4C94E1 )
      sub_481AC0(485);
LABEL_37:
    BUG();
  }
LABEL_18:
  *(_QWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 208) = -1;
  *(_QWORD *)(a1 + 416) = 0;
  return result;
}
// 4C94E1: using guessed type char byte_4C94E1;
