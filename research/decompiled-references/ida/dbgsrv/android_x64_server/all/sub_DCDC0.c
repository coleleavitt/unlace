/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DCDC0
// Address: 0x00000000000DCDC0

//----- (00000000000DCDC0) ----------------------------------------------------
_QWORD *__fastcall sub_DCDC0(__int64 a1)
{
  _BYTE *v1; // rdx
  char *v2; // rcx
  unsigned __int64 v3; // rsi
  char *v5; // r14
  char *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r8
  char *v9; // rax
  unsigned int v10; // edi
  _QWORD *result; // rax
  char *v12; // r15
  char *v13; // rdx
  char *v14; // rax
  unsigned int v15; // esi
  char *v16; // rdx
  unsigned int v17; // esi
  _QWORD *v18; // r12
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx

  v1 = *(_BYTE **)a1;
  v2 = *(char **)(a1 + 8);
  v3 = (unsigned __int64)&v2[-*(_QWORD *)a1];
  if ( v3 < 2 || *v1 != 102 )
    return nullptr;
  if ( v1[1] == 112 )
  {
    v5 = v1 + 2;
    *(_QWORD *)a1 = v1 + 2;
    if ( v1 + 2 == v2 )
      goto LABEL_32;
    if ( *v5 == 114 )
    {
      v6 = v1 + 3;
      *(_QWORD *)a1 = v6;
      v5 = v6;
    }
    if ( v5 == v2 )
      goto LABEL_32;
    if ( *v5 == 86 )
      *(_QWORD *)a1 = ++v5;
    if ( v5 == v2 )
    {
LABEL_32:
      v5 = v2;
    }
    else if ( *v5 == 75 )
    {
      *(_QWORD *)a1 = ++v5;
    }
    v12 = nullptr;
    if ( v2 != v5 )
    {
      v12 = nullptr;
      if ( (unsigned int)(*v5 - 48) <= 9 )
      {
        v13 = v5 + 1;
        do
        {
          v14 = v13;
          *(_QWORD *)a1 = v13;
          if ( v2 == v13 )
            break;
          v15 = *v13++ - 48;
        }
        while ( v15 < 0xA );
        goto LABEL_38;
      }
    }
    goto LABEL_47;
  }
  if ( *v1 != 102 )
    return nullptr;
  if ( v1[1] != 76 )
    return nullptr;
  *(_QWORD *)a1 = v1 + 2;
  if ( v2 == v1 + 2 || (unsigned int)((char)v1[2] - 48) > 9 )
    return nullptr;
  v7 = 0;
  do
  {
    v8 = v7;
    v9 = &v1[v7 + 3];
    *(_QWORD *)a1 = v9;
    if ( v2 == v9 )
      break;
    v10 = *v9 - 48;
    v7 = v8 + 1;
  }
  while ( v10 < 0xA );
  result = nullptr;
  if ( v8 != -1 && v3 - 3 != v8 )
  {
    if ( v1[v8 + 3] != 112 )
      return nullptr;
    v5 = &v1[v8 + 4];
    *(_QWORD *)a1 = v5;
    if ( v3 - 4 == v8 )
    {
      v5 = v2;
    }
    else
    {
      if ( *v5 == 114 )
      {
        v5 = &v1[v8 + 5];
        *(_QWORD *)a1 = v5;
      }
      if ( v5 != v2 )
      {
        if ( *v5 == 86 )
          *(_QWORD *)a1 = ++v5;
        if ( v5 != v2 && *v5 == 75 )
          *(_QWORD *)a1 = ++v5;
      }
    }
    v12 = nullptr;
    if ( v2 != v5 )
    {
      v12 = nullptr;
      if ( (unsigned int)(*v5 - 48) <= 9 )
      {
        v16 = v5 + 1;
        do
        {
          v14 = v16;
          *(_QWORD *)a1 = v16;
          if ( v2 == v16 )
            break;
          v17 = *v16++ - 48;
        }
        while ( v17 < 0xA );
LABEL_38:
        v12 = v14;
        if ( v14 == v2 )
          return nullptr;
LABEL_48:
        if ( *v14 == 95 )
        {
          *(_QWORD *)a1 = v14 + 1;
          v18 = *(_QWORD **)(a1 + 4832);
          v19 = v18[1];
          if ( (unsigned __int64)(v19 + 32) < 0xFF0 )
          {
            v21 = v18 + 1;
          }
          else
          {
            v20 = (_QWORD *)operator new[](0x1000u);
            *v20 = v18;
            v20[1] = 0;
            *(_QWORD *)(a1 + 4832) = v20;
            v19 = 0;
            v21 = v20 + 1;
            v18 = v20;
          }
          *v21 = v19 + 32;
          result = (_QWORD *)((char *)v18 + v19 + 16);
          *(_DWORD *)((char *)v18 + v19 + 24) = 16843050;
          *result = off_151DC8;
          *(_QWORD *)((char *)v18 + v19 + 32) = v5;
          *(_QWORD *)((char *)v18 + v19 + 40) = v12;
          return result;
        }
        return nullptr;
      }
    }
LABEL_47:
    v14 = v5;
    v5 = nullptr;
    if ( v14 == v2 )
      return nullptr;
    goto LABEL_48;
  }
  return result;
}
// 151DC8: using guessed type __int64 (__fastcall *off_151DC8[7])();
