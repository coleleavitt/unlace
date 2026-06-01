__int64 __fastcall sub_379040(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  const char *v3; // rdx
  _BYTE *v4; // rcx
  const char *v5; // rax
  __int64 v6; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  _BYTE v10[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v2 = *(_DWORD *)(a1 + 40);
  v11 = __readfsqword(0x28u);
  if ( v2 > 0x10 )
    v2 = 16;
  if ( *(_BYTE *)a1 == 2 )
  {
    if ( v2 != get_bytes(v10, v2, *(unsigned int *)(a1 + 8), 0, 0) )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( *(_BYTE *)a1 == 7 )
  {
    v3 = haystack;
    if ( *(_QWORD *)(a1 + 16) )
      v3 = *(const char **)(a1 + 8);
    v4 = v10;
    v5 = v3;
    if ( v2 >= 8 )
    {
      LODWORD(v8) = 0;
      do
      {
        v9 = (unsigned int)v8;
        v8 = (unsigned int)(v8 + 8);
        *(_QWORD *)&v10[v9] = *(_QWORD *)&v3[v9];
      }
      while ( (unsigned int)v8 < (v2 & 0xFFFFFFF8) );
      v4 = &v10[v8];
      v5 = &v3[v8];
    }
    v6 = 0;
    if ( (v2 & 4) != 0 )
    {
      *(_DWORD *)v4 = *(_DWORD *)v5;
      v6 = 4;
      if ( (v2 & 2) == 0 )
      {
LABEL_10:
        if ( (v2 & 1) == 0 )
          goto LABEL_11;
        goto LABEL_17;
      }
    }
    else if ( (v2 & 2) == 0 )
    {
      goto LABEL_10;
    }
    *(_WORD *)&v4[v6] = *(_WORD *)&v5[v6];
    v6 += 2;
    if ( (v2 & 1) == 0 )
    {
LABEL_11:
      if ( (unsigned int)cpu2ieee(a2 + 8, v10, v2) == 1 )
      {
        *(_BYTE *)a2 = 3;
        return 0;
      }
LABEL_12:
      *(_DWORD *)(a2 + 8) = -1;
      return 0;
    }
LABEL_17:
    v4[v6] = v5[v6];
    goto LABEL_11;
  }
  return throw_idc_exception();
}

