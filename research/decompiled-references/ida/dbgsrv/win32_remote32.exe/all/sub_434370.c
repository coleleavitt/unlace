/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_434370
// Address: 0x00434370

//----- (00434370) --------------------------------------------------------
const CHAR *__thiscall sub_434370(_DWORD *this, __int8 *a2, int a3, int a4, unsigned __int8 *a5, char a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // esi
  int *v7; // ecx
  int v8; // ebx
  unsigned __int8 **v9; // edi
  unsigned __int8 *v10; // ecx
  unsigned __int8 *v11; // eax
  __int8 *v12; // eax
  const CHAR *v13; // ebx
  char v14; // al
  int v15; // edi
  char *v16; // eax
  __int8 *v17; // eax
  char v18; // al
  unsigned __int8 **v20; // [esp+14h] [ebp-14h]
  int v22; // [esp+3Ch] [ebp+14h]

  v6 = dword_4B6B40;
  sub_4562D0(dword_4B6B40);
  v7 = this;
  v8 = a3;
  v9 = (unsigned __int8 **)*(this + 3);
  v20 = &v9[3 * *(this + 4)];
  if ( v9 != v20 )
  {
    v10 = a5;
    do
    {
      v11 = (unsigned __int8 *)MultiByteStr;
      if ( v10 )
      {
        if ( v9[1] )
          v11 = *v9;
        v10 = sub_468261(v8, (int)v9, v11, v10) != 0 ? a5 : nullptr;
        a5 = v10;
      }
      else
      {
        if ( v9[1] )
          v11 = *v9;
        v12 = sub_4569C0(a2, v8, (char *)v11, a4, 0);
        v13 = v12;
        if ( a6 )
          v14 = sub_437610((int)v12, v12, a3);
        else
          v14 = sub_457B00(v12);
        if ( v14 )
          goto LABEL_29;
        v8 = a3;
        v10 = a5;
      }
      v9 += 3;
    }
    while ( v9 != v20 );
    v7 = this;
  }
  if ( !v7[1] )
  {
    sub_4570F0((int)v7, "idc", 0);
    v7 = this;
  }
  v15 = *v7;
  v22 = *v7 + 12 * v7[1];
  if ( *v7 == v22 )
  {
LABEL_28:
    v13 = sub_4574A0(a2, a3, a4, nullptr);
  }
  else
  {
    while ( 1 )
    {
      v16 = (char *)MultiByteStr;
      if ( *(_DWORD *)(v15 + 4) )
        v16 = *(char **)v15;
      v17 = sub_4569C0(a2, v8, v16, a4, 0);
      v13 = v17;
      v18 = a6 ? sub_437610((int)v17, v17, a3) : sub_457B00(v17);
      if ( v18 )
        break;
      v15 += 12;
      if ( v15 == v22 )
        goto LABEL_28;
      v8 = a3;
    }
  }
LABEL_29:
  sub_4562F0(v6);
  return v13;
}
