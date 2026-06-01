__int64 __fastcall sub_3A1840(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  char v6; // r13
  __int64 v7; // rax
  char v8; // al
  int v9; // edx
  __int64 v10; // rax
  int v11; // edx
  const char *v12; // rcx
  char v14; // al
  const char *v15; // rsi
  __int64 v16; // rax

  v4 = *a1;
  v5 = *(_QWORD *)(v4 + 1536);
  v6 = *(_BYTE *)(v5 + 140);
  if ( v6 == (unsigned __int8)sub_631C90(v4, 44, 4) )
  {
    if ( !*(_BYTE *)(v5 + 140) )
      return 0;
    v7 = *(_QWORD *)(v5 + 128);
    if ( v7 == *(_QWORD *)(v5 + 16)
      && *(_DWORD *)(v5 + 136) == *(_DWORD *)(v5 + 8)
      && (v7 != -1 || *(_BYTE *)(v5 + 141) == (unsigned __int8)sub_631C90(*a1, 2, 1)) )
    {
      return 0;
    }
  }
  v8 = sub_631C90(*a1, 44, 4);
  v9 = *(_DWORD *)(v5 + 8);
  *(_BYTE *)(v5 + 140) = v8;
  v10 = *(_QWORD *)(v5 + 16);
  *(_DWORD *)(v5 + 136) = v9;
  *(_QWORD *)(v5 + 128) = v10;
  *(_QWORD *)a2 = v10;
  *(_BYTE *)(a2 + 12) = 0;
  if ( *(_BYTE *)(v5 + 140) )
  {
    if ( *(_QWORD *)(v5 + 128) == -1 || !(unsigned __int8)sub_631C90(*a1, 2, 1) )
    {
      v14 = sub_631C90(*a1, 2, 1);
      v15 = "AU:disabled";
      *(_BYTE *)(v5 + 141) = v14;
      if ( v14 )
        v15 = "AU:  idle  ";
      qstrncpy(a2 + 12, v15, 64);
    }
    else
    {
      v11 = *(_DWORD *)(v5 + 136);
      v12 = " @";
      if ( v11 )
      {
        v16 = 0;
        while ( v11 != dword_23AD7A0[v16] )
        {
          if ( ++v16 == 14 )
          {
            if ( !under_debugger )
              interr(44);
            BUG();
          }
        }
        v12 = (const char *)*(&off_2B25D80 + (unsigned int)v16);
      }
      qsnprintf(a2 + 12, 64, (unsigned int)"%s:%0*a", (_DWORD)v12, *(_DWORD *)(a2 + 8), *(_QWORD *)(v5 + 128));
    }
  }
  return 1;
}
