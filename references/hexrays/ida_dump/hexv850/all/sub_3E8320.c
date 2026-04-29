__int64 __fastcall sub_3E8320(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebp
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rdx
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v1 = *(_WORD *)(a1 + 48);
  v12 = __readfsqword(0x28u);
  if ( v1 != 43 && (v1 != 45 || *(_BYTE *)(a1 + 65) != 7) )
    return 0;
  v4 = *(_QWORD *)(a1 + 80);
  s1 = nullptr;
  v11 = 0;
  v6 = sub_3F0FF0(v4, &s1);
  if ( !v6 )
  {
    LOBYTE(v8) = sub_1CE440(s1);
    v2 = v8;
    if ( (_BYTE)v8 )
    {
      if ( !(unsigned __int8)func_does_return(v4, &s1, v9) )
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) |= 0x2000u;
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  if ( !(unsigned __int8)func_does_return(v4, &s1, v5) )
  {
LABEL_8:
    v2 = 0;
    goto LABEL_9;
  }
  LOBYTE(v7) = sub_1CDC70(*(_QWORD *)(a1 + 8), a1, v6);
  v2 = v7;
LABEL_9:
  if ( s1 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(s1);
  }
  return v2;
}
