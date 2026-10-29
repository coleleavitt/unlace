__int64 __fastcall sub_81FDC0(__int64 a1, _BYTE *a2, __int64 a3)
{
  unsigned int v4; // r12d
  bool v5; // al
  char v6; // al
  unsigned int v7; // r12d
  int v8; // edx
  unsigned int v9; // r12d
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  bool v13; // cl
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  _QWORD v20[5]; // [rsp+0h] [rbp-28h] BYREF

  switch ( *(_DWORD *)a1 )
  {
    case 0:
    case 1:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xD:
      return 0;
    case 2:
    case 4:
      v4 = *(_DWORD *)(a1 + 16);
      if ( v4 <= 0x40 )
        v5 = *(_QWORD *)(a1 + 8) == 0;
      else
        v5 = v4 == (unsigned int)sub_2587400(a1 + 8);
      goto LABEL_5;
    case 3:
      v16 = *(_QWORD *)(a1 + 8);
      if ( v16 == sub_2575D20(a1, a2, a3) )
        v17 = *(_QWORD *)(a1 + 16);
      else
        v17 = a1 + 8;
      *a2 = (*(_BYTE *)(v17 + 20) & 7) != 3;
      return 1;
    case 5:
      v7 = *(_DWORD *)(a1 + 16);
      if ( v7 <= 0x40 )
      {
        if ( *(_QWORD *)(a1 + 8) )
        {
          v6 = 1;
          goto LABEL_6;
        }
      }
      else
      {
        v8 = sub_2587400(a1 + 8);
        v6 = 1;
        if ( v7 != v8 )
          goto LABEL_6;
      }
      v9 = *(_DWORD *)(a1 + 32);
      if ( v9 <= 0x40 )
        v5 = *(_QWORD *)(a1 + 24) == 0;
      else
        v5 = v9 == (unsigned int)sub_2587400(a1 + 24);
LABEL_5:
      v6 = !v5;
LABEL_6:
      *a2 = v6;
      return 1;
    case 6:
      v10 = *(_QWORD *)(a1 + 8);
      v11 = sub_2575D20(a1, a2, a3);
      v12 = a1 + 8;
      if ( v10 == v11 )
        v12 = *(_QWORD *)(a1 + 16);
      v13 = 1;
      if ( (*(_BYTE *)(v12 + 20) & 7) == 3 )
      {
        if ( v11 == *(_QWORD *)(a1 + 32) )
          v19 = *(_QWORD *)(a1 + 40);
        else
          v19 = a1 + 32;
        v13 = (*(_BYTE *)(v19 + 20) & 7) != 3;
      }
      *a2 = v13;
      return 1;
    case 7:
      v20[0] = sub_6A34D0(a1);
      v20[1] = v14;
      if ( sub_69F610(v20) )
      {
        *a2 = 1;
        v15 = sub_6A34D0(a1);
        if ( v15 && (v15 & 3) == 0 )
          return (unsigned int)sub_783680(v15 & 0xFFFFFFFFFFFFFFFCLL) ^ 1;
      }
      else
      {
        *a2 = *(_QWORD *)sub_6A34F0(a1) != 0;
      }
      return 1;
    case 0xC:
      if ( sub_6A37B0(a1) )
      {
        v18 = sub_6A37B0(a1);
        if ( (unsigned __int8)sub_783680(v18) )
          return 0;
      }
      *a2 = sub_6A37B0(a1) != 0;
      return 1;
  }
}

