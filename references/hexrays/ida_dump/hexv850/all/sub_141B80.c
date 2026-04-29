unsigned __int64 __fastcall sub_141B80(__int64 a1, unsigned __int64 a2)
{
  __m128i *v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rbx
  unsigned __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 *v10; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v9 = a2;
  v11 = __readfsqword(0x28u);
  v2 = *(__m128i **)(a1 + 792);
  v10 = &v9;
  v3 = sub_1418C0(v2 + 1, &v9, &v10);
  if ( *(_DWORD *)(v3 + 32) != 7 )
  {
    v4 = v3 + 24;
    v5 = sub_2B0DF0(a1, v9, 0);
    v6 = *(_DWORD *)(v4 + 8);
    v7 = v5;
    if ( (v6 & 1) != 0 )
    {
      if ( (v6 & 2) != 0 )
        goto LABEL_4;
    }
    else
    {
      netnode_delblob(v5, 0, 97);
      v6 = *(_DWORD *)(v4 + 8);
      if ( (v6 & 2) != 0 )
      {
LABEL_4:
        if ( (v6 & 4) != 0 )
        {
LABEL_5:
          *(_DWORD *)(v4 + 8) = 7;
          return v11 - __readfsqword(0x28u);
        }
LABEL_7:
        netnode_delblob(v7, 0, 65);
        goto LABEL_5;
      }
    }
    netnode_delblob(v7, 0, 70);
    if ( (*(_DWORD *)(v4 + 8) & 4) != 0 )
      goto LABEL_5;
    goto LABEL_7;
  }
  return v11 - __readfsqword(0x28u);
}
