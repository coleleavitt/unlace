/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C74C0
// Address: 0x080C74C0

//----- (080C74C0) --------------------------------------------------------
int __cdecl sub_80C74C0(_BYTE *a1, char *a2, int a3)
{
  unsigned int v3; // ebx
  _BYTE *i; // eax
  char v6; // cl
  int result; // eax
  char v8; // dl
  unsigned __int8 *v9; // edi
  _BYTE *v10; // eax
  char v11; // al
  int v12; // [esp-14h] [ebp-28h]
  int v13; // [esp-10h] [ebp-24h]
  int v14; // [esp-Ch] [ebp-20h]
  unsigned __int8 *v15; // [esp+0h] [ebp-14h] BYREF
  unsigned int v16; // [esp+4h] [ebp-10h]

  v16 = __readgsdword(0x14u);
  v3 = (unsigned int)a1;
  if ( a3 < 0 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v16 == __readgsdword(0x14u) )
        sub_80CFF40(1225, v12, v13, v14);
      sub_80D7AB0();
    }
LABEL_30:
    JUMPOUT(0x8051FD3);
  }
  if ( !a3 )
  {
    if ( !byte_811F8A1 )
    {
      if ( v16 == __readgsdword(0x14u) )
        sub_80CFF40(1538, v12, v13, v14);
      sub_80D7AB0();
    }
    goto LABEL_30;
  }
  for ( i = a1; ; ++i )
  {
    v6 = *a2++;
    *i = v6;
    if ( !v6 )
    {
      result = 1;
      goto LABEL_8;
    }
    if ( &a1[a3] == i + 1 )
      break;
  }
  *i = 0;
  if ( a1 >= i )
    goto LABEL_12;
  v8 = *(i - 1);
  if ( v8 >= 0 )
    goto LABEL_12;
  v9 = i - 1;
  v10 = i - 3;
  if ( a1 < v10 )
    v3 = (unsigned int)v10;
  if ( (v8 & 0xC0) == 0x80 )
  {
    do
    {
      if ( v3 >= (unsigned int)v9 )
        break;
      v11 = *--v9;
    }
    while ( (v11 & 0xC0) == 0x80 );
  }
  v15 = v9;
  if ( sub_80C7170(&v15) == -1 )
  {
    *v9 = 0;
    result = 0;
  }
  else
  {
LABEL_12:
    result = 0;
  }
LABEL_8:
  if ( v16 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80C75C0: control flows out of bounds to 8051FD3
// 80C75DD: variable 'v12' is possibly undefined
// 80C75DD: variable 'v13' is possibly undefined
// 80C75DD: variable 'v14' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
