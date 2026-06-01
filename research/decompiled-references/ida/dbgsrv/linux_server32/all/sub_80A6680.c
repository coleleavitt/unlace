/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A6680
// Address: 0x080A6680

//----- (080A6680) --------------------------------------------------------
unsigned int __cdecl sub_80A6680(char **a1, unsigned int a2, unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebp
  unsigned int v5; // edx
  unsigned int result; // eax
  char *v7; // ecx
  char *v8; // eax
  size_t n; // [esp+0h] [ebp-38h]
  char *ptr; // [esp+4h] [ebp-34h]
  unsigned int v11; // [esp+8h] [ebp-30h]
  unsigned int v12; // [esp+8h] [ebp-30h]
  _BYTE src[10]; // [esp+Eh] [ebp-2Ah] BYREF
  unsigned int v14[8]; // [esp+18h] [ebp-20h] BYREF

  v14[0] = __readgsdword(0x14u);
  v3 = sub_80CDDF0(src, (unsigned int)v14, a2, a3) - src;
  n = v3;
  if ( !v3 )
    goto LABEL_7;
  v4 = (unsigned int)a1[1];
  v5 = v4 + v3;
  if ( !__CFADD__(v4, v3) )
    goto LABEL_10;
  if ( v4 <= 0x7FFFFFFE )
  {
    v5 = 0x7FFFFFFF;
LABEL_10:
    v7 = a1[1];
    ptr = *a1;
    if ( (unsigned int)a1[2] < v5 )
    {
      v12 = v5;
      v8 = (char *)sub_80CF920((int)a1, ptr, v5, 1u);
      v7 = a1[1];
      ptr = v8;
      v5 = v12;
      *a1 = v8;
    }
    v11 = v5;
    memset(&ptr[(_DWORD)v7], 0, v5 - (_DWORD)v7);
    a1[1] = (char *)v11;
    goto LABEL_6;
  }
  if ( v4 != 0x7FFFFFFF )
    a1[1] = (char *)0x7FFFFFFF;
LABEL_6:
  memcpy(&(*a1)[v4], src, n);
LABEL_7:
  result = v14[0] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
