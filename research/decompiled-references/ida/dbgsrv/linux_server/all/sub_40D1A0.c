/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D1A0
// Address: 0x000000000040D1A0

//----- (000000000040D1A0) ----------------------------------------------------
__int64 __fastcall sub_40D1A0(__int64 a1, int a2, char *a3, unsigned __int64 a4)
{
  int v5; // ebx
  unsigned int v7; // r15d
  unsigned int v8; // eax
  int v10; // [rsp+Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v12; // [rsp+18h] [rbp-50h]
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]

  v5 = a2;
  v13 = __readfsqword(0x28u);
  v7 = sub_40CF60(a2, a3, a4);
  if ( !(_BYTE)v7 )
  {
    ptr = nullptr;
    v12 = 0;
    do
    {
      if ( !(unsigned __int8)sub_40D050(&v10, (__int64)&ptr, v5) || (v5 = v10, v10 == 1) )
      {
        *a3 = 0;
        goto LABEL_7;
      }
      v8 = sub_40CF60(v10, a3, a4);
    }
    while ( !(_BYTE)v8 );
    v7 = v8;
LABEL_7:
    if ( ptr )
    {
      *(_QWORD *)&v12 = 0;
      j__free(ptr);
    }
  }
  return v7;
}
