__int64 __fastcall sub_3F3B10(__int64 a1, __int64 a2, char *a3)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  int v7; // esi
  char v8; // dl
  _QWORD v9[5]; // [rsp+0h] [rbp-28h] BYREF

  v9[1] = __readfsqword(0x28u);
  v4 = sub_11C8A0(a2, v9);
  if ( !v4 )
    return 0;
  v5 = 0;
  if ( *(_BYTE *)v9[0] == 1 && *(_DWORD *)(v9[0] + 4LL) == 1 )
  {
    v7 = *(_DWORD *)(v9[0] + 8LL);
    if ( v7 == *(_DWORD *)(a1 + 444) + 1 )
    {
      v8 = 1;
      goto LABEL_7;
    }
    v8 = 0;
    if ( v7 == *(_DWORD *)(a1 + 524) )
    {
LABEL_7:
      *a3 = v8;
      return *(unsigned __int8 *)(*(_QWORD *)(v4 + 8) + 16LL);
    }
  }
  return v5;
}
