void __fastcall sub_7D9CE0(__int64 a1, char *a2, __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v10[32]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v11; // [rsp+30h] [rbp-28h]

  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(v6 + 8);
  if ( (v7 & 7) != 0 || (v7 & 8) != 0 )
    v6 = sub_B0CF30(v5, a2);
  v9 = v6 & 0xFFFFFFFFFFFFFFF0LL;
  v11 = 257;
  sub_B2AEC0(&v9, a2, a3, v10, 0);
  v8 = sub_798D40(a1);
  sub_6A1280(a1 + 64, a2, a3, *(_QWORD *)(a1 + 48), v8);
}

