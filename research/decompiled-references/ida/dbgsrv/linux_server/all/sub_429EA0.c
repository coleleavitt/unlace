/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429EA0
// Address: 0x0000000000429EA0

//----- (0000000000429EA0) ----------------------------------------------------
unsigned __int64 __fastcall sub_429EA0(__int64 *a1, __int64 a2, __int64 a3)
{
  const char *v5; // rdx
  const char *v6; // rcx
  signed __int64 v7; // r13
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  char *v11; // rsi
  char *v12; // rax
  unsigned __int64 v13; // [rsp+0h] [rbp-70h] BYREF
  void *ptr; // [rsp+8h] [rbp-68h] BYREF
  __int128 v15; // [rsp+10h] [rbp-60h]
  void *v16; // [rsp+28h] [rbp-48h] BYREF
  __int128 v17; // [rsp+30h] [rbp-40h]
  unsigned __int64 v18; // [rsp+40h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  ptr = nullptr;
  v15 = 0;
  v13 = *(_QWORD *)(a3 + 32);
  ptr = sub_481540((__int64)&ptr, nullptr, 2u, 1u);
  *(_QWORD *)&v15 = 2;
  *(_BYTE *)ptr = 63;
  *((_BYTE *)ptr + 1) = 0;
  if ( a3 && a1[22] > 0 && a1[24] )
    sub_428E80(a1[20], (__int64)&ptr, a1 + 22, *(_DWORD *)a3);
  v16 = nullptr;
  v5 = s1;
  v17 = 0;
  if ( (_QWORD)v15 )
    v5 = (const char *)ptr;
  sub_4172B0((__int64)&v16, "Size of %s", v5);
  v6 = s1;
  if ( (_QWORD)v17 )
    v6 = (const char *)v16;
  sub_428780(*(_QWORD *)(a1[20] + 472), &v13, 1u, (__int64)v6, *(_QWORD *)(a3 + 24), -1);
  v7 = v13;
  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 < v13 )
  {
    v11 = *(char **)a2;
    if ( *(_QWORD *)(a2 + 16) < v13 )
    {
      v12 = (char *)sub_481540(a2, v11, v13, 1u);
      *(_QWORD *)a2 = v12;
      v8 = *(_QWORD *)(a2 + 8);
      v11 = v12;
    }
    memset(&v11[v8], 0, v7 - v8);
    *(_QWORD *)(a2 + 8) = v7;
  }
  else if ( v13 != v8 )
  {
    *(_QWORD *)(a2 + 8) = v13;
  }
  sub_47F740(*(_QWORD *)(a1[20] + 472), *(_QWORD *)(a3 + 24) + *(_QWORD *)(a1[20] + 480), 0);
  sub_424D70(a1[20], *(_BYTE **)a2, v7, 0, v9);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    j__free(v16);
  }
  if ( ptr )
  {
    *(_QWORD *)&v15 = 0;
    j__free(ptr);
  }
  return v18 - __readfsqword(0x28u);
}
// 42A003: variable 'v9' is possibly undefined
