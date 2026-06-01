__int64 __fastcall sub_BEC1F0(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebp
  bool v3; // al
  char v4; // al
  unsigned int v5; // ebp
  unsigned int v7; // ebp
  bool v8; // dl
  unsigned int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // rdx
  bool v12; // cl
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
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
      v2 = *(_DWORD *)(a1 + 16);
      if ( v2 <= 0x40 )
        v3 = *(_QWORD *)(a1 + 8) == 0;
      else
        v3 = (unsigned int)sub_21E2A40(a1 + 8) == v2;
      goto LABEL_4;
    case 3:
      if ( *(_QWORD *)(a1 + 8) == sub_21D5390() )
        v18 = *(_QWORD *)(a1 + 16);
      else
        v18 = a1 + 8;
      *a2 = (*(_BYTE *)(v18 + 20) & 7) != 3;
      return 1;
    case 5:
      v7 = *(_DWORD *)(a1 + 16);
      if ( v7 <= 0x40 )
        v8 = *(_QWORD *)(a1 + 8) == 0;
      else
        v8 = v7 == (unsigned int)sub_21E2A40(a1 + 8);
      v4 = 1;
      if ( v8 )
      {
        v9 = *(_DWORD *)(a1 + 32);
        if ( v9 <= 0x40 )
          v3 = *(_QWORD *)(a1 + 24) == 0;
        else
          v3 = v9 == (unsigned int)sub_21E2A40(a1 + 24);
LABEL_4:
        v4 = !v3;
      }
      *a2 = v4;
      return 1;
    case 6:
      v10 = sub_21D5390();
      v11 = a1 + 8;
      if ( *(_QWORD *)(a1 + 8) == v10 )
        v11 = *(_QWORD *)(a1 + 16);
      v12 = 1;
      if ( (*(_BYTE *)(v11 + 20) & 7) == 3 )
      {
        if ( v10 == *(_QWORD *)(a1 + 32) )
          v19 = *(_QWORD *)(a1 + 40);
        else
          v19 = a1 + 32;
        v12 = (*(_BYTE *)(v19 + 20) & 7) != 3;
      }
      *a2 = v12;
      return 1;
    case 7:
      v20[0] = sub_A2D320(a1);
      v20[1] = v14;
      LOBYTE(v15) = sub_A2B9C0(v20);
      v5 = v15;
      if ( (_BYTE)v15 )
      {
        *a2 = 1;
        v16 = sub_A2D320(a1);
        if ( v16 )
        {
          if ( (v16 & 3) == 0 )
          {
            v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v17 )
              return (unsigned int)sub_B559C0(v17) ^ 1;
          }
        }
      }
      else
      {
        v5 = 1;
        *a2 = *(_QWORD *)sub_A2D340(a1) != 0;
      }
      return v5;
    case 0xC:
      if ( !sub_A2D650(a1) || (v5 = 0, v13 = sub_A2D650(a1), !(unsigned __int8)sub_B559C0(v13)) )
      {
        v5 = 1;
        *a2 = sub_A2D650(a1) != 0;
      }
      return v5;
  }
}

