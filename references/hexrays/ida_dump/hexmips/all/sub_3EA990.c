__int64 __fastcall sub_3EA990(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rdx
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  LOBYTE(v1) = sub_3EA700(*(_WORD *)(a1 + 48));
  v2 = v1;
  if ( !(_BYTE)v1 )
    return v2;
  v4 = *(_QWORD *)(a1 + 80);
  s1 = nullptr;
  v11 = 0;
  v6 = sub_3F8C90(v4, &s1);
  if ( !v6 )
  {
    LOBYTE(v8) = sub_1CEF00(s1);
    v2 = v8;
    if ( (_BYTE)v8 )
    {
      if ( !(unsigned __int8)func_does_return(v4, &s1, v9) )
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) |= 0x2000u;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ( !(unsigned __int8)func_does_return(v4, &s1, v5) )
  {
LABEL_5:
    v2 = 0;
    goto LABEL_6;
  }
  LOBYTE(v7) = sub_1CE730(*(_QWORD *)(a1 + 8), a1, v6);
  v2 = v7;
LABEL_6:
  if ( s1 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(s1);
  }
  return v2;
}
