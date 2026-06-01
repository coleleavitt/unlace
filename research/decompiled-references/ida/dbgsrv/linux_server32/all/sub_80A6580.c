/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A6580
// Address: 0x080A6580

//----- (080A6580) --------------------------------------------------------
unsigned int __cdecl sub_80A6580(char **a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebp
  unsigned int v4; // edx
  unsigned int result; // eax
  char *v6; // ecx
  char *v7; // eax
  size_t n; // [esp+0h] [ebp-38h]
  char *ptr; // [esp+4h] [ebp-34h]
  unsigned int v10; // [esp+8h] [ebp-30h]
  unsigned int v11; // [esp+8h] [ebp-30h]
  _BYTE src[5]; // [esp+13h] [ebp-25h] BYREF
  unsigned int v13[8]; // [esp+18h] [ebp-20h] BYREF

  v13[0] = __readgsdword(0x14u);
  v2 = sub_80CDC90(src, (unsigned int)v13, a2) - src;
  n = v2;
  if ( !v2 )
    goto LABEL_7;
  v3 = (unsigned int)a1[1];
  v4 = v3 + v2;
  if ( !__CFADD__(v3, v2) )
    goto LABEL_10;
  if ( v3 <= 0x7FFFFFFE )
  {
    v4 = 0x7FFFFFFF;
LABEL_10:
    v6 = a1[1];
    ptr = *a1;
    if ( (unsigned int)a1[2] < v4 )
    {
      v11 = v4;
      v7 = (char *)sub_80CF920((int)a1, ptr, v4, 1u);
      v6 = a1[1];
      ptr = v7;
      v4 = v11;
      *a1 = v7;
    }
    v10 = v4;
    memset(&ptr[(_DWORD)v6], 0, v4 - (_DWORD)v6);
    a1[1] = (char *)v10;
    goto LABEL_6;
  }
  if ( v3 != 0x7FFFFFFF )
    a1[1] = (char *)0x7FFFFFFF;
LABEL_6:
  memcpy(&(*a1)[v3], src, n);
LABEL_7:
  result = v13[0] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
