__int64 __fastcall Z3_mk_fpa_nan(__int64 a1, __int64 a2)
{
  char v2; // r12
  _DWORD *v3; // rax
  __int64 result; // rax
  unsigned int v5; // r15d
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // eax
  __int64 v11; // [rsp+8h] [rbp-40h]

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_2A0DB0();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
LABEL_15:
      result = 0;
      goto LABEL_16;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return 0;
    }
  }
  v3 = *(_DWORD **)(a2 + 24);
  if ( !v3 || *(_DWORD *)(a1 + 384) != *v3 || v3[1] )
  {
    sub_24EA30(a1, 3u, "fp sort expected");
    if ( !v2 )
      return 0;
    sub_2BB620(0);
    goto LABEL_15;
  }
  v5 = sub_15C5560(a1 + 368, a2);
  v10 = sub_15C5540((int)a1 + 368, a2, v6, v7, v8, v9);
  v11 = sub_15CC680(a1 + 368, v10, v5);
  sub_251FD0(a1, v11);
  result = v11;
  if ( !v2 )
    return result;
  sub_2BB620(v11);
  result = v11;
LABEL_16:
  byte_1C7EBA0 = 1;
  return result;
}

