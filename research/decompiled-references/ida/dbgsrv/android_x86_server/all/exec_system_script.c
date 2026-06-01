/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: exec_system_script
// Address: 0x00050900

//----- (00050900) --------------------------------------------------------
char __cdecl exec_system_script(int a1, char a2)
{
  char *idc_filename; // eax
  void *v4; // [esp+20h] [ebp-1018h] BYREF
  int v5; // [esp+24h] [ebp-1014h]
  int v6; // [esp+28h] [ebp-1010h]
  char v7[4096]; // [esp+2Ch] [ebp-100Ch] BYREF
  unsigned int v8; // [esp+102Ch] [ebp-Ch]

  v8 = __readgsdword(0x14u);
  idc_filename = get_idc_filename(v7, 4096, a1);
  if ( !idc_filename )
  {
    if ( a2 )
      sub_333F0();
    return 0;
  }
  v4 = nullptr;
  v5 = 0;
  v6 = 0;
  if ( !(unsigned __int8)compile_idc_file(idc_filename, (int)&v4, 3)
    || !call_idc_func(nullptr, "main", nullptr, 0, (int)&v4, 0) )
  {
    sub_333F0();
    if ( v4 )
    {
      v5 = 0;
      qfree(v4);
      v4 = nullptr;
      v6 = 0;
    }
    return 0;
  }
  if ( v4 )
  {
    v5 = 0;
    qfree(v4);
    v4 = nullptr;
    v6 = 0;
  }
  return 1;
}
