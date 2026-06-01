__int64 __fastcall sub_2148BE0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // esi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdi
  unsigned __int8 v11; // [rsp+Fh] [rbp-79h] BYREF
  _QWORD v12[4]; // [rsp+10h] [rbp-78h] BYREF
  __int16 v13; // [rsp+30h] [rbp-58h]
  _QWORD v14[4]; // [rsp+40h] [rbp-48h] BYREF
  __int16 v15; // [rsp+60h] [rbp-28h]

  v4 = *(_QWORD *)(a1 + 8);
  v11 = 2;
  if ( **(_DWORD **)(v4 + 48) == 2 )
  {
    result = sub_2148720(a1, (char *)&v11);
    if ( (_BYTE)result )
      return result;
    v5 = v11;
    v4 = *(_QWORD *)(a1 + 8);
    if ( v11 == 5 )
    {
      v14[0] = "cannot make section associative with .linkonce";
      v15 = 259;
      return sub_2153E90(v4, a2, v14, 0, 0);
    }
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 288LL) + 8LL);
  }
  else
  {
    v5 = 2;
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 288LL) + 8LL);
  }
  if ( (*(_BYTE *)(v6 + 173) & 0x10) != 0 )
  {
    v7 = *(_QWORD *)(v6 + 152);
    v8 = *(_QWORD *)(v6 + 160);
    v12[0] = "section '";
    v12[2] = v7;
    v12[3] = v8;
    v13 = 1283;
    v14[2] = "' is already linkonce";
    v14[0] = v12;
    v15 = 770;
    return sub_2153E90(v4, a2, v14, 0, 0);
  }
  sub_2114680(v6, v5);
  v10 = *(_QWORD *)(a1 + 8);
  result = 0;
  if ( **(_DWORD **)(v10 + 48) != 9 )
  {
    v14[0] = "unexpected token in directive";
    v15 = 259;
    return sub_21543E0(v10, v14, 0, 0);
  }
  return result;
}
