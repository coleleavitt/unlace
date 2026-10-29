unsigned __int16 *__fastcall sub_1DDF390(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 *result; // rax
  int v12; // eax
  int v13; // r12d
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v16; // r13
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rsi
  unsigned __int64 *v23; // rsi
  unsigned int v24; // eax
  _QWORD *v25; // rsi
  unsigned int v26; // r14d
  char v27; // al
  __int64 v28; // rdx
  unsigned int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // [rsp+0h] [rbp-128h]
  __int64 v33; // [rsp+0h] [rbp-128h]
  unsigned __int16 *v34; // [rsp+0h] [rbp-128h]
  __int64 v35; // [rsp+8h] [rbp-120h]
  unsigned int v36; // [rsp+10h] [rbp-118h]
  void *v37; // [rsp+18h] [rbp-110h]
  __int64 v38; // [rsp+20h] [rbp-108h]
  char v39; // [rsp+2Fh] [rbp-F9h]
  __int64 v40; // [rsp+30h] [rbp-F8h]
  __int64 v41; // [rsp+38h] [rbp-F0h]
  char v42; // [rsp+4Fh] [rbp-D9h] BYREF
  void *v43; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+58h] [rbp-D0h]
  _BYTE v45[64]; // [rsp+60h] [rbp-C8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-80h]
  _BYTE v48[120]; // [rsp+B0h] [rbp-78h] BYREF

  if ( *(_DWORD *)(a2 + 32) != 1 )
  {
    if ( *(_DWORD *)(a2 + 32) <= 1u )
      goto LABEL_13;
    v5 = a2 + 40;
    if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
      v5 = a2 + 48;
    if ( !sub_BFDFF0(*(_QWORD *)(v5 + 8)) )
      goto LABEL_13;
  }
  v6 = (__int64 *)(a2 + 40);
  v7 = (__int64 *)(a2 + 48);
  if ( (*(_WORD *)a2 & 0x1FF) != 0x72 )
    v7 = (__int64 *)(a2 + 40);
  if ( sub_BFDFF0(*v7) || (*(_QWORD *)a2 & 0x200000LL) != 0 )
  {
LABEL_13:
    v12 = sub_C94450(a2);
    v13 = *(_DWORD *)(a1 + 40);
    v14 = *(_QWORD *)(a1 + 48);
    if ( v12 )
    {
      *(_DWORD *)(a1 + 40) = v12;
      *(_QWORD *)(a1 + 48) = 0;
    }
    v15 = (__int64)sub_1DD1AB0(a1, *(_QWORD *)(a2 + 8), a3, a4);
    if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) != 0
      && (v16 = *(_QWORD *)(a2 + 16), v17 = sub_C94450(a2),
                                      (v32 = sub_1DD8310(a1, v17, v16, v18, v19, v20, a3, a4)) != 0) )
    {
      v21 = *(_QWORD *)a2;
      v22 = *(_QWORD *)a1;
      v42 = 0;
      v43 = v45;
      v44 = 0x800000000LL;
      sub_14EE070((__int64)&ptr, v22, 0, (v21 & 0x200000) != 0);
      v23 = (unsigned __int64 *)(a2 + 40);
      if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
        v23 = (unsigned __int64 *)(a2 + 48);
      if ( (unsigned __int8)sub_1DDBD00((__int64 *)a1, v23, *(unsigned int *)(a2 + 32), 1u, (__int64)&v43, &v42, a3, a4) )
      {
        result = (_WORD *)(&dword_0 + 1);
        if ( (_BYTE)v47 )
        {
          sub_190D5E0((__int64)ptr, a3);
          result = (_WORD *)(&dword_0 + 1);
        }
      }
      else
      {
        if ( (_BYTE)v47 )
          sub_190D5E0((__int64)ptr, a3);
        if ( *(_DWORD *)(*(_QWORD *)a1 + 12632LL) || v15 != *(_QWORD *)(a2 + 8) || v32 != *(_QWORD *)(a2 + 16) || v42 )
        {
          v38 = *(_QWORD *)a1;
          v40 = *(_QWORD *)(a2 + 24);
          v37 = v43;
          v36 = v44;
          v39 = *(_BYTE *)(a2 + 3) & 7;
          v41 = *(_QWORD *)a2 >> 16;
          v24 = sub_C94450(a2);
          v25 = (_QWORD *)v32;
          v26 = v24;
          if ( (*(_BYTE *)(v32 + 87) & 0x20) != 0 )
            v25 = *(_QWORD **)(v32 + 184);
          ptr = v48;
          v47 = 0x800000000LL;
          v27 = sub_183E070(v38, v25, v15, (__int64)v37, v36, v24, (__m128i)a3, (__int64)&ptr, 0, 0);
          v28 = 1;
          if ( !v27 )
            v28 = sub_183DF50(
                    *(_QWORD *)a1,
                    v26,
                    v15,
                    v32,
                    (v41 & 8) != 0,
                    (v41 & 0x10) != 0,
                    (__int64)ptr,
                    (unsigned int)v47,
                    (v41 & 0x20) != 0,
                    (v41 & 0x40) != 0,
                    (v41 & 0x80u) != 0LL,
                    v39,
                    v40);
          if ( ptr != v48 )
          {
            v33 = v28;
            free(ptr);
            v28 = v33;
          }
          result = (unsigned __int16 *)v28;
        }
        else
        {
          v35 = *(_QWORD *)a1;
          v29 = sub_C94450(a2);
          sub_1910D40(v35, v29, v32, 1, v30, v31, a3, a4);
          result = (unsigned __int16 *)a2;
        }
      }
      if ( v43 != v45 )
      {
        v34 = result;
        free(v43);
        result = v34;
      }
    }
    else
    {
      result = (_WORD *)(&dword_0 + 1);
    }
    *(_DWORD *)(a1 + 40) = v13;
    *(_QWORD *)(a1 + 48) = v14;
  }
  else
  {
    if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
      v6 = (__int64 *)(a2 + 48);
    return sub_1DDC230((__int64 *)a1, *v6, 0, a3, a4, v8, v9, v10);
  }
  return result;
}
