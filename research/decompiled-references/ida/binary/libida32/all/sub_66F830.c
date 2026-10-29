__int64 __fastcall sub_66F830(__int64 a1, __int64 *a2, unsigned int *a3, __int64 a4)
{
  int v6; // r8d
  _BYTE *v7; // rax
  _BYTE *v8; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned __int64 v12; // rax
  unsigned int v13; // r13d
  void *v14; // rdi
  __int64 v16; // rdx
  unsigned int v17; // r13d
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  void *v22; // [rsp+0h] [rbp-60h] BYREF
  __int128 v23; // [rsp+8h] [rbp-58h]
  void *ptr; // [rsp+20h] [rbp-40h] BYREF
  __int128 v25; // [rsp+28h] [rbp-38h]
  unsigned __int64 v26; // [rsp+38h] [rbp-28h]

  v6 = a3[2];
  v26 = __readfsqword(0x28u);
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
  v10 = (int)a3[1];
  v11 = *a3;
  v23 = 0;
  v22 = nullptr;
  ptr = nullptr;
  v25 = 0;
  sub_358010(a1, (__int64 *)&v22, v11, v10, v6, nullptr, 0, (__int64 *)&ptr, 0);
  v12 = *(int *)(a4 + 24);
  v13 = 0;
  if ( (unsigned __int64)v25 >= v12 )
  {
    v16 = a2[1];
    v17 = *a3;
    v18 = *(_QWORD *)(a3 + 1);
    v19 = *a2;
    if ( a2[2] < (unsigned __int64)(v16 + 1) )
    {
      v21 = qvector_reserve(a2, v19, v16 + 1, 12);
      *a2 = v21;
      v16 = a2[1];
      v19 = v21;
    }
    v20 = v19 + 12 * v16;
    *(_DWORD *)v20 = v17;
    *(_QWORD *)(v20 + 4) = v18;
    ++a2[1];
    show_auto(*a3, 0);
    v14 = ptr;
    v13 = 1;
    if ( !ptr )
      goto LABEL_9;
  }
  else
  {
    v14 = ptr;
    if ( !ptr )
      goto LABEL_9;
  }
  *(_QWORD *)&v25 = 0;
  qfree(v14);
LABEL_9:
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  return v13;
}

