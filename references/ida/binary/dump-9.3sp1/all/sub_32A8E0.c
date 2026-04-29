__int64 __fastcall sub_32A8E0(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 ea_name; // rax
  char *v7; // r13
  __int64 v8; // [rsp+18h] [rbp-50h] BYREF
  char *s1; // [rsp+20h] [rbp-48h]
  __int128 v10; // [rsp+28h] [rbp-40h]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 == 13
    && *(_BYTE *)(a2 + 32) == 10
    && (v4 = *(_QWORD *)(a2 + 40), *(_BYTE *)v4 == 6)
    && (v5 = *(_QWORD *)(v4 + 8), (unsigned __int8)is_mapped())
    && (unsigned __int8)sub_11FD80((char *)(a2 + 48), &v8, 0)
    && (v2 = is_mapped(), (_BYTE)v2) )
  {
    v10 = 0;
    s1 = nullptr;
    ea_name = get_ea_name();
    v7 = s1;
    if ( ea_name > 0 && (_QWORD)v10 && !strcmp(s1, "static_TP") )
      *a1 = v5;
    else
      v2 = 0;
    if ( v7 )
    {
      *(_QWORD *)&v10 = 0;
      qfree((__int64)v7);
    }
  }
  else
  {
    return 0;
  }
  return v2;
}
