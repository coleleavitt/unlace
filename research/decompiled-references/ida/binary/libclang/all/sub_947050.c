__int64 __fastcall sub_947050(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 result; // rax
  unsigned int v9; // r13d
  void *v10; // r14
  unsigned int v11; // r15d
  unsigned __int64 v12; // rax
  _QWORD **v13; // rdi
  __int64 (*v14)(void); // rax
  __int64 v15; // rdi
  unsigned int v16; // r15d
  unsigned __int8 **v17; // r12
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+20h] [rbp-A8h] BYREF
  int v22; // [rsp+28h] [rbp-A0h]
  void *v23; // [rsp+30h] [rbp-98h] BYREF
  size_t v24; // [rsp+38h] [rbp-90h]
  _QWORD v25[2]; // [rsp+40h] [rbp-88h] BYREF
  void *v26; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-70h]
  __int128 v28; // [rsp+60h] [rbp-68h]
  __int64 v29; // [rsp+70h] [rbp-58h]
  char v30; // [rsp+78h] [rbp-50h]
  int v31; // [rsp+7Ch] [rbp-4Ch]
  void **v32; // [rsp+80h] [rbp-48h]

  result = 1;
  if ( *(_DWORD *)(a3 + 8) > 0x1Fu )
  {
    v22 = 0;
    v21 = 0xFFFFFFCF / a4;
    sub_2587D60(&v26, a3);
    v9 = v27;
    v10 = v26;
    BYTE4(v24) = 1;
    LODWORD(v24) = v27;
    v23 = v26;
    if ( v27 > 0x40 )
    {
      v16 = v27;
      v11 = v16 - sub_2587400(&v23);
    }
    else
    {
      v11 = 0;
      if ( v26 )
      {
        _BitScanReverse64(&v12, (unsigned __int64)v26);
        v11 = v12 + 1;
      }
    }
    v13 = *(_QWORD ***)(a1 + 24);
    v14 = (__int64 (*)(void))(*v13)[13];
    if ( (char *)v14 == (char *)sub_8D7E60 )
      v15 = (*(__int64 (__fastcall **)(_QWORD *))(*v13[3] + 104LL))(v13[3]);
    else
      v15 = v14();
    if ( (unsigned int)sub_B064C0(v15) >= v11 && (int)sub_2586820(a3, &v21) <= 0 )
    {
      if ( v9 > 0x40 && v10 )
        operator delete[](v10);
      return 1;
    }
    else
    {
      if ( v9 > 0x40 && v10 )
        operator delete[](v10);
      if ( a5 )
        return 0;
      v20 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      v17 = (unsigned __int8 **)sub_A2E0C0(a1, &v20, 2250, 0);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      v32 = &v23;
      v28 = 0;
      v23 = v25;
      v24 = 0;
      LOBYTE(v25[0]) = 0;
      v27 = 0;
      v30 = 0;
      v31 = 1;
      v29 = 0;
      v26 = &off_49DA2C8;
      sub_2623850(&v26, 0, 0, 0, v18, v19);
      sub_2594DB0(a3, &v26, 0);
      v26 = &off_49DA2C8;
      sub_2623770(&v26);
      if ( v17 )
        sub_838D50(v17, v23, v24);
      if ( v23 == v25 )
      {
        return 0;
      }
      else
      {
        operator delete(v23, v25[0] + 1LL);
        return 0;
      }
    }
  }
  return result;
}

