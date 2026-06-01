__int64 __fastcall Z3_get_domain(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  char v4; // r13
  __int64 v5; // rax
  char v6; // al
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_29A140(a1, a2, a3);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
LABEL_16:
      result = 0;
LABEL_17:
      byte_1C7EBA0 = 1;
      return result;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return 0;
    }
    if ( !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return 0;
    }
  }
  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 )
  {
    v6 = *(_BYTE *)(v5 + 17);
    if ( (v6 & 1) != 0 && (v6 & 2) != 0 )
      v3 = 0;
  }
  if ( (unsigned int)v3 >= *(_DWORD *)(a2 + 32) )
  {
    sub_24EA30(a1, 2u, nullptr);
    if ( v4 )
    {
      sub_2BB620(0);
      goto LABEL_16;
    }
    return 0;
  }
  result = *(_QWORD *)(a2 + 8 * v3 + 48);
  if ( v4 )
  {
    v8 = *(_QWORD *)(a2 + 8 * v3 + 48);
    sub_2BB620(v8);
    result = v8;
    goto LABEL_17;
  }
  return result;
}

