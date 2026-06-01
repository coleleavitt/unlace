__int64 __fastcall sub_16FFF90(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned __int8 v6; // al
  __int64 v7; // rbx
  __int16 v8; // ax
  char v9; // al
  __int64 v10; // r14
  __int64 (__fastcall *v11)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  __int64 v12; // rdi
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned int v19; // r13d
  unsigned int v20; // eax
  int v21; // esi
  __int64 v22; // r14
  int v23; // eax

  *a3 = 0;
  v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v6 - 53 <= 1 || (v7 = a2, ((v6 + 52) & 0x7Fu) <= 1) )
    v7 = sub_B72ED0(a2);
  if ( !*(_QWORD *)(v7 + 40) )
    return 0;
  v8 = *(_WORD *)(v7 + 30);
  if ( (v8 & 0x180) != 0 && (v8 & 0x22) == 0 )
    return 0;
  v9 = *(_BYTE *)(v7 + 28) & 0x7F;
  if ( ((v9 + 68) & 0x7Fu) <= 1 || v9 == 81 )
    return 0;
  v10 = *(_QWORD *)(a1 + 176);
  if ( (*(_BYTE *)(*(_QWORD *)(v10 + 232) + 105LL) & 0x40) == 0 )
  {
    v20 = sub_B845D0(v7);
    if ( v20 > 2 )
    {
      v21 = *(_DWORD *)(v7 + 24);
      if ( !v21 )
        return 0;
      if ( v20 == 3 )
      {
        v22 = *(_QWORD *)(v10 + 272);
        if ( v21 >= 0 || (v21 = sub_1021B90(v22, v21)) != 0 )
        {
          v23 = sub_1021680(v22, v21);
          if ( v23 )
          {
            if ( v23 != 3 )
              return 0;
          }
        }
      }
    }
  }
  v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(a1 + 200);
  if ( v11 == sub_16FEB80 )
  {
    if ( *(_QWORD *)(a1 + 208) && (*(_BYTE *)(v7 + 28) & 0x7F) != 0x18 )
      goto LABEL_13;
    goto LABEL_38;
  }
  if ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0x18 )
    goto LABEL_12;
  if ( (char *)v11 != (char *)sub_16FE600 && (char *)v11 != (char *)sub_16FF980 )
  {
    if ( !v11 )
      return 1;
    goto LABEL_38;
  }
  v12 = *(_QWORD *)(a1 + 208);
  if ( v12 )
  {
LABEL_38:
    *a3 = 1;
    v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(a1 + 200);
LABEL_12:
    if ( v11 )
    {
LABEL_13:
      v12 = *(_QWORD *)(a1 + 208);
      goto LABEL_14;
    }
    return 1;
  }
LABEL_14:
  v13 = (_QWORD *)(a1 + v12);
  if ( ((unsigned __int8)v11 & 1) != 0 )
    v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))((char *)v11 + *v13 - 1);
  if ( ((unsigned __int8 (__fastcall *)(_QWORD *, __int64))v11)(v13, a2) )
    return 1;
  if ( !*(_BYTE *)(a1 + 216) )
    return 0;
  v17 = *(_QWORD *)(a1 + 176);
  if ( (*(_BYTE *)(*(_QWORD *)(v17 + 232) + 1LL) & 8) == 0 )
    return 0;
  v18 = v7;
  if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x48 )
    v18 = *(_QWORD *)(v7 + 48);
  v19 = sub_169D3F0(v17, v18, nullptr, v14, v15, v16);
  if ( !(_BYTE)v19
    || *(__int64 (__fastcall **)(__int64, __int64))(a1 + 200) == sub_16FFA20
    && !*(_QWORD *)(a1 + 208)
    && ((*(_BYTE *)(v7 + 28) & 0x7Fu) - 59 > 2 || !sub_B97450(v7)) )
  {
    return 0;
  }
  *a3 = 1;
  return v19;
}
