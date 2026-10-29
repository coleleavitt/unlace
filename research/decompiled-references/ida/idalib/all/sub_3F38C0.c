__int64 __fastcall sub_3F38C0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v8; // rbp
  __int64 v9; // rdx
  void *v10; // rdi
  char *v11; // r14
  __int64 v12; // rdx
  char *v13; // r12
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v19; // [rsp+0h] [rbp-60h] BYREF
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v21; // [rsp+10h] [rbp-50h]
  unsigned __int64 v22; // [rsp+20h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v21 = 0;
  ptr = nullptr;
  v19 = ea2node(a3);
  v8 = sub_7BEED0(&v19, a2, &ptr, 4, a4, a5);
  if ( v8 <= 0 )
  {
LABEL_9:
    v10 = ptr;
    goto LABEL_10;
  }
  v9 = v21;
  if ( a1[2] < (unsigned __int64)v21 )
  {
    *a1 = qvector_reserve(a1, *a1, v21, 8);
    v9 = v21;
  }
  v10 = ptr;
  v11 = (char *)ptr + 4 * v9;
  if ( v11 != ptr )
  {
    v12 = a1[1];
    v13 = (char *)ptr;
    do
    {
      v14 = *(unsigned int *)v13;
      v15 = a1[2];
      v16 = *a1;
      v19 = v14;
      if ( v15 < v12 + 1 )
      {
        v17 = qvector_reserve(a1, v16, v12 + 1, 8);
        *a1 = v17;
        v12 = a1[1];
        v16 = v17;
      }
      *(_QWORD *)(v16 + 8 * v12) = v14;
      v13 += 4;
      v12 = a1[1] + 1;
      a1[1] = v12;
    }
    while ( v11 != v13 );
    goto LABEL_9;
  }
LABEL_10:
  if ( v10 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v10);
  }
  return v8;
}
