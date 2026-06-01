__int64 __fastcall sub_55DB60(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, int a5, int a6, __int16 a7)
{
  __int64 v7; // r10
  unsigned int v8; // r15d
  int v10; // ebx
  char v11; // r14
  unsigned __int8 v12; // dl
  int v13; // ecx
  int v14; // eax
  int v16; // ecx
  int v17; // esi
  int v18; // ecx
  char v19; // al
  char v20; // al
  __int64 v21; // [rsp+0h] [rbp-48h]
  __int64 v22; // [rsp+0h] [rbp-48h]

  v7 = a1;
  v8 = a3;
  v10 = a5;
  if ( (a7 & 3) == 1 )
  {
    if ( (a7 & 0x400) != 0 )
    {
      v16 = 8 * a6 - 1;
      if ( (unsigned __int64)v16 > 0x1F )
      {
        v14 = -1;
        return a5 & (unsigned int)v14;
      }
      v17 = 2 * (1 << v16);
      v18 = 1 << v16;
      v14 = 2 * v18 - 1;
      if ( (a7 & 4) == 0 )
      {
        v12 = 0;
        goto LABEL_13;
      }
      v11 = 0;
      v12 = 0;
LABEL_21:
      v11 ^= v10 != v18 && (v18 & v10) != 0;
LABEL_17:
      if ( v11 )
      {
        if ( (v18 & v10) != 0 )
          v10 |= -v17;
        goto LABEL_8;
      }
LABEL_13:
      a5 = v10 ^ -v12;
      return a5 & (unsigned int)v14;
    }
    v11 = 0;
  }
  else
  {
    v21 = a4;
    v19 = is_invsign(a2, a4, a3);
    a4 = v21;
    v7 = a1;
    v11 = v19;
    if ( (a7 & 0x400) != 0 )
    {
      v12 = 0;
      goto LABEL_6;
    }
  }
  if ( *(_QWORD *)(v7 + 1200) || (v22 = a4, v20 = getinf_flag(2, 2), a4 = v22, v20) )
    v12 = is_bnot(a2, a4, v8);
  else
    v12 = 0;
LABEL_6:
  v13 = 8 * a6 - 1;
  if ( (unsigned __int64)v13 <= 0x1F )
  {
    v17 = 2 * (1 << v13);
    v18 = 1 << v13;
    v14 = v17 - 1;
    if ( (a7 & 4) == 0 )
      goto LABEL_17;
    goto LABEL_21;
  }
  v14 = -1;
  if ( !v11 )
    goto LABEL_13;
LABEL_8:
  a5 = -v10;
  return a5 & (unsigned int)v14;
}

