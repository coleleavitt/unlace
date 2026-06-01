void __fastcall sub_9AF010(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // r12d
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rdi
  void *v7; // [rsp+0h] [rbp-28h]
  unsigned int v8; // [rsp+8h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_DWORD *)sub_A1A5A0(v1, 8);
  sub_A1A5E0(v1, 8);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 16);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v8 = v5;
  v7 = *(void **)v4;
  sub_A1A5E0(v3, 16);
  *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v2;
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v6 + 8) = v8;
  if ( v8 > 0x40 )
    sub_2585B30(v6);
  else
    *(_QWORD *)v6 = v7;
  if ( v8 > 0x40 )
  {
    if ( v7 )
      operator delete[](v7);
  }
}

