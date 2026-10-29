__int64 __fastcall sub_10EBE20(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v8; // r13
  int v10; // edx
  unsigned int v11; // ebx
  __int64 v12; // rax
  int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v17[11]; // [rsp+10h] [rbp-58h] BYREF

  sub_2233820(v17);
  v17[0] = &off_2BEB1D8;
  v17[2] = "Constructing phase actions";
  if ( a4 == 4 )
  {
    if ( *(_DWORD *)(a5 + 12) == 38 && !sub_10DCD30(a3, 0xCF0u) )
    {
      v8 = operator new(0x58u);
      sub_10D3130(v8, a5, 58);
LABEL_7:
      v16 = v8;
      sub_10EAF50(a2 + 88, &v16);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      goto LABEL_4;
    }
LABEL_3:
    v8 = a5;
    goto LABEL_4;
  }
  if ( sub_10DCD30(a3, 0xCF0u) )
    goto LABEL_3;
  switch ( a4 )
  {
    case 1:
      if ( sub_10DCD30(a3, 0x183u) )
        goto LABEL_25;
      if ( sub_10DCD30(a3, 0x3C1u) && !sub_10DCD30(a3, 0xC44u) )
        goto LABEL_3;
      v13 = sub_12CC900(*(unsigned int *)(a5 + 12));
      if ( v13 == 57 )
      {
        v15 = sub_10DCD30(a3, 0x3AFu);
        if ( v15 )
        {
          if ( **(_QWORD **)(v15 + 48) )
            v13 = 51;
        }
      }
      if ( sub_10DCD30(a3, 0x738u) )
        v13 = 67;
      v8 = sub_10EB650(a2, a5, v13);
      break;
    case 0:
      if ( !sub_10DE660(a3, 0xBAEu, 0x9C8u) || (v11 = 62, sub_10DE660(a3, 0x927u, 0x9B4u)) )
      {
        v11 = *(_DWORD *)(a5 + 12);
        if ( !(unsigned __int8)sub_21B7850(a3, 1702, 1341, 0)
          && !(unsigned __int8)sub_21B7850(a3, 1701, 1340, 0)
          && !(unsigned __int8)sub_21B7850(a3, 619, 1102, 0)
          && (*(_BYTE *)(a1 + 920) & 2) == 0 )
        {
          v11 = sub_12CC8E0(v11);
        }
      }
      v8 = operator new(0x58u);
      sub_10D3450(v8, a5, v11);
      goto LABEL_7;
    case 2:
      if ( sub_10DCD30(a3, 0x738u) )
      {
        v8 = sub_10EB5F0(a2, a5, 67);
        break;
      }
      if ( sub_10DCD30(a3, 0xC96u) )
      {
        v8 = sub_10EB5F0(a2, a5, 54);
        break;
      }
      if ( sub_10DCD30(a3, 0xC94u) )
      {
        v8 = sub_10EB5F0(a2, a5, 55);
        break;
      }
      if ( sub_10DCD30(a3, 0x7Bu) )
      {
        v8 = sub_10EB6B0(a2, a5);
        break;
      }
      if ( sub_10DCD30(a3, 0x14Du) )
      {
        v8 = sub_10EB5F0(a2, a5, 48);
        break;
      }
      if ( sub_10DCD30(a3, 0x14Eu) )
      {
        v8 = sub_10EB5F0(a2, a5, 47);
        break;
      }
      if ( sub_10DCD30(a3, 0xAE3u) )
      {
        v8 = sub_10EB5F0(a2, a5, 51);
        break;
      }
      if ( sub_10DCD30(a3, 0xD34u) )
      {
        v8 = sub_10EB710(a2, a5);
        break;
      }
      if ( !sub_10DCD30(a3, 0x183u) )
      {
        v8 = sub_10EB5F0(a2, a5, 44);
        break;
      }
LABEL_25:
      v8 = sub_10EB770(a2, a5);
      break;
    default:
      if ( *(_DWORD *)(a1 + 40) )
      {
        if ( sub_10DCD30(a3, 0x2B9u) && !sub_10DCD30(a3, 0x159u) )
          v10 = 38;
        else
          v10 = (sub_10DCD30(a3, 0xCF8u) == 0) + 45;
        v8 = sub_10EB590(a2, a5, v10);
      }
      else if ( sub_10DCD30(a3, 0x159u)
             || (v14 = *(_QWORD *)(a5 + 80)) != 0
             && (unsigned int)(*(_DWORD *)(v14 + 48) - 25) <= 1
             && ((unsigned __int8)sub_21B7850(a3, 825, 1164, 0)
              || (unsigned __int8)sub_21B7850(a3, 3088, 3017, 0) && *(_DWORD *)(a1 + 28) != 2) )
      {
        v12 = sub_10DCD30(a3, 0xCF8u);
        v8 = sub_10EB590(a2, a5, (unsigned int)(v12 == 0) + 43);
      }
      else
      {
        v8 = sub_10EB590(a2, a5, 38);
      }
      break;
  }
LABEL_4:
  v17[0] = &off_2BEB1D8;
  sub_22338A0(v17);
  return v8;
}
