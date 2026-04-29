__int64 __fastcall sub_3B78E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  bool v11; // zf
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  const char *v19; // rcx
  __int128 v20; // [rsp+0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+10h] [rbp-38h]
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v11 = *(_DWORD *)(a3 + 80) == 1;
  v22 = __readfsqword(0x28u);
  if ( v11 )
  {
    v15 = *(_QWORD *)(a3 + 88);
    v16 = *(_QWORD *)(a3 + 32);
    v20 = 0;
    if ( (unsigned __int8)sub_208DA0(v16, &v20, v15) )
    {
      v19 = "Split variable...";
      if ( *(_DWORD *)(*(_QWORD *)(a3 + 88) + 8LL) == 65 )
        v19 = "Split variable";
      callui(140, "hx:SplitVar", 1, v19, v17, v18, v20, *((_QWORD *)&v20 + 1), v21, v22);
      callui(131, a1, a2, "hx:SplitVar", 0, 0, v20, *((_QWORD *)&v20 + 1), v21, v22);
    }
  }
  if ( a4 && (*(_BYTE *)(a4 + 26) & 1) != 0 )
    return callui(131, a1, a2, "hx:UnsplitVar", 0, 0, a7, a8, a9, a10);
  else
    return v22 - __readfsqword(0x28u);
}
