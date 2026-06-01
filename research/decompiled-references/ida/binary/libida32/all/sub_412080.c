unsigned __int64 __fastcall sub_412080(__int64 a1)
{
  __int64 v1; // rax
  _BYTE *v2; // rdx
  int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  sub_753EB0();
  v1 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(v1 + 24) && (v2 = *(_BYTE **)(v1 + 16)) != nullptr && *v2 )
  {
    if ( *(_DWORD *)(a1 + 152) == -1 )
    {
      sub_79BBF0(&v4, *(_QWORD *)(a1 + 144), v2, 0, 0);
      *(_DWORD *)(a1 + 152) = v4;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 152) = -1;
  }
  return v5 - __readfsqword(0x28u);
}

