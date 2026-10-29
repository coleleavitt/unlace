__int64 *__fastcall sub_E4F9A0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbx
  _UNKNOWN **v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rax
  __int64 v12[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(v3 + 2320);
  if ( (*(_BYTE *)(v4 + 60) & 0x10) != 0 && *(_QWORD *)(v3 + 17456) )
  {
    v5 = *(_QWORD *)(a2 + 232);
    v6 = operator new(0x40u);
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_DWORD *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 40) = 0;
    *(_DWORD *)(v6 + 48) = 0;
    v7 = &off_2B21A40;
  }
  else
  {
    if ( (*(_BYTE *)(v4 + 96) & 0x30) == 0 )
    {
      v11 = operator new(0x38u);
      *(_OWORD *)v11 = 0;
      *(_OWORD *)(v11 + 32) = 0;
      *(_QWORD *)(v11 + 48) = 0;
      *(_DWORD *)(v11 + 8) = 0;
      *(_QWORD *)v11 = &off_2B219F0;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
      *a1 = v11;
      return a1;
    }
    v5 = *(_QWORD *)(a2 + 232);
    v6 = operator new(0x40u);
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_DWORD *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 40) = 0;
    *(_DWORD *)(v6 + 48) = 0;
    v7 = &off_2B21A90;
  }
  *(_QWORD *)v6 = v7;
  *(_QWORD *)(v6 + 56) = 0;
  sub_E134B0(v12, v5);
  v8 = v12[0];
  v12[0] = 0;
  v9 = *(_QWORD *)(v6 + 56);
  *(_QWORD *)(v6 + 56) = v8;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( v12[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12[0] + 8LL))(v12[0]);
  }
  *a1 = v6;
  return a1;
}

