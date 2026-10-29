__int64 __fastcall sub_960960(__int64 *a1)
{
  _QWORD *v2; // rbp
  unsigned __int8 v3; // al
  __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rdi
  __int64 (*v14)(void); // rax
  _BYTE v15[32]; // [rsp+8h] [rbp-20h] BYREF

  v2 = (_QWORD *)a1[1];
  v3 = *((_BYTE *)v2 + 28) & 0x7F;
  if ( (unsigned int)v3 - 34 > 5 )
  {
    if ( v3 == 18 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*v2 + 64LL))(a1[1]);
      v9 = *a1;
      v5 = v8;
      if ( *a1 )
      {
        if ( *(_BYTE *)(v9 + 168) )
        {
          v10 = sub_9649E0(v9 + 128, v2);
          if ( v10 )
            return v10;
        }
      }
    }
    else if ( v3 == 8 )
    {
      v12 = *(__int64 (__fastcall **)(__int64))(*v2 + 64LL);
      if ( v12 == sub_6CE290 )
        return v2[11];
      else
        return v12(a1[1]);
    }
    else
    {
      v13 = v2[6];
      v14 = *(__int64 (**)(void))(*(_QWORD *)v13 + 64LL);
      if ( (char *)v14 == (char *)sub_6CEBD0 )
        return sub_B5BA10(v13, v15);
      else
        return v14();
    }
    return v5;
  }
  v4 = *(__int64 (__fastcall **)(__int64))(*v2 + 64LL);
  if ( v4 == sub_6CEBD0 )
    v5 = sub_B5BA10(a1[1], v15);
  else
    v5 = v4(a1[1]);
  if ( v5 && (*(_WORD *)v5 & 0x1FF) == 0xF6 )
    v5 = *(_QWORD *)(v5 + 16);
  v6 = *a1;
  if ( !*a1 || !*(_BYTE *)(v6 + 168) )
    return v5;
  v11 = sub_964180(v6 + 128, v2);
  if ( v11 )
    return v11;
  return v5;
}

