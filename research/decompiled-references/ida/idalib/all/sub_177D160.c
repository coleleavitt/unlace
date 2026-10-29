__int64 __fastcall sub_177D160(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v7; // r14
  void **p_ptr; // r9
  __int64 *v9; // rbx
  _BYTE *v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rbp
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  void **v17; // rbx
  __int64 v19; // r12
  unsigned int v20; // ebp
  char v21; // al
  __int64 v22; // rax
  void **v23; // [rsp+8h] [rbp-70h]
  unsigned __int64 v24; // [rsp+8h] [rbp-70h]
  _BYTE *v25; // [rsp+10h] [rbp-68h]
  void **v26; // [rsp+10h] [rbp-68h]
  unsigned __int64 v27; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+28h] [rbp-50h]
  _BYTE v30[72]; // [rsp+30h] [rbp-48h] BYREF

  v7 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 8), a3, a7, a4, a5, a6);
  if ( v7 == 1 )
    return v7;
  p_ptr = &ptr;
  v9 = (__int64 *)(a2 + 16);
  v10 = v30;
  v11 = v7 & 0xFFFFFFFFFFFFFFFELL;
  v12 = *(_DWORD *)a2 >> 9;
  ptr = v30;
  v13 = a2 + 16 + 8 * v12;
  v29 = 0x100000000LL;
  if ( a2 + 16 == v13 )
  {
    v17 = (void **)v30;
    if ( *(_QWORD *)(a2 + 8) != v11 )
      goto LABEL_10;
  }
  else
  {
    do
    {
      v14 = *v9;
      if ( *v9 )
      {
        v15 = (unsigned int)v29;
        v16 = (unsigned int)v29 + 1LL;
        if ( v16 > HIDWORD(v29) )
        {
          v27 = v11;
          v25 = v10;
          v23 = p_ptr;
          sub_2237220(p_ptr, v10, v16, 8);
          v15 = (unsigned int)v29;
          v11 = v27;
          v10 = v25;
          p_ptr = v23;
        }
        *((_QWORD *)ptr + v15) = v14;
        LODWORD(v29) = v29 + 1;
      }
      ++v9;
    }
    while ( (__int64 *)v13 != v9 );
    v17 = (void **)ptr;
    if ( *(_QWORD *)(a2 + 8) != v11 )
    {
      if ( (_DWORD)v29 )
      {
        v19 = (unsigned int)v29;
        v26 = p_ptr;
        v24 = v11;
        v20 = *(_DWORD *)(a2 + 4);
        v7 = 1;
        v21 = sub_1C5F970(*a1, ptr, (unsigned int)v29);
        p_ptr = v26;
        if ( !v21 )
        {
          v22 = sub_1C497E0(*a1, v20, v17, v19, v24);
          p_ptr = v26;
          v7 = v22;
        }
        v17 = (void **)ptr;
      }
      goto LABEL_10;
    }
  }
  v7 = a2;
LABEL_10:
  if ( v17 != p_ptr + 2 )
    free(v17);
  return v7;
}
