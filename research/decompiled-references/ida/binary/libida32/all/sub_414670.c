unsigned __int64 __fastcall sub_414670(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  _BYTE *v3; // rdx
  int v5; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 40);
  v6 = __readfsqword(0x28u);
  if ( *(_QWORD *)(v2 + 24) && (v3 = *(_BYTE **)(v2 + 16)) != nullptr && *v3 )
  {
    if ( *(_DWORD *)(a1 + 152) == -1 )
    {
      sub_79BBF0(&v5, *(_QWORD *)(a1 + 144), v3, 0, a2);
      *(_DWORD *)(a1 + 152) = v5;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 152) = -1;
  }
  return v6 - __readfsqword(0x28u);
}

