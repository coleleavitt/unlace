__int64 __fastcall sub_1D200C0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  __int64 result; // rax
  __int64 *v12; // r12
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned __int16 **v20; // rsi
  unsigned int v21; // eax
  _QWORD *v22; // rsi
  unsigned int v23; // ebx
  char v24; // al
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // [rsp+0h] [rbp-118h]
  __int64 v30; // [rsp+0h] [rbp-118h]
  __int64 v31; // [rsp+0h] [rbp-118h]
  __int64 v32; // [rsp+0h] [rbp-118h]
  void *v33; // [rsp+8h] [rbp-110h]
  __int64 v34; // [rsp+10h] [rbp-108h]
  char v35; // [rsp+1Fh] [rbp-F9h]
  __int64 v36; // [rsp+20h] [rbp-F8h]
  __int64 v37; // [rsp+28h] [rbp-F0h]
  char v38; // [rsp+3Fh] [rbp-D9h] BYREF
  void *v39; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v40; // [rsp+48h] [rbp-D0h]
  _BYTE v41[64]; // [rsp+50h] [rbp-C8h] BYREF
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v43; // [rsp+98h] [rbp-80h]
  _BYTE v44[120]; // [rsp+A0h] [rbp-78h] BYREF

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
  v12 = (__int64 *)(a2 + 40);
  v13 = (__int64 *)(a2 + 48);
  if ( (*(_WORD *)a2 & 0x1FF) != 0x72 )
    v13 = (__int64 *)(a2 + 40);
  if ( sub_BFDFF0(*v13) || (*(_QWORD *)a2 & 0x200000LL) != 0 )
  {
LABEL_6:
    v10 = (__int64)sub_1D1AC70(a1, *(_QWORD *)(a2 + 8), a3, a4);
    if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) != 0
      && (v17 = sub_1D1B120((__int64)a1, *(_QWORD *)(a2 + 16), a3, a4, v6, v7, v8, v9)) != 0 )
    {
      v18 = *(_QWORD *)a2;
      v19 = *a1;
      v38 = 0;
      v39 = v41;
      v40 = 0x800000000LL;
      sub_14EE070((__int64)&ptr, v19, 0, (v18 & 0x200000) != 0);
      v20 = (unsigned __int16 **)(a2 + 40);
      if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
        v20 = (unsigned __int16 **)(a2 + 48);
      if ( (unsigned __int8)sub_1D11730(a1, v20, *(unsigned int *)(a2 + 32), 1u, (__int64)&v39, &v38, a3, a4) )
      {
        result = 1;
        if ( (_BYTE)v43 )
        {
          sub_190D5E0((__int64)ptr, a3);
          result = 1;
        }
      }
      else
      {
        if ( (_BYTE)v43 )
          sub_190D5E0((__int64)ptr, a3);
        if ( *(_DWORD *)(*a1 + 12632) || v10 != *(_QWORD *)(a2 + 8) || v17 != *(_QWORD *)(a2 + 16) || v38 )
        {
          v34 = *a1;
          v36 = *(_QWORD *)(a2 + 24);
          v33 = v39;
          v29 = v40;
          v35 = *(_BYTE *)(a2 + 3) & 7;
          v37 = *(_QWORD *)a2 >> 16;
          v21 = sub_C94450(a2);
          v22 = (_QWORD *)v17;
          v23 = v21;
          if ( (*(_BYTE *)(v17 + 87) & 0x20) != 0 )
            v22 = *(_QWORD **)(v17 + 184);
          ptr = v44;
          v43 = 0x800000000LL;
          v24 = sub_183E070(v34, v22, v10, (__int64)v33, v29, v21, (__m128i)a3, (__int64)&ptr, 0, 0);
          v25 = 1;
          if ( !v24 )
            v25 = sub_183DF50(
                    *a1,
                    v23,
                    v10,
                    v17,
                    (v37 & 8) != 0,
                    (v37 & 0x10) != 0,
                    (__int64)ptr,
                    (unsigned int)v43,
                    (v37 & 0x20) != 0,
                    (v37 & 0x40) != 0,
                    (v37 & 0x80u) != 0LL,
                    v35,
                    v36);
          if ( ptr != v44 )
          {
            v30 = v25;
            free(ptr);
            v25 = v30;
          }
          result = v25;
        }
        else
        {
          v32 = *a1;
          v26 = sub_C94450(a2);
          sub_1910D40(v32, v26, v17, 1, v27, v28, a3, a4);
          result = a2;
        }
      }
      if ( v39 != v41 )
      {
        v31 = result;
        free(v39);
        return v31;
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
      v12 = (__int64 *)(a2 + 48);
    return sub_1D119D0(a1, *v12, 0, a3, a4, v14, v15, v16);
  }
  return result;
}
