unsigned __int64 __fastcall sub_F1E510(__int64 a1, __int64 a2, double a3)
{
  unsigned __int64 result; // rax
  __int64 *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned __int64 v13; // rdx
  char v14; // al
  _QWORD *v15; // rax
  unsigned __int64 v16; // [rsp+0h] [rbp-28h] BYREF
  _QWORD *v17; // [rsp+8h] [rbp-20h]

  switch ( *(_DWORD *)a1 & 0x7FFFFFFF )
  {
    case 0:
    case 9:
      result = 0;
      break;
    case 1:
      result = 0;
      v4 = (__int64 *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFFCLL);
      if ( v4 )
      {
        v5 = *v4;
        v17 = v4 + 1;
        v16 = v5;
        v6 = (unsigned int)sub_F6CE20(&v16);
        result = (v6 << 32) | (unsigned int)sub_F6CCB0(&v16);
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 8:
      result = sub_EEC8C0(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFFCLL, a2, a3);
      break;
    case 6:
      v10 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFFCLL;
      v11 = *(_QWORD *)v10;
      v9 = *(unsigned int *)(v10 + 16);
      if ( *(_QWORD *)v10 )
      {
        v12 = *(_QWORD **)(v10 + 8);
        v16 = v11;
        v17 = v12;
        v13 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v13 )
          goto LABEL_17;
        v16 = v13;
        v14 = 0;
        while ( (*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v14 = 1;
          v13 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        goto LABEL_15;
      }
      result = ((unsigned __int64)(unsigned int)v9 << 32) | (unsigned int)v9;
      break;
    case 7:
      v7 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFFCLL;
      v8 = *(_QWORD *)v7;
      v9 = *(unsigned int *)(v7 + 20);
      if ( *(_QWORD *)v7 )
      {
        v15 = *(_QWORD **)(v7 + 8);
        v16 = v8;
        v17 = v15;
        v13 = *(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v13 )
        {
          v16 = v13;
          v14 = 0;
          while ( (*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v14 = 1;
            v13 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
LABEL_15:
          if ( v14 )
            v16 = v13;
        }
LABEL_17:
        result = (v9 << 32) | (unsigned int)sub_E90530((__int64 *)&v16);
      }
      else
      {
        result = *(_QWORD *)(v7 + 16);
      }
      break;
  }
  return result;
}
