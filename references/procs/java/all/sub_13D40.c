bool __fastcall sub_13D40(__int64 a1, int a2, unsigned __int16 a3, unsigned __int8 a4, char *a5)
{
  char *v5; // rbx
  __int64 v8; // r15
  int v10; // r8d
  int v11; // r9d
  char v12; // al
  char v13; // al
  _BYTE *v14; // rcx
  char v15; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v5 = a5;
  if ( !a5 )
    v5 = &v15;
  if ( !a3 )
    return 0;
  if ( *(_WORD *)(a1 + 33017) < a3 )
    return 0;
  v8 = a3;
  if ( netnode_supval(*(_QWORD *)(a1 + 33336), a3, v5, 12, 83) != 12 )
    return 0;
  if ( (unsigned int)(a2 + 1) <= 1 )
    return 1;
  v12 = v5[1];
  if ( (v12 & 1) == 0 )
  {
    v5[1] = v12 | 1;
    netnode_supset(*(_QWORD *)(a1 + 33336), v8, v5, 12, 83);
  }
  if ( a4 <= 0x1Fu )
  {
    if ( a4 )
      return *v5 == (char)a4;
    return 1;
  }
  v13 = *v5;
  if ( a4 != 0xFF )
  {
    if ( v13 == 1 )
    {
      if ( (a4 & 0x1E) != 0 )
        sub_E6C0(0);
      v14 = byte_25CB0;
      if ( (byte_25CB0[a4 >> 5] & (unsigned __int8)v5[1]) != 0 )
        return 1;
      if ( (a4 & 0x1F) == 0 )
      {
        if ( a2 == 2 )
          sub_E500((__int64)&unk_227BE);
        sub_19260(a1, (unsigned int)"Illegal reference type to Utf8#%u\n", a3, (_DWORD)v14, v10, v11);
        return 1;
      }
    }
    return 0;
  }
  if ( v13 != 7 )
    return 0;
  return (v5[1] & 0x10) != 0;
}
