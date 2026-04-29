__int64 __fastcall sub_36D60(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  unsigned __int8 v5; // al
  unsigned int v6; // edx
  __int64 v7; // rdi
  __int64 idati; // rax
  unsigned int v9; // edx
  __int64 v10; // rax
  const char *v11; // rbp
  __int64 *v12; // rax
  __int64 *v13; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  const char *v17; // rsi
  __int64 *v18; // rax
  const char *v19; // rbp
  __int64 *v20; // rax
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  const char *v24; // rsi
  __int64 v25; // [rsp+10h] [rbp-38h] BYREF
  __int64 v26; // [rsp+18h] [rbp-30h]
  __int16 v27; // [rsp+20h] [rbp-28h]
  unsigned __int64 v28; // [rsp+28h] [rbp-20h]

  v28 = __readfsqword(0x28u);
  result = *(unsigned __int8 *)(a1 + 142);
  if ( (unsigned __int8)result <= 2u )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( *(_BYTE *)(v3 + 142) == 5 )
    {
      if ( (debug & 0x400000) != 0 )
      {
        v18 = sub_34340(v3);
        v19 = src;
        if ( v18[1] )
          v19 = (const char *)*v18;
        v20 = sub_34340(a1);
        v24 = src;
        if ( v20[1] )
          v24 = (const char *)*v20;
        sub_88B80(
          (unsigned int)"Error typedef DIE %s dependency DIE %s processing error\n",
          (_DWORD)v24,
          (_DWORD)v19,
          v21,
          v22,
          v23);
      }
      return 5;
    }
    sub_345A0(a1, *(_DWORD *)(v3 + 136));
    v4 = *(_QWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 143) = *(_BYTE *)(v4 + 143) & 1 | *(_BYTE *)(a1 + 143) & 0xFE;
    if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(v4 + 64) )
      goto LABEL_4;
    result = *(unsigned __int8 *)(v4 + 142);
    if ( (_BYTE)result )
    {
      if ( !(unsigned __int8)sub_350A0(v4, a1 + 8) )
        goto LABEL_28;
      v4 = *(_QWORD *)(a1 + 88);
      v9 = *(_DWORD *)(v4 + 128);
      *(_DWORD *)(a1 + 128) = v9;
      if ( !v9 )
      {
LABEL_4:
        v5 = *(_BYTE *)(v4 + 142);
        if ( v5 == 3 )
        {
          if ( (unsigned __int8)sub_350A0(v4, a1 + 8) )
            return 3;
        }
        else
        {
          if ( v5 > 3u )
          {
            if ( v5 != 4 )
              return 5;
          }
          else if ( v5 != 2 )
          {
            create_tinfo(a1 + 8, 1, 7, 0);
            return 1;
          }
          v6 = *(_DWORD *)(v4 + 128);
          if ( v6 )
          {
            v7 = a1 + 8;
            idati = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 144LL) + 96LL);
            v27 = 1;
            v26 = v6;
            if ( !idati )
            {
              idati = get_idati();
              v7 = a1 + 8;
            }
            v25 = idati;
            create_tinfo(v7, 61, 189, &v25);
LABEL_26:
            if ( *(_BYTE *)(*(_QWORD *)(a1 + 88) + 142LL) == 2 )
              return 1;
            return 3;
          }
          if ( (unsigned __int8)sub_350A0(v4, a1 + 8) )
            goto LABEL_26;
        }
LABEL_28:
        if ( (debug & 0x400000) != 0 )
        {
          v11 = src;
          v12 = sub_34340(*(_QWORD *)(a1 + 88));
          if ( v12[1] )
            v11 = (const char *)*v12;
          v13 = sub_34340(a1);
          v17 = src;
          if ( v13[1] )
            v17 = (const char *)*v13;
          sub_88B80(
            (unsigned int)"Error typedef DIE %s propagating DIE %s type information\n",
            (_DWORD)v17,
            (_DWORD)v11,
            v14,
            v15,
            v16);
        }
        return 5;
      }
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 144LL) + 96LL);
      v27 = 1;
      v26 = v9;
      if ( !v10 )
        v10 = get_idati();
      v25 = v10;
      create_tinfo(a1 + 8, 61, 189, &v25);
      return *(unsigned __int8 *)(*(_QWORD *)(a1 + 88) + 142LL);
    }
  }
  return result;
}
