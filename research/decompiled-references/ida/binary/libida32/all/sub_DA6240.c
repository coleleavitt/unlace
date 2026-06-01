__int64 __fastcall sub_DA6240(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebp
  int v6; // eax
  __int64 *v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int8 **v11; // rax
  __int64 v13; // rax
  __int64 v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = sub_DFFEE0(a3);
  if ( !(_BYTE)v5 )
  {
    v6 = *(_DWORD *)(a3 + 24);
    if ( v6 == 1 )
    {
      v7 = *(__int64 **)(a3 + 32);
    }
    else
    {
      if ( (unsigned int)(v6 - 2) <= 1 )
        BUG();
      v7 = *(__int64 **)(*(_QWORD *)(a3 + 32) + 32LL);
    }
    v8 = 0;
    if ( ((*v7 >> 1) & 1) == 0 )
    {
      v9 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
      v8 = v9;
      if ( v9 )
      {
        if ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 26 >= 0x1B )
          v8 = 0;
      }
    }
    if ( !sub_B4FBC0(v8)
      && (v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24)),
          (unsigned __int8)sub_B55AF0(v8, v10))
      || (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) != 0
      && (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x10) == 0
      && (v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24)),
          !(unsigned __int8)sub_B58200(v8, v13)) )
    {
      v14[0] = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
      v11 = (unsigned __int8 **)sub_E0FE60(a1, v14, 2501, 1);
      if ( v11 )
        sub_AC60B0(v11, v8, 0xAu);
      sub_E10070(a1, *(unsigned int *)(v8 + 24), 103);
    }
  }
  return v5;
}

