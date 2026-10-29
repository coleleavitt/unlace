/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C050
// Address: 0x000000000006C050

//----- (000000000006C050) ----------------------------------------------------
void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> sub_6C050(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  bool v4; // cf
  unsigned __int64 v5; // rax

  v1 = a1[1];
  if ( v1 <= 2 )
  {
    if ( !(_BYTE)under_debugger )
      interr(278);
LABEL_8:
    BUG();
  }
  v2 = *(__int16 *)(*a1 + v1 - 2);
  v3 = v1 - 2;
  v4 = v3 < v2;
  v5 = v3 - v2;
  a1[3] = v5;
  if ( v4 || !v5 )
  {
    if ( !(_BYTE)under_debugger )
      interr(279);
    goto LABEL_8;
  }
}
// 158B40: using guessed type __int64 under_debugger;
