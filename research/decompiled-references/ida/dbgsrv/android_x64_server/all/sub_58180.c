/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58180
// Address: 0x0000000000058180

//----- (0000000000058180) ----------------------------------------------------
__int64 __fastcall sub_58180(__int64 *a1, __int64 a2, unsigned __int32 *a3)
{
  unsigned int *v4; // rax
  unsigned __int64 v5; // rax
  char *v6; // r13
  unsigned __int32 v7; // ecx
  unsigned __int64 v8; // rbx
  char v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbp
  _BYTE *v12; // rax
  unsigned int v14; // [rsp+Ch] [rbp-5Ch]
  void *ptr[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v16; // [rsp+20h] [rbp-48h]
  unsigned __int64 v17; // [rsp+30h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  v4 = sub_57980((__int64)a1, 1, ".gnu_debuglink");
  if ( !v4 )
    return 0;
  *(_OWORD *)ptr = 0;
  v16 = 0;
  v5 = sub_52920(a1, (__int64)ptr, (__int64)v4);
  LOBYTE(v5) = ptr[1] > &byte_4;
  v14 = v5;
  if ( ptr[1] >= &byte_5 )
  {
    if ( a3 )
    {
      v6 = (char *)ptr[1] - 4;
      v7 = _byteswap_ulong(*(_DWORD *)((char *)ptr[0] + (unsigned __int64)ptr[1] - 4));
      if ( *(_BYTE *)(a1[20] + 509) != 2 )
        v7 = *(_DWORD *)((char *)ptr[0] + (unsigned __int64)ptr[1] - 4);
      *a3 = v7;
      if ( !a2 )
        goto LABEL_19;
      goto LABEL_7;
    }
    v6 = (char *)ptr[1] - 4;
    if ( a2 )
    {
LABEL_7:
      if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)v6 )
        *(_QWORD *)a2 = qvector_reserve(a2, *(char **)a2, (unsigned __int64)v6, 1u);
      v8 = 0;
      do
      {
        v9 = *((_BYTE *)ptr[0] + v8);
        if ( !v9 )
          break;
        v10 = *(_QWORD *)(a2 + 8);
        v11 = v10 - 1;
        if ( !v10 )
          v11 = 0;
        v12 = *(_BYTE **)a2;
        if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v11 + 2) )
        {
          v12 = qvector_reserve(a2, *(char **)a2, v11 + 2, 1u);
          *(_QWORD *)a2 = v12;
        }
        *(_QWORD *)(a2 + 8) = v11 + 2;
        v12[v11] = v9;
        *(_BYTE *)(*(_QWORD *)a2 + v11 + 1) = 0;
        ++v8;
      }
      while ( v8 < (unsigned __int64)v6 );
    }
  }
LABEL_19:
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v16 = 0;
  }
  return v14;
}
// 4: using guessed type char;
// 5: using guessed type char;
