__int64 __fastcall sub_1E4C760(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rax
  char v9; // al
  unsigned int v10; // eax
  __int64 v11[4]; // [rsp+8h] [rbp-20h] BYREF

  v11[0] = a2;
  v2 = sub_F22BD0(v11, 0);
  if ( v2 )
  {
    v3 = v2;
    if ( (*(_BYTE *)(v2 + 28) & 0x7F) == 0x44 && (*(_BYTE *)(v2 + 80) & 2) != 0 )
    {
      if ( !(unsigned __int8)sub_B8BE90(v2)
        || ((v9 = *(_BYTE *)(v3 + 28) & 0x7F, v9 != 67)
          ? (v9 != 47
           ? (v10 = *(_DWORD *)(v3 + 64) & 0xFFFFF)
           : (v10 = *(_DWORD *)(v3 + 68) & 0xFFFFF))
          : (sub_BBE5B0(v3), v10 = sub_BBE590(v3)),
            v10 < *(_DWORD *)(a1 + 28)) )
      {
        v5 = *(_QWORD *)(a1 + 16);
        v6 = v3 | 4;
        v7 = *(unsigned int *)(v5 + 8);
        if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(v5 + 12) )
        {
          sub_2237220(*(_QWORD *)(a1 + 16), v5 + 16, v7 + 1, 16);
          v7 = *(unsigned int *)(v5 + 8);
        }
        v8 = (__int64 *)(*(_QWORD *)v5 + 16 * v7);
        *v8 = v6;
        v8[1] = 0;
        ++*(_DWORD *)(v5 + 8);
      }
    }
  }
  return sub_BC8830(a1, v11[0]);
}
