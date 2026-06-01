__int64 __fastcall sub_1118BA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6, __int64 a7)
{
  char *v11; // rbx
  char *v12; // r14
  __int64 result; // rax
  unsigned __int8 v14; // [rsp+8h] [rbp-E0h]
  _QWORD v15[2]; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+28h] [rbp-C0h]
  _BYTE v18[184]; // [rsp+30h] [rbp-B8h] BYREF

  v15[1] = a2;
  v15[0] = a1;
  ptr = v18;
  v17 = 0x800000000LL;
  sub_2223490(v15, &ptr, "+", 1, 0xFFFFFFFFLL, 0);
  v11 = (char *)ptr + 16 * (unsigned int)v17;
  if ( ptr != v11 )
  {
    v12 = (char *)ptr;
    do
    {
      result = sub_227C6C0(a3, a4, a5, *(_QWORD *)v12, *((_QWORD *)v12 + 1), a6, a7);
      if ( !(_BYTE)result )
      {
        v11 = (char *)ptr;
        goto LABEL_8;
      }
      v12 += 16;
    }
    while ( v11 != v12 );
    v11 = (char *)ptr;
  }
  result = 1;
LABEL_8:
  if ( v11 != v18 )
  {
    v14 = result;
    free(v11);
    return v14;
  }
  return result;
}

