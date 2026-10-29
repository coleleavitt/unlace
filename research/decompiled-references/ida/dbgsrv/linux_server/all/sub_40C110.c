/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C110
// Address: 0x000000000040C110

//----- (000000000040C110) ----------------------------------------------------
__int64 __fastcall sub_40C110(double a1, double a2, __int64 a3, int a4)
{
  FILE *v4; // rax
  FILE *v5; // rbx
  unsigned int v6; // r12d
  _BYTE *v7; // r14
  char *v8; // rax
  void *ptr; // [rsp+10h] [rbp-1058h] BYREF
  __int128 v11; // [rsp+18h] [rbp-1050h]
  char v12[4104]; // [rsp+30h] [rbp-1038h] BYREF
  unsigned __int64 v13; // [rsp+1038h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  sub_485490(v12, 4096, "/proc/%u/maps", a4);
  v4 = sub_47FA20(v12);
  if ( v4 )
  {
    v5 = v4;
    v6 = 0;
    ptr = nullptr;
    v11 = 0;
    while ( sub_481160((char **)&ptr, v5) >= 0 )
    {
      if ( (unsigned __int64)v11 > 1 )
      {
        v6 = 4;
        if ( sub_485540((char *)ptr, "%a-%a ", 0.0, a2) == 2 )
        {
          if ( (_QWORD)v11 )
          {
            v7 = ptr;
            v8 = strchr((const char *)ptr, 45);
            if ( v8 )
            {
              if ( (unsigned __int64)(v8 - v7 - 9) <= 0xFFFFFFFFFFFFFFF5LL )
              {
                v6 = 8;
                break;
              }
            }
          }
        }
      }
    }
    sub_480D70(v5);
    if ( ptr )
    {
      *(_QWORD *)&v11 = 0;
      j__free(ptr);
    }
  }
  else
  {
    return 0;
  }
  return v6;
}
