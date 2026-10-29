/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: exec_system_script
// Address: 0x0003F3F8

//----- (0003F3F8) --------------------------------------------------------
int __fastcall exec_system_script(int a1, int a2)
{
  unsigned __int8 *idc_filename; // r0
  int result; // r0
  void *v5; // [sp+Ch] [bp-1010h] BYREF
  int v6; // [sp+10h] [bp-100Ch]
  int v7; // [sp+14h] [bp-1008h]
  char v8[4100]; // [sp+18h] [bp-1004h] BYREF

  idc_filename = get_idc_filename(v8, 4096, a1);
  if ( !idc_filename )
  {
    result = 0;
    if ( !a2 )
      return result;
    sub_2BC80((int)"Could not locate system script file %s");
    return 0;
  }
  v6 = 0;
  v5 = nullptr;
  v7 = 0;
  if ( !compile_idc_file((char *)idc_filename, (int)&v5, 3) || !call_idc_func(0, "main", nullptr, 0, (int)&v5, 0) )
  {
    sub_2BC80((int)"%s");
    if ( v5 )
    {
      v6 = 0;
      qfree(v5);
      v7 = 0;
      v5 = nullptr;
    }
    return 0;
  }
  if ( v5 )
  {
    v6 = 0;
    qfree(v5);
    v7 = 0;
    v5 = nullptr;
  }
  return 1;
}
