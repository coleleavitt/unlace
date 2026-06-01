__int64 __fastcall sub_9DCCC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int8 **v10; // rax
  unsigned __int8 **v11; // rbx
  __int64 v12; // rbp
  unsigned __int8 **v13; // rax
  unsigned __int8 **v14; // rbx
  __int64 v15; // rsi
  unsigned __int8 **v16; // rbx
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-30h] BYREF
  __int64 v19; // [rsp+10h] [rbp-28h] BYREF
  char v20; // [rsp+18h] [rbp-20h]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 2) & 2) != 0 )
    return 1;
  v18 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  if ( (*(_WORD *)a3 & 0x1FF) != 0x6B )
  {
    v12 = *(_QWORD *)(a3 + 16);
    if ( !sub_77DE60((_QWORD *)v12, 0, nullptr, v5) )
    {
      v13 = (unsigned __int8 **)sub_A2E0C0(a1, &v18, 2247, 0);
      v14 = v13;
      if ( v13 )
      {
        sub_9B5410(v13, (*(_BYTE *)(v12 + 28) & 0x7Fu) - 33 <= 3);
        sub_8356A0(v14, v12, 0xAu);
        return 0;
      }
    }
    return 0;
  }
  v6 = *(_QWORD *)(a3 + 16);
  v7 = sub_A2CB40(a1);
  v9 = *(_DWORD *)(a3 + 4);
  if ( (*(_BYTE *)(v7 + 2) & 2) == 0 )
  {
    if ( !v9 )
      goto LABEL_7;
    if ( (unsigned __int8)sub_A1A340(*(_QWORD *)(a1 + 200)) )
      return 1;
    v15 = 1;
    v16 = (unsigned __int8 **)sub_A2E0C0(a1, &v18, 2249, 0);
    if ( !v16 )
      return 0;
    goto LABEL_17;
  }
  if ( v9 != 1 || sub_77DD70((_QWORD *)v6, a2, v7, v8) )
  {
LABEL_7:
    if ( !sub_77DE60((_QWORD *)v6, 0, nullptr, v8) )
    {
      v10 = (unsigned __int8 **)sub_A2E0C0(a1, &v18, 2247, 0);
      v11 = v10;
      if ( v10 )
      {
        sub_9B5410(v10, (*(_BYTE *)(v6 + 28) & 0x7Fu) - 33 <= 3);
        sub_8356A0(v11, v6, 0xAu);
      }
    }
    return 0;
  }
  v16 = (unsigned __int8 **)sub_A2E0C0(a1, &v18, 2249, 0);
  if ( !v16 )
    return 0;
  v15 = 0;
LABEL_17:
  sub_9B5410(v16, v15);
  v17 = sub_AC7B80(a3);
  v20 = 1;
  v19 = v17;
  sub_839C90((__int64 *)v16, &v19);
  return 0;
}

