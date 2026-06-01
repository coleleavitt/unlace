__int64 __fastcall sub_3DA9C0(
        unsigned __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 *v12; // rdi
  __int64 *v14; // r14
  __int64 *v15; // rbx
  __int64 *v17; // r14
  void *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rbx
  char v23; // dl
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rax
  int v27; // ebp
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rax
  void *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // ebp
  __int64 v38; // rdi
  int v39; // r12d
  int encoding_bpu; // eax
  int v41; // edx
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  void *ptr; // [rsp+18h] [rbp-58h] BYREF
  __int128 v48; // [rsp+20h] [rbp-50h]
  unsigned __int64 v49; // [rsp+30h] [rbp-40h]

  v12 = *(__int64 **)a6;
  v49 = __readfsqword(0x28u);
  sub_3D9F40(v12, a1, a2, a3, a4, a5, *(_QWORD ***)(a6 + 8));
  v14 = *(__int64 **)(a6 + 16);
  if ( v14 && a2 == 65 && a5 == 4 )
  {
    if ( a3 != 16 )
      goto LABEL_5;
    v19 = v14[1];
    v20 = *v14;
    v21 = v19 + 1;
    if ( v14[2] < (unsigned __int64)(v19 + 1) )
    {
      v44 = qvector_reserve(*(_QWORD *)(a6 + 16), v20, v19 + 1, 16);
      v19 = v14[1];
      *v14 = v44;
      v20 = v44;
      v21 = v19 + 1;
    }
    v14[1] = v21;
    v22 = v20 + 16 * v19;
    *(_QWORD *)v22 = a1;
    v23 = is_mapped(a1);
    v24 = -1;
    if ( !v23 )
    {
LABEL_20:
      *(_DWORD *)(v22 + 8) = v24;
      return 0;
    }
    v37 = *(_DWORD *)a4 - 1;
    v38 = HIBYTE(v37);
    if ( (unsigned __int8)(*a4 - 1) > 7u )
    {
      encoding_bpu = get_encoding_bpu(v38);
      if ( encoding_bpu == 2 )
        goto LABEL_43;
      v39 = 0;
    }
    else
    {
      v39 = byte_23AD958[(unsigned __int8)(*a4 - 1)];
      encoding_bpu = get_encoding_bpu(v38);
      if ( encoding_bpu == 2 )
      {
        v41 = 13;
        if ( (_BYTE)v39 == 12 )
        {
LABEL_32:
          v42 = v37;
          LOBYTE(v42) = 0;
          v24 = v41 | v42;
          goto LABEL_20;
        }
        if ( (unsigned __int8)v39 > 0xCu )
          goto LABEL_42;
        v41 = 9;
        if ( (_BYTE)v39 == 8 )
          goto LABEL_32;
        if ( (unsigned __int8)v39 > 8u || (v39 & 0xFD) != 0 )
        {
LABEL_42:
          v41 = (unsigned __int8)v39;
          goto LABEL_32;
        }
LABEL_43:
        v41 = 1;
        goto LABEL_32;
      }
    }
    v41 = 2;
    if ( (unsigned __int8)v39 >= 2u )
      v41 = v39;
    if ( encoding_bpu != 4 )
      v41 = (unsigned __int8)v39;
    goto LABEL_32;
  }
  v17 = *(__int64 **)(a6 + 24);
  if ( !v17 || a2 != 83 || a3 > 1 )
  {
LABEL_5:
    v15 = *(__int64 **)(a6 + 32);
    if ( v15 && a5 == 4 && a2 == 65 && a3 == 20 )
    {
      v25 = *v15;
      v26 = v15[1];
      v27 = *(_DWORD *)a4 - 1;
      v28 = v26 + 1;
      if ( v15[2] < (unsigned __int64)(v26 + 1) )
      {
        v43 = qvector_reserve(v15, v25, v28, 16);
        *v15 = v43;
        v25 = v43;
        v26 = v15[1];
        v28 = v26 + 1;
      }
      v15[1] = v28;
      v29 = 16 * v26 + v25;
      *(_QWORD *)v29 = a1;
      *(_DWORD *)(v29 + 8) = v27 | 0xFF000000;
    }
    return 0;
  }
  if ( (unsigned __int8)is_mapped(a1) )
  {
    v48 = 0;
    ptr = nullptr;
    if ( (unsigned __int8)sub_67FDF0(&ptr, a4, a5, 1) )
    {
      v30 = v17[1];
      v31 = *v17;
      if ( v17[2] < (unsigned __int64)(v30 + 1) )
      {
        v45 = qvector_reserve(v17, v31, v30 + 1, 40);
        *v17 = v45;
        v30 = v17[1];
        v31 = v45;
      }
      v32 = v31 + 40 * v30;
      *(_QWORD *)v32 = 0;
      v33 = ptr;
      *(_OWORD *)(v32 + 8) = 0;
      ++v17[1];
      v18 = *(void **)v32;
      *(_QWORD *)v32 = v33;
      v34 = v48;
      v35 = *(_QWORD *)(v32 + 16);
      *(_BYTE *)(v32 + 32) = a3;
      *(_QWORD *)(v32 + 8) = v34;
      v36 = *((_QWORD *)&v48 + 1);
      *(_BYTE *)(v32 + 32) &= 1u;
      *(_QWORD *)(v32 + 16) = v36;
      *(_QWORD *)(v32 + 24) = a1;
      ptr = v18;
      *((_QWORD *)&v48 + 1) = v35;
    }
    else
    {
      v18 = ptr;
    }
    if ( v18 )
    {
      *(_QWORD *)&v48 = 0;
      qfree(v18);
    }
  }
  return 0;
}
