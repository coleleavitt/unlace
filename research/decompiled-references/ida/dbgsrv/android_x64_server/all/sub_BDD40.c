/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BDD40
// Address: 0x00000000000BDD40

//----- (00000000000BDD40) ----------------------------------------------------
bool __fastcall sub_BDD40(__int64 *a1)
{
  const char *v1; // rax
  const char *v2; // rbx
  __int64 v3; // rbx
  void *ptr[3]; // [rsp+8h] [rbp-1050h] BYREF
  void *v6[2]; // [rsp+20h] [rbp-1038h] BYREF
  __int64 v7; // [rsp+30h] [rbp-1028h]
  char v8[4096]; // [rsp+40h] [rbp-1018h] BYREF
  unsigned __int64 v9; // [rsp+1040h] [rbp-18h]

  v9 = __readfsqword(0x28u);
  get_ida_subdirs(a1, "cfg", 6);
  *(_OWORD *)v6 = 0;
  v7 = 0;
  if ( (unsigned __int8)sub_BD790((__int64)v6) )
  {
    v1 = v6[1] ? qmakepath(v8, 4096, (const char *)v6[0], 0) : qmakepath(v8, 4096, s1, 0);
    v2 = v1;
    if ( qisdir(v1) )
    {
      sub_37F60((__int64)ptr, v2);
      sub_4AA20((__int64)a1, ptr);
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        ptr[2] = nullptr;
      }
    }
  }
  v3 = a1[1];
  if ( v6[0] )
  {
    v6[1] = nullptr;
    qfree(v6[0]);
    v6[0] = nullptr;
    v7 = 0;
  }
  return v3 != 0;
}
