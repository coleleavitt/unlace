/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100025FA8
// Address: 0x0000000100025FA8

//----- (0000000100025FA8) ----------------------------------------------------
__int64 __fastcall sub_100025FA8(_QWORD *a1)
{
  __int64 v2; // x23
  __int64 v3; // x24
  const char *v4; // x22
  __int64 v5; // x25
  _DWORD *v6; // x20
  _QWORD *v7; // x21
  size_t v8; // x23
  unsigned __int64 v9; // x24
  void *v10; // x0

  v2 = a1[43];
  v3 = a1[44];
  if ( a1[6] )
    v4 = (const char *)a1[5];
  else
    v4 = &byte_100075A30;
  v5 = *(_QWORD *)(v2 + 8 * v3 - 8);
  v6 = operator new(0x20u);
  v6[6] = 0;
  *v6 = 5;
  v7 = operator new(0x18u);
  v7[1] = 0;
  v7[2] = 0;
  *v7 = 0;
  if ( v4 )
  {
    v8 = strlen(v4);
    v9 = v8 + 1;
    if ( v8 == -1 )
    {
      v10 = nullptr;
    }
    else
    {
      v10 = qvector_reserve(v7, nullptr, v9, 1u);
      *v7 = v10;
    }
    v7[1] = v9;
    memmove(v10, v4, v8);
    *(_BYTE *)(*v7 + v8) = 0;
    v2 = a1[43];
    v3 = a1[44];
  }
  *((_QWORD *)v6 + 1) = v7;
  *((_QWORD *)v6 + 2) = v5;
  *(_QWORD *)(v2 + 8 * v3 - 8) = v6;
  return 0;
}
// 100075A30: using guessed type char byte_100075A30;
