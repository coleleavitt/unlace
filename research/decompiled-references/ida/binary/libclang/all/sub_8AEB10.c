__int64 __fastcall sub_8AEB10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  char v7; // al
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // r13d
  unsigned int v15; // r15d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebp
  void *v20; // r14
  bool v21; // cc
  unsigned int v22; // eax
  unsigned __int8 v23; // [rsp+Fh] [rbp-69h]
  unsigned __int8 v24; // [rsp+Fh] [rbp-69h]
  unsigned __int8 v25; // [rsp+Fh] [rbp-69h]
  void *v26; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v27; // [rsp+18h] [rbp-60h]
  char v28; // [rsp+1Ch] [rbp-5Ch]
  void *v29; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-50h]
  unsigned int v31; // [rsp+30h] [rbp-48h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(v6 + 16);
  switch ( v7 )
  {
    case 13:
      if ( (((*(_WORD *)(v6 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        break;
LABEL_10:
      v13 = sub_70B7E0(*(_QWORD *)(a3 + 16), v5);
      v27 = 1;
      v14 = v13;
      v26 = nullptr;
      v15 = HIBYTE(v13);
      v28 = 0;
      v9 = sub_87D880(a1, (__int64)&v26, a3, v16, v17, v18);
      if ( (_BYTE)v9 )
      {
        v19 = v27;
        v30 = v27;
        if ( v27 > 0x40 )
        {
          v25 = v9;
          sub_2585B30(&v29);
          v19 = v30;
          v20 = v29;
          v9 = v25;
        }
        else
        {
          v20 = v26;
        }
        v21 = *(_DWORD *)(a2 + 8) <= 0x40u;
        v31 = v14;
        if ( !v21 && *(_QWORD *)a2 )
        {
          v24 = v9;
          operator delete[](*(void **)a2);
          v9 = v24;
        }
        HIBYTE(v31) = v15;
        v22 = v31;
        *(_QWORD *)a2 = v20;
        *(_DWORD *)(a2 + 8) = v19;
        *(_BYTE *)(a2 + 12) = (v15 & 0x20) == 0;
        *(_DWORD *)(a2 + 16) = v22;
      }
      if ( v27 > 0x40 )
      {
        if ( v26 )
        {
          v23 = v9;
          operator delete[](v26);
          return v23;
        }
      }
      return v9;
    case 46:
      v11 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                 & 0xFFFFFFFFFFFFFFF0LL));
      if ( (*(_BYTE *)(v11 + 74) & 1) != 0 || *(_QWORD *)(v11 + 128) > 7u )
      {
        v12 = sub_B14A40(v6);
        v5 = *(_QWORD *)(a1 + 8);
        if ( *(char *)(v12 + 76) >= 0 )
          goto LABEL_10;
      }
      else
      {
        v5 = *(_QWORD *)(a1 + 8);
      }
      break;
    case 10:
      goto LABEL_10;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 13 )
    return 0;
  v9 = 0;
  if ( (((*(_WORD *)(v8 + 18) >> 3) + 57) & 0x1FFu) > 0x17 )
    return v9;
  return sub_8AEA20(a1, a2, a3);
}

