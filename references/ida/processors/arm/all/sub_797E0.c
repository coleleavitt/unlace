__int64 __fastcall sub_797E0(__int64 a1, __int64 a2)
{
  unsigned int tinfo_size; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  unsigned int v8; // r14d
  unsigned int v9; // eax
  int v10; // r12d
  int v11; // eax
  int v12; // r12d
  unsigned int v14; // eax
  __int64 v15; // [rsp+0h] [rbp-38h]
  unsigned int v16; // [rsp+4h] [rbp-34h]
  __int64 v17; // [rsp+8h] [rbp-30h]
  __int64 v18; // [rsp+10h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size();
  v7 = tinfo_size;
  if ( tinfo_size != -1 )
  {
    v8 = tinfo_size;
    if ( *(_BYTE *)(a1 + 17) )
      goto LABEL_3;
    v14 = *(_DWORD *)(a1 + 12);
    if ( v14 <= 0x10 )
      v14 = getinf(99);
    if ( (v14 == 176 || v14 == 256 || (unsigned __int8)getinf_flag(67, 2, v3, v4, v5, v6, v15, v17, v18))
      && (get_tinfo_property() & 0x2F) != 0xD )
    {
      v9 = HIDWORD(v15);
    }
    else
    {
LABEL_3:
      v9 = HIDWORD(v15);
      if ( HIDWORD(v15) <= 7 )
      {
        v9 = 8;
        v8 = (v7 + 7) & 0xFFFFFFF8;
        goto LABEL_5;
      }
      v8 = (v7 + 7) & 0xFFFFFFF8;
    }
    if ( v9 > 8 )
    {
      if ( !(unsigned __int8)getinf_flag(67, 4, v3, v4, v5, v6, v15, v17, v18) )
      {
        v11 = -8;
        v10 = 7;
        goto LABEL_6;
      }
      v9 = v16;
    }
LABEL_5:
    v10 = v9 - 1;
    v11 = -v9;
LABEL_6:
    v12 = v11 & (*(_DWORD *)(a1 + 8) + v10);
    *(_DWORD *)(a1 + 8) = v12;
    cleanup_argloc();
    *(_QWORD *)(a2 + 8) = v12;
    *(_DWORD *)a2 = 1;
    *(_DWORD *)(a1 + 8) += v8;
    return 1;
  }
  return 0;
}
