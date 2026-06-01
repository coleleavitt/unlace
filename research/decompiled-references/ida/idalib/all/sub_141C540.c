__int64 __fastcall sub_141C540(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v3; // r12
  int v4; // r13d
  int v6; // eax
  int v7; // esi
  unsigned int v8; // eax
  _DWORD *v9; // rdx
  int v10; // ecx
  __int64 result; // rax
  int v12; // r8d
  _DWORD *v13; // rdi
  _DWORD v14[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = a1 + 8;
    v4 = 31;
  }
  else
  {
    result = *(unsigned int *)(a1 + 16);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = result - 1;
    if ( !(_DWORD)result )
    {
      *a3 = 0;
      return result;
    }
  }
  v14[0] = *a2;
  v6 = sub_101AC30(v14);
  v7 = *a2;
  v8 = v4 & v6;
  v9 = (_DWORD *)(v3 + 4LL * v8);
  v10 = *v9;
  if ( v7 == *v9 )
  {
LABEL_4:
    *a3 = v9;
    return 1;
  }
  v12 = 1;
  v13 = nullptr;
  if ( v10 != -1 )
  {
    while ( 1 )
    {
      if ( !v13 && v10 == -2 )
        v13 = v9;
      v8 = v4 & (v12 + v8);
      v9 = (_DWORD *)(v3 + 4LL * v8);
      v10 = *v9;
      if ( *v9 == v7 )
        goto LABEL_4;
      if ( v10 == -1 )
      {
        if ( v13 )
          v9 = v13;
        break;
      }
      ++v12;
    }
  }
  *a3 = v9;
  return 0;
}
