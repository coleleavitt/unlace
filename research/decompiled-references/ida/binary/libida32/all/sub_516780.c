unsigned __int64 __fastcall sub_516780(_QWORD *a1, __int64 a2, unsigned int *a3, unsigned int a4)
{
  unsigned int v7; // eax
  unsigned int v8; // ebp
  unsigned int v9; // edx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  unsigned int *v12; // r13
  void *v13; // rdi
  unsigned int v15; // [rsp+0h] [rbp-78h]
  unsigned int v16; // [rsp+4h] [rbp-74h]
  unsigned int v17; // [rsp+18h] [rbp-60h] BYREF
  char v18; // [rsp+1Ch] [rbp-5Ch]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v7 = sub_516700(a2, (__int64)a3);
  v8 = *a3;
  v15 = v7;
  v9 = *a3;
  v17 = -1;
  ptr = nullptr;
  v18 = 0;
  v20 = 0;
  sub_3FD660(a1, (__int64)&v17, v9);
  while ( 1 )
  {
    v10 = v17;
    v11 = v20;
    v12 = (unsigned int *)ptr;
    if ( v17 == -1 )
      break;
    if ( *((_QWORD *)&v20 + 1) < (unsigned __int64)(v20 + 1) )
    {
      v16 = v17;
      ptr = (void *)qvector_reserve(&ptr, ptr, v20 + 1, 4);
      v11 = v20;
      v12 = (unsigned int *)ptr;
      v10 = v16;
    }
    v12[v11] = v10;
    *(_QWORD *)&v20 = v20 + 1;
    sub_3FD7C0(a1, &v17, v8);
  }
  if ( 4LL * (_QWORD)v20 )
  {
    do
    {
      sub_69F8C0(a1, v8, *v12, a4, v15, a3[5] & 1, 0.0);
      v13 = ptr;
      ++v12;
    }
    while ( v12 != (unsigned int *)((char *)ptr + 4 * (_QWORD)v20) );
  }
  else
  {
    v13 = ptr;
  }
  if ( v13 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v13);
  }
  return v21 - __readfsqword(0x28u);
}

