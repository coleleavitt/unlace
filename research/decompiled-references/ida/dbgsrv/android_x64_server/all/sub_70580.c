/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70580
// Address: 0x0000000000070580

//----- (0000000000070580) ----------------------------------------------------
unsigned __int64 __fastcall sub_70580(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // rdx
  const void *v8; // rsi
  char *v10; // rdi
  unsigned int v11; // r12d
  const void *v12; // rsi
  char *v13; // rdi
  unsigned int v14; // ebp
  void *ptr; // [rsp+8h] [rbp-50h] BYREF
  __int64 v17; // [rsp+10h] [rbp-48h]
  __int64 v18; // [rsp+18h] [rbp-40h]
  unsigned __int64 v19; // [rsp+20h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 168);
  if ( v5 < a3 )
  {
    v8 = *(const void **)(a1 + 160);
    if ( (unsigned __int64)v8 > v5 )
      goto LABEL_16;
    sub_4ABC0((__int64)&ptr, v8, v5 - (_QWORD)v8);
    if ( v17 )
      v10 = (char *)ptr;
    else
      v10 = (char *)s1;
    v11 = qustrlen(v10);
    if ( ptr )
    {
      v17 = 0;
      qfree(ptr);
      ptr = nullptr;
      v18 = 0;
    }
    v12 = *(const void **)(a1 + 168);
    if ( (unsigned __int64)v12 > a3 )
    {
LABEL_16:
      if ( !(_BYTE)under_debugger )
        interr(1833);
      BUG();
    }
    sub_4ABC0((__int64)&ptr, v12, a3 - (_QWORD)v12);
    if ( v17 )
      v13 = (char *)ptr;
    else
      v13 = (char *)s1;
    v14 = qustrlen(v13);
    if ( ptr )
    {
      v17 = 0;
      qfree(ptr);
      ptr = nullptr;
      v18 = 0;
    }
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v11, v14, a4);
    *(_QWORD *)(a1 + 168) = a3;
  }
  return __readfsqword(0x28u);
}
// 158B40: using guessed type __int64 under_debugger;
