void __fastcall sub_9ADC90(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rbp
  __int16 v6; // r12
  __int64 v7; // rdi
  void *v8; // [rsp+0h] [rbp-28h]
  unsigned int v9; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v9 = v4;
  v8 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = *(_WORD *)sub_A1A5A0(v5, 8);
  sub_A1A5E0(v5, 8);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v7 + 8) = v9;
  if ( v9 > 0x40 )
    sub_2585B30(v7);
  else
    *(_QWORD *)v7 = v8;
  *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v6;
  if ( v9 > 0x40 )
  {
    if ( v8 )
      operator delete[](v8);
  }
}

