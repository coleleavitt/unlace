__int64 __fastcall sub_4CA180(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4, int a5)
{
  int segm_base; // r14d
  unsigned int v7; // ebx
  int v8; // edx
  __int64 v10; // rax
  unsigned __int16 v11; // bp
  int v12; // r15d
  int v13; // eax
  unsigned int v14; // ebp
  __int64 v15; // r15
  __int64 v16; // rax
  int v17; // eax
  int v18; // edx
  __int64 v19; // [rsp+8h] [rbp-40h]

  segm_base = a5;
  v7 = a4;
  v8 = *(_DWORD *)(a3 + 12);
  if ( (v8 & 0x4F) == 1 )
  {
    if ( (v8 & 0x200) != 0 )
      return v7;
    if ( a5 )
    {
      v10 = 0;
      v11 = a4 - a5;
      goto LABEL_10;
    }
  }
  else
  {
    if ( (v8 & 0x4F) != 0xA || (v8 & 0x200) != 0 )
      return v7;
    if ( a5 )
    {
      v10 = 9;
      v11 = a4 - a5;
LABEL_10:
      v12 = dword_2389F80[v10];
LABEL_11:
      v13 = v12 * sub_3B8DF0(a1, a2);
      if ( v13 == 8 )
      {
        return segm_base + (unsigned int)(unsigned __int8)v11;
      }
      else
      {
        v14 = segm_base + v11;
        if ( v13 == 16 )
          return v14;
      }
      return v7;
    }
  }
  v15 = sub_4EE820(a1 + 1552, a4);
  v16 = sub_4EE820(a1 + 1552, 0);
  if ( v16 )
  {
    v19 = v16;
    segm_base = get_segm_base(v16);
    if ( v15 == v19 )
    {
      v18 = *(_DWORD *)(a3 + 12) & 0x4F;
    }
    else
    {
      v17 = get_segm_base(v15);
      LOBYTE(v18) = *(_BYTE *)(a3 + 12) & 0x4F;
      if ( v17 == *(_DWORD *)(a3 + 4) )
        segm_base = v17;
    }
  }
  else
  {
    segm_base = get_segm_base(v15);
    v18 = *(_DWORD *)(a3 + 12) & 0x4F;
  }
  v11 = v7 - segm_base;
  if ( (unsigned __int8)(v18 - 1) <= 9u )
  {
    v12 = dword_2389F80[(unsigned __int8)(v18 - 1)];
    if ( v12 > 0 )
      goto LABEL_11;
  }
  return v7;
}

