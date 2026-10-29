/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83490
// Address: 0x0000000000083490

//----- (0000000000083490) ----------------------------------------------------
__int64 __fastcall sub_83490(__int64 a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // rbx
  char *v4; // r13
  size_t v5; // rbp
  char *v6; // rbx
  __int64 *v7; // rax
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // rcx
  __int128 dest; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h]
  unsigned __int64 v14; // [rsp+20h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  dest = 0;
  ptr = nullptr;
  v2 = strlen(a2);
  if ( v2 >= 0xFFFFFFFFFFFFFFF0LL )
    sub_8BF30();
  v3 = v2;
  if ( v2 >= 0x17 )
  {
    v5 = (v2 + 16) & 0xFFFFFFFFFFFFFFF0LL;
    v4 = (char *)operator new(v5);
    ptr = v4;
    *(_QWORD *)&dest = v5 | 1;
    *((_QWORD *)&dest + 1) = v3;
    goto LABEL_6;
  }
  LOBYTE(dest) = 2 * v2;
  v4 = (char *)&dest + 1;
  if ( v2 )
LABEL_6:
    memcpy(v4, a2, v3);
  v4[v3] = 0;
  v6 = sub_83600((_QWORD *)(a1 + 464), (unsigned __int8 *)&dest);
  if ( (dest & 1) != 0 )
    operator delete(ptr);
  v7 = sub_827A0(a1, a2);
  if ( v7 )
  {
    sub_83990((__int64)v6, (__int64)v7);
  }
  else
  {
    v8 = *((_QWORD *)v6 + 1);
    if ( *((_QWORD *)v6 + 2) >= (unsigned __int64)(v8 + 1) )
    {
      v9 = *(char **)v6;
    }
    else
    {
      v9 = (char *)qvector_reserve((__int64)v6, *(char **)v6, v8 + 1, 0x20u);
      *(_QWORD *)v6 = v9;
      v8 = *((_QWORD *)v6 + 1);
    }
    v10 = 32 * v8;
    *(_OWORD *)&v9[v10 + 10] = 0;
    *(_OWORD *)&v9[v10] = 0;
    ++*((_QWORD *)v6 + 1);
  }
  return 0;
}
