__int64 __fastcall sub_3F3A80(__int64 a1, double a2)
{
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // r13
  _QWORD *v6; // r12
  char *v7; // rax
  _BYTE *v8; // rdi
  signed __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rsi
  __int64 i; // rax
  int v14; // edx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rsi
  char *v20; // rdx
  int v21; // eax
  int v22; // edi
  __int64 v23; // rdx
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 80);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 145LL) )
  {
    if ( v3 == 8 )
    {
      v4 = 234;
      v5 = 78;
      v6 = &unk_42E600;
    }
    else
    {
      v4 = 147;
      v5 = 49;
      v6 = &unk_42F4C0;
    }
  }
  else if ( v3 == 8 )
  {
    v4 = 234;
    v5 = 78;
    v6 = &unk_42ED60;
  }
  else
  {
    v4 = 147;
    v5 = 49;
    v6 = &unk_42F960;
  }
  qfree(*(_QWORD *)(a1 + 688));
  v7 = (char *)qcalloc(v5, 24);
  *(_QWORD *)(a1 + 688) = v7;
  v8 = (_BYTE *)((unsigned __int64)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL);
  *(_QWORD *)v7 = *v6;
  *(_QWORD *)&v7[v4 * 8 - 8] = v6[v4 - 1];
  v9 = v7 - v8;
  v10 = (unsigned int)(v4 * 8 + v9) >> 3;
  qmemcpy(v8, (char *)v6 - v9, 8 * v10);
  v12 = (__int64)&v6[v10] - v9;
  v11 = 0;
  for ( i = *(_QWORD *)(a1 + 688); *(_BYTE *)(i + 8); v11 = v15 + v16 )
  {
    v12 = *(_QWORD *)i;
    if ( *(_QWORD *)i != -1 )
    {
      v14 = (*(__int16 *)(i + 12) + v11 - 1) & -*(__int16 *)(i + 12);
      *(_DWORD *)(i + 16) = v14;
      *(_DWORD *)(a1 + v12) = v14;
    }
    v15 = *(__int16 *)(i + 12);
    v16 = *(_DWORD *)(i + 16);
    i += 24;
  }
  if ( (*(_BYTE *)(a1 + 620) & 0xF) != 0 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8EFu, v12, a2);
LABEL_36:
    BUG();
  }
  if ( (*(_BYTE *)(a1 + 624) & 0xF) != 0 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8F0u, v12, a2);
    goto LABEL_36;
  }
  v17 = *(_DWORD *)(a1 + 488);
  if ( (v17 & 0xF) != 0 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8F2u, v12, a2);
    goto LABEL_36;
  }
  if ( *(_DWORD *)(a1 + 548) - v17 != 240 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8F3u, v12, a2);
    goto LABEL_36;
  }
  if ( *(_DWORD *)(a1 + 548) != v17 + 240 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC8F6u, v12, a2);
    goto LABEL_36;
  }
  v18 = *(_DWORD *)(a1 + 356);
  if ( *(_DWORD *)(a1 + 80) == 8 )
  {
    v21 = *(_DWORD *)(a1 + 484);
    v22 = -1;
    v19 = (__int64)"xsp";
    *(_DWORD *)(a1 + 656) = *(_DWORD *)(a1 + 476);
    v20 = "xbp";
    *(_DWORD *)(a1 + 60) = v21;
  }
  else
  {
    v19 = (__int64)"sp";
    v20 = "bp";
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 408);
    *(_DWORD *)(a1 + 656) = *(_DWORD *)(a1 + 412);
    v21 = *(_DWORD *)(a1 + 416);
    v22 = v21;
  }
  *(_QWORD *)(a1 + 40) = v20;
  v23 = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 660) = v22;
  *(_QWORD *)(a1 + 32) = v19;
  if ( *(_BYTE *)(v23 + 145) )
  {
    v19 = v18;
    v18 = v21;
    v21 = v19;
  }
  if ( v18 != 8 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC915u, v19, a2);
    goto LABEL_36;
  }
  result = (unsigned int)((v21 - 8) / *(_DWORD *)(*(_QWORD *)(v23 + 112) + 80LL) + 1);
  *(_DWORD *)(a1 + 352) = result;
  return result;
}
