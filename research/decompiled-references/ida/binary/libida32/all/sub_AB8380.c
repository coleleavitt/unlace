void __fastcall sub_AB8380(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r9
  __int128 v9; // [rsp-28h] [rbp-58h]
  __int64 v10; // [rsp+0h] [rbp-30h]
  __int64 *v11; // [rsp+8h] [rbp-28h]

  if ( *(_DWORD *)(a1 + 4) != 1 || (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B || (*(_BYTE *)(a2 + 97) & 8) == 0 )
  {
    v2 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
      v2 = (__int64 *)v2[4];
    if ( *(_BYTE *)(a1 + 1) && v2 )
    {
      v11 = v2 + 1;
      v10 = *v2;
      v3 = sub_AA6CD0(a1);
      *((_QWORD *)&v9 + 1) = v10;
      *(_QWORD *)&v9 = a1;
      sub_AB7DB0(a1 + 8, &byte_22CD811, v3, v4, v5, v6, v9, v11);
      if ( !(unsigned __int8)sub_B4F880(a2) )
        return;
    }
    else if ( !(unsigned __int8)sub_B4F880(a2) )
    {
      return;
    }
    v7 = sub_B4F900(a2);
    sub_AAE4E0(a1 + 8, 0, 0, v7, a1, v8);
  }
}

