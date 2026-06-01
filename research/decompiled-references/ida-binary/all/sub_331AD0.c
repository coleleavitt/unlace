__int64 __fastcall sub_331AD0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 flags; // rax
  __int64 v10; // rcx
  _QWORD v11[23]; // [rsp+0h] [rbp-B8h] BYREF

  v11[17] = __readfsqword(0x28u);
  if ( a3 == -1 )
    return 0;
  flags = get_flags_ex(a2, 0);
  v10 = flags;
  if ( a5 )
  {
    BYTE1(v10) = BYTE1(flags) & 0xFE;
    LOBYTE(v10) = -1;
    if ( get_immvals(v11, a2, a3, v10, a4) )
      goto LABEL_7;
    return 0;
  }
  if ( !get_immvals(v11, a2, a3, flags, a4) )
    return 0;
LABEL_7:
  *a1 = v11[0];
  return 1;
}
