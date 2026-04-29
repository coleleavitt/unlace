_BOOL8 __fastcall sub_280520(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  char *v4; // rbx
  _BOOL4 v5; // ebp
  __int64 tinfo_size; // r14
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // rax
  char v11; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v4 = a4;
  if ( !a4 )
    v4 = &v11;
  if ( *(_DWORD *)(a2 + 8) == 51
    && (tinfo_size = get_tinfo_size(), tinfo_size == get_tinfo_size())
    && !(v5 = sub_32DA30((_QWORD *)(a2 + 48))) )
  {
    v8 = *(_QWORD *)(a2 + 24);
    *v4 = 0;
    v9 = *(_DWORD *)(v8 + 8);
    if ( v9 == 51 )
    {
      while ( *(_DWORD *)(v8 + 40) == *(_DWORD *)(a1 + 84) )
      {
        v8 = *(_QWORD *)(v8 + 24);
        v9 = *(_DWORD *)(v8 + 8);
        if ( v9 != 51 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( v9 == 48 )
      {
        LOBYTE(v5) = v8 != 0;
      }
      else if ( (unsigned int)(v9 - 35) <= 1 )
      {
        if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
        {
          if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
            return v5;
          v10 = *(_QWORD *)(v8 + 32);
        }
        else
        {
          v10 = *(_QWORD *)(v8 + 24);
        }
        if ( v10 && *(_DWORD *)(v10 + 8) == 48 && !(unsigned int)lexcompare_tinfo() )
        {
          *v4 = 1;
          return 1;
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v5;
}
