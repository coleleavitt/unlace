__int64 __fastcall sub_4E3180(__int64 *a1, __int64 *a2, int a3)
{
  int v3; // ebp
  __int64 *v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  _QWORD *v10; // rax
  __int128 v11; // [rsp+0h] [rbp-188h] BYREF
  __int64 v12; // [rsp+10h] [rbp-178h]
  __int64 v13; // [rsp+18h] [rbp-170h]
  __int64 v14; // [rsp+20h] [rbp-168h]
  _BYTE v15[320]; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v16[4]; // [rsp+168h] [rbp-20h] BYREF

  v16[0] = __readfsqword(0x28u);
  if ( a3 < 0 )
    return -1;
  v3 = a3 & 0xF;
  if ( v3 == 15 )
    return -1;
  v4 = a2;
  v5 = sub_3BE900(a1, (unsigned __int64)a2, 4);
  v7 = v5 & 0x600;
  if ( v7 == 1536 )
  {
    v12 = -1;
    v10 = v15;
    v13 = 0;
    v14 = 0;
    v11 = -1;
    do
    {
      *(_WORD *)v10 = 0;
      v10 += 5;
      *((_WORD *)v10 - 19) = 0;
      *((_WORD *)v10 - 18) = 0;
      *((_DWORD *)v10 - 2) = 0;
      *((_WORD *)v10 - 17) = 0;
      *((_OWORD *)v10 - 2) = 0;
      *(v10 - 2) = 0;
    }
    while ( v16 != v10 );
    decode_insn(&v11, a2, v16, 0, 0, v6, 0.0);
    v8 = -1;
    v4 = (__int64 *)(v12 + (char)v15[40 * v3 + 2]);
  }
  else
  {
    v8 = 0;
    if ( v7 == 1024 )
      v8 = (int)sub_3C9650(a1, a2, v5, nullptr);
  }
  return sub_4E3030(a1, v4, v8, nullptr);
}
