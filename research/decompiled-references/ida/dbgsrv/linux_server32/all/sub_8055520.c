/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8055520
// Address: 0x08055520

//----- (08055520) --------------------------------------------------------
int __usercall sub_8055520@<eax>(int a1@<eax>)
{
  FILE *v1; // eax
  FILE *v2; // edi
  int v3; // edi
  int v5; // eax
  int v6; // [esp-Ch] [ebp-1044h]
  int v7; // [esp-8h] [ebp-1040h]
  int v8; // [esp-4h] [ebp-103Ch]
  char *v9; // [esp+4h] [ebp-1034h]
  int v10; // [esp+8h] [ebp-1030h]
  unsigned __int8 *v11; // [esp+Ch] [ebp-102Ch]
  char *s1; // [esp+10h] [ebp-1028h] BYREF
  unsigned int v13; // [esp+14h] [ebp-1024h]
  int v14; // [esp+18h] [ebp-1020h]
  _BYTE v15[4096]; // [esp+1Ch] [ebp-101Ch] BYREF
  unsigned int v16; // [esp+101Ch] [ebp-1Ch]

  v16 = __readgsdword(0x14u);
  sub_80D3B60(v15, 4096, "/proc/%u/status", a1);
  v1 = sub_80CDB00((int)v15);
  if ( v1 )
  {
    s1 = nullptr;
    v2 = v1;
    v13 = 0;
    v14 = 0;
    v10 = 3;
    while ( 1 )
    {
      if ( (int)sub_80CF4E0(&s1, v2) < 0 )
      {
        sub_80CF060(v2);
        v3 = 32;
        goto LABEL_14;
      }
      if ( v13 > 6 )
      {
        v9 = s1;
        if ( !strncmp(s1, "State:", 6u) )
          break;
      }
      if ( !--v10 )
        goto LABEL_7;
    }
    v11 = (unsigned __int8 *)(v9 + 6);
    v5 = v9[6];
    if ( !(_BYTE)v5 )
    {
LABEL_7:
      sub_80CF060(v2);
      if ( !byte_811F8A1 )
      {
        if ( v16 == __readgsdword(0x14u) )
          sub_80CFF40(30060, v6, v7, v8);
        sub_80D7AB0();
      }
      BUG();
    }
    while ( isspace(v5) )
    {
      v5 = (char)*++v11;
      if ( !(_BYTE)v5 )
        goto LABEL_7;
    }
    sub_80CF060(v2);
    v3 = *v11;
LABEL_14:
    if ( s1 )
    {
      v13 = 0;
      sub_80CF780(s1);
    }
  }
  else
  {
    v3 = 32;
  }
  if ( v16 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v3;
}
// 8055644: variable 'v6' is possibly undefined
// 8055644: variable 'v7' is possibly undefined
// 8055644: variable 'v8' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
