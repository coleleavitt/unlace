unsigned __int64 __fastcall sub_22614F0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v5; // rax
  std::_V2 *v6; // rdi
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rbx
  _QWORD v12[4]; // [rsp+0h] [rbp-B8h] BYREF
  __int16 v13; // [rsp+20h] [rbp-98h]
  _QWORD v14[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v15; // [rsp+50h] [rbp-68h]
  void *v16[2]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v17[16]; // [rsp+70h] [rbp-48h] BYREF
  char v18; // [rsp+80h] [rbp-38h]

  v5 = *a2;
  v6 = (std::_V2 *)v12;
  v13 = 261;
  v12[0] = v5;
  v12[1] = a2[1];
  if ( (unsigned __int8)sub_228B020(v12, 1)
    || (v6 = (std::_V2 *)v14, v15 = 261, v14[0] = *a2, v14[1] = a2[1], (unsigned __int8)sub_228B020(v14, 3)) )
  {
    std::_V2::system_category(v6);
    return 0;
  }
  else
  {
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 80LL);
    if ( v8 == sub_2259DC0 )
    {
      v9 = (_BYTE *)a1[5];
      v10 = a1[6];
      v18 &= ~1u;
      v16[0] = v17;
      sub_2259C30(v16, v9, (__int64)&v9[v10]);
    }
    else
    {
      v8((__int64)v16, (__int64)a1);
    }
    if ( (v18 & 1) != 0 )
    {
      v11 = LODWORD(v16[0]);
    }
    else
    {
      v2 = sub_22612B0((_BYTE *)v16[0], (size_t)v16[1], (__int64)a2);
      v11 = (unsigned int)v2;
      if ( (v18 & 1) == 0 && v16[0] != v17 )
        operator delete(v16[0]);
    }
    return v11 | v2 & 0xFFFFFFFF00000000LL;
  }
}
