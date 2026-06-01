void __fastcall sub_46BDF0(__int64 a1)
{
  int v1; // edx
  int v2; // eax
  _QWORD *v3; // r15
  __int64 v4; // rax
  unsigned __int64 *v5; // rbx
  _QWORD *v6; // r14
  unsigned __int64 *v7; // r13
  unsigned __int64 v8; // rbp
  int v9; // eax

  if ( !*(_QWORD *)(a1 + 16) )
  {
LABEL_12:
    v7 = *(unsigned __int64 **)(a1 + 8);
    goto LABEL_5;
  }
  v1 = *(_DWORD *)(a1 + 32);
  v2 = 1;
  if ( v1 )
    v2 = -(v1 != 1);
  v3 = *(_QWORD **)(switch_dbctx(*(int *)(*(_QWORD *)a1 + 4LL * v2 + 16)) + 1672);
  v4 = switch_dbctx(*(int *)(*(_QWORD *)a1 + 4LL * *(int *)(a1 + 32) + 16));
  v5 = *(unsigned __int64 **)(a1 + 8);
  v6 = *(_QWORD **)(v4 + 1672);
  v7 = &v5[*(_QWORD *)(a1 + 16)];
  if ( v5 != v7 )
  {
    do
    {
      while ( 1 )
      {
        v8 = *v5;
        if ( *(_QWORD *)(v3[3] + 16LL) >= *v5 )
          break;
        if ( v7 == ++v5 )
          goto LABEL_12;
      }
      if ( (sub_3BE900(v6, *v5, 4) & 0xC000) == 0 )
      {
        v9 = sub_3BE900(v3, v8, 4);
        if ( ((~(_WORD)v9 & 0x600) != 0 || (v9 & 0x10000000) == 0) && (v9 & 0x1000) == 0 && (v9 & 0xC000) == 0x8000 )
          sub_3D0150((_DWORD)v3, v8);
      }
      ++v5;
    }
    while ( v7 != v5 );
    goto LABEL_12;
  }
LABEL_5:
  if ( v7 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v7);
  }
}
