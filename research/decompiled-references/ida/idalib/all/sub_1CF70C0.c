__int64 __fastcall sub_1CF70C0(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  int v12; // eax
  int v13; // r12d
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned __int16 **v18; // rsi
  unsigned int v19; // eax
  _QWORD *v20; // rsi
  unsigned int v21; // r14d
  char v22; // al
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // [rsp+0h] [rbp-128h]
  __int64 v28; // [rsp+0h] [rbp-128h]
  __int64 v29; // [rsp+0h] [rbp-128h]
  __int64 v30; // [rsp+8h] [rbp-120h]
  unsigned int v31; // [rsp+10h] [rbp-118h]
  void *v32; // [rsp+18h] [rbp-110h]
  __int64 v33; // [rsp+20h] [rbp-108h]
  char v34; // [rsp+2Fh] [rbp-F9h]
  __int64 v35; // [rsp+30h] [rbp-F8h]
  __int64 v36; // [rsp+38h] [rbp-F0h]
  char v37; // [rsp+4Fh] [rbp-D9h] BYREF
  void *v38; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v39; // [rsp+58h] [rbp-D0h]
  _BYTE v40[64]; // [rsp+60h] [rbp-C8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-80h]
  _BYTE v43[120]; // [rsp+B0h] [rbp-78h] BYREF

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
    v13 = *(_DWORD *)(a1 + 32);
    v14 = *(_QWORD *)(a1 + 40);
    if ( v12 )
    {
      *(_DWORD *)(a1 + 32) = v12;
      *(_QWORD *)(a1 + 40) = 0;
    }
    v15 = sub_1CF6840((unsigned int *)a1, *(_QWORD *)(a2 + 8), a3, a4);
    if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (v27 = sub_1CB9120(a1, *(_QWORD *)(a2 + 16))) != 0 )
    {
      v16 = *(_QWORD *)a2;
      v17 = *(_QWORD *)a1;
      v37 = 0;
      v38 = v40;
      v39 = 0x800000000LL;
      sub_14EE070((__int64)&ptr, v17, 0, (v16 & 0x200000) != 0);
      v18 = (unsigned __int16 **)(a2 + 40);
      if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
        v18 = (unsigned __int16 **)(a2 + 48);
      if ( (unsigned __int8)sub_1CE9250((__int64 *)a1, v18, *(unsigned int *)(a2 + 32), 1u, (__int64)&v38, &v37, a3, a4) )
      {
        result = 1;
        if ( (_BYTE)v42 )
        {
          sub_190D5E0((__int64)ptr, a3);
          result = 1;
        }
      }
      else
      {
        if ( (_BYTE)v42 )
          sub_190D5E0((__int64)ptr, a3);
        if ( *(_DWORD *)(*(_QWORD *)a1 + 12632LL) || v15 != *(_QWORD *)(a2 + 8) || v27 != *(_QWORD *)(a2 + 16) || v37 )
        {
          v33 = *(_QWORD *)a1;
          v35 = *(_QWORD *)(a2 + 24);
          v32 = v38;
          v31 = v39;
          v34 = *(_BYTE *)(a2 + 3) & 7;
          v36 = *(_QWORD *)a2 >> 16;
          v19 = sub_C94450(a2);
          v20 = (_QWORD *)v27;
          v21 = v19;
          if ( (*(_BYTE *)(v27 + 87) & 0x20) != 0 )
            v20 = *(_QWORD **)(v27 + 184);
          ptr = v43;
          v42 = 0x800000000LL;
          v22 = sub_183E070(v33, v20, v15, (__int64)v32, v31, v19, (__m128i)a3, (__int64)&ptr, 0, 0);
          v23 = 1;
          if ( !v22 )
            v23 = sub_183DF50(
                    *(_QWORD *)a1,
                    v21,
                    v15,
                    v27,
                    (v36 & 8) != 0,
                    (v36 & 0x10) != 0,
                    (__int64)ptr,
                    (unsigned int)v42,
                    (v36 & 0x20) != 0,
                    (v36 & 0x40) != 0,
                    (v36 & 0x80u) != 0LL,
                    v34,
                    v35);
          if ( ptr != v43 )
          {
            v28 = v23;
            free(ptr);
            v23 = v28;
          }
          result = v23;
        }
        else
        {
          v30 = *(_QWORD *)a1;
          v24 = sub_C94450(a2);
          sub_1910D40(v30, v24, v27, 1, v25, v26, a3, a4);
          result = a2;
        }
      }
      if ( v38 != v40 )
      {
        v29 = result;
        free(v38);
        result = v29;
      }
    }
    else
    {
      result = 1;
    }
    *(_DWORD *)(a1 + 32) = v13;
    *(_QWORD *)(a1 + 40) = v14;
  }
  else
  {
    if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
      v6 = (__int64 *)(a2 + 48);
    return sub_1CE94F0((__int64 *)a1, *v6, 0, a3, a4, v8, v9, v10);
  }
  return result;
}
