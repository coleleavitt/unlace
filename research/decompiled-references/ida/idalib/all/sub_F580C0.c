bool __fastcall sub_F580C0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  int v4; // eax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v4 = *(unsigned __int8 *)(v3 + 16);
  if ( (unsigned int)(v4 - 57) <= 1 || (unsigned int)(v4 - 31) <= 1 )
    a1 = *(_QWORD *)(*(_QWORD *)(v3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v1 + 16) != 13 )
    JUMPOUT(0xF566E0);
  return (((*(_WORD *)(v1 + 18) >> 3) + 32) & 0x1FFu) <= 7;
}
