__int64 __fastcall sub_1B91740(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 result; // rax
  __int64 *v9; // r12
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned __int16 **v17; // rsi
  unsigned int v18; // eax
  _QWORD *v19; // rsi
  unsigned int v20; // ebx
  __int64 v21; // rdi
  char v22; // al
  __int64 v23; // rdx
  unsigned int v24; // [rsp+8h] [rbp-110h]
  __int64 v25; // [rsp+8h] [rbp-110h]
  __int64 v26; // [rsp+8h] [rbp-110h]
  void *v27; // [rsp+10h] [rbp-108h]
  char v28; // [rsp+1Fh] [rbp-F9h]
  __int64 v29; // [rsp+20h] [rbp-F8h]
  __int64 v30; // [rsp+28h] [rbp-F0h]
  char v31; // [rsp+3Fh] [rbp-D9h] BYREF
  void *v32; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-D0h]
  _BYTE v34[64]; // [rsp+50h] [rbp-C8h] BYREF
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v36; // [rsp+98h] [rbp-80h]
  _BYTE v37[120]; // [rsp+A0h] [rbp-78h] BYREF

  if ( *(_DWORD *)(a2 + 32) != 1 )
  {
    if ( *(_DWORD *)(a2 + 32) <= 1u )
      goto LABEL_6;
    v6 = a2 + 40;
    if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
      v6 = a2 + 48;
    if ( !sub_BFDFF0(*(_QWORD *)(v6 + 8)) )
      goto LABEL_6;
  }
  v9 = (__int64 *)(a2 + 40);
  v10 = (__int64 *)(a2 + 48);
  if ( (*(_WORD *)a2 & 0x1FF) != 0x72 )
    v10 = (__int64 *)(a2 + 40);
  if ( sub_BFDFF0(*v10) || (*(_QWORD *)a2 & 0x200000LL) != 0 )
  {
LABEL_6:
    v7 = (__int64)sub_1B90FD0(a1, *(_QWORD *)(a2 + 8), a3, a4);
    if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (v14 = sub_1B04070((__int64)a1, *(_QWORD *)(a2 + 16))) != 0 )
    {
      v15 = *(_QWORD *)a2;
      v16 = *a1;
      v31 = 0;
      v32 = v34;
      v33 = 0x800000000LL;
      sub_14EE070((__int64)&ptr, v16, 0, (v15 & 0x200000) != 0);
      v17 = (unsigned __int16 **)(a2 + 40);
      if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
        v17 = (unsigned __int16 **)(a2 + 48);
      if ( (unsigned __int8)sub_1B7D2C0(a1, v17, *(unsigned int *)(a2 + 32), 1u, (__int64)&v32, &v31, a3, a4) )
      {
        result = 1;
        if ( (_BYTE)v36 )
        {
          sub_190D5E0((__int64)ptr, a3);
          result = 1;
        }
      }
      else
      {
        if ( (_BYTE)v36 )
          sub_190D5E0((__int64)ptr, a3);
        v29 = *(_QWORD *)(a2 + 24);
        v27 = v32;
        v24 = v33;
        v28 = *(_BYTE *)(a2 + 3) & 7;
        v30 = *(_QWORD *)a2 >> 16;
        v18 = sub_C94450(a2);
        v19 = (_QWORD *)v14;
        v20 = v18;
        if ( (*(_BYTE *)(v14 + 87) & 0x20) != 0 )
          v19 = *(_QWORD **)(v14 + 184);
        v21 = *a1;
        ptr = v37;
        v36 = 0x800000000LL;
        v22 = sub_183E070(v21, v19, v7, (__int64)v27, v24, v18, (__m128i)a3, (__int64)&ptr, 0, 0);
        v23 = 1;
        if ( !v22 )
          v23 = sub_183DF50(
                  *a1,
                  v20,
                  v7,
                  v14,
                  (v30 & 8) != 0,
                  (v30 & 0x10) != 0,
                  (__int64)ptr,
                  (unsigned int)v36,
                  (v30 & 0x20) != 0,
                  (v30 & 0x40) != 0,
                  (v30 & 0x80u) != 0LL,
                  v28,
                  v29);
        if ( ptr != v37 )
        {
          v25 = v23;
          free(ptr);
          v23 = v25;
        }
        result = v23;
      }
      if ( v32 != v34 )
      {
        v26 = result;
        free(v32);
        return v26;
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
      v9 = (__int64 *)(a2 + 48);
    return sub_1B7D560(a1, *v9, 0, a3, a4, v11, v12, v13);
  }
  return result;
}
