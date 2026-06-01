/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_829B0
// Address: 0x00000000000829B0

//----- (00000000000829B0) ----------------------------------------------------
__int64 __fastcall sub_829B0(__int64 a1, const char *a2, const char *a3, unsigned int a4, char a5, bool *a6)
{
  void *v9; // rbx
  _QWORD *v10; // r13
  __int64 v11; // rbx
  size_t v12; // rax
  size_t v13; // r14
  char *v14; // r15
  size_t v16; // rbx
  char *v17; // rbx
  bool *v18; // rbp
  bool v19; // r15
  size_t v20; // rax
  char v21; // r12
  size_t v22; // r14
  size_t v23; // rbp
  char *v24; // rdi
  char v25; // [rsp+Ch] [rbp-7Ch]
  bool *v26; // [rsp+10h] [rbp-78h]
  char v27; // [rsp+1Ch] [rbp-6Ch]
  __int64 v28; // [rsp+20h] [rbp-68h]
  __int128 dest; // [rsp+30h] [rbp-58h] BYREF
  void *ptr; // [rsp+40h] [rbp-48h]
  unsigned __int64 v32; // [rsp+50h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 504) )
  {
    *(_BYTE *)(a1 + 504) = 0;
    v9 = operator new(0x28u);
    sub_82C10((__int64)v9, *(_QWORD *)(a1 + 456));
    *(_QWORD *)(a1 + 456) = v9;
  }
  if ( !a2 || a4 > 0x7F || !*a2 )
    return set_qerrno(0x26u);
  v25 = a4;
  v26 = a6;
  v10 = *(_QWORD **)(a1 + 456);
  v11 = v10[3];
  dest = 0;
  ptr = nullptr;
  v12 = strlen(a2);
  if ( v12 >= 0xFFFFFFFFFFFFFFF0LL )
    sub_8BF30();
  v13 = v12;
  v27 = a5;
  v28 = v11;
  if ( v12 >= 0x17 )
  {
    v16 = (v12 + 16) & 0xFFFFFFFFFFFFFFF0LL;
    v14 = (char *)operator new(v16);
    ptr = v14;
    *(_QWORD *)&dest = v16 | 1;
    *((_QWORD *)&dest + 1) = v13;
  }
  else
  {
    LOBYTE(dest) = 2 * v12;
    v14 = (char *)&dest + 1;
    if ( !v12 )
      goto LABEL_13;
  }
  memcpy(v14, a2, v13);
LABEL_13:
  v14[v13] = 0;
  v17 = sub_830C0(v10, (unsigned __int8 *)&dest);
  v18 = v26;
  if ( (dest & 1) != 0 )
    operator delete(ptr);
  v19 = v10[3] != v28;
  if ( a3 && *a3 )
  {
    v20 = strlen(a3);
    v21 = v25;
    if ( v20 )
    {
      v22 = v20;
      v23 = v20 + 1;
      if ( *((_QWORD *)v17 + 2) >= v20 + 1 )
      {
        v24 = *(char **)v17;
      }
      else
      {
        v24 = (char *)qvector_reserve((__int64)v17, *(char **)v17, v20 + 1, 1u);
        *(_QWORD *)v17 = v24;
      }
      *((_QWORD *)v17 + 1) = v23;
      memmove(v24, a3, v22);
      *(_BYTE *)(*(_QWORD *)v17 + v22) = 0;
    }
    else
    {
      *((_QWORD *)v17 + 1) = 0;
    }
    v18 = v26;
  }
  else
  {
    *((_QWORD *)v17 + 1) = 0;
    v21 = v25;
  }
  v17[24] = v21;
  v17[25] = v27;
  if ( v18 )
    *v18 = v19;
  return 0;
}
