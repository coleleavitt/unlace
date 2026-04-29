__int64 __fastcall sub_32AC10(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 ea_name; // rax
  char *v8; // r13
  __int64 v9; // [rsp+18h] [rbp-50h] BYREF
  char *s1; // [rsp+20h] [rbp-48h] BYREF
  __int128 v11; // [rsp+28h] [rbp-40h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 == 13
    && *(_BYTE *)(a2 + 32) == 10
    && (v4 = *(_QWORD *)(a2 + 40), *(_BYTE *)v4 == 6)
    && (v5 = *(_QWORD *)(v4 + 8), (unsigned __int8)is_mapped(v5))
    && (unsigned __int8)sub_11F7C0((char *)(a2 + 48), &v9, 0)
    && (v6 = v9, v2 = is_mapped(v9), (_BYTE)v2) )
  {
    v11 = 0;
    s1 = nullptr;
    ea_name = get_ea_name(&s1, v6, 512, 0);
    v8 = s1;
    if ( ea_name > 0 && (_QWORD)v11 && !strcmp(s1, "static_TP") )
      *a1 = v5;
    else
      v2 = 0;
    if ( v8 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(v8);
    }
  }
  else
  {
    return 0;
  }
  return v2;
}
