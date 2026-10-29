__int64 __fastcall sub_FDF6A0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdi
  char *v7; // rcx
  __int64 v8; // r8
  char v9; // dl
  __int64 v11; // [rsp+0h] [rbp-68h]
  _QWORD v12[4]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v13; // [rsp+50h] [rbp-18h]

  if ( (a2 & 4) != 0 )
  {
    v3 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  }
  else
  {
    if ( (a2 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v7 = nullptr;
      v3 = 0;
      v6 = 0;
      goto LABEL_7;
    }
    v3 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  }
  if ( v3 )
  {
    v4 = *(_QWORD **)(v3 + 16);
    v3 = (unsigned __int64)(v4 + 2);
    v5 = (unsigned int)*v4;
    if ( (*v4 & 0xFFFFFFFC) != 0 )
    {
      v6 = v5 - 4;
      v7 = (char *)v4 + 20;
    }
    else
    {
      v7 = (char *)(v3 + v5);
      v6 = 0;
    }
  }
  else
  {
    v7 = nullptr;
    v6 = 0;
  }
LABEL_7:
  v8 = *(unsigned __int8 *)(v3 + 3);
  v12[3] = v6;
  v12[2] = v7;
  v9 = v8;
  if ( (byte_2411740[2 * v8] & 0x20) != 0 )
    v9 = v8 + 32;
  LOBYTE(v11) = v9;
  v12[0] = v11;
  v13 = 1288;
  sub_2253560(a1, v12);
  return a1;
}
