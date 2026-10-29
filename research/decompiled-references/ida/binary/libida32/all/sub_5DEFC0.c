__int64 __fastcall sub_5DEFC0(__int64 a1, __m128i a2, double a3)
{
  __int64 v3; // rax
  char v4; // dl
  __int64 v5; // rbp
  __int64 v6; // rsi
  char v7; // cl
  __int64 result; // rax
  _QWORD *v9; // rbp
  int v10; // edx
  int v11; // ebp
  const char *v12; // r12
  __int64 v13; // rbp
  int v14; // edx
  __int64 v15; // r12
  int v16; // eax
  _BYTE *v17; // rsi

  v3 = *(_QWORD *)(a1 + 112);
  v4 = *(_BYTE *)(v3 + 186);
  v5 = v3;
  v6 = v4 & 0xF;
  if ( *(_DWORD *)(a1 + 212) == 2 && !*(_BYTE *)(v3 + 187) )
  {
    if ( (_BYTE)v6 != 13 )
      return set_qerrno(64, v6);
    if ( (~v4 & 0x30) != 0 && (*(_BYTE *)(v3 + 80) & 2) != 0 )
    {
LABEL_6:
      switch ( *(_DWORD *)(a1 + 208) )
      {
        case 0:
          goto LABEL_26;
        case 1:
        case 3:
          goto LABEL_22;
        case 7:
          goto LABEL_7;
        default:
          goto LABEL_9;
      }
    }
    goto LABEL_20;
  }
  while ( 1 )
  {
    v7 = v4 & 0xF;
    if ( (v4 & 0xF) != 0xB )
      break;
    v5 = *(_QWORD *)(v5 + 48);
    v4 = *(_BYTE *)(v5 + 186);
  }
  if ( v7 == 13 )
  {
    if ( (~v4 & 0x30) == 0 || (*(_BYTE *)(v5 + 80) & 2) == 0 )
    {
LABEL_20:
      if ( sub_552670(
             *(_QWORD *)(a1 + 96),
             *(_QWORD *)(a1 + 240),
             *(_QWORD *)(v5 + 72),
             1,
             nullptr,
             *(double *)a2.m128i_i64,
             a3) == -1 )
      {
        v17 = sub_5C5F70(*(_QWORD *)(a1 + 240), *(_BYTE **)(v5 + 72), 1);
        set_error_string();
        set_qerrno(67, v17);
        return 0xFFFFFFFFLL;
      }
      v3 = *(_QWORD *)(a1 + 112);
      LOBYTE(v6) = *(_BYTE *)(v3 + 186) & 0xF;
    }
  }
  else if ( v7 == 1 && *(_DWORD *)(a1 + 208) != 1 && (v4 & 0x3F) == 1 )
  {
    return set_qerrno(77, v6);
  }
  if ( (_BYTE)v6 != 12 )
    goto LABEL_6;
  *(_QWORD *)(*(_QWORD *)(a1 + 144) + 40LL) |= 0x800000uLL;
  switch ( *(_DWORD *)(a1 + 208) )
  {
    case 0:
      v3 = *(_QWORD *)(a1 + 112);
      v6 = *(_BYTE *)(v3 + 186) & 0xF;
      if ( (_BYTE)v6 != 12 )
      {
LABEL_26:
        v10 = *(_DWORD *)(v3 + 80);
        v11 = v10 & 2;
        if ( (_BYTE)v6 == 13 && (v10 & 2) != 0 && (v10 & 1) == 0 )
        {
          v15 = *(_QWORD *)v3;
          *(_QWORD *)v3 = 0;
          v16 = sub_5DEF20(a1, a2, a3);
          **(_QWORD **)(a1 + 112) = v15;
          if ( v16 )
            return 0xFFFFFFFFLL;
        }
        v12 = **(const char ***)(a1 + 104);
        if ( v12 )
        {
          if ( *v12 != 126 && sub_5CF440((_QWORD *)(*(_QWORD *)(a1 + 144) + 48LL), v12)
            || (v13 = *(_QWORD *)(a1 + 144), (*(_BYTE *)(a1 + 728) & 1) != 0)
            && !strcmp(*(const char **)(v13 + 72), v12) )
          {
            set_error_string();
            return set_qerrno(107, v12);
          }
          v3 = *(_QWORD *)(a1 + 112);
        }
        else
        {
          v3 = *(_QWORD *)(a1 + 112);
          if ( !*(_BYTE *)(v3 + 187) && ((*(_BYTE *)(v3 + 186) & 0xF) != 0xD || (*(_BYTE *)(v3 + 80) & 1) == 0 && v11) )
            goto LABEL_9;
          v13 = *(_QWORD *)(a1 + 144);
        }
        if ( (*(_BYTE *)(v13 + 44) & 4) != 0 )
        {
          *(_QWORD *)(v3 + 104) = *(_QWORD *)(v13 + 104);
          *(_QWORD *)(*(_QWORD *)(a1 + 144) + 104LL) = -1;
          v13 = *(_QWORD *)(a1 + 144);
          v3 = *(_QWORD *)(a1 + 112);
          if ( *(char *)(v13 + 44) < 0 )
          {
            *(_QWORD *)(v3 + 40) |= 0x8000000000uLL;
            *(_QWORD *)(*(_QWORD *)(a1 + 144) + 40LL) &= ~0x8000000000uLL;
            v13 = *(_QWORD *)(a1 + 144);
            v3 = *(_QWORD *)(a1 + 112);
          }
        }
        sub_5DB5D0((__int64 **)(v13 + 48), *(_QWORD *)(a1 + 240), v3, 1);
        v3 = *(_QWORD *)(a1 + 112);
        goto LABEL_9;
      }
      v14 = *(_DWORD *)(a1 + 728);
      if ( (v14 & 1) != 0 )
        goto LABEL_41;
      if ( !unk_2C57908 )
        return set_qerrno(84, v6);
      *(_DWORD *)(a1 + 728) = v14 | 1;
LABEL_41:
      if ( *(char *)(*(_QWORD *)(a1 + 104) + 43LL) < 0 )
        goto LABEL_9;
      if ( (unsigned int)sub_5DD990(a1, nullptr, a2, a3) )
        return 0xFFFFFFFFLL;
LABEL_8:
      v3 = *(_QWORD *)(a1 + 112);
LABEL_9:
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 208) = 0;
      return sub_5D8F60(a1, v3, 0);
    case 1:
    case 3:
LABEL_22:
      sub_5CC390((_QWORD *)a1, **(const char ***)(a1 + 104));
      qfree(**(void ***)(a1 + 104));
      v9 = *(_QWORD **)(a1 + 104);
      *v9 = qstrdup(*(_QWORD *)(a1 + 600));
      sub_5CC5E0((_QWORD *)a1);
      if ( *(_DWORD *)(a1 + 208) != 1 )
        goto LABEL_23;
      goto LABEL_24;
    case 6:
      v3 = *(_QWORD *)(a1 + 112);
      if ( (*(_BYTE *)(v3 + 186) & 0xF) != 0xC )
        goto LABEL_9;
LABEL_23:
      *(_DWORD *)(a1 + 208) = 0;
LABEL_24:
      result = sub_5DEF20(a1, a2, a3);
      if ( (_DWORD)result )
        return 0xFFFFFFFFLL;
      *(_QWORD *)(a1 + 120) = 0;
      *(_QWORD *)(a1 + 208) = 0;
      return result;
    case 7:
LABEL_7:
      if ( (unsigned int)sub_5DD990(a1, (_BYTE *)&dword_0 + 1, a2, a3) )
        return 0xFFFFFFFFLL;
      goto LABEL_8;
    default:
      goto LABEL_8;
  }
}

