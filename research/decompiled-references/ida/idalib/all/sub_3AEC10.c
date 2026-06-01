__int64 __fastcall sub_3AEC10(__int64 a1, unsigned __int8 **a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int8 *v9; // rax
  const char *v10; // rax
  char *v11; // r14
  __int64 v12; // rax
  int v13; // r8d
  int v14; // r9d
  unsigned __int8 v16; // dl
  char v17; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( a4 == 5 )
  {
    v7 = (unsigned int)unpack_dd(a2);
  }
  else
  {
    v6 = *(_QWORD *)(qword_2CCB598 + 1576);
    v7 = *(_QWORD *)(v6 + 264);
    *(_QWORD *)(v6 + 264) = v7 + 1;
  }
  *(_QWORD *)(a1 + 88) = v7;
  v8 = sub_3AA670(a1 + 32, &v17, (__int64)a2, a3);
  if ( !*(_DWORD *)(a1 + 44) )
    *(_QWORD *)(a1 + 56) = v8;
  if ( v17 < 0 )
    goto LABEL_14;
  v9 = *a2;
  if ( *a2 < a2[1] )
  {
    v16 = *v9;
    *a2 = v9 + 1;
    *(_DWORD *)(a1 + 64) = v16;
    if ( v16 == 4 )
      goto LABEL_9;
  }
  else
  {
    *(_DWORD *)(a1 + 64) = 0;
  }
  *(_DWORD *)(a1 + 80) = unpack_dd(a2);
LABEL_9:
  *(_DWORD *)(a1 + 72) = unpack_dd(a2);
  *(_DWORD *)(a1 + 68) = unpack_dd(a2);
  v10 = (const char *)unpack_ds(a2, a2[1], 1);
  v11 = (char *)v10;
  if ( v10 )
  {
    sub_3AEB40(a1, v10);
    qfree(v11);
    if ( *(_QWORD *)(a1 + 16) > 1u )
    {
      if ( a4 <= 2 )
        return v8;
      v12 = unpack_ds(a2, a2[1], 1);
      if ( v12 )
        callui(1167, a1, v12, (int)&callui, v13, v14);
    }
  }
LABEL_14:
  if ( a4 > 3 )
  {
    *(_DWORD *)(a1 + 48) = unpack_dd(a2) - 1;
    *(_DWORD *)(a1 + 52) = unpack_dd(a2) - 1;
  }
  return v8;
}
