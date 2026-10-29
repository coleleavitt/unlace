unsigned __int64 __fastcall sub_61D580(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v7; // r9d
  const char *file_ext; // rdi
  int v10; // r9d
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // [rsp+0h] [rbp-5088h] BYREF
  __int16 v16; // [rsp+4h] [rbp-5084h] BYREF
  char v17; // [rsp+6h] [rbp-5082h]
  int v18; // [rsp+8h] [rbp-5080h]
  __int64 v19; // [rsp+10h] [rbp-5078h]
  __int64 v20; // [rsp+2028h] [rbp-3060h]
  int v21; // [rsp+2034h] [rbp-3054h]
  _BYTE v22[4104]; // [rsp+4040h] [rbp-1048h] BYREF
  unsigned __int64 v23; // [rsp+5048h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v20 = 0;
  v21 = 0;
  qmakepath((unsigned int)v22, 4096, a2, (unsigned int)"*", 0, a6);
  if ( !(unsigned int)qfindfirst(v22, &v15, 0x4000) )
  {
    do
    {
      if ( (v15 & 0x4000) != 0 && v16 != 46 && (v16 != 11822 || v17) )
      {
        qmakepath((unsigned int)v22, 4096, a2, (unsigned int)&v16, 0, v7);
        sub_61D580(a1, v22);
      }
      else
      {
        file_ext = (const char *)get_file_ext(&v16);
        if ( file_ext && !strcasecmp(file_ext, "zip") )
        {
          qmakepath((unsigned int)v22, 4096, a2, (unsigned int)&v16, 0, v10);
          sub_61D2F0(a1, v22, v11, v12, v13, v14, v15, v18, v19);
        }
      }
    }
    while ( !(unsigned int)qfindnext(&v15) );
  }
  qfindclose(&v15);
  return v23 - __readfsqword(0x28u);
}
