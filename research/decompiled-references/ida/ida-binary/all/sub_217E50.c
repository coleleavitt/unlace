__int64 __fastcall sub_217E50(__int64 a1, __int64 a2, __int64 *a3, double a4)
{
  bool v5; // cc
  __int64 v6; // rbp
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rsi
  __int64 result; // rax
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  char v27; // [rsp+Fh] [rbp-439h] BYREF
  _BYTE v28[1032]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v29; // [rsp+418h] [rbp-30h]

  v5 = *(_BYTE *)a1 <= 7u;
  v6 = *(_QWORD *)(a2 + 24);
  v29 = __readfsqword(0x28u);
  if ( v5 )
  {
    v9 = (unsigned int)sub_217810(a3);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) != (unsigned int)v9 )
      goto LABEL_3;
  }
  else
  {
    v8 = (unsigned int)sub_217810(a3);
    v9 = v8 | (sub_217810(a3) << 32);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) != v9 )
      goto LABEL_3;
  }
  v9 = -1;
LABEL_3:
  *(_QWORD *)(v6 + 8) = v9;
  v10 = sub_217810(a3);
  v11 = v10;
  if ( *(_BYTE *)a1 <= 0xAu )
  {
    if ( (v10 & (v10 - 1)) != 0 )
      return 0;
    if ( v10 )
      v11 = (unsigned int)log2floor(v10) + 1;
  }
  set_debug_event_code(v6, v11);
  *(_DWORD *)(v6 + 4) = sub_217810(a3);
  *(_DWORD *)v6 = sub_217810(a3);
  switch ( *(_DWORD *)(v6 + 20) & 0xFFFFFFF )
  {
    case 1:
    case 8:
      v13 = (__int64)a3;
      v11 = (__int64)v28;
      sub_20C420(a3, (__int64)v28, 0x400u);
      v19 = *(_DWORD *)(v6 + 20) & 0xFFFFFFF;
      if ( (unsigned int)v19 <= 0xB )
      {
        v17 = 2306;
        if ( _bittest64(&v17, v19) )
        {
          sub_20B400((__int64 *)(v6 + 24), v28);
          if ( *(_BYTE *)a1 <= 7u )
          {
            v21 = (unsigned int)sub_217810(a3);
          }
          else
          {
            v20 = (unsigned int)sub_217810(a3);
            v21 = v20 | (sub_217810(a3) << 32);
          }
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) == v21 )
            v21 = -1;
          *(_QWORD *)(v6 + 48) = v21;
          *(_QWORD *)(v6 + 56) = (unsigned int)sub_217810(a3);
          if ( *(_BYTE *)a1 <= 7u )
          {
            v23 = (unsigned int)sub_217810(a3);
          }
          else
          {
            v22 = (unsigned int)sub_217810(a3);
            v23 = v22 | (sub_217810(a3) << 32);
          }
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) == v23 )
            v23 = -1;
          *(_QWORD *)(v6 + 64) = v23;
          return 1;
        }
      }
      sub_20AA70(a4, (__int64)a3, (__int64)v28, v17, v18);
LABEL_35:
      sub_20AA90(a4, v13, v11, v16, v15);
      goto LABEL_36;
    case 2:
    case 4:
      v13 = (__int64)a3;
      v14 = sub_217810(a3);
      v16 = ((*(_DWORD *)(v6 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD;
      if ( (((*(_DWORD *)(v6 + 20) & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
        goto LABEL_35;
      *(_DWORD *)(v6 + 24) = v14;
      return 1;
    case 3:
      if ( *(_BYTE *)a1 <= 5u )
      {
        sub_20C420(a3, (__int64)v28, 0x400u);
        sub_217D20(a1, a3);
        sub_217810(a3);
        sub_217D20(a1, a3);
        return 1;
      }
      if ( *(_BYTE *)a1 == 6 )
        return 1;
LABEL_27:
      v13 = (__int64)a3;
      v11 = (__int64)v28;
      sub_20C420(a3, (__int64)v28, 0x400u);
      v25 = *(_DWORD *)(v6 + 20) & 0xFFFFFFF;
      v26 = (unsigned int)(v25 - 9);
      if ( (unsigned int)v26 <= 1 || v25 == 3 )
      {
        sub_20B400((__int64 *)(v6 + 24), v28);
        return 1;
      }
LABEL_36:
      sub_20AAB0(a4, v13, v11, v26, v24);
      result = sub_2181F0();
      break;
    case 7:
      v27 = 0;
      *(_DWORD *)(v6 + 24) = sub_217810(a3);
      qlread(*a3, &v27, 1);
      *(_BYTE *)(v6 + 28) = v27 != 0;
      *(_QWORD *)(v6 + 32) = sub_217D20(a1, a3);
      sub_20C420(a3, (__int64)v28, 0x400u);
      sub_20B400((__int64 *)(v6 + 40), v28);
      return 1;
    case 9:
      goto LABEL_27;
    default:
      return 0;
  }
  return result;
}
