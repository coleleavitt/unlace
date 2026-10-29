__int64 __fastcall sub_10EB7D0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  __int64 v9; // r12
  __int64 v11; // rax
  unsigned int v12; // r15d
  __int64 v13; // rax
  int v14; // edx
  int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v20[11]; // [rsp+20h] [rbp-58h] BYREF

  sub_2233820(v20);
  v20[0] = &off_2BEB1D8;
  v20[2] = "Constructing phase actions";
  if ( a4 == 4 )
  {
    if ( *(_DWORD *)(a5 + 12) == 38 && !sub_10DCD30(a3, 0xCF0u) )
    {
      v9 = operator new(0x58u);
      sub_10D3130(v9, a5, 58);
LABEL_7:
      v19 = v9;
      sub_10EAF50(a2 + 88, &v19);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      goto LABEL_4;
    }
LABEL_3:
    v9 = a5;
    goto LABEL_4;
  }
  if ( sub_10DCD30(a3, 0xCF0u) )
    goto LABEL_3;
  if ( a4 != 1 )
  {
    if ( !a4 )
    {
      if ( !sub_10DE660(a3, 0xBAEu, 0x9C8u) || (v12 = 62, sub_10DE660(a3, 0x927u, 0x9B4u)) )
      {
        v12 = *(_DWORD *)(a5 + 12);
        if ( !(unsigned __int8)sub_21B7850(a3, 1702, 1341, 0)
          && !(unsigned __int8)sub_21B7850(a3, 1701, 1340, 0)
          && !(unsigned __int8)sub_21B7850(a3, 619, 1102, 0)
          && (*(_BYTE *)(a1 + 920) & 2) == 0 )
        {
          v12 = sub_12CC8E0(v12);
        }
      }
      v9 = operator new(0x58u);
      sub_10D3450(v9, a5, v12);
      goto LABEL_7;
    }
    if ( a4 == 2 )
    {
      if ( sub_10DCD30(a3, 0x738u) )
      {
        v9 = sub_10EB5F0(a2, a5, 67);
        goto LABEL_4;
      }
      if ( sub_10DCD30(a3, 0xC96u) )
      {
        v9 = sub_10EB5F0(a2, a5, 54);
        goto LABEL_4;
      }
      if ( sub_10DCD30(a3, 0xC94u) )
      {
        v9 = sub_10EB5F0(a2, a5, 55);
        goto LABEL_4;
      }
      if ( sub_10DCD30(a3, 0x7Bu) )
      {
        v9 = sub_10EB6B0(a2, a5);
        goto LABEL_4;
      }
      if ( sub_10DCD30(a3, 0x14Du) )
      {
        v9 = sub_10EB5F0(a2, a5, 48);
        goto LABEL_4;
      }
      if ( sub_10DCD30(a3, 0x14Eu) )
      {
        v9 = sub_10EB5F0(a2, a5, 47);
        goto LABEL_4;
      }
      if ( sub_10DCD30(a3, 0xAE3u) )
      {
        v9 = sub_10EB5F0(a2, a5, 51);
        goto LABEL_4;
      }
      if ( sub_10DCD30(a3, 0xD34u) )
      {
        v9 = sub_10EB710(a2, a5);
        goto LABEL_4;
      }
      if ( !sub_10DCD30(a3, 0x183u) )
      {
        v9 = sub_10EB5F0(a2, a5, 44);
        goto LABEL_4;
      }
LABEL_24:
      v9 = sub_10EB770(a2, a5);
      goto LABEL_4;
    }
    if ( *(_DWORD *)(a1 + 40) )
    {
      if ( !a6 )
      {
        if ( !sub_10DCD30(a3, 0x2B9u) || (v13 = sub_10DCD30(a3, 0x159u), v14 = 38, v13) )
          v14 = (sub_10DCD30(a3, 0xCF8u) == 0) + 45;
        goto LABEL_30;
      }
      if ( *(_DWORD *)(a1 + 44) )
      {
LABEL_18:
        v11 = sub_10DCD30(a3, 0xCF8u);
        v9 = sub_10EB590(a2, a5, (unsigned int)(v11 == 0) + 45);
        goto LABEL_4;
      }
    }
    else if ( *(_DWORD *)(a1 + 44) && a6 )
    {
      goto LABEL_18;
    }
    if ( sub_10DCD30(a3, 0x159u) || a6 == 16 )
    {
LABEL_35:
      if ( sub_10DCD30(a3, 0xCF8u)
        && (!a6
         || *(_DWORD *)(a1 + 28) == 2
         || a6 == 8 && !(unsigned __int8)sub_21B7850(a3, 3088, 3017, (*(_DWORD *)(a2 + 16) >> 1) & 1)) )
      {
LABEL_47:
        v14 = 43;
        goto LABEL_30;
      }
LABEL_39:
      v14 = 44;
LABEL_30:
      v9 = sub_10EB590(a2, a5, v14);
      goto LABEL_4;
    }
    v16 = *(_QWORD *)(a5 + 80);
    if ( v16 && (unsigned int)(*(_DWORD *)(v16 + 48) - 25) <= 1 || a6 == 8 )
    {
      if ( (unsigned __int8)sub_21B7850(a3, 825, 1164, 0)
        || (unsigned __int8)sub_21B7850(a3, 3088, 3017, 0) && *(_DWORD *)(a1 + 28) != 2 )
      {
        goto LABEL_35;
      }
      if ( a6 == 4 )
      {
        if ( sub_10DCD30(a3, 0xCF8u) && *(_DWORD *)(a1 + 28) == 2 )
          goto LABEL_47;
        goto LABEL_39;
      }
    }
    v9 = sub_10EB590(a2, a5, 38);
    goto LABEL_4;
  }
  if ( sub_10DCD30(a3, 0x183u) )
    goto LABEL_24;
  if ( sub_10DCD30(a3, 0x3C1u) && !sub_10DCD30(a3, 0xC44u) )
    goto LABEL_3;
  v15 = sub_12CC900(*(unsigned int *)(a5 + 12));
  if ( v15 == 57 )
  {
    v17 = sub_10DCD30(a3, 0x3AFu);
    if ( v17 )
    {
      if ( **(_QWORD **)(v17 + 48) )
        v15 = 51;
    }
  }
  if ( sub_10DCD30(a3, 0x738u) )
    v15 = 67;
  v9 = sub_10EB650(a2, a5, v15);
LABEL_4:
  v20[0] = &off_2BEB1D8;
  sub_22338A0(v20);
  return v9;
}
