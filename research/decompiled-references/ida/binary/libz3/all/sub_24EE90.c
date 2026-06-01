void __fastcall sub_24EE90(__int64 a1, __int64 *a2)
{
  char v2; // dl
  __int64 v3; // rax
  unsigned int v4; // eax
  const char *v5; // rax
  const char *v6; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // rax

  v2 = sub_182ADE0(a2);
  v3 = *a2;
  if ( !v2 )
  {
    v6 = (const char *)(*(__int64 (__fastcall **)(__int64 *))(v3 + 16))(a2);
    *(_DWORD *)(a1 + 1520) = 12;
    sub_24E6E0(a1, 0xCu, v6);
    return;
  }
  v4 = (*(__int64 (__fastcall **)(__int64 *))(v3 + 24))(a2);
  if ( v4 == 106 )
  {
    v7 = *(_BYTE **)(a1 + 1536);
    *(_DWORD *)(a1 + 1520) = 3;
    *(_QWORD *)(a1 + 1544) = 0;
    *v7 = 0;
    if ( *(_QWORD *)(a1 + 1528) )
    {
      sub_2BC170();
      (*(void (__fastcall **)(__int64, __int64))(a1 + 1528))(a1, 3);
    }
  }
  else if ( v4 > 0x6A )
  {
    if ( v4 != 108 )
    {
LABEL_17:
      v10 = *(_BYTE **)(a1 + 1536);
      *(_DWORD *)(a1 + 1520) = 9;
      *(_QWORD *)(a1 + 1544) = 0;
      *v10 = 0;
      if ( *(_QWORD *)(a1 + 1528) )
      {
        sub_2BC170();
        (*(void (__fastcall **)(__int64, __int64))(a1 + 1528))(a1, 9);
      }
      return;
    }
    v9 = *(_BYTE **)(a1 + 1536);
    *(_DWORD *)(a1 + 1520) = 8;
    *(_QWORD *)(a1 + 1544) = 0;
    *v9 = 0;
    if ( *(_QWORD *)(a1 + 1528) )
    {
      sub_2BC170();
      (*(void (__fastcall **)(__int64, __int64))(a1 + 1528))(a1, 8);
    }
  }
  else
  {
    if ( v4 != 101 )
    {
      if ( v4 == 103 )
      {
        v5 = (const char *)(*(__int64 (__fastcall **)(__int64 *))(*a2 + 16))(a2);
        *(_DWORD *)(a1 + 1520) = 4;
        sub_24E6E0(a1, 4u, v5);
        return;
      }
      goto LABEL_17;
    }
    v8 = *(_BYTE **)(a1 + 1536);
    *(_DWORD *)(a1 + 1520) = 7;
    *(_QWORD *)(a1 + 1544) = 0;
    *v8 = 0;
    if ( *(_QWORD *)(a1 + 1528) )
    {
      sub_2BC170();
      (*(void (__fastcall **)(__int64, __int64))(a1 + 1528))(a1, 7);
    }
  }
}

