void __fastcall sub_B93EF0(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  _QWORD *v7; // rcx
  _BYTE *v8; // rax
  char v9; // cl
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax

  v3 = a2[2];
  if ( v3 )
  {
    v5 = 0x7C0000FC0FFC01FFLL;
    while ( 1 )
    {
      v6 = *(_BYTE *)(v3 + 28) & 0x7F;
      if ( (unsigned int)(unsigned __int8)v6 - 18 <= 0x3F )
      {
        v7 = (_QWORD *)(*(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v3 + 16) & 4) != 0 )
          v7 = (_QWORD *)*v7;
        if ( a2 == v7 )
        {
          if ( sub_B87DC0(v3) )
            goto LABEL_25;
          if ( *(char *)(v3 + 29) >= 0 )
            goto LABEL_29;
          if ( (*(_BYTE *)(a1 + 8) & 0x7F) != 0 )
            goto LABEL_25;
          v13 = sub_B8C1B0(a1);
          if ( (*(_BYTE *)(v13 + 28) & 0x7F) != 0 )
            v13 = sub_B8C2C0(v13);
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 88) + 2320LL) + 1LL) & 8) != 0 )
          {
LABEL_25:
            v6 = *(_BYTE *)(v3 + 28) & 0x7F;
          }
          else
          {
LABEL_29:
            sub_B93950(a1, v3, a3, v10, v11, v12);
            v6 = *(_BYTE *)(v3 + 28) & 0x7F;
          }
        }
      }
      if ( (unsigned __int8)v6 > 0x3Eu )
        goto LABEL_14;
      if ( !_bittest64(&v5, v6) )
        goto LABEL_14;
      v8 = (_BYTE *)sub_B8D340(v3);
      if ( !v8 )
        goto LABEL_14;
      v9 = v8[8] & 0x7F;
      if ( v9 != 62 )
        break;
      if ( (char)v8[12] >= 0 )
      {
LABEL_13:
        sub_B93EF0(a1, v8, a3);
LABEL_14:
        v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v3 )
          return;
      }
      else
      {
        v3 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v3 )
          return;
      }
    }
    if ( (v8[8] & 0x7D) != 4 && v9 != 25 && (v9 != 24 || (v8[9] & 0x20) == 0) )
      goto LABEL_14;
    goto LABEL_13;
  }
}
