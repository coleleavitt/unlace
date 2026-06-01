/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8CEF0
// Address: 0x000000000008CEF0

//----- (000000000008CEF0) ----------------------------------------------------
__int64 __fastcall sub_8CEF0(__int64 a1, __int64 a2)
{
  size_t v2; // r15
  const void *v3; // r12
  void *v4; // r13
  size_t v5; // rbx
  void *v6; // rax
  __int64 result; // rax

  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( (*(_BYTE *)a2 & 1) == 0 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    *(_OWORD *)a1 = *(_OWORD *)a2;
    goto LABEL_10;
  }
  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 >= 0xFFFFFFFFFFFFFFF0LL )
    sub_8BF30();
  v3 = *(const void **)(a2 + 16);
  if ( v2 >= 0x17 )
  {
    v4 = operator new((v2 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    *(_QWORD *)(a1 + 16) = v4;
    *(_QWORD *)a1 = (v2 + 16) & 0xFFFFFFFFFFFFFFF0LL | 1;
    *(_QWORD *)(a1 + 8) = v2;
  }
  else
  {
    *(_BYTE *)a1 = 2 * v2;
    v4 = (void *)(a1 + 1);
    if ( !v2 )
      goto LABEL_9;
  }
  memcpy(v4, v3, v2);
LABEL_9:
  *((_BYTE *)v4 + v2) = 0;
LABEL_10:
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v5 = *(_QWORD *)(a2 + 32);
  if ( v5 )
  {
    v6 = qalloc_or_throw(*(_QWORD *)(a2 + 32));
    *(_QWORD *)(a1 + 24) = v6;
    *(_QWORD *)(a1 + 40) = v5;
    memcpy(v6, *(const void **)(a2 + 24), v5);
    *(_QWORD *)(a1 + 32) = v5;
  }
  result = *(unsigned __int16 *)(a2 + 48);
  *(_WORD *)(a1 + 48) = result;
  return result;
}
