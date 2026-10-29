void __fastcall sub_15A1600(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v3 = a2;
  v4 = 0;
  while ( 2 )
  {
    v5 = *(unsigned int *)v3;
    switch ( *(_DWORD *)v3 )
    {
      case 0:
      case 0x14:
        v6 = v3 & 0xFFFFFFFFFFFFFFF8LL;
        v5 = 1;
        goto LABEL_4;
      case 1:
      case 2:
      case 5:
      case 9:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x15:
        v5 = 0;
        v6 = 0;
        goto LABEL_4;
      case 3:
        goto LABEL_7;
      case 4:
        v5 = 5;
LABEL_7:
        v6 = 0;
        goto LABEL_4;
      case 6:
        if ( *(_QWORD *)(v3 + 8) )
        {
          v4 = v3;
          v3 = *(_QWORD *)(v3 + 8);
          continue;
        }
        v7 = v3 & 0xFFFFFFFFFFFFFFF8LL | (*(_BYTE *)(v3 + 41) == 0 ? 6LL : 1LL);
        v5 = v7 & 7;
        v6 = v7 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_4:
        sub_15A1250(a1, a2, v6, v5, nullptr, 0, a3);
        return;
      case 7:
        v3 = *(_QWORD *)(v3 + 8);
        continue;
      case 8:
        v5 = 2;
        v6 = 0;
        goto LABEL_4;
      case 0xA:
        v3 = *(_QWORD *)(v3 + 8);
        if ( v3 )
          continue;
        goto LABEL_9;
      case 0xB:
LABEL_9:
        v5 = 6;
        v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_4;
    }
  }
}
