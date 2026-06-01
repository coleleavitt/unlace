__int64 __fastcall sub_BC3060(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // rax
  unsigned __int8 (*v4)(void); // rdx
  __int64 (*v5)(); // rdx
  __int64 (*v6)(); // rdx
  __int64 (*v7)(); // rdx
  __int64 (*v8)(); // rax
  unsigned int v9; // ebp
  char v10; // al
  char v11; // dl
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // r12
  _QWORD *v18; // rbx
  __int64 *v20[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = (_QWORD *)*a1;
  v20[0] = a1;
  v4 = (unsigned __int8 (*)(void))v3[27];
  if ( (char *)v4 != (char *)sub_BA1BA0 )
  {
    if ( !v4() )
      return 0;
    a1 = v20[0];
    v3 = (_QWORD *)*v20[0];
  }
  v5 = (__int64 (*)())v3[145];
  if ( v5 != sub_BA1D20 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v5)(a1, a2) )
      return 0;
    a1 = v20[0];
    v3 = (_QWORD *)*v20[0];
  }
  v6 = (__int64 (*)())v3[156];
  if ( v6 != sub_BA1DD0 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v6)(a1, a2) )
      return 0;
    a1 = v20[0];
    v3 = (_QWORD *)*v20[0];
  }
  v7 = (__int64 (*)())v3[165];
  if ( v7 != sub_BA1E60 )
  {
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64))v7)(a1, a2) )
      return 0;
    a1 = v20[0];
    v3 = (_QWORD *)*v20[0];
  }
  v8 = (__int64 (*)())v3[181];
  if ( v8 == sub_BA1F60 || ((unsigned __int8 (__fastcall *)(__int64 *, __int64))v8)(a1, a2) )
  {
    v9 = sub_BA56E0(v20, a2);
    if ( (_BYTE)v9 )
    {
      v10 = *(_BYTE *)(a2 + 68);
      v11 = v10 & 0xC;
      if ( (v10 & 1) != 0 )
      {
        v12 = *(_QWORD *)(a2 + 72);
        if ( v11 != 12 && (v10 & 0xC) != 0 )
          v12 = *(_QWORD *)(v12 + 8);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*v20[0] + 96))(v20[0], v12) )
          return 0;
        v10 = *(_BYTE *)(a2 + 68);
        v11 = v10 & 0xC;
      }
      if ( v11 == 12
        || (v10 & 0xC) == 0
        || (v13 = sub_B54370(a2), (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*v20[0] + 96))(v20[0], v13)) )
      {
        if ( !sub_B6A370(a2) || (v14 = sub_B69600(a2)) == 0 || (unsigned __int8)sub_BABBC0(v20, v14) )
        {
          v15 = sub_9A4B10(a2);
          v17 = v16;
          v18 = (_QWORD *)v15;
          if ( (_QWORD *)v15 == v16 )
            return v9;
          while ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(*v20[0] + 32))(v20[0], *v18) )
          {
            if ( v17 == ++v18 )
              return v9;
          }
        }
      }
    }
  }
  return 0;
}

