__int64 __fastcall clang_getFileUniqueID(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rdi

  if ( !a1 || !a2 )
    return 1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v2 & 4) == 0 || !v3 )
        break;
      v2 = v3[1];
      if ( !v2 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    v3 = nullptr;
  }
  *a2 = v3[7];
  a2[1] = v3[8];
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v4 & 4) == 0 || !v5 )
        break;
      v4 = *(_QWORD *)(v5 + 8);
      if ( !v4 )
        goto LABEL_10;
    }
    a2[2] = *(_QWORD *)(v5 + 40);
    return 0;
  }
  else
  {
LABEL_10:
    a2[2] = 78456304;
    return 0;
  }
}

