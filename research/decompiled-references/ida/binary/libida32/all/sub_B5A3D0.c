__int64 __fastcall sub_B5A3D0(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rcx
  int v7; // edx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned int v10; // edx
  unsigned int *v11; // rdx
  __int64 v12; // rax
  char v13; // [rsp+Fh] [rbp-39h] BYREF
  _QWORD v14[2]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int8 v15; // [rsp+20h] [rbp-28h]
  unsigned __int8 v16; // [rsp+21h] [rbp-27h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v2 & 4) != 0 )
    v3 = (_QWORD *)*v3;
  v4 = sub_B6AD60(v3);
  result = 0;
  if ( (*(_BYTE *)(v4 + 8) & 0x7F) == 0 && v4 != 40 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 17448LL);
    v7 = *(_DWORD *)(v6 + 260);
    if ( v7 == 15 )
    {
      v10 = *(_DWORD *)(v6 + 264);
      if ( v10 - 27 > 1 && v10 > 1 )
        return result;
    }
    else if ( v7 != 14 )
    {
      return result;
    }
    v8 = *(_QWORD *)(a1 + 40);
    result = 0;
    if ( (v8 & 7) != 0 )
      return result;
    v9 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v9 )
      return result;
    v11 = *(unsigned int **)(v9 + 16);
    v12 = *v11;
    v16 = 0;
    v14[0] = v11 + 4;
    v14[1] = v12;
    v13 = 1;
    if ( v12 == 4 )
    {
      if ( v11[4] == 1852399981 )
        return 1;
    }
    else if ( v12 == 5 && v11[4] == 1767992695 && *((_BYTE *)v11 + 20) == 110 )
    {
      return 1;
    }
    if ( !(unsigned __int8)sub_B5A360((__int64)v14, &v13, "WinMain", 7)
      && !(unsigned __int8)sub_B5A360((__int64)v14, &v13, "wWinMain", 8) )
    {
      sub_B5A360((__int64)v14, &v13, "DllMain", 7);
    }
    result = v16;
    if ( v16 )
      return v15;
  }
  return result;
}

