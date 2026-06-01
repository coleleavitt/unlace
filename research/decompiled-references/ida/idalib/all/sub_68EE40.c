__int64 __fastcall sub_68EE40(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  signed int v6; // r8d
  _BYTE *v7; // rax
  _BYTE *v8; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned int v12; // r13d
  void *v13; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r14
  __int64 v18; // rsi
  unsigned __int64 *v19; // rsi
  __int64 v20; // rax
  void *v21; // [rsp+0h] [rbp-60h] BYREF
  __int128 v22; // [rsp+8h] [rbp-58h]
  void *ptr; // [rsp+20h] [rbp-40h] BYREF
  __int128 v24; // [rsp+28h] [rbp-38h]
  unsigned __int64 v25; // [rsp+38h] [rbp-28h]

  v6 = *((_DWORD *)a3 + 3);
  v25 = __readfsqword(0x28u);
  v7 = *(_BYTE **)a4;
  v8 = (_BYTE *)(*(_QWORD *)a4 + *(_QWORD *)(a4 + 8));
  if ( v8 == *(_BYTE **)a4 )
    return 0;
  while ( *v7 != (_BYTE)v6 )
  {
    if ( v8 == ++v7 )
      return 0;
  }
  if ( v8 == v7 )
    return 0;
  v10 = *((int *)a3 + 2);
  v11 = *a3;
  v22 = 0;
  v21 = nullptr;
  ptr = nullptr;
  v24 = 0;
  sub_35B410(a1, (__int64 *)&v21, v11, v10, v6, nullptr, 0, (__int64 *)&ptr, nullptr);
  v12 = 0;
  if ( (unsigned __int64)v24 >= *(_QWORD *)(a4 + 24) )
  {
    v15 = a2[1];
    v16 = *a3;
    v17 = a3[1];
    v18 = *a2;
    if ( a2[2] < (unsigned __int64)(v15 + 1) )
    {
      v20 = qvector_reserve(a2, v18, v15 + 1, 16);
      *a2 = v20;
      v18 = v20;
      v15 = a2[1];
    }
    v19 = (unsigned __int64 *)(16 * v15 + v18);
    *v19 = v16;
    v19[1] = v17;
    ++a2[1];
    show_auto(*a3, 0);
    v13 = ptr;
    v12 = 1;
    if ( !ptr )
      goto LABEL_9;
  }
  else
  {
    v13 = ptr;
    if ( !ptr )
      goto LABEL_9;
  }
  *(_QWORD *)&v24 = 0;
  qfree(v13);
LABEL_9:
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  return v12;
}
