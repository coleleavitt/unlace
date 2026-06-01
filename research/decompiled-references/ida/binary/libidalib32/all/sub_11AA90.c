__int64 __fastcall sub_11AA90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int ids_module; // ebx
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  __int128 v9; // [rsp+8h] [rbp-20h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v9 = 0;
  ids_module = 1;
  if ( (unsigned __int8)sub_179EB0((unsigned int)&v8, 0, (unsigned int)"IDA Symbol files|*.ids;*.idt", 991, a5, a6, 0) )
    ids_module = load_ids_module();
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return ids_module;
}

