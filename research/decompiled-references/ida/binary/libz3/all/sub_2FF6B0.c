__int64 __fastcall sub_2FF6B0(__int64 a1)
{
  __int64 v1; // r12
  void *v3; // rbx
  int v4; // eax
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rdx
  int v11; // eax
  void *v12; // rdi
  char v13; // al
  int v14; // eax
  void *v15; // [rsp+8h] [rbp-40h]
  void *v16; // [rsp+8h] [rbp-40h]
  void *v17; // [rsp+8h] [rbp-40h]

  v1 = a1 + 104;
  v3 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a1 + 76) & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, a1 + 104, a1 + 72);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 72);
    *(_BYTE *)(a1 + 108) &= ~1u;
    *(_DWORD *)(a1 + 104) = v4;
  }
  if ( (*(_BYTE *)(a1 + 92) & 1) != 0 )
  {
    sub_182C690(v3, a1 + 120, a1 + 88);
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 124) &= ~1u;
    *(_DWORD *)(a1 + 120) = v5;
  }
  result = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD *)result;
  if ( *(_QWORD *)result )
  {
    v8 = *(unsigned int *)(v7 - 4);
    result = 7 * v8;
    v9 = v7 + 56 * v8;
    if ( v9 != v7 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v7 + 16);
        v12 = qword_1C7F2C0;
        if ( v11 )
          break;
        v13 = *(_BYTE *)(a1 + 108);
        if ( (v13 & 1) != 0 )
        {
          v15 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v1, v1);
          v12 = v15;
        }
        else
        {
          *(_BYTE *)(a1 + 108) = v13 & 0xFE;
        }
        v14 = *(unsigned __int8 *)(a1 + 124);
        if ( (v14 & 1) != 0 )
        {
          result = sub_182C690(v12, a1 + 120, a1 + 120);
LABEL_12:
          v7 += 56;
          if ( v7 == v9 )
            return result;
        }
        else
        {
          result = v14 & 0xFFFFFFFE;
          v7 += 56;
          *(_BYTE *)(a1 + 124) = result;
          if ( v7 == v9 )
            return result;
        }
      }
      v10 = v7 + 16;
      if ( *(_DWORD *)(a1 + 104) )
      {
        if ( (*(_BYTE *)(a1 + 124) & 1) != 0
          || *(_DWORD *)(a1 + 120) != 1
          || (*(_BYTE *)(v7 + 36) & 1) != 0
          || *(_DWORD *)(v7 + 32) != 1 )
        {
          result = sub_1851D20(qword_1C7F2C0, v1, v10, v1);
        }
        else
        {
          v16 = qword_1C7F2C0;
          sub_1831A80(qword_1C7F2C0, v1, v10, v1);
          result = sub_182CBA0(v16, a1 + 120);
          *(_BYTE *)(a1 + 124) &= ~1u;
          *(_DWORD *)(a1 + 120) = 1;
        }
      }
      else
      {
        if ( (*(_BYTE *)(v7 + 20) & 1) != 0 )
        {
          v17 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v1, v10);
          v12 = v17;
        }
        else
        {
          *(_BYTE *)(a1 + 108) &= ~1u;
          *(_DWORD *)(a1 + 104) = v11;
        }
        if ( (*(_BYTE *)(v7 + 36) & 1) != 0 )
        {
          result = sub_182C690(v12, a1 + 120, v7 + 32);
        }
        else
        {
          result = *(unsigned int *)(v7 + 32);
          *(_BYTE *)(a1 + 124) &= ~1u;
          *(_DWORD *)(a1 + 120) = result;
        }
      }
      goto LABEL_12;
    }
  }
  return result;
}

