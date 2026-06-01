unsigned __int64 __fastcall sub_5158A0(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  int v4; // ebp
  unsigned int i; // ebx
  unsigned int v6; // esi

  result = get_import_module_qty();
  if ( (_DWORD)result )
  {
    v4 = result;
    for ( i = 0; i != v4; ++i )
    {
      v6 = i;
      result = sub_5153E0(a2, v6);
    }
  }
  return result;
}

