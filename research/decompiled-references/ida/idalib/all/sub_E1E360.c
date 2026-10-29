void __fastcall sub_E1E360(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  if ( *(_BYTE *)(a1 + 24) )
    return;
  v2 = a2[2];
  if ( *(_QWORD **)(a1 + 8) == a2 )
  {
    v3 = a2[1];
    *(_QWORD *)(a1 + 8) = v2;
    if ( !v3 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v3 = a2[1];
  if ( v3 )
  {
LABEL_4:
    *(_QWORD *)(v3 + 16) = v2;
    v2 = a2[2];
  }
LABEL_5:
  if ( v2 )
    *(_QWORD *)(v2 + 8) = v3;
  a2[4] = 0;
}
