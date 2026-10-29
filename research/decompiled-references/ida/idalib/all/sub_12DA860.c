bool __fastcall sub_12DA860(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  bool result; // al
  unsigned __int16 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax

  v4 = sub_C9AC70(a1, (__int64)a2);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(v4 + 40);
  v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v5 & 7) != 0 )
    v6 = 0;
  *a2 = v6;
  result = 1;
  if ( *(_BYTE *)(a1 + 26) )
  {
    if ( (*(_BYTE *)(a3 + 107) & 4) != 0 && *(_BYTE *)(a1 + 26) == 1 )
    {
      v8 = (unsigned __int16 *)sub_BFBAE0(*(_QWORD *)(a1 + 40));
      v12 = *v8;
      LOWORD(v12) = v12 & 0x1FF;
      if ( (_WORD)v12 == 33 )
      {
        if ( (*((_BYTE *)v8 + 27) & 1) != 0 )
        {
          v14 = sub_BA8080(*((_QWORD *)v8 + 2), (__int64)a2, v12, v9, v10, v11);
        }
        else
        {
          v13 = sub_C9AC10((__int64)v8);
          v14 = sub_FDEF00(v13);
        }
        return v14 == 1;
      }
    }
    return 0;
  }
  return result;
}
