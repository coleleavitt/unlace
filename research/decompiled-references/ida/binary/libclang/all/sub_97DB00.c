__int64 __fastcall sub_97DB00(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // [rsp+8h] [rbp-30h] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h] BYREF
  __int64 v14; // [rsp+18h] [rbp-20h]

  if ( !*a2 )
  {
    v12 = 0;
    sub_69F1F0((__int64)&v13, 0, 0, 0);
    *(_BYTE *)(a1 + 4) &= ~1u;
    v10 = v13;
    *(_DWORD *)a1 = 0;
    v11 = v14;
    sub_6A37F0(a1);
    sub_6A3690(a1, v10, v11, &v12, nullptr, 0, 0, 1);
    return a1;
  }
  if ( *((_BYTE *)a2 + 16) )
  {
    v2 = *(_QWORD *)(*a2 + 8);
    v12 = a2[1];
    v3 = v2 >> 2;
    if ( (v2 & 4) == 0 && (v2 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      sub_69F1C0((__int64)&v13, v2 & 0xFFFFFFFFFFFFFFF8LL, 0, 0);
      goto LABEL_8;
    }
    v4 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    v5 = 0;
    if ( (v3 & 1) != 0 )
      v5 = v4;
    v6 = v5;
  }
  else
  {
    v12 = *a2;
    v6 = 0;
  }
  sub_69F1F0((__int64)&v13, v6, 0, 0);
LABEL_8:
  v7 = v13;
  v8 = v14;
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) &= ~1u;
  sub_6A37F0(a1);
  sub_6A3690(a1, v7, v8, &v12, nullptr, 0, 0, 0);
  return a1;
}

