__int64 __fastcall Z3_mk_fpa_inf(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  char v4; // al
  char v5; // r13
  _DWORD *v6; // rax
  __int64 result; // rax
  unsigned int v8; // r15d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // [rsp+8h] [rbp-40h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v5 = v4;
  if ( v4 )
  {
    sub_2A0DF0(a1, a2, a3);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
LABEL_17:
      result = 0;
      goto LABEL_18;
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
  v6 = *(_DWORD **)(a2 + 24);
  if ( !v6 || *(_DWORD *)(a1 + 384) != *v6 || v6[1] )
  {
    sub_24EA30(a1, 3u, "fp sort expected");
    if ( !v5 )
      return 0;
    sub_2BB620(0);
    goto LABEL_17;
  }
  v8 = sub_15C5560(a1 + 368, a2);
  v13 = sub_15C5540((int)a1 + 368, a2, v9, v10, v11, v12);
  if ( a3 )
    v14 = sub_15CC860(a1 + 368, v13, v8);
  else
    v14 = sub_15CC770(a1 + 368, v13, v8);
  v15 = v14;
  sub_251FD0(a1, v14);
  result = v15;
  if ( v5 )
  {
    sub_2BB620(v15);
    result = v15;
LABEL_18:
    byte_1C7EBA0 = 1;
  }
  return result;
}

