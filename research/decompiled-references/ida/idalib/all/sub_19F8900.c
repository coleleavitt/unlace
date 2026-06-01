__int64 __fastcall sub_19F8900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  void **p_ptr; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r12d
  unsigned int v24; // r13d
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r13
  unsigned __int64 v35; // rbx
  void *v36; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+18h] [rbp-B0h]
  _BYTE v38[48]; // [rsp+20h] [rbp-A8h] BYREF
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  __int64 v40; // [rsp+58h] [rbp-70h]
  _BYTE v41[104]; // [rsp+60h] [rbp-68h] BYREF

  v7 = *(_QWORD *)(a2 + 8);
  if ( sub_F61140(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6)
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 <= 1
    && (sub_F61140(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, v8, v9, v10, v11)
     || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                     & 0xFFFFFFFFFFFFFFF0LL)
                                         + 16LL)
      - 57 <= 1) )
  {
    return 0;
  }
  if ( (unsigned __int8)sub_19F7FB0(a3, a2, v8, v9, v10, v11) )
    return 0;
  v12 = sub_19F7FB0(v7, a2, v14, v15, v16, v17);
  if ( (_BYTE)v12 )
  {
    return 0;
  }
  else
  {
    v36 = v38;
    v37 = 0x600000000LL;
    sub_19F81D0(a3, (__int64)&v36);
    p_ptr = &ptr;
    ptr = v41;
    v40 = 0x600000000LL;
    sub_19F81D0(v7, (__int64)&ptr);
    v23 = v40;
    v24 = v37;
    if ( (unsigned int)v40 >= (unsigned int)v37 )
    {
      v25 = 0;
      if ( (_DWORD)v40 && (_DWORD)v37 )
      {
        while ( !sub_F61420(
                   *(_QWORD *)(*((_QWORD *)ptr + v25) & 0xFFFFFFFFFFFFFFF0LL),
                   (__int64)p_ptr,
                   v19,
                   v20,
                   v21,
                   v22) )
        {
          if ( sub_F61420(
                 *(_QWORD *)(*((_QWORD *)v36 + v25) & 0xFFFFFFFFFFFFFFF0LL),
                 (__int64)p_ptr,
                 v30,
                 v31,
                 v32,
                 v33) )
          {
            break;
          }
          p_ptr = *((void ***)v36 + v25);
          if ( !(unsigned __int8)sub_19F6D20(*((_QWORD *)ptr + v25), (__int64)p_ptr, v26, v27, v28, v29) )
            break;
          if ( ++v25 >= v24 || v25 >= v23 )
            goto LABEL_22;
        }
      }
      else
      {
LABEL_22:
        if ( v23 <= v25 )
        {
LABEL_27:
          v12 = 1;
        }
        else
        {
          v34 = 8LL * v25;
          v35 = 8 * (v25 + (unsigned __int64)(v23 - 1 - v25) + 1);
          while ( !sub_F61420(
                     *(_QWORD *)(*(_QWORD *)((_BYTE *)ptr + v34) & 0xFFFFFFFFFFFFFFF0LL),
                     (__int64)p_ptr,
                     v19,
                     v20,
                     v21,
                     v22) )
          {
            v34 += 8;
            if ( v35 == v34 )
              goto LABEL_27;
          }
        }
      }
    }
    if ( ptr != v41 )
      free(ptr);
    if ( v36 != v38 )
      free(v36);
  }
  return v12;
}
