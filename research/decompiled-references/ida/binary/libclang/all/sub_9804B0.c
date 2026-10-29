__int64 __fastcall sub_9804B0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r12
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  _QWORD *v12; // rbp
  unsigned int v13; // eax
  bool v14; // bp
  unsigned int v16; // eax
  __int64 v17; // r15
  int v18; // eax
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // r15
  int v22; // eax
  __int64 v23; // r15
  unsigned int v24; // eax
  _BOOL8 v25; // [rsp+0h] [rbp-58h] BYREF
  int v26; // [rsp+8h] [rbp-50h]
  char v27; // [rsp+Ch] [rbp-4Ch]

  v6 = (_QWORD *)sub_A1A5A0(*(_QWORD *)(a1 + 184), 24);
  v7 = *(_QWORD *)(a1 + 184);
  v8 = (2 * sub_A24BE0(12) + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v9 = (_QWORD *)sub_A1A5A0(v7, v8);
  v11 = *(_QWORD *)(a3 + 8);
  v12 = v9;
  switch ( *(_DWORD *)(a2 + 504) )
  {
    case 0x305:
      v17 = sub_2575D20(v7, v8, v10);
      if ( *v6 == v17 )
        sub_257CF50(&v25, v6);
      else
        sub_25768A0(&v25, v6);
      if ( *v12 == v17 )
        v18 = sub_257E370(v12, &v25);
      else
        v18 = sub_2577560(v12, &v25);
      v14 = v18 == 2;
      sub_5FF3B0((__int64 *)&v25);
      break;
    case 0x306:
      v19 = sub_2575D20(v7, v8, v10);
      if ( *v6 == v19 )
        sub_257CF50(&v25, v6);
      else
        sub_25768A0(&v25, v6);
      if ( *v12 == v19 )
        v20 = sub_257E370(v12, &v25);
      else
        v20 = sub_2577560(v12, &v25);
      v14 = (unsigned int)(v20 - 1) <= 1;
      sub_5FF3B0((__int64 *)&v25);
      break;
    case 0x307:
    case 0x308:
    case 0x30C:
    case 0x30D:
    case 0x30E:
    case 0x30F:
    case 0x310:
    case 0x311:
    case 0x312:
    case 0x313:
    case 0x314:
      if ( *v9 == sub_2575D20(v7, v8, v10) )
        v16 = sub_257E370(v12, v6);
      else
        v16 = sub_2577560(v12, v6);
      v14 = *((_BYTE *)&off_3C9B1D0 + v16) == 4;
      break;
    case 0x309:
      v21 = sub_2575D20(v7, v8, v10);
      if ( *v6 == v21 )
        sub_257CF50(&v25, v6);
      else
        sub_25768A0(&v25, v6);
      if ( *v12 == v21 )
        v22 = sub_257E370(v12, &v25);
      else
        v22 = sub_2577560(v12, &v25);
      v14 = v22 == 0;
      sub_5FF3B0((__int64 *)&v25);
      break;
    case 0x30A:
      v23 = sub_2575D20(v7, v8, v10);
      if ( *v6 == v23 )
        sub_257CF50(&v25, v6);
      else
        sub_25768A0(&v25, v6);
      if ( *v12 == v23 )
        v24 = sub_257E370(v12, &v25);
      else
        v24 = sub_2577560(v12, &v25);
      v14 = v24 <= 1;
      sub_5FF3B0((__int64 *)&v25);
      break;
    case 0x30B:
      if ( *v9 == sub_2575D20(v7, v8, v10) )
        v13 = sub_257E370(v12, v6);
      else
        v13 = sub_2577560(v12, v6);
      v14 = (unsigned __int8)(*((_BYTE *)&off_3C9B1D0 + v13) - 2) <= 1u;
      break;
  }
  v26 = 8;
  v25 = v14;
  v27 = 1;
  return sub_97E3E0(a1, (__int64)&v25, v11);
}

