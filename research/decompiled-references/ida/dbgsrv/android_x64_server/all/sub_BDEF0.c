/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BDEF0
// Address: 0x00000000000BDEF0

//----- (00000000000BDEF0) ----------------------------------------------------
__int64 __fastcall sub_BDEF0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  void *v3; // rbx
  unsigned __int64 v4; // r15
  const char *v5; // rdx
  char *v6; // rbp
  char *v7; // rbx
  void *v8; // r15
  unsigned __int64 v9; // r12
  __int64 i; // rbp
  void *v11; // rdi
  void *ptr[3]; // [rsp+8h] [rbp-1070h] BYREF
  void *v14[2]; // [rsp+20h] [rbp-1058h] BYREF
  __int64 v15; // [rsp+30h] [rbp-1048h]
  char v16[4096]; // [rsp+40h] [rbp-1038h] BYREF
  unsigned __int64 v17; // [rsp+1040h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  *(_OWORD *)v14 = 0;
  v15 = 0;
  if ( sub_BDD40((__int64 *)v14) )
  {
    v3 = v14[1];
    if ( v14[1] )
    {
      v2 = 8;
      v4 = 0;
      do
      {
        v5 = s1;
        if ( *(_QWORD *)((char *)v14[0] + v2) )
          v5 = *(const char **)((char *)v14[0] + v2 - 8);
        v6 = qmakepath(v16, 4096, v5, a2, 0);
        if ( qfileexist(v6) )
        {
          sub_37F60((__int64)ptr, v6);
          sub_4AA20(a1, ptr);
          if ( ptr[0] )
          {
            ptr[1] = nullptr;
            qfree(ptr[0]);
            ptr[0] = nullptr;
            ptr[2] = nullptr;
          }
        }
        ++v4;
        v2 += 24;
      }
      while ( v4 < (unsigned __int64)v3 );
    }
    LOBYTE(v2) = *(_QWORD *)(a1 + 8) != 0;
  }
  else
  {
    LODWORD(v2) = 0;
  }
  v7 = (char *)v14[0];
  if ( v14[0] )
  {
    v8 = v14[1];
    if ( v14[1] )
    {
      v9 = 1;
      for ( i = 0; ; i += 24 )
      {
        v11 = *(void **)&v7[i];
        if ( v11 )
        {
          *(_QWORD *)&v7[i + 8] = 0;
          qfree(v11);
          *(_QWORD *)&v7[i] = 0;
          *(_QWORD *)&v7[i + 16] = 0;
        }
        if ( v9 >= (unsigned __int64)v8 )
          break;
        v7 = (char *)v14[0];
        ++v9;
      }
      v7 = (char *)v14[0];
    }
    v14[1] = nullptr;
    qfree(v7);
    v14[0] = nullptr;
    v15 = 0;
  }
  return (unsigned int)v2;
}
// BE095: variable 'v2' is possibly undefined
