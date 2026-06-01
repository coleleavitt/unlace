void __fastcall sub_ABEAC0(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  int v5; // eax
  size_t v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8

  v2 = a1[1];
  v3 = *a1 + 8;
  sub_E35F90(v3, v2);
  v4 = a1[1];
  if ( v4 )
  {
    v5 = *(_DWORD *)v4;
    if ( !*(_DWORD *)v4 )
    {
      if ( *(_DWORD *)(v4 + 16) != 1 )
      {
        v6 = sub_AA6CD0(v3);
        sub_ABE550((char *)(v7 + 8), (char *)&byte_22CD811, v6, v7, v8);
      }
      return;
    }
    if ( (unsigned int)(v5 - 1) > 1 )
    {
      if ( v5 == 3 && !*(_BYTE *)(v4 + 24) )
      {
        v12 = *a1;
        v10 = *(_QWORD *)(v4 + 8);
        v11 = *a1 + 8;
        goto LABEL_11;
      }
    }
    else
    {
      if ( *(_DWORD *)(v4 + 40) != 1 )
        sub_ABAAB0(*a1 + 8, 0, 0, *(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFFCLL, *a1);
      if ( (*(_QWORD *)(v4 + 24) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v9 = *a1;
        v10 = *(_QWORD *)sub_BEB460(v4 + 24);
        v11 = v9 + 8;
        v12 = v9;
LABEL_11:
        sub_ABAAB0(v11, 0, 0, v10, v12);
      }
    }
  }
}

