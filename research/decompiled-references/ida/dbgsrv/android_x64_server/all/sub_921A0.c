/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_921A0
// Address: 0x00000000000921A0

//----- (00000000000921A0) ----------------------------------------------------
char __fastcall sub_921A0(__int64 a1)
{
  unsigned int v1; // edx
  char result; // al
  int v3; // ecx
  const char *v4; // r14
  char v5; // cl
  const char *v6; // rsi
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+20h] [rbp-18h]

  v9 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 24);
  result = 0;
  if ( v1 <= 0x12 )
  {
    v3 = 265216;
    if ( _bittest(&v3, v1) )
    {
      v4 = *(const char **)a1;
      v5 = sub_92120(a1 + 28, *(const char **)a1, v1);
      result = 1;
      if ( !v5 )
      {
        *(_OWORD *)ptr = 0;
        v8 = 0;
        sub_91650(a1, (__int64)ptr);
        if ( qword_1559F8 && *(_BYTE *)(qword_1559F8 + 184) )
        {
          if ( ptr[1] )
            v6 = (const char *)ptr[0];
          else
            v6 = s1;
          sub_390A0((int)"Couldn't find UUID/debug ID \"%s\" for file: %s\n", v6, v4);
        }
        if ( ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v8 = 0;
        }
        return 0;
      }
    }
  }
  return result;
}
// 1559F8: using guessed type __int64 qword_1559F8;
