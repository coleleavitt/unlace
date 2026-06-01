__int64 __fastcall sub_9E9110(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  _BYTE *v8; // rbp
  _QWORD v9[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+18h] [rbp-50h]
  unsigned int v11; // [rsp+20h] [rbp-48h]
  int v12; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v9, v3);
  sub_A1A5E0(v2, 56);
  v4 = sub_9E82D0(a1, a2, (__int64)v9);
  if ( (_BYTE)v4 )
  {
    if ( v12 )
    {
      v4 = 0;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 184);
      v7 = *(_QWORD *)(v10 + 32);
      if ( *(_DWORD *)(v7 + 16) != v11 && v11 )
        v7 = *(_QWORD *)(v10 + v11 + 32);
      if ( !*(_BYTE *)(v7 + 51) || (v8 = (_BYTE *)(v10 + v9[0] + 72), v9[0] != v11) )
        v8 = (_BYTE *)(v10 + v9[0] + 40);
      *(_BYTE *)sub_A1A4E0(v6, 8) = *v8;
    }
  }
  sub_A1C0C0(v9);
  return v4;
}

