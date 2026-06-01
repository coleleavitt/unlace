/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100069440
// Address: 0x0000000100069440

//----- (0000000100069440) ----------------------------------------------------
__int64 __fastcall sub_100069440(__int64 a1, char *a2, __va_list_tag *a3)
{
  __darwin_time_t v3; // rax
  const char *v4; // rcx
  __int64 result; // rax
  unsigned int v6; // ebx
  __int128 v7; // [rsp+0h] [rbp-50h] BYREF
  __int64 v8; // [rsp+10h] [rbp-40h]
  char v9[32]; // [rsp+20h] [rbp-30h] BYREF

  v7 = 0;
  v8 = 0;
  sub_10000C630((__int64)&v7, a2, a3);
  v3 = qtime64();
  format_timestamp(v9, 25, v3, 0);
  if ( *((_QWORD *)&v7 + 1) )
    v4 = (const char *)v7;
  else
    v4 = _s1;
  result = sub_10006D810("%s [%u] %s", v9, *(_DWORD *)(a1 + 168), v4);
  if ( (_QWORD)v7 )
  {
    *((_QWORD *)&v7 + 1) = 0;
    v6 = result;
    qfree((void *)v7);
    return v6;
  }
  return result;
}
