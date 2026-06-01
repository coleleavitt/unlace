void __fastcall __spoils<> sub_1703EE0(__int64 a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    v3 = a3 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      v3 = ((unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a3) & 7
         | *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = v3;
    *(_DWORD *)(a1 + 12) = a2;
  }
}
