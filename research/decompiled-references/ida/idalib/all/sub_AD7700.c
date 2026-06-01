void __fastcall sub_AD7700(__int64 *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r8

  v2 = a1[1];
  v3 = *a1 + 8;
  sub_F29B80(v3, v2);
  v5 = a1[1];
  if ( v5 )
  {
    v6 = *(_DWORD *)v5;
    if ( !*(_DWORD *)v5 )
    {
      if ( *(_DWORD *)(v5 + 16) != 1 )
      {
        v7 = sub_ACAA10(v3);
        sub_AD7230(v8 + 8, &byte_22F0C30, v7, v8, v9);
      }
      return;
    }
    if ( (unsigned int)(v6 - 1) > 1 )
    {
      if ( v6 == 3 && !*(_BYTE *)(v5 + 24) )
      {
        v13 = *a1;
        v11 = *(_QWORD *)(v5 + 8);
        v12 = *a1 + 8;
        goto LABEL_11;
      }
    }
    else
    {
      if ( *(_DWORD *)(v5 + 40) != 1 )
        sub_AD2220(*a1 + 8, 0, 0, *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFFCLL, *a1, v4);
      if ( (*(_QWORD *)(v5 + 24) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v10 = *a1;
        v11 = *(_QWORD *)sub_C0F1A0(v5 + 24);
        v12 = v10 + 8;
        v13 = v10;
LABEL_11:
        sub_AD2220(v12, 0, 0, v11, v13, v4);
      }
    }
  }
}
