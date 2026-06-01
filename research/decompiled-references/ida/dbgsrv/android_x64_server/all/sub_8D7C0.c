/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D7C0
// Address: 0x000000000008D7C0

//----- (000000000008D7C0) ----------------------------------------------------
__int64 __fastcall sub_8D7C0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r15
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rax

  v3 = a2[1];
  v4 = a3[1];
  v5 = v3 - 1;
  if ( (v3 & (v3 - 1)) != 0 )
  {
    if ( v4 >= v3 )
      v4 %= v3;
  }
  else
  {
    v4 &= v5;
  }
  v6 = *(_QWORD **)(*a2 + 8 * v4);
  do
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
  }
  while ( v6 != a3 );
  if ( v7 == a2 + 2 )
    goto LABEL_14;
  v8 = v7[1];
  if ( (v3 & v5) == 0 )
  {
    if ( (v5 & v8) == v4 )
      goto LABEL_20;
LABEL_14:
    if ( *a3 )
    {
      v9 = *(_QWORD *)(*a3 + 8LL);
      if ( (v3 & v5) != 0 )
      {
        if ( v9 >= v3 )
          v9 %= v3;
        if ( v9 == v4 )
          goto LABEL_20;
      }
      else if ( (v5 & v9) == v4 )
      {
        goto LABEL_20;
      }
    }
    *(_QWORD *)(*a2 + 8 * v4) = 0;
    goto LABEL_20;
  }
  if ( v8 >= v3 )
    v8 %= v3;
  if ( v8 != v4 )
    goto LABEL_14;
LABEL_20:
  v10 = *a3;
  if ( *a3 )
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( (v3 & v5) == 0 )
    {
      v11 &= v5;
      if ( v11 == v4 )
        goto LABEL_26;
      goto LABEL_25;
    }
    if ( v11 >= v3 )
      v11 %= v3;
    if ( v11 != v4 )
    {
LABEL_25:
      *(_QWORD *)(*a2 + 8 * v11) = v7;
      v10 = *a3;
    }
  }
LABEL_26:
  *v7 = v10;
  *a3 = 0;
  --a2[3];
  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a2 + 2;
  *(_BYTE *)(a1 + 16) = 1;
  return a1;
}
