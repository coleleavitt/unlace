__int64 __fastcall sub_4E16F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 segm_base; // r15
  __int64 v7; // rbx
  int v8; // edx
  char v9; // al
  int v11; // r14d
  unsigned int v12; // ebp
  unsigned __int8 v13; // al
  int v14; // eax
  __int64 v15; // rbp
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // [rsp+8h] [rbp-40h]

  segm_base = a5;
  v7 = a4;
  v8 = *(_DWORD *)(a3 + 24);
  v9 = v8 & 0x4F;
  if ( (v8 & 0x4Fu) > 2 )
  {
    if ( v9 != 10 || (v8 & 0x200) != 0 )
      return v7;
    if ( a5 )
    {
      v11 = 1;
      v12 = a4 - a5;
LABEL_11:
      v14 = v11 * sub_3BDA80(a1, a2);
      if ( v14 == 16 )
        return segm_base + (unsigned __int16)v12;
      if ( v14 == 32 )
        return v12 + segm_base;
      v15 = segm_base + (unsigned __int8)v12;
      if ( v14 == 8 )
        return v15;
      return v7;
    }
  }
  else
  {
    if ( !v9 || (v8 & 0x200) != 0 )
      return v7;
    v13 = v9 - 1;
    v12 = a4 - a5;
    if ( a5 )
      goto LABEL_10;
  }
  v16 = sub_505D70(a1 + 1624, a4);
  v17 = sub_505D70(a1 + 1624, 0);
  if ( v17 )
  {
    v20 = v17;
    segm_base = get_segm_base(v17);
    if ( v16 == v20 )
    {
      v19 = *(_DWORD *)(a3 + 24) & 0x4F;
    }
    else
    {
      v18 = get_segm_base(v16);
      LOBYTE(v19) = *(_BYTE *)(a3 + 24) & 0x4F;
      if ( v18 == *(_QWORD *)(a3 + 8) )
        segm_base = v18;
    }
  }
  else
  {
    segm_base = get_segm_base(v16);
    v19 = *(_DWORD *)(a3 + 24) & 0x4F;
  }
  v13 = v19 - 1;
  v12 = v7 - segm_base;
  if ( v13 <= 9u )
  {
LABEL_10:
    v11 = dword_23AE0E0[v13];
    if ( v11 <= 0 )
      return v7;
    goto LABEL_11;
  }
  return v7;
}
