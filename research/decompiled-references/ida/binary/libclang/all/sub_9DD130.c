__int64 __fastcall sub_9DD130(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rax
  unsigned __int8 **v8; // rax
  unsigned __int8 **v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD **v12; // rdi
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rax
  unsigned int v16; // eax
  __int64 *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-40h] BYREF
  __int64 v20; // [rsp+10h] [rbp-38h] BYREF
  char v21; // [rsp+18h] [rbp-30h]

  if ( *(_DWORD *)(a3 + 48) || (v7 = *(_QWORD *)(a3 + 24)) == 0 || !*(_BYTE *)(*(_QWORD *)(v7 + 32) + 52LL) )
  {
    v19 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v8 = (unsigned __int8 **)sub_A2E1B0(a1, &v19, 2215, 0);
    v9 = v8;
    if ( v8 )
    {
      sub_9B5410(v8, 2);
      v10 = sub_A2CB40(a1);
      sub_9B58B0(v9, (*(_BYTE *)(v10 + 1) & 8) != 0);
      v11 = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
      v21 = 1;
      v20 = v11;
      sub_839C90((__int64 *)v9, &v20);
    }
    else
    {
      sub_A2CB40(a1);
      sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
    }
    if ( *(_DWORD *)(a3 + 48) || !*(_QWORD *)(a3 + 24) )
      return 1;
    v12 = *(_QWORD ***)(a1 + 24);
    v13 = (__int64 (__fastcall *)(__int64))(*v12)[13];
    v14 = v13 == sub_8D7E60
        ? (*(__int64 (__fastcall **)(_QWORD *))(*v12[3] + 104LL))(v12[3])
        : ((__int64 (*)(void))v13)();
    if ( a4 == *(unsigned __int8 *)(*(_QWORD *)(v14 + 17288) + 8LL) )
      return 1;
    v16 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
    v17 = (__int64 *)sub_A2E1A0(a1, v16, 110, 0);
    v18 = sub_A1A2D0(*(_QWORD *)(a1 + 200), a2);
    if ( v17 )
    {
      v20 = v18;
      v21 = 1;
      sub_839C90(v17, &v20);
    }
  }
  return 0;
}

