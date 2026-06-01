/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36C30
// Address: 0x0000000000036C30

//----- (0000000000036C30) ----------------------------------------------------
__int64 __fastcall sub_36C30(__int64 a1, int a2)
{
  unsigned int v2; // r14d
  FILE *v3; // rax
  FILE *v4; // rbx
  const char *v5; // r14
  char *v6; // rax
  unsigned __int64 v7; // rax
  char v9; // [rsp+0h] [rbp-1068h] BYREF
  char v10; // [rsp+8h] [rbp-1060h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-1058h] BYREF
  __int64 v12; // [rsp+20h] [rbp-1048h]
  char v13[4096]; // [rsp+30h] [rbp-1038h] BYREF
  unsigned __int64 v14; // [rsp+1030h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  v2 = 0;
  qsnprintf(v13, 4096, "/proc/%u/maps", a2);
  v3 = fopenRT(v13);
  if ( v3 )
  {
    v4 = v3;
    *(_OWORD *)ptr = 0;
    v12 = 0;
    v2 = 0;
    while ( qgetline(ptr, v4) >= 0 )
    {
      if ( ptr[1] >= (char *)&dword_0 + 2 )
      {
        if ( qsscanf((char *)ptr[0], "%a-%a ", &v10, &v9) == 2 )
        {
          v5 = s1;
          if ( ptr[1] )
            v5 = (const char *)ptr[0];
          v6 = strchr(v5, 45);
          if ( v6 )
          {
            v7 = v6 - v5;
            if ( v7 != -1 && v7 >= 9 )
            {
              v2 = 8;
              break;
            }
          }
        }
        v2 = 4;
      }
    }
    qfclose(v4);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v12 = 0;
    }
  }
  return v2;
}
// 0: using guessed type int dword_0;
