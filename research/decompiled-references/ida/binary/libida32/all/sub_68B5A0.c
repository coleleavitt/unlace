__int64 __fastcall sub_68B5A0(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 v7; // al
  __int64 v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // ebx
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned int v16; // ebx
  int v17; // eax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // ebp
  unsigned int v21; // ebx
  char v22; // [rsp+Ch] [rbp-3Ch]
  unsigned int v23; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( (a4 & 8) != 0 )
    return 0;
  v7 = *(_BYTE *)(a2 + 88) & 0xF0;
  if ( v7 == 0xC0 )
  {
    v9 = *(_DWORD *)(a2 + 28);
    if ( v9 > 0x10 )
      goto LABEL_12;
  }
  else if ( v7 > 0x10u )
  {
    if ( v7 == 0xB0 )
      goto LABEL_14;
    goto LABEL_6;
  }
  v22 = a4;
  v9 = getinf(99);
  a4 = v22;
LABEL_12:
  if ( v9 != 256 )
  {
    if ( v9 == 176 )
      goto LABEL_14;
LABEL_6:
    if ( (a4 & 0x10) == 0 )
      return 0;
    if ( !(unsigned __int8)getinf_flag(3, 4) )
      goto LABEL_8;
    netnode_check(&v23, "$ golang", 0, 0);
    v15 = v23;
    v16 = netnode_altval(v23, 0, 65);
    if ( v16 <= 0x74 )
      goto LABEL_8;
    v17 = *(_DWORD *)(get_ph(v15, nullptr) + 4);
    if ( v17 )
    {
      v18 = (unsigned int)(v17 - 13);
      if ( (unsigned int)v18 > 0x3B )
        goto LABEL_8;
      v19 = 0x800000000000005LL;
      if ( !_bittest64(&v19, v18) || v16 == 117 )
        goto LABEL_8;
    }
LABEL_14:
    if ( (unsigned __int64)getinf(88) > 0x397 )
      return 1;
    if ( (unsigned __int8)getinf_flag(3, 4) )
    {
      netnode_check(&v23, "$ golang", 0, 0);
      v10 = v23;
      v11 = netnode_altval(v23, 0, 65);
      if ( v11 > 0x74 )
      {
        v12 = *(_DWORD *)(get_ph(v10, nullptr) + 4);
        if ( !v12 )
          return 1;
        v13 = (unsigned int)(v12 - 13);
        if ( (unsigned int)v13 <= 0x3B )
        {
          v14 = 0x800000000000005LL;
          if ( _bittest64(&v14, v13) )
          {
            if ( v11 != 117 )
              return 1;
          }
        }
      }
    }
  }
LABEL_8:
  if ( *(_QWORD *)(a3 + 8) )
    return 0;
  v8 = *(_QWORD *)(a2 + 32);
  if ( (_BYTE)v8 && (get_tinfo_property(v8, 2) & 0x3F) != 1 )
  {
    if ( *(_DWORD *)(a2 + 40) != 1 )
      return 0;
    v20 = *(_DWORD *)(a2 + 48);
    if ( *(_DWORD *)(a2 + 56) != v20 )
    {
      v21 = sub_54C1C0(a1);
      if ( get_tinfo_size(&v23, *(_QWORD *)(a2 + 32), 0) != -1 && v21 < v23 )
        v21 = v23;
      if ( v20 != ((v21 + *(_DWORD *)(a2 + 56) - 1) & -v21) )
        return 0;
    }
  }
  return 1;
}

