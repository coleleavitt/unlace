__int64 __fastcall sub_751C60(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  void *v4; // rdi
  void *v5; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a1;
    v3 = a1 + 112LL * a2;
    do
    {
      *(_QWORD *)v2 = 0;
      memset((void *)(v2 + 8), 0, 0x68u);
      *(_BYTE *)(v2 + 8) = 1;
      v4 = qword_1C7F2C0;
      *(_BYTE *)(v2 + 36) = 1;
      *(_BYTE *)(v2 + 44) = 0;
      *(_DWORD *)(v2 + 56) = 1;
      *(_BYTE *)(v2 + 60) = 0;
      *(_BYTE *)(v2 + 76) = 0;
      *(_DWORD *)(v2 + 88) = 1;
      *(_BYTE *)(v2 + 92) = 0;
      *(_BYTE *)(v2 + 108) = 1;
      sub_182CBA0(v4, v2 + 56);
      *(_BYTE *)(v2 + 60) &= ~1u;
      v5 = qword_1C7F2C0;
      *(_BYTE *)(v2 + 76) &= ~1u;
      *(_DWORD *)(v2 + 56) = 1;
      *(_DWORD *)(v2 + 72) = 0;
      result = sub_182CBA0(v5, v2 + 88);
      *(_BYTE *)(v2 + 92) &= ~1u;
      v2 += 112;
      *(_DWORD *)(v2 - 24) = 1;
      *(_BYTE *)(v2 - 4) = 1;
    }
    while ( v2 != v3 );
  }
  return result;
}

