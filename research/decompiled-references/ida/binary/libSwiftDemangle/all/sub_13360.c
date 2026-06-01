unsigned __int64 __fastcall sub_13360(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  __int16 v6; // si
  unsigned __int8 v7; // cl
  unsigned __int64 v8; // rdx
  __int16 v9; // cx
  unsigned __int8 v10; // cl
  __int64 v11; // r12
  int v12; // ecx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rax

  v2 = *(_DWORD *)(a1 + 96);
  if ( !v2 )
    goto LABEL_34;
  v3 = *(_QWORD *)(a1 + 88);
  v4 = (unsigned int)(v2 - 1);
  result = *(_QWORD *)(v3 + 8 * v4);
  v6 = *(_WORD *)(result + 16);
  if ( v6 != 221 )
    goto LABEL_25;
  *(_DWORD *)(a1 + 96) = v4;
  if ( !result )
  {
    if ( v2 == 1 )
      goto LABEL_34;
    v4 = (unsigned int)(v2 - 2);
    result = *(_QWORD *)(v3 + 8 * v4);
    v6 = *(_WORD *)(result + 16);
LABEL_25:
    if ( v6 == 170 )
    {
      *(_DWORD *)(a1 + 96) = v4;
      if ( result )
        return result;
      if ( !(_DWORD)v4 )
        goto LABEL_34;
    }
    else
    {
      LODWORD(v4) = *(_DWORD *)(a1 + 96);
    }
    v11 = *(_QWORD *)(v3 + 8LL * (unsigned int)(v4 - 1));
    v12 = v4 - 1;
    v13 = *(unsigned __int16 *)(v11 + 16);
    if ( (unsigned __int16)v13 <= 0x80u )
    {
      if ( (unsigned __int16)v13 > 0x61u )
      {
        v15 = 1074790401;
        if ( _bittest64(&v15, (unsigned int)(v13 - 98)) )
          goto LABEL_31;
      }
    }
    else
    {
      LOWORD(v13) = v13 - 163;
      if ( (unsigned __int16)v13 <= 0x3Bu )
      {
        v14 = 0x800000080000087LL;
        if ( _bittest64(&v14, v13) )
        {
LABEL_31:
          *(_DWORD *)(a1 + 96) = v12;
LABEL_35:
          v16 = sub_132E0(a1);
          v17 = sub_CE00((_QWORD *)a1, 169, v16, v11);
          return sub_CD20((_QWORD *)a1, 221, v17);
        }
      }
    }
LABEL_34:
    v11 = 0;
    goto LABEL_35;
  }
  v7 = *(_BYTE *)(result + 18);
  if ( v7 <= 4u )
  {
    v8 = result;
    if ( v7 > 2u )
    {
      v9 = *(_WORD *)(result + 16);
      if ( (unsigned __int16)v9 > 0xAAu )
        goto LABEL_7;
      goto LABEL_11;
    }
    return 0;
  }
  if ( v7 != 5 || !*(_DWORD *)(result + 8) )
    return 0;
  v8 = result;
  v9 = *(_WORD *)(result + 16);
  if ( (unsigned __int16)v9 > 0xAAu )
  {
LABEL_7:
    while ( v9 == 221 )
    {
      v10 = *(_BYTE *)(v8 + 18);
      if ( v10 > 4u )
      {
        if ( v10 != 5 || !*(_DWORD *)(v8 + 8) )
        {
LABEL_18:
          v9 = 3;
          goto LABEL_11;
        }
        v8 = *(_QWORD *)v8;
      }
      else if ( v10 <= 2u )
      {
        goto LABEL_18;
      }
      v8 = *(_QWORD *)v8;
      v9 = *(_WORD *)(v8 + 16);
      if ( (unsigned __int16)v9 <= 0xAAu )
        goto LABEL_11;
    }
    return 0;
  }
LABEL_11:
  if ( (unsigned __int16)v9 <= 0xA8u )
    return 0;
  return result;
}

