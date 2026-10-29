__int64 __fastcall sub_1DB8AC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rdx
  __int64 v4; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-38h] BYREF
  int v10; // [rsp+8h] [rbp-30h]
  __int64 v11; // [rsp+10h] [rbp-28h]

  v2 = a1;
  v3 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 80LL) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(*(_QWORD *)(a2 + 48) + 80LL) & 4) != 0 )
    v4 = v3[1];
  else
    v4 = *v3;
  if ( a1 && (*(_BYTE *)(a1 + 80) & 0x7Fu) - 35 <= 3 )
  {
    v6 = *(_QWORD *)(sub_B8C1B0(a1 + 72) + 16);
    if ( (v6 & 4) != 0 )
      v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v7 )
    {
      if ( v7 != 64 )
      {
        v8 = *(_QWORD *)(v7 + 64);
        if ( v8 )
        {
          if ( (*(_BYTE *)(v8 + 10) & 0x20) != 0 && (unsigned int)sub_B77890(a1) == 42 )
            v2 = sub_1DB8140(a1);
        }
      }
    }
  }
  v11 = v2;
  v10 = 16777472;
  v9 = off_2C6CD48;
  return (unsigned int)sub_BC7D30((__int64)&v9, v4) ^ 1;
}
