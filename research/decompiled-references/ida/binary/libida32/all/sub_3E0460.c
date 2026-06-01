unsigned __int64 __fastcall sub_3E0460(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  unsigned int *v11; // rbp
  unsigned __int64 v12; // r14
  unsigned int v13; // ebx
  unsigned int v14; // r13d
  unsigned __int64 v15; // rax
  unsigned __int8 v16; // al
  size_t v18; // rbp
  unsigned int v19; // eax
  unsigned int v20; // r14d
  unsigned int *v21; // rbx
  unsigned int v22; // r13d
  unsigned int v23; // r15d
  unsigned int *v24; // rbp
  __int64 v25; // rdx
  int v26; // [rsp-8h] [rbp-88h]
  void *v27; // [rsp+0h] [rbp-80h]
  void *ptr; // [rsp+8h] [rbp-78h]
  int v29; // [rsp+10h] [rbp-70h]
  unsigned int v30; // [rsp+14h] [rbp-6Ch]
  int v31; // [rsp+18h] [rbp-68h]
  __int64 v32; // [rsp+20h] [rbp-60h] BYREF
  void *src; // [rsp+28h] [rbp-58h] BYREF
  __int128 v34; // [rsp+30h] [rbp-50h]
  unsigned __int64 v35; // [rsp+40h] [rbp-40h]
  int v36; // [rsp+48h] [rbp-38h]
  int v37; // [rsp+50h] [rbp-30h]
  int v38; // [rsp+58h] [rbp-28h]
  int v39; // [rsp+60h] [rbp-20h]
  __int64 v40; // [rsp+68h] [rbp-18h]

  v35 = __readfsqword(0x28u);
  v29 = a3;
  src = nullptr;
  v34 = 0;
  v5 = switch_dbctx(*(int *)(a2 + 8));
  sub_3DF5C0(a2, v5, (__int64 *)&src, a3);
  ptr = nullptr;
  v27 = *(void **)(v5 + 1480);
  if ( (_QWORD)v34 )
  {
    v18 = 12 * v34;
    ptr = (void *)qalloc_or_throw(12 * v34, v5, v6, v7, v8, v9);
    memcpy(ptr, src, v18);
    if ( *(_BYTE *)(a1 + 72) != 100 )
      goto LABEL_3;
  }
  else if ( *(_BYTE *)(a1 + 72) != 100 )
  {
    goto LABEL_3;
  }
  v19 = *(_DWORD *)(a2 + 12);
  v32 = 0;
  v20 = *(_DWORD *)(a1 + 12);
  v30 = v19;
  getinf_buf(26, &v32, 8);
  v21 = (unsigned int *)src;
  v22 = v32;
  v23 = HIDWORD(v32);
  v24 = (unsigned int *)((char *)src + 12 * v34);
  if ( src != v24 )
  {
    do
    {
      v25 = *v21;
      if ( (unsigned int)v25 >= v22 && (unsigned int)v25 < v23 )
        (*(void (__fastcall **)(_QWORD, unsigned int *, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 24LL))(
          *(_QWORD *)(a1 + 32),
          v21,
          v25,
          v30,
          v20,
          0);
      v21 += 3;
    }
    while ( v24 != v21 );
  }
LABEL_3:
  v10 = switch_dbctx(*(int *)(a1 + 8));
  if ( (_QWORD)v34 )
  {
    v11 = (unsigned int *)ptr;
    v12 = 0;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 != -1 )
        {
          v14 = *((_DWORD *)src + 3 * v12);
          sub_3FDEE0(*(_QWORD *)(v10 + 1480));
          LOWORD(v15) = sub_3B9AA0((__int64)v27, v13, 4);
          if ( (v15 & 0x600) == 0x200 )
          {
            v13 = sub_3BD5D0((__int64)v27, v13);
            v15 = sub_3B9AA0((__int64)v27, v13, 4);
          }
          if ( (v15 & 0xC000) == 0 )
            break;
        }
        ++v12;
        v11 += 3;
        if ( v12 >= (unsigned __int64)v34 )
          goto LABEL_11;
      }
      sub_4C2750(
        (int)v27,
        v26,
        v27,
        (__int64)ptr,
        v29,
        v31,
        v32,
        (int)src,
        v34,
        SDWORD2(v34),
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      v16 = sub_4CA060(*(_QWORD *)(v10 + 1480), v14);
      sub_4B7AB0(v27, v13, v16);
      ++v12;
      v11 += 3;
    }
    while ( v12 < (unsigned __int64)v34 );
  }
LABEL_11:
  if ( ptr )
    qfree(ptr);
  if ( src )
  {
    *(_QWORD *)&v34 = 0;
    qfree(src);
  }
  return v35 - __readfsqword(0x28u);
}

