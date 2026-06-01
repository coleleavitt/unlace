__int64 __fastcall sub_9607F0(__int64 *a1, _BYTE *a2)
{
  __int64 v3; // rbx
  unsigned __int8 v4; // al
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 v12; // rdi
  __int64 (*v13)(void); // rax
  _BYTE v14[48]; // [rsp+8h] [rbp-30h] BYREF

  v3 = a1[1];
  *a2 = 0;
  v4 = *(_BYTE *)(v3 + 28) & 0x7F;
  if ( (unsigned int)v4 - 34 <= 5 )
  {
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL);
    if ( v5 == sub_6CEBD0 )
      v6 = sub_B5BA10(v3, v14);
    else
      v6 = v5(v3);
    if ( v6 && (*(_WORD *)v6 & 0x1FF) == 0xF6 )
      v6 = *(_QWORD *)(v6 + 16);
    v7 = *a1;
    if ( *a1 )
    {
      if ( *(_BYTE *)(v7 + 168) )
      {
        result = sub_964180(v7 + 128, v3);
        if ( result )
          goto LABEL_16;
      }
    }
    return v6;
  }
  if ( v4 != 18 )
  {
    if ( v4 == 8 )
    {
      v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL);
      if ( v11 == sub_6CE290 )
        return *(_QWORD *)(v3 + 88);
      else
        return v11(v3);
    }
    else
    {
      v12 = *(_QWORD *)(v3 + 48);
      v13 = *(__int64 (**)(void))(*(_QWORD *)v12 + 64LL);
      if ( (char *)v13 == (char *)sub_6CEBD0 )
        return sub_B5BA10(v12, v14);
      else
        return v13();
    }
  }
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
  v10 = *a1;
  v6 = v9;
  if ( !*a1 )
    return v6;
  if ( !*(_BYTE *)(v10 + 168) )
    return v6;
  result = sub_9649E0(v10 + 128, v3);
  if ( !result )
    return v6;
LABEL_16:
  *a2 = 1;
  return result;
}

