__int64 __fastcall sub_76A3C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  _BYTE *v5; // rax

  v2 = sub_15D1F10(a2);
  v3 = 0xFFFFFFFF0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL);
  if ( v4 )
    v3 = 16LL * (unsigned int)(*(_DWORD *)(v4 - 4) - 1);
  v5 = (_BYTE *)(v3 + v4);
  if ( v5[8] != 1 )
    JUMPOUT(0x10E37C);
  return *(_QWORD *)v5;
}

