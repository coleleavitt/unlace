__int64 __fastcall sub_3756A0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // rax
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 8);
  if ( !v2 )
    return 0;
  v3 = 24;
  v4 = *v2 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v4 )
    goto LABEL_11;
  if ( (*(_BYTE *)(*v2 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    return 0;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v4 + 24);
    v3 = v4 + 24;
    if ( a2 < v6 )
    {
      v4 = *(_QWORD *)(v4 + 8);
      goto LABEL_7;
    }
    if ( v6 >= a2 )
      break;
    v4 = *(_QWORD *)(v4 + 16);
LABEL_7:
    if ( (*(_BYTE *)v4 & 2) != 0 )
      return 0;
  }
  if ( v2 == (_QWORD *)v4 )
    return 0;
LABEL_11:
  if ( (*(_BYTE *)(v3 + 56) & 0x3F) == 0x30 )
    return 0;
  v7[0] = 48;
  copy_tinfo_t(v4 + 80, v7);
  clear_tinfo_t(v7);
  return 1;
}
