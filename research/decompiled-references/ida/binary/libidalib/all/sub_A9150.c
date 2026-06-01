__int64 __fastcall sub_A9150(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // cc
  __int64 v4; // rbp
  __int64 v6; // r13
  __int64 v7; // rax
  int v8; // eax
  __int64 result; // rax
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  int v17; // eax
  _BYTE v18[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v19; // [rsp+418h] [rbp-30h]

  v3 = *(_BYTE *)a1 <= 7u;
  v4 = *(_QWORD *)(a2 + 24);
  v19 = __readfsqword(0x28u);
  if ( v3 )
  {
    v7 = (unsigned int)sub_A8B10(a3);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) != (unsigned int)v7 )
      goto LABEL_3;
  }
  else
  {
    v6 = (unsigned int)sub_A8B10(a3);
    v7 = v6 | (sub_A8B10(a3) << 32);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) != v7 )
      goto LABEL_3;
  }
  v7 = -1;
LABEL_3:
  *(_QWORD *)(v4 + 8) = v7;
  v8 = sub_A8B10(a3);
  if ( *(_BYTE *)a1 <= 0xAu )
  {
    if ( (v8 & (v8 - 1)) != 0 )
      return 0;
    if ( v8 )
      log2floor();
  }
  set_debug_event_code();
  *(_DWORD *)(v4 + 4) = sub_A8B10(a3);
  *(_DWORD *)v4 = sub_A8B10(a3);
  switch ( *(_DWORD *)(v4 + 20) & 0xFFFFFFF )
  {
    case 1:
    case 8:
      sub_9D5E0(a3, (__int64)v18, 0x400u);
      v11 = *(_DWORD *)(v4 + 20) & 0xFFFFFFF;
      if ( (unsigned int)v11 <= 0xB )
      {
        v12 = 2306;
        if ( _bittest64(&v12, v11) )
        {
          sub_9C440(v4 + 24, v18);
          if ( *(_BYTE *)a1 <= 7u )
          {
            v14 = (unsigned int)sub_A8B10(a3);
          }
          else
          {
            v13 = (unsigned int)sub_A8B10(a3);
            v14 = v13 | (sub_A8B10(a3) << 32);
          }
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) == v14 )
            v14 = -1;
          *(_QWORD *)(v4 + 48) = v14;
          *(_QWORD *)(v4 + 56) = (unsigned int)sub_A8B10(a3);
          if ( *(_BYTE *)a1 <= 7u )
          {
            v16 = (unsigned int)sub_A8B10(a3);
          }
          else
          {
            v15 = (unsigned int)sub_A8B10(a3);
            v16 = v15 | (sub_A8B10(a3) << 32);
          }
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) == v16 )
            v16 = -1;
          *(_QWORD *)(v4 + 64) = v16;
          return 1;
        }
      }
      sub_9BAB0(a3);
LABEL_35:
      sub_9BAD0();
      goto LABEL_36;
    case 2:
    case 4:
      v10 = sub_A8B10(a3);
      if ( (((*(_DWORD *)(v4 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_35;
      *(_DWORD *)(v4 + 24) = v10;
      return 1;
    case 3:
      if ( *(_BYTE *)a1 <= 5u )
      {
        sub_9D5E0(a3, (__int64)v18, 0x400u);
        sub_A9020(a1, a3);
        sub_A8B10(a3);
        sub_A9020(a1, a3);
        return 1;
      }
      if ( *(_BYTE *)a1 == 6 )
        return 1;
LABEL_27:
      sub_9D5E0(a3, (__int64)v18, 0x400u);
      v17 = *(_DWORD *)(v4 + 20) & 0xFFFFFFF;
      if ( (unsigned int)(v17 - 9) <= 1 || v17 == 3 )
      {
        sub_9C440(v4 + 24, v18);
        return 1;
      }
LABEL_36:
      sub_9BAF0();
      result = sub_A94F0();
      break;
    case 7:
      *(_DWORD *)(v4 + 24) = sub_A8B10(a3);
      qlread();
      *(_BYTE *)(v4 + 28) = 0;
      *(_QWORD *)(v4 + 32) = sub_A9020(a1, a3);
      sub_9D5E0(a3, (__int64)v18, 0x400u);
      sub_9C440(v4 + 40, v18);
      return 1;
    case 9:
      goto LABEL_27;
    default:
      return 0;
  }
  return result;
}

