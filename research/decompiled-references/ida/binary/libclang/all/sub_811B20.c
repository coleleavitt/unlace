__int64 __fastcall sub_811B20(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // ax
  __int64 v4; // r13
  unsigned __int16 v5; // ax
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // r15
  _QWORD *v12; // rdx
  __int64 v13; // [rsp+8h] [rbp-40h]

  while ( 1 )
  {
    v3 = *(_WORD *)a1 & 0x1FF;
    if ( v3 == 21 )
      goto LABEL_16;
    if ( v3 > 0x15u )
      break;
    if ( v3 == 4 )
    {
      if ( *(_BYTE *)(a1 + 2) >> 3 != 12 )
        return a1;
      v4 = *(_QWORD *)(a1 + 16);
      v5 = *(_WORD *)v4 & 0x1FF;
      goto LABEL_17;
    }
    if ( v3 != 19 )
    {
      if ( v3 != 9 )
        return a1;
      v4 = a1;
LABEL_10:
      v4 = *(_QWORD *)(v4 + 16);
      goto LABEL_22;
    }
    if ( (*(_BYTE *)(a1 + 3) & 1) == 0 || *(char *)(a1 + 2) >= 0 )
      return a1;
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
    {
      v5 = *(_WORD *)v4 & 0x1FF;
      if ( v5 <= 0x4Fu )
        goto LABEL_9;
      goto LABEL_18;
    }
    v4 = a1;
LABEL_22:
    if ( v4 == a1 )
      return a1;
    a1 = v4;
  }
  if ( v3 == 58 )
  {
    v4 = a1;
    if ( (~*(_DWORD *)(a1 + 16) & 0x3FFF8000) != 0 )
    {
      v4 = *(_QWORD *)(a1
                     + 8LL
                     * (((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a1 + 19) & 0x40) != 0))
                     + 32);
      v5 = *(_WORD *)v4 & 0x1FF;
      goto LABEL_17;
    }
    goto LABEL_22;
  }
  if ( v3 == 78 )
  {
    if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
      return a1;
    if ( *(_BYTE *)(a1 + 48) )
    {
LABEL_16:
      v4 = *(_QWORD *)(a1 + 24);
      v5 = *(_WORD *)v4 & 0x1FF;
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 32);
      v5 = *(_WORD *)v4 & 0x1FF;
    }
LABEL_17:
    if ( v5 <= 0x4Fu )
    {
LABEL_9:
      if ( v5 != 9 )
        goto LABEL_22;
      goto LABEL_10;
    }
LABEL_18:
    if ( v5 > 0x59u )
      goto LABEL_22;
LABEL_19:
    v7 = *(_QWORD *)(v4 + 16);
    v8 = *(_QWORD *)(v7 + 8);
    v9 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    v10 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v11 = *(_QWORD *)(*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41 )
    {
      if ( !(unsigned __int8)sub_B07CE0(v10, a2) )
      {
LABEL_21:
        if ( v9 != v11 )
          goto LABEL_22;
        goto LABEL_28;
      }
      v8 = *(_QWORD *)(v7 + 8);
    }
    v12 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v12 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41
      && !(unsigned __int8)sub_B07CE0(*v12, a2) )
    {
      goto LABEL_21;
    }
    v13 = sub_6F6DE0(a2, *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    if ( v13 != sub_6F6DE0(a2, *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
      goto LABEL_21;
LABEL_28:
    v4 = v7;
    goto LABEL_22;
  }
  if ( v3 > 0x4Fu && v3 <= 0x59u )
  {
    v4 = a1;
    goto LABEL_19;
  }
  return a1;
}

