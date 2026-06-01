/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9FBD0
// Address: 0x000000000009FBD0

//----- (000000000009FBD0) ----------------------------------------------------
__int64 __fastcall sub_9FBD0(__int64 a1, int a2, char *a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rax
  const char *v8; // rsi

  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 16) )
      v8 = *(const char **)(v7 + 8);
    else
      v8 = s1;
    qstrncpy(a3, (__int64)v8, a4);
    LOBYTE(v4) = 1;
  }
  else
  {
    v4 = 0;
    qsnprintf(a3, a4, "%08X", a2);
  }
  return v4;
}
// 9FC25: variable 'v4' is possibly undefined
