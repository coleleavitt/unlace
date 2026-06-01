/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CCC20
// Address: 0x00000000000CCC20

//----- (00000000000CCC20) ----------------------------------------------------
__int64 __fastcall sub_CCC20(_QWORD *a1, int a2, _BYTE *a3, int a4)
{
  unsigned int v4; // w22
  void *(__fastcall *v6)(__int64, int, int); // x8
  __int64 v8; // x0
  __int64 v9; // x20
  void (__fastcall *v10)(_QWORD); // x8
  __int64 v11; // x22
  int v12; // w23

  if ( !a3 )
    return (unsigned int)-6;
  v4 = -6;
  if ( a4 == 112 && *a3 == 49 )
  {
    if ( !a1 )
      return (unsigned int)-2;
    v6 = (void *(__fastcall *)(__int64, int, int))a1[8];
    a1[6] = 0;
    if ( v6 )
    {
      if ( a1[9] )
        goto LABEL_7;
    }
    else
    {
      v6 = sub_D42E0;
      a1[10] = 0;
      a1[8] = sub_D42E0;
      if ( a1[9] )
        goto LABEL_7;
    }
    a1[9] = sub_D42E8;
LABEL_7:
    v8 = (__int64)v6(a1[10], 1, 7160);
    if ( !v8 )
      return (unsigned int)-4;
    a1[7] = v8;
    *(_QWORD *)v8 = a1;
    *(_QWORD *)(v8 + 72) = 0;
    *(_DWORD *)(v8 + 8) = 16180;
    v9 = v8;
    if ( !a1[8] )
      goto LABEL_26;
    v10 = (void (__fastcall *)(_QWORD))a1[9];
    if ( !v10 )
      goto LABEL_26;
    v11 = a1[7];
    if ( !v11 || *(_QWORD **)v11 != a1 || (unsigned int)(*(_DWORD *)(v11 + 8) - 16180) > 0x1F )
      goto LABEL_26;
    if ( a2 < 0 )
    {
      if ( a2 < -15 )
        goto LABEL_26;
      v12 = 0;
      a2 = -a2;
      if ( !a2 )
        goto LABEL_29;
    }
    else
    {
      v12 = ((unsigned int)a2 >> 4) + 5;
      if ( a2 < 48 )
        a2 &= 0xFu;
      if ( !a2 )
      {
LABEL_29:
        if ( *(_QWORD *)(v11 + 72) && *(_DWORD *)(v11 + 56) != a2 )
        {
          v10(a1[10]);
          *(_QWORD *)(v11 + 72) = 0;
        }
        *(_DWORD *)(v11 + 16) = v12;
        *(_DWORD *)(v11 + 56) = a2;
        v4 = sub_CCA0C(a1);
        if ( !v4 )
          return v4;
LABEL_27:
        ((void (__fastcall *)(_QWORD, __int64))a1[9])(a1[10], v9);
        a1[7] = 0;
        return v4;
      }
    }
    if ( (a2 & 0xFFFFFFF8) == 8 )
      goto LABEL_29;
LABEL_26:
    v4 = -2;
    goto LABEL_27;
  }
  return v4;
}
