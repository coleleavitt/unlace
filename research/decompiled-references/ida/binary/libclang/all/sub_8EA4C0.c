__int64 __fastcall sub_8EA4C0(__int64 a1, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  unsigned int v7; // edi
  int *v8; // rcx
  int v9; // r9d
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // ecx
  int v13; // r11d

  if ( *(_DWORD *)(a1 + 816) != *(_DWORD *)(a1 + 812) )
    return 1;
  v4 = *(unsigned int *)(a1 + 784);
  v5 = *(_QWORD *)(a1 + 768);
  if ( !(_DWORD)v4 )
    goto LABEL_6;
  v7 = (v4 - 1) & (37 * a2);
  v8 = (int *)(v5 + 16LL * v7);
  v9 = *v8;
  if ( a2 != *v8 )
  {
    v12 = 1;
    while ( v9 != -1 )
    {
      v13 = v12 + 1;
      v7 = (v4 - 1) & (v12 + v7);
      v8 = (int *)(v5 + 16LL * v7);
      v9 = *v8;
      if ( a2 == *v8 )
        goto LABEL_5;
      v12 = v13;
    }
LABEL_6:
    v8 = (int *)(v5 + 16 * v4);
  }
LABEL_5:
  v10 = *((_QWORD *)v8 + 1);
  v11 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
  sub_A1BFA0(v11, v10, 16);
  return 1;
}

