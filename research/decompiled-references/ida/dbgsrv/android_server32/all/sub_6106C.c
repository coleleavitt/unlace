/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6106C
// Address: 0x0006106C

//----- (0006106C) --------------------------------------------------------
_DWORD *__fastcall sub_6106C(int a1)
{
  _DWORD *v1; // r7
  _DWORD *v2; // r0
  char *v3; // r0
  _DWORD *v4; // r5
  unsigned __int8 *v5; // r4
  char *v6; // r2
  int *v7; // r0
  int *v8; // r4
  char *v10; // [sp+8h] [bp-3014h]
  char s[4096]; // [sp+10h] [bp-300Ch] BYREF
  _DWORD v12[1025]; // [sp+1010h] [bp-200Ch] BYREF
  char v13[4104]; // [sp+2014h] [bp-1008h] BYREF

  v1 = *(_DWORD **)(a1 + 68);
  v2 = (_DWORD *)*v1;
  if ( !*v1 || v2[1] != 1 )
  {
    sub_1BBA0((int)"Input source is not local file.\n");
    return nullptr;
  }
  if ( v2[3] )
    v3 = (char *)v2[2];
  else
    v3 = &byte_B3CBE;
  v10 = v3;
  v5 = (unsigned __int8 *)v1[30];
  v4 = nullptr;
  if ( v5 )
  {
    if ( qisabspath(v5) )
    {
      qstrncpy((unsigned int)v13, v5, 4096);
    }
    else
    {
      if ( qisabspath((unsigned __int8 *)v10) )
      {
        v6 = v10;
      }
      else
      {
        if ( !qmake_full_path((unsigned int)s, 4096, v10) )
          return nullptr;
        v6 = s;
      }
      if ( !qdirname((char *)v12, 0x1000u, v6) )
        return nullptr;
      qmakepath(v13, 4096, (char *)v12);
    }
    v7 = open_linput(v13, 0);
    if ( v7 )
    {
      v8 = v7;
      sub_2BCCC((int)v12, v7, 0, 0);
      v4 = nullptr;
      sub_27920((int)v12, nullptr);
      if ( sub_27938((int)v12) && sub_27A6C((int)v12) )
      {
        if ( sub_2C81C((int)v12) )
        {
          v4 = operator new(0x14u);
          *v4 = &off_D9FC8;
          v4[1] = 1;
          sub_1B09C((int)(v4 + 2), v13);
        }
        else
        {
          sub_1BBA0((int)"Failed to read ELF sections from: %s\n", v13);
        }
      }
      else
      {
        sub_1BBA0((int)"Failed to read ELF ident/header from: %s\n", v13);
      }
      sub_283E4(v12);
      close_linput(v8);
      return v4;
    }
    sub_1BBA0((int)"Cannot open file: %s.\n", v13);
    return nullptr;
  }
  return v4;
}
// B3CBE: using guessed type char byte_B3CBE;
// D9FC8: using guessed type _UNKNOWN *off_D9FC8;
