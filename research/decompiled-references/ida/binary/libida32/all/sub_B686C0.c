_BOOL8 __fastcall sub_B686C0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax

  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) + 29) & 4) == 0 )
  {
    v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( !(_BYTE)a2 )
    {
LABEL_5:
      v8 = v2(a1);
      return (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8) + 29) & 4) != 0;
    }
    v3 = v2(a1);
    if ( (*(_BYTE *)(v3 + 29) & 1) == 0 )
    {
LABEL_4:
      v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
      goto LABEL_5;
    }
    v10 = sub_B68690(v3, a2, v4, v5, v6, v7);
    v11 = *v10;
    v12 = *v10 + 8LL * *((unsigned int *)v10 + 2);
    if ( *v10 >= v12 )
    {
      if ( v11 == v12 )
        goto LABEL_4;
      while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 390 )
      {
        v12 += 8LL;
        if ( v11 == v12 )
          goto LABEL_4;
      }
    }
    else
    {
      v13 = *v10;
      while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 390 )
      {
        v13 += 8LL;
        if ( v12 == v13 )
          goto LABEL_4;
      }
      if ( v12 == v13 )
        goto LABEL_4;
    }
  }
  return 1;
}

