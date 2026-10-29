/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_515D0
// Address: 0x00000000000515D0

//----- (00000000000515D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_515D0(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  unsigned int v7; // ebp
  int v8; // eax
  const char *v9; // rax
  const char *v10; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  const char *v14; // rsi
  void *ptr; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+10h] [rbp-38h]
  __int64 v17; // [rsp+18h] [rbp-30h]
  unsigned __int64 v18; // [rsp+20h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(a3 + 4);
  if ( v7 <= 0xB )
  {
    v8 = 2645;
    if ( _bittest(&v8, v7) )
    {
      v9 = sub_57DA0(a1 + 80, v7);
      sub_37F60((__int64)&ptr, v9);
      if ( v16 > 1 || (sub_3BBA0((__int64)&ptr, "%X", v7), v16) )
        v10 = (const char *)ptr;
      else
        v10 = s1;
      sub_390A0((int)"Illegal type %s of the string table section\n", v10);
      if ( ptr )
      {
        v16 = 0;
        qfree(ptr);
        ptr = nullptr;
        v17 = 0;
      }
      return __readfsqword(0x28u);
    }
  }
  v12 = *(_QWORD *)(a3 + 24);
  if ( !v12 )
  {
    sub_390A0((int)"Illegal offset of the string table section\n");
    return __readfsqword(0x28u);
  }
  v13 = *a2;
  if ( *a2 <= 0 || !a2[2] )
  {
LABEL_20:
    *a2 = v12;
    a2[1] = *(_QWORD *)(a3 + 16);
    a2[2] = *(_QWORD *)(a3 + 32);
    return __readfsqword(0x28u);
  }
  if ( v13 != v12 )
  {
    v14 = &byte_EB522;
    if ( (__int64 *)(a1 + 352) == a2 )
      v14 = "dynamic linking ";
    if ( a4 )
      v13 = *(_QWORD *)(a3 + 24);
    sub_4FCD0((int)"AUTOHIDE SESSION\nMore than one string table for %ssymbols, using one at offset %08llX", v14, v13);
    if ( a4 )
    {
      v12 = *(_QWORD *)(a3 + 24);
      goto LABEL_20;
    }
  }
  return __readfsqword(0x28u);
}
