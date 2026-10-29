/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AABD0
// Address: 0x000AABD0

//----- (000AABD0) --------------------------------------------------------
bool __cdecl sub_AABD0(int *a1)
{
  const char *v1; // eax
  char *v2; // esi
  int v3; // esi
  int v5[4]; // [esp+18h] [ebp-1034h] BYREF
  char *v6; // [esp+28h] [ebp-1024h] BYREF
  int v7; // [esp+2Ch] [ebp-1020h]
  int v8; // [esp+30h] [ebp-101Ch]
  char v9[4096]; // [esp+38h] [ebp-1014h] BYREF
  unsigned int v10; // [esp+1038h] [ebp-14h]

  v10 = __readgsdword(0x14u);
  get_ida_subdirs(a1, "cfg", 6);
  v6 = nullptr;
  v7 = 0;
  v8 = 0;
  if ( (unsigned __int8)sub_AA660((int)&v6) )
  {
    v1 = v7 ? v6 : byte_EF875;
    v2 = qmakepath(v9, 4096, v1, 0);
    if ( qisdir(v2) )
    {
      sub_1B530((int)v5, v2);
      sub_2DAC0((int)a1, (char *)v5);
      if ( v5[0] )
      {
        v5[1] = 0;
        qfree((void *)v5[0]);
        v5[0] = 0;
        v5[2] = 0;
      }
    }
  }
  v3 = a1[1];
  if ( v6 )
  {
    v7 = 0;
    qfree(v6);
    v6 = nullptr;
    v8 = 0;
  }
  return v3 != 0;
}
