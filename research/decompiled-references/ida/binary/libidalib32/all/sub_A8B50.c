__int64 __fastcall sub_A8B50(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  bool v3; // cc
  __int64 v4; // rbp
  int v6; // r13d
  int v7; // eax
  int v8; // eax
  __int64 result; // rax
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r13d
  int v14; // eax
  int v15; // r12d
  int v16; // eax
  int v17; // eax
  int v18; // r12d
  int v19; // eax
  _BYTE v20[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v21; // [rsp+418h] [rbp-30h]

  v3 = *a1 <= 7u;
  v4 = *(_QWORD *)(a2 + 24);
  v21 = __readfsqword(0x28u);
  if ( v3 )
  {
    v7 = sub_A8550(a3);
  }
  else
  {
    v6 = sub_A8550(a3);
    sub_A8550(a3);
    v7 = v6;
  }
  *(_DWORD *)(v4 + 8) = v7;
  v8 = sub_A8550(a3);
  if ( *a1 <= 0xAu )
  {
    if ( (v8 & (v8 - 1)) != 0 )
      return 0;
    if ( v8 )
      log2floor();
  }
  set_debug_event_code();
  *(_DWORD *)(v4 + 4) = sub_A8550(a3);
  *(_DWORD *)v4 = sub_A8550(a3);
  switch ( *(_DWORD *)(v4 + 16) & 0xFFFFFFF )
  {
    case 1:
    case 8:
      sub_9D4A0(a3, (__int64)v20, 0x400u);
      v11 = *(_DWORD *)(v4 + 16) & 0xFFFFFFF;
      if ( (unsigned int)v11 <= 0xB )
      {
        v12 = 2306;
        if ( _bittest64(&v12, v11) )
        {
          sub_9C320(v4 + 20, v20);
          if ( *a1 <= 7u )
          {
            v14 = sub_A8550(a3);
          }
          else
          {
            v13 = sub_A8550(a3);
            sub_A8550(a3);
            v14 = v13;
          }
          *(_DWORD *)(v4 + 44) = v14;
          *(_DWORD *)(v4 + 48) = sub_A8550(a3);
          if ( *a1 <= 7u )
          {
            v16 = sub_A8550(a3);
          }
          else
          {
            v15 = sub_A8550(a3);
            sub_A8550(a3);
            v16 = v15;
          }
          *(_DWORD *)(v4 + 52) = v16;
          return 1;
        }
      }
      sub_9B9B0(a3);
LABEL_33:
      sub_9B9D0();
      goto LABEL_34;
    case 2:
    case 4:
      v10 = sub_A8550(a3);
      if ( (((*(_DWORD *)(v4 + 16) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_33;
      *(_DWORD *)(v4 + 20) = v10;
      return 1;
    case 3:
      if ( *a1 <= 5u )
      {
        sub_9D4A0(a3, (__int64)v20, 0x400u);
        sub_A8630(*a1, a3);
        sub_A8550(a3);
        sub_A8630(*a1, a3);
        return 1;
      }
      if ( *a1 == 6 )
        return 1;
LABEL_22:
      sub_9D4A0(a3, (__int64)v20, 0x400u);
      v17 = *(_DWORD *)(v4 + 16) & 0xFFFFFFF;
      if ( (unsigned int)(v17 - 9) <= 1 || v17 == 3 )
      {
        sub_9C320(v4 + 20, v20);
        return 1;
      }
LABEL_34:
      sub_9B9F0();
      result = sub_A8EA0();
      break;
    case 7:
      *(_DWORD *)(v4 + 20) = sub_A8550(a3);
      qlread();
      *(_BYTE *)(v4 + 24) = 0;
      if ( *a1 <= 7u )
      {
        v19 = sub_A8550(a3);
      }
      else
      {
        v18 = sub_A8550(a3);
        sub_A8550(a3);
        v19 = v18;
      }
      *(_DWORD *)(v4 + 28) = v19;
      sub_9D4A0(a3, (__int64)v20, 0x400u);
      sub_9C320(v4 + 36, v20);
      return 1;
    case 9:
      goto LABEL_22;
    default:
      return 0;
  }
  return result;
}

