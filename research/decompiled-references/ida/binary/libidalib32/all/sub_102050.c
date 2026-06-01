__int64 __fastcall sub_102050(__int64 a1, unsigned int a2, char *a3, char *a4)
{
  char *v4; // rbx
  __int64 v5; // r13
  char *v6; // rbp
  char v7; // dl
  __int64 result; // rax
  char v9; // al
  char v10; // dl
  char v11; // [rsp+Fh] [rbp-39h] BYREF
  char v12; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 8);
  v13 = __readfsqword(0x28u);
  v6 = a4;
  if ( !a3 )
    v4 = &v12;
  *(_QWORD *)v4 = -1;
  if ( !a4 )
    v6 = &v11;
  *v6 = 0;
  v7 = is_mapped();
  result = 1;
  if ( v7 )
  {
    v9 = sub_101E40(v5, a2, v4);
    *v6 = v9;
    if ( v9 )
    {
      return 0;
    }
    else
    {
      v10 = is_loaded();
      result = 2;
      if ( v10 )
      {
        *(_QWORD *)v4 = get_wide_byte();
        return 0;
      }
    }
  }
  return result;
}

