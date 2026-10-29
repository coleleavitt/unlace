__int64 __fastcall sub_228D960(__int64 a1, __int64 a2)
{
  char *v4; // rdi
  _BYTE *v5; // rax
  _BYTE *v6; // rsi
  __int64 result; // rax
  size_t v8; // rdx

  v4 = (char *)(a1 + 24);
  v5 = (_BYTE *)(a2 + 24);
  *(v4 - 24) = 0;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 40) = -1;
  v6 = *(_BYTE **)(a2 + 8);
  if ( v6 == v5 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    if ( v8 )
    {
      if ( v8 == 1 )
        *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
      else
        memcpy(v4, v6, v8);
      v8 = *(_QWORD *)(a2 + 16);
    }
    *(_QWORD *)(a1 + 16) = v8;
    *(_BYTE *)(a1 + v8 + 24) = 0;
    v5 = *(_BYTE **)(a2 + 8);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 8) = v5;
  }
  *(_QWORD *)(a2 + 16) = 0;
  *v5 = 0;
  result = *(unsigned int *)(a2 + 40);
  *(_DWORD *)(a1 + 40) = result;
  *(_BYTE *)a2 = 1;
  *(_DWORD *)(a2 + 40) = -1;
  return result;
}
