/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CCB44
// Address: 0x00000000000CCB44

//----- (00000000000CCB44) ----------------------------------------------------
__int64 __fastcall sub_CCB44(_QWORD *a1, int a2)
{
  void (__fastcall *v3)(_QWORD); // x8
  __int64 v4; // x20
  int v5; // w21
  int v6; // w22

  if ( !a1 )
    return 4294967294LL;
  if ( !a1[8] )
    return 4294967294LL;
  v3 = (void (__fastcall *)(_QWORD))a1[9];
  if ( !v3 )
    return 4294967294LL;
  v4 = a1[7];
  if ( !v4 || *(_QWORD **)v4 != a1 || (unsigned int)(*(_DWORD *)(v4 + 8) - 16180) > 0x1F )
    return 4294967294LL;
  if ( a2 < 0 )
  {
    if ( a2 < -15 )
      return 4294967294LL;
    v5 = 0;
    v6 = -a2;
    if ( !a2 )
      goto LABEL_17;
LABEL_15:
    if ( (v6 & 0xFFFFFFF8) == 8 )
      goto LABEL_17;
    return 4294967294LL;
  }
  v5 = ((unsigned int)a2 >> 4) + 5;
  if ( a2 >= 48 )
    v6 = a2;
  else
    v6 = a2 & 0xF;
  if ( v6 )
    goto LABEL_15;
LABEL_17:
  if ( *(_QWORD *)(v4 + 72) )
  {
    if ( *(_DWORD *)(v4 + 56) != v6 )
    {
      v3(a1[10]);
      *(_QWORD *)(v4 + 72) = 0;
    }
  }
  *(_DWORD *)(v4 + 16) = v5;
  *(_DWORD *)(v4 + 56) = v6;
  return sub_CCA0C(a1);
}
