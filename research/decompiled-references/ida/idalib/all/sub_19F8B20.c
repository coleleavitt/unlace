__int64 __fastcall sub_19F8B20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 *v8; // r12
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned int v14; // r12d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  void **p_ptr; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // r13
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+8h] [rbp-60h]
  _BYTE v44[88]; // [rsp+10h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a2 + 8);
  v8 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  v9 = sub_F61140(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
  v13 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( v9
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1
    || sub_F61140(v13, a2, a3 & 0xFFFFFFFFFFFFFFF0LL, v10, v11, v12) )
  {
    return 0;
  }
  v20 = *v8;
  v21 = *(unsigned __int8 *)(*v8 + 16);
  v22 = *v8;
  if ( v21 == 57 || v21 == 58 )
  {
    if ( sub_F61140(v22, a2, v16, v17, v18, v19) )
      goto LABEL_11;
LABEL_10:
    if ( *(_DWORD *)(v20 + 20) == 1 )
    {
LABEL_11:
      v7 = *(_QWORD *)(v20 + 32);
      goto LABEL_12;
    }
    return 0;
  }
  v20 = sub_19F5590(v22, a2, v16, v17);
  if ( !sub_F61140(*v8, a2, v23, v24, v25, v26) )
  {
    if ( !v20 )
      return 0;
    goto LABEL_10;
  }
  if ( v20 )
    goto LABEL_11;
LABEL_12:
  v14 = sub_19F7FB0(a3, a2, v27, v28, v29, v30);
  if ( (_BYTE)v14 )
    return 0;
  p_ptr = &ptr;
  ptr = v44;
  v43 = 0x600000000LL;
  sub_19F81D0(a3, (__int64)&ptr);
  if ( (_DWORD)v43 )
  {
    v36 = 0;
    v37 = 8LL * (unsigned int)(v43 - 1) + 8;
    while ( !sub_F61420(
               *(_QWORD *)(*(_QWORD *)((_BYTE *)ptr + v36) & 0xFFFFFFFFFFFFFFF0LL),
               (__int64)p_ptr,
               v32,
               v33,
               v34,
               v35) )
    {
      p_ptr = *(void ***)((char *)ptr + v36);
      if ( !(unsigned __int8)sub_19F6D20(v7, (__int64)p_ptr, v38, v39, v40, v41) )
        break;
      v36 += 8;
      if ( v37 == v36 )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    v14 = 1;
  }
  if ( ptr != v44 )
    free(ptr);
  return v14;
}
