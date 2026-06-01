unsigned __int64 __fastcall sub_1F98540(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 *a8,
        __int64 a9)
{
  __int64 v10; // rbx
  __int64 *v11; // r13
  __int64 v12; // r15
  __int64 *v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 result; // rax
  _QWORD *i; // r12
  __int64 v18; // rcx
  __int64 v19; // r15
  unsigned __int64 v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-40h]

  v10 = a9;
  v11 = a8;
  v12 = sub_A4F6D0((__int64)&a7);
  v13 = &v11[v10];
  sub_1F85840(a1[1], *a1, v12, (_QWORD *)a1[2], v14, v15);
  result = sub_9B9C90(a1[2], (unsigned int)v10);
  for ( i = (_QWORD *)*a1; v13 != v11; ++v11 )
  {
    while ( 1 )
    {
      v28 = *v11;
      v30 = a1[2];
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48 )
        break;
      ++v11;
      sub_9B9C90(v30, (unsigned int)v28);
      result = sub_A72040(i, v12);
      v12 = *(_QWORD *)(result + 32);
      if ( v13 == v11 )
        return result;
    }
    v18 = *(unsigned int *)(v30 + 8);
    v19 = (v28 >> 2) & 1;
    if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(v30 + 12) )
    {
      v31 = a1[2];
      sub_2237220(v31, v30 + 16, v18 + 1, 8);
      v30 = v31;
      v18 = *(unsigned int *)(v31 + 8);
    }
    v20 = v28 & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(*(_QWORD *)v30 + 8 * v18) = v19;
    ++*(_DWORD *)(v30 + 8);
    v21 = a1[2];
    v22 = a1[1];
    if ( (*(_BYTE *)(v20 + 28) & 0x7Fu) - 59 > 2 )
    {
      v29 = sub_1F92240(v22, v20);
      result = sub_9B9C90(v21, v29);
      v12 = *(_QWORD *)(v20 + 48);
    }
    else
    {
      v23 = sub_1F92240(v22, v20);
      sub_9B9C90(v21, v23);
      result = sub_A7A9D0((__int64)i, v20, v24, v25, v26, v27);
      v12 = result;
    }
  }
  return result;
}
