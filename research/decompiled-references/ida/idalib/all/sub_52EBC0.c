unsigned __int64 __fastcall sub_52EBC0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  _QWORD *v12; // r13
  void *v13; // rdi
  unsigned __int64 v15; // [rsp+0h] [rbp-80h]
  __int64 v16; // [rsp+8h] [rbp-78h]
  __int64 v17; // [rsp+18h] [rbp-68h] BYREF
  char v18; // [rsp+20h] [rbp-60h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v20; // [rsp+30h] [rbp-50h]
  unsigned __int64 v21; // [rsp+40h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v7 = sub_52EB40(a2, a3);
  v8 = *(_QWORD *)a3;
  v15 = v7;
  v9 = *(_QWORD *)a3;
  v18 = 0;
  ptr = nullptr;
  v17 = -1;
  v20 = 0;
  sub_4108F0(a1, (__int64)&v17, v9);
  while ( 1 )
  {
    v10 = v17;
    v11 = v20;
    v12 = ptr;
    if ( v17 == -1 )
      break;
    if ( *((_QWORD *)&v20 + 1) < (unsigned __int64)(v20 + 1) )
    {
      v16 = v17;
      ptr = (void *)qvector_reserve(&ptr, ptr, v20 + 1, 8);
      v11 = v20;
      v12 = ptr;
      v10 = v16;
    }
    v12[v11] = v10;
    *(_QWORD *)&v20 = v20 + 1;
    sub_410A70(a1, (__int64)&v17, v8);
  }
  if ( 8LL * (_QWORD)v20 )
  {
    do
    {
      sub_6C0400(a1, v8, *v12, a4, v15, *(_DWORD *)(a3 + 28) & 1, 0.0);
      v13 = ptr;
      ++v12;
    }
    while ( v12 != (_QWORD *)((char *)ptr + 8 * (_QWORD)v20) );
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
