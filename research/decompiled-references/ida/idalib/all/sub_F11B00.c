void __fastcall sub_F11B00(__int64 a1, _QWORD *a2, double a3)
{
  int v5; // ebx
  int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 8) - 1;
  if ( v6 > 0 )
  {
    do
    {
      ++v5;
      sub_995540(*(_QWORD *)a1, "  ");
    }
    while ( v6 != v5 );
  }
  sub_995540(*(_QWORD *)a1, "case ");
  v11 = (char *)a2[3];
  if ( v11 )
    sub_F05430((_QWORD *)a1, v11, v7, v8, v9, v10, a3);
  else
    sub_F049C0((__int64 *)a1);
  v12 = *(_QWORD *)a1;
  if ( (*a2 & 0x200LL) != 0 && a2[((*a2 & 0x200) != 0) + 3] )
  {
    sub_995540(v12, " ... ");
    if ( (*a2 & 0x200LL) != 0 && (v17 = (char *)a2[((*a2 & 0x200) != 0) + 3]) != nullptr )
    {
      sub_F05430((_QWORD *)a1, v17, v13, v14, v15, v16, a3);
      v12 = *(_QWORD *)a1;
    }
    else
    {
      sub_F049C0((__int64 *)a1);
      v12 = *(_QWORD *)a1;
    }
  }
  v18 = sub_995540(v12, ":");
  sub_227BF10(v18, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48));
  sub_F0C470(a1, (char *)a2[(unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 4], 0, v19, v20, v21, a3);
}
