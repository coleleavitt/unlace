__int64 __fastcall sub_1E1FD30(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 result; // rax
  __int64 *v8; // r12
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned __int16 **v16; // rsi
  unsigned int v17; // eax
  _QWORD *v18; // rsi
  unsigned int v19; // ebx
  char v20; // al
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // [rsp+0h] [rbp-118h]
  __int64 v26; // [rsp+0h] [rbp-118h]
  __int64 v27; // [rsp+0h] [rbp-118h]
  __int64 v28; // [rsp+0h] [rbp-118h]
  void *v29; // [rsp+8h] [rbp-110h]
  __int64 v30; // [rsp+10h] [rbp-108h]
  char v31; // [rsp+1Fh] [rbp-F9h]
  __int64 v32; // [rsp+20h] [rbp-F8h]
  __int64 v33; // [rsp+28h] [rbp-F0h]
  char v34; // [rsp+3Fh] [rbp-D9h] BYREF
  void *v35; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v36; // [rsp+48h] [rbp-D0h]
  _BYTE v37[64]; // [rsp+50h] [rbp-C8h] BYREF
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v39; // [rsp+98h] [rbp-80h]
  _BYTE v40[120]; // [rsp+A0h] [rbp-78h] BYREF

  if ( *(_DWORD *)(a2 + 32) != 1 )
  {
    if ( *(_DWORD *)(a2 + 32) <= 1u )
      goto LABEL_6;
    v5 = a2 + 40;
    if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
      v5 = a2 + 48;
    if ( !sub_BFDFF0(*(_QWORD *)(v5 + 8)) )
      goto LABEL_6;
  }
  v8 = (__int64 *)(a2 + 40);
  v9 = (__int64 *)(a2 + 48);
  if ( (*(_WORD *)a2 & 0x1FF) != 0x72 )
    v9 = (__int64 *)(a2 + 40);
  if ( sub_BFDFF0(*v9) || (*(_QWORD *)a2 & 0x200000LL) != 0 )
  {
LABEL_6:
    v6 = (__int64)sub_1E1F4E0(a1, *(_QWORD *)(a2 + 8), a3, a4);
    if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (v13 = sub_1E0AF30((__int64)a1, *(_QWORD *)(a2 + 16))) != 0 )
    {
      v14 = *(_QWORD *)a2;
      v15 = *a1;
      v34 = 0;
      v35 = v37;
      v36 = 0x800000000LL;
      sub_14EE070((__int64)&ptr, v15, 0, (v14 & 0x200000) != 0);
      v16 = (unsigned __int16 **)(a2 + 40);
      if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
        v16 = (unsigned __int16 **)(a2 + 48);
      if ( (unsigned __int8)sub_1E11B50(a1, v16, *(unsigned int *)(a2 + 32), 1u, (__int64)&v35, &v34, a3, a4) )
      {
        result = 1;
        if ( (_BYTE)v39 )
        {
          sub_190D5E0((__int64)ptr, a3);
          result = 1;
        }
      }
      else
      {
        if ( (_BYTE)v39 )
          sub_190D5E0((__int64)ptr, a3);
        if ( *(_DWORD *)(*a1 + 12632) || v6 != *(_QWORD *)(a2 + 8) || v13 != *(_QWORD *)(a2 + 16) || v34 )
        {
          v30 = *a1;
          v32 = *(_QWORD *)(a2 + 24);
          v29 = v35;
          v25 = v36;
          v31 = *(_BYTE *)(a2 + 3) & 7;
          v33 = *(_QWORD *)a2 >> 16;
          v17 = sub_C94450(a2);
          v18 = (_QWORD *)v13;
          v19 = v17;
          if ( (*(_BYTE *)(v13 + 87) & 0x20) != 0 )
            v18 = *(_QWORD **)(v13 + 184);
          ptr = v40;
          v39 = 0x800000000LL;
          v20 = sub_183E070(v30, v18, v6, (__int64)v29, v25, v17, (__m128i)a3, (__int64)&ptr, 0, 0);
          v21 = 1;
          if ( !v20 )
            v21 = sub_183DF50(
                    *a1,
                    v19,
                    v6,
                    v13,
                    (v33 & 8) != 0,
                    (v33 & 0x10) != 0,
                    (__int64)ptr,
                    (unsigned int)v39,
                    (v33 & 0x20) != 0,
                    (v33 & 0x40) != 0,
                    (v33 & 0x80u) != 0LL,
                    v31,
                    v32);
          if ( ptr != v40 )
          {
            v26 = v21;
            free(ptr);
            v21 = v26;
          }
          result = v21;
        }
        else
        {
          v28 = *a1;
          v22 = sub_C94450(a2);
          sub_1910D40(v28, v22, v13, 1, v23, v24, a3, a4);
          result = a2;
        }
      }
      if ( v35 != v37 )
      {
        v27 = result;
        free(v35);
        return v27;
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
      v8 = (__int64 *)(a2 + 48);
    return sub_1E11DF0(a1, *v8, 0, a3, a4, v10, v11, v12);
  }
  return result;
}
