__int64 __fastcall sub_3F4F20(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r15
  char v9; // al
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax

  v8 = *(_QWORD *)(a4 + 24);
  if ( (unsigned __int8)sub_11C340((char *)(a4 + 32), a2, 0) )
    return sub_3F4E70(a1, a3, a4 + 48, *(_QWORD *)(a4 + 24), a5);
  v9 = *(_BYTE *)(a4 + 32);
  if ( v9 != 10 )
  {
    if ( v9 == 1 )
    {
      v13 = sub_3F4920(a1, v8, *(_DWORD *)(a4 + 40), a5);
      if ( v13 != -1 )
      {
        *a2 = v13;
        return sub_3F4E70(a1, a3, a4 + 48, *(_QWORD *)(a4 + 24), a5);
      }
    }
    return 0;
  }
  v11 = *(_QWORD *)(a4 + 40);
  if ( *(_BYTE *)v11 != 6 )
    return 0;
  v12 = *(_QWORD *)(v11 + 8);
  if ( (unsigned __int8)is_spec_ea(v12) )
    return 0;
  *a2 = v12;
  return sub_3F4E70(a1, a3, a4 + 48, *(_QWORD *)(a4 + 24), a5);
}
