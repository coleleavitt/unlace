__int64 __fastcall sub_FB37B0(__int64 a1, char a2)
{
  _BYTE *v2; // rbx
  _BYTE v4[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = *(_BYTE **)(a1 + 8);
  v4[0] = a2;
  if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, void *))(*(_QWORD *)v2 + 24LL))(v2, &unk_26D6CA5) )
    v2[116] = v4[0];
  return (*(__int64 (__fastcall **)(_BYTE *, __int64 (__fastcall *)(unsigned __int8 *, _BYTE *), _BYTE *))(*(_QWORD *)v2 + 120LL))(
           v2,
           sub_FB2720,
           v4);
}

