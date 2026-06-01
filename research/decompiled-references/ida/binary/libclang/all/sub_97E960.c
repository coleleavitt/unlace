__int64 __fastcall sub_97E960(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // ebp
  __int64 v9; // r12
  char v10; // al
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  int v14; // [rsp+8h] [rbp-20h]

  v5 = a4;
  v6 = a3;
  if ( !a4 )
    v5 = (sub_A24BE0(a3) + 7) & 0xFFFFFFFFFFFFFFF8LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 12) = 0;
  switch ( v6 )
  {
    case 0LL:
      v9 = *(unsigned __int8 *)sub_A1A5A0(a2, v5);
      if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
        operator delete[](*(void **)a1);
      v8 = 8;
      v10 = 0;
      break;
    case 1LL:
      v9 = *(unsigned __int8 *)sub_A1A5A0(a2, v5);
      if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
        operator delete[](*(void **)a1);
      v8 = 8;
      v10 = 1;
      break;
    case 2LL:
      v9 = *(unsigned __int16 *)sub_A1A5A0(a2, v5);
      if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
        operator delete[](*(void **)a1);
      v8 = 16;
      v10 = 0;
      break;
    case 3LL:
      v9 = *(unsigned __int16 *)sub_A1A5A0(a2, v5);
      if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
        operator delete[](*(void **)a1);
      v8 = 16;
      v10 = 1;
      break;
    case 4LL:
      v9 = *(unsigned int *)sub_A1A5A0(a2, v5);
      if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
        operator delete[](*(void **)a1);
      v8 = 32;
      v10 = 0;
      break;
    case 5LL:
      v9 = *(unsigned int *)sub_A1A5A0(a2, v5);
      if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
        operator delete[](*(void **)a1);
      v8 = 32;
      v10 = 1;
      break;
    case 6LL:
      v9 = *(_QWORD *)sub_A1A5A0(a2, v5);
      if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
        operator delete[](*(void **)a1);
      v8 = 64;
      v10 = 0;
      break;
    case 7LL:
      v9 = *(_QWORD *)sub_A1A5A0(a2, v5);
      if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
        operator delete[](*(void **)a1);
      v8 = 64;
      v10 = 1;
      break;
    case 8LL:
      v12 = sub_A1A5A0(a2, v5);
      sub_2587D60(&v13, v12);
      v8 = v14;
      v9 = v13;
      if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
        operator delete[](*(void **)a1);
      goto LABEL_12;
    case 9LL:
      v7 = sub_A1A5A0(a2, v5);
      sub_2587BE0(&v13, v7, *(unsigned int *)(v7 + 8));
      v8 = v14;
      v9 = v13;
      if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
        operator delete[](*(void **)a1);
      v10 = 0;
      break;
    case 10LL:
      v9 = *(unsigned __int8 *)sub_A1A5A0(a2, v5);
      if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
        operator delete[](*(void **)a1);
      v8 = 1;
LABEL_12:
      v10 = 1;
      break;
  }
  *(_BYTE *)(a1 + 12) = v10;
  *(_QWORD *)a1 = v9;
  *(_DWORD *)(a1 + 8) = v8;
  return a1;
}

