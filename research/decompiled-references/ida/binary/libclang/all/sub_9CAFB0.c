__int64 __fastcall sub_9CAFB0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int16 v3; // bp
  __int64 v4; // r14
  unsigned __int16 v5; // r12
  __int64 v7; // rbp
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  char v11; // [rsp+8h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_WORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = *(_WORD *)sub_A1A5A0(v4, 8);
  sub_A1A5E0(v4, 8);
  if ( v3 )
  {
    *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v5 % v3;
    return 1;
  }
  else
  {
    v7 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
    v8 = (__int64 *)sub_A2E130(a1, v7, 2306, 0);
    v9 = sub_AC7B80(*(_QWORD *)(v7 + 24));
    if ( v8 )
    {
      v10 = v9;
      v11 = 1;
      sub_839C90(v8, &v10);
    }
    return 0;
  }
}

