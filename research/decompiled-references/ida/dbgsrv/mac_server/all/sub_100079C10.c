/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100079C10
// Address: 0x0000000100079C10

//----- (0000000100079C10) ----------------------------------------------------
__int64 __fastcall sub_100079C10(void **a1, char *a2)
{
  char *i; // r13
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // r12
  void *v6; // rax
  __int128 v8; // [rsp+0h] [rbp-50h] BYREF
  __int64 v9; // [rsp+10h] [rbp-40h]
  const char *v10; // [rsp+18h] [rbp-38h] BYREF

  if ( a1 != nullptr && a2 != nullptr )
  {
    for ( i = qstrtok(a2, ":", &v10); i; i = qstrtok(nullptr, ":", &v10) )
    {
      if ( *i )
      {
        v8 = 0;
        v9 = 0;
        v3 = strlen(i);
        v4 = v3;
        v5 = v3 + 1;
        if ( v3 == -1 )
        {
          v6 = nullptr;
        }
        else
        {
          v6 = qvector_reserve((__int64)&v8, nullptr, v3 + 1, 1u);
          *(_QWORD *)&v8 = v6;
        }
        *((_QWORD *)&v8 + 1) = v5;
        memmove(v6, i, v4);
        *(_BYTE *)(v8 + v4) = 0;
        sub_100015270(a1, (char *)&v8);
        if ( (_QWORD)v8 )
        {
          *((_QWORD *)&v8 + 1) = 0;
          qfree((void *)v8);
        }
      }
    }
  }
  return __stack_chk_guard;
}
