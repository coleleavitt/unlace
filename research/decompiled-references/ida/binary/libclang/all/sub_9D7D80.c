__int64 __fastcall sub_9D7D80(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // ebp
  int v7; // eax
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 (__fastcall *v13)(__int64); // rax
  _QWORD **v14; // rdi
  __int64 (*v15)(void); // rdx
  __int64 v16; // rsi
  unsigned __int8 **v17; // rax
  __int64 v19; // rax
  __int64 v20[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = sub_A1C2E0(a3);
  if ( !(_BYTE)v6 )
  {
    v7 = *(_DWORD *)(a3 + 48);
    if ( v7 == 1 )
    {
      v8 = *(__int64 **)(a3 + 24);
    }
    else
    {
      if ( (unsigned int)(v7 - 2) <= 1 )
        BUG();
      v8 = *(__int64 **)(*(_QWORD *)(a3 + 24) + 32LL);
    }
    v9 = *v8;
    v10 = 0;
    if ( (v9 & 2) == 0 )
    {
      v11 = v9 & 0xFFFFFFFFFFFFFFFCLL;
      v10 = v11;
      if ( v11 )
      {
        if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 24 >= 0x1B )
          v10 = 0;
      }
    }
    if ( !sub_77C620(v10, a2)
      && ((v12 = *(_QWORD **)(a1 + 24), v13 = *(__int64 (__fastcall **)(__int64))(*v12 + 104LL), v13 != sub_8D7E60)
        ? (v16 = ((__int64 (*)(void))v13)())
        : (v14 = (_QWORD **)v12[3], v15 = (__int64 (*)(void))(*v14)[13], (char *)v15 != (char *)v13)
        ? (v16 = v15())
        : (v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v14[3] + 104LL))(v14[3])),
          (unsigned __int8)sub_7837E0(v10, v16))
      || (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0
      && (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0
      && (v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24)),
          !(unsigned __int8)sub_77C510(v10, v19)) )
    {
      v20[0] = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      v17 = (unsigned __int8 **)sub_A2E0C0(a1, v20, 2299, 1);
      if ( v17 )
        sub_8356A0(v17, v10, 0xAu);
      sub_A2DD70(a1, *(unsigned int *)(v10 + 24), 105);
    }
  }
  return v6;
}

