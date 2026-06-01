/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B09C0
// Address: 0x080B09C0

//----- (080B09C0) --------------------------------------------------------
int __cdecl sub_80B09C0(int *a1)
{
  unsigned int v1; // eax
  int result; // eax
  void *ptr; // [esp+0h] [ebp-28h] BYREF
  int v4; // [esp+4h] [ebp-24h]
  int v5; // [esp+8h] [ebp-20h]
  unsigned int v6; // [esp+Ch] [ebp-1Ch]

  v6 = __readgsdword(0x14u);
  v1 = a1[3];
  if ( v1 > 0xB )
  {
    if ( v1 != 18 )
      goto LABEL_3;
  }
  else if ( v1 <= 9 )
  {
LABEL_3:
    result = 0;
    goto LABEL_4;
  }
  result = sub_80AEDD0((int)(a1 + 4), *a1, a1[3]);
  if ( !(_BYTE)result )
  {
    ptr = nullptr;
    v4 = 0;
    v5 = 0;
    sub_80B0900(a1, &ptr);
    if ( dword_811E72C && *(_BYTE *)(dword_811E72C + 96) )
      sub_8058290();
    if ( ptr )
    {
      v4 = 0;
      sub_80CF780(ptr);
    }
    goto LABEL_3;
  }
LABEL_4:
  if ( v6 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811E72C: using guessed type int dword_811E72C;
