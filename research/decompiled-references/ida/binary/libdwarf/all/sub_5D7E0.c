__int64 __fastcall sub_5D7E0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  _QWORD *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v17; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD v18[22]; // [rsp+48h] [rbp-B0h] BYREF

  v6 = a3;
  v18[14] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    v8 = 0;
    while ( 1 )
    {
      v17 = 0;
      v18[0] = 0;
      result = dwarf_get_xu_section_names(a1, v8, v18, &v17, a6);
      if ( (_DWORD)result )
        break;
      v18[++v8] = v18[0];
      if ( v7 == v8 )
      {
        v11 = 0;
        while ( 1 )
        {
          v17 = 0;
          v18[0] = 0;
          v12 = v18[v11 + 1];
          result = dwarf_get_xu_section_offset(a1, a2, v11, &v17, v18, a6);
          if ( (_DWORD)result )
            return result;
          ++v11;
          a5[v12 + 3] = v17;
          a5[v12 + 15] = v18[0];
          if ( v7 == v11 )
          {
            v6 = a3;
            goto LABEL_11;
          }
        }
      }
    }
  }
  else
  {
LABEL_11:
    *a5 = a4;
    a5[1] = a2;
    a5[2] = *v6;
    return 0;
  }
  return result;
}

