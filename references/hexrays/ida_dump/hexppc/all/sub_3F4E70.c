__int64 __fastcall sub_3F4E70(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax

  v8 = sub_11C340((char *)a3, a2, 0);
  if ( (_BYTE)v8 )
    return 1;
  v9 = v8;
  if ( *(_BYTE *)a3 == 10 )
  {
    v11 = *(_QWORD *)(a3 + 8);
    if ( *(_BYTE *)v11 != 6 )
      return v9;
    v12 = *(_QWORD *)(v11 + 8);
    if ( (unsigned __int8)is_spec_ea(v12) )
      return v9;
    *a2 = v12;
    return 1;
  }
  if ( *(_BYTE *)a3 == 1 )
  {
    v13 = sub_3F4920(a1, a4, *(_DWORD *)(a3 + 8), a5);
    if ( v13 != -1 )
    {
      *a2 = v13;
      return 1;
    }
  }
  return v9;
}
