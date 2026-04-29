__int64 __fastcall sub_328AE0(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD **v3; // r14
  _QWORD *v4; // rbx

  v3 = *(_QWORD ***)(a1 + 16);
  if ( *v3 )
  {
    v4 = (_QWORD *)(**v3 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v4 )
      goto LABEL_9;
    if ( (*(_BYTE *)v4 & 2) == 0 )
    {
      do
      {
        if ( (int)lexcompare_tinfo(*a3, v4[3], 0) >= 0 )
        {
          if ( (int)lexcompare_tinfo(v4[3], *a3, 0) >= 0 )
            goto LABEL_8;
          v4 = (_QWORD *)v4[2];
        }
        else
        {
          v4 = (_QWORD *)v4[1];
        }
      }
      while ( (*(_BYTE *)v4 & 2) == 0 );
      v4 = *v3;
LABEL_8:
      if ( v4 != **(_QWORD ***)(a1 + 16) )
      {
LABEL_9:
        copy_tinfo_t(a2, v4 + 4);
        *(_DWORD *)(a2 + 56) |= 1u;
        *(_DWORD *)(a1 + 8) |= 1u;
        ++*(_DWORD *)(a1 + 24);
      }
    }
  }
  return 0;
}
