__int64 __fastcall sub_4CB9C0(__int64 *a1, unsigned int a2, int a3)
{
  int v3; // ebp
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned int v8; // eax
  _QWORD *v10; // rax
  __int64 v11; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v12; // [rsp+8h] [rbp-F0h]
  __int64 v13; // [rsp+10h] [rbp-E8h]
  _BYTE v14[192]; // [rsp+18h] [rbp-E0h] BYREF
  _QWORD v15[4]; // [rsp+D8h] [rbp-20h] BYREF

  v15[0] = __readfsqword(0x28u);
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  v3 = a3 & 0xF;
  if ( v3 == 15 )
    return 0xFFFFFFFFLL;
  v4 = a2;
  v5 = sub_3B9AA0((__int64)a1, a2, 4);
  v7 = v5 & 0x600;
  if ( v7 == 1536 )
  {
    v11 = -1;
    v13 = 0;
    v12 = 0xFFFFFFFFLL;
    v10 = v14;
    do
    {
      *(_WORD *)v10 = 0;
      v10 += 3;
      *((_WORD *)v10 - 11) = 0;
      *((_WORD *)v10 - 10) = 0;
      *((_DWORD *)v10 - 1) = 0;
      *((_WORD *)v10 - 9) = 0;
      *(v10 - 2) = 0;
      *((_DWORD *)v10 - 2) = 0;
    }
    while ( v15 != v10 );
    decode_insn(&v11, a2, v15, 0, 0, v6);
    v8 = -1;
    v4 = v12 + (char)v14[24 * v3 + 2];
  }
  else
  {
    v8 = 0;
    if ( v7 == 1024 )
      v8 = sub_3C4370(a1, a2, v5, nullptr);
  }
  return sub_4CB840(a1, v4, v8, nullptr);
}

