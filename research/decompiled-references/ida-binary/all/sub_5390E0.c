_BOOL8 __fastcall sub_5390E0(__int64 a1, __int64 a2, const char *a3, int a4, const char *a5, __int64 a6, double a7)
{
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rbp
  size_t v16; // rax
  size_t v17; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  void *v21; // rdi
  size_t v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 *v25[7]; // [rsp+10h] [rbp-38h] BYREF

  v25[1] = (unsigned __int64 *)__readfsqword(0x28u);
  if ( !a2 || !*(_BYTE *)a2 || *(_BYTE *)a2 == 45 && !*(_BYTE *)(a2 + 1) )
    return (unsigned __int8)sub_538BA0(a1, nullptr, a3, a4, (__int64)a5, a6, a7) != 0;
  v10 = sub_534430((const char *)a2);
  if ( (unsigned __int8)sub_538BA0(a1, (QT::QAction **)v10, a3, a4, v11, v12, a7) )
  {
    if ( v10 && a5 )
    {
      v13 = *(_QWORD *)(v10 + 192);
      v14 = *(_QWORD **)(a1 + 64);
      v15 = (_QWORD *)(a1 + 56);
      v24 = v13;
      if ( !v14 )
        goto LABEL_8;
      do
      {
        while ( 1 )
        {
          v19 = v14[2];
          v20 = v14[3];
          if ( v14[4] < v13 )
            break;
          v15 = v14;
          v14 = (_QWORD *)v14[2];
          if ( !v19 )
            goto LABEL_15;
        }
        v14 = (_QWORD *)v14[3];
      }
      while ( v20 );
LABEL_15:
      if ( (_QWORD *)(a1 + 56) == v15 || v13 < v15[4] )
      {
LABEL_8:
        v25[0] = &v24;
        v15 = sub_534760((_QWORD *)(a1 + 48), v15, (__int64)&unk_5E5D70, v25);
      }
      v16 = strlen(a5);
      v17 = v16;
      if ( v16 )
      {
        v21 = (void *)v15[5];
        v22 = v16 + 1;
        if ( v15[7] < v16 + 1 )
        {
          v23 = qvector_reserve(v15 + 5, v15[5], v22, 1);
          v15[5] = v23;
          v21 = (void *)v23;
        }
        v15[6] = v22;
        memmove(v21, a5, v17);
        *(_BYTE *)(v15[5] + v17) = 0;
      }
      else
      {
        v15[6] = 0;
      }
    }
    return 1;
  }
  return 0;
}
