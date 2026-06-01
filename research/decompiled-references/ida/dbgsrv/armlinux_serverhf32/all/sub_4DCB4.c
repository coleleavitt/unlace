/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DCB4
// Address: 0x0004DCB4

//----- (0004DCB4) --------------------------------------------------------
bool *__fastcall sub_4DCB4(int a1, char *s, const char *a3, unsigned int a4, char a5, bool *a6)
{
  bool *result; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r12
  unsigned __int8 *v13; // r8
  _DWORD *v14; // lr
  int v15; // r0
  int v16; // r1
  _DWORD *v17; // r11
  char *v18; // r1
  int v19; // r9
  _DWORD *v20; // r8
  unsigned __int8 *v21; // r0
  int v22; // r10
  size_t v23; // r0
  size_t v24; // r11
  unsigned int *v25; // r2
  int v26; // r3
  unsigned int v27; // r2
  void *v28; // r0
  unsigned int v29; // [sp+4h] [bp-18h]
  unsigned __int8 *v30; // [sp+10h] [bp-Ch] BYREF

  if ( *(_BYTE *)(a1 + 644) )
  {
    *(_BYTE *)(a1 + 644) = 0;
    v11 = sub_805CC(0x1Cu);
    v12 = *(_DWORD **)(a1 + 612);
    *v11 = 0;
    v13 = (unsigned __int8 *)v11;
    v14 = v11 + 4;
    v11[1] = v12[1];
    v11[2] = 0;
    v11[3] = v12[3];
    v15 = v12[4];
    v16 = v12[5];
    v30 = v13;
    *v14 = v15;
    v14[1] = v16;
    *((_DWORD *)v13 + 6) = 0;
    sub_4CCAC(v13, (int)v12);
    *(_DWORD *)(a1 + 612) = v13;
  }
  if ( !s || !*s || a4 > 0x7F )
    return (bool *)sub_70A2C(38);
  v17 = *(_DWORD **)(a1 + 612);
  v18 = s;
  v19 = v17[3];
  sub_4CA28(&v30, v18);
  v20 = sub_4DC34(v17, &v30);
  v21 = v30 - 12;
  if ( v30 - 12 != (unsigned __int8 *)std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v25 = (unsigned int *)(v30 - 4);
      __dmb(0xBu);
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      __dmb(0xBu);
    }
    else
    {
      v26 = *((_DWORD *)v30 - 1);
      *((_DWORD *)v30 - 1) = v26 - 1;
    }
    if ( v26 <= 0 )
      sub_80648(v21);
  }
  v22 = v17[3];
  if ( a3 && *a3 )
  {
    v23 = strlen(a3);
    v24 = v23;
    if ( v23 )
    {
      v27 = v23 + 1;
      v29 = v27;
      v28 = (void *)*v20;
      if ( v27 > v20[2] )
      {
        v28 = sub_77EB0((int)v20, (void *)*v20, v27, 1u);
        *v20 = v28;
      }
      v20[1] = v29;
      memmove(v28, a3, v24);
      *(_BYTE *)(*v20 + v24) = 0;
    }
    else
    {
      v20[1] = 0;
    }
  }
  else
  {
    v20[1] = 0;
  }
  *((_BYTE *)v20 + 12) = a4;
  result = a6;
  *((_BYTE *)v20 + 13) = a5;
  if ( a6 )
  {
    *a6 = v19 != v22;
    return nullptr;
  }
  return result;
}
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
