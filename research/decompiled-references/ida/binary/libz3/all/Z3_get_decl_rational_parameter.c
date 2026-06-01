char *__fastcall Z3_get_decl_rational_parameter(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  char *result; // rax
  char *v9; // [rsp+8h] [rbp-60h]
  void *v10[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v11; // [rsp+20h] [rbp-48h] BYREF

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_29A3C0();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      result = "";
      goto LABEL_18;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return "";
    }
  }
  v5 = *(_QWORD *)(a2 + 24);
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 8)) == 0 || a3 >= *(_DWORD *)(v6 - 4) )
  {
    sub_24EA30(a1, 2u, nullptr);
LABEL_12:
    result = "";
    goto LABEL_13;
  }
  v7 = 16LL * a3 + v6;
  if ( *(_BYTE *)(v7 + 8) != 4 )
  {
    sub_24EA30(a1, 3u, nullptr);
    goto LABEL_12;
  }
  sub_1850940(v10, qword_1C7F2C0, *(_QWORD *)v7);
  result = (char *)sub_24ED70((_QWORD *)a1, (__int64)v10);
  if ( v10[0] != &v11 )
  {
    v9 = result;
    operator delete(v10[0], v11 + 1);
    result = v9;
  }
LABEL_13:
  if ( v4 )
LABEL_18:
    byte_1C7EBA0 = 1;
  return result;
}

