__int64 __fastcall sub_1988D70(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r15
  char v5; // al
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 result; // rax
  unsigned __int64 *v9; // rbp
  __int64 *v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned __int16 **v17; // rsi
  unsigned int v18; // eax
  _QWORD *v19; // rsi
  unsigned int v20; // r8d
  unsigned int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // [rsp+0h] [rbp-118h]
  __int64 v25; // [rsp+0h] [rbp-118h]
  unsigned int v26; // [rsp+8h] [rbp-110h]
  unsigned int v27; // [rsp+8h] [rbp-110h]
  void *v28; // [rsp+10h] [rbp-108h]
  char v29; // [rsp+1Fh] [rbp-F9h]
  __int64 v30; // [rsp+20h] [rbp-F8h]
  __int64 v31; // [rsp+28h] [rbp-F0h]
  char v32; // [rsp+3Fh] [rbp-D9h] BYREF
  void *ptr; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-D0h]
  _BYTE v35[64]; // [rsp+50h] [rbp-C8h] BYREF
  void *v36; // [rsp+90h] [rbp-88h] BYREF
  __int64 v37; // [rsp+98h] [rbp-80h]
  _BYTE v38[120]; // [rsp+A0h] [rbp-78h] BYREF

  v4 = a2;
  v5 = *(_BYTE *)(a1 + 56);
  *(_BYTE *)(a1 + 56) = 1;
  if ( !v5 )
    goto LABEL_7;
  if ( *(_DWORD *)(a2 + 32) != 1 )
  {
    if ( *(_DWORD *)(a2 + 32) <= 1u )
      goto LABEL_7;
    v6 = a2 + 40;
    if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
      v6 = a2 + 48;
    if ( !sub_BFDFF0(*(_QWORD *)(v6 + 8)) )
      goto LABEL_7;
  }
  v9 = (unsigned __int64 *)(a2 + 40);
  v10 = (__int64 *)(a2 + 48);
  if ( (*(_WORD *)a2 & 0x1FF) != 0x72 )
    v10 = (__int64 *)(a2 + 40);
  if ( !sub_BFDFF0(*v10) && (*(_QWORD *)a2 & 0x200000LL) == 0 )
  {
    if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
      v9 = (unsigned __int64 *)(a2 + 48);
    result = 0;
    if ( *v9 )
      return sub_197B880(a1, *v9, 0, v11, v12, v13, a3, a4);
  }
  else
  {
LABEL_7:
    v7 = (__int64)sub_19885D0((__int64 *)a1, *(_QWORD *)(a2 + 8), a3, a4);
    if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (v14 = sub_18CBE40(a1, *(_QWORD *)(a2 + 16))) != 0 )
    {
      v15 = *(_QWORD *)a2;
      v16 = *(_QWORD *)a1;
      v32 = 0;
      ptr = v35;
      v34 = 0x800000000LL;
      sub_14EE070((__int64)&v36, v16, 0, (v15 & 0x200000) != 0);
      v17 = (unsigned __int16 **)(v4 + 40);
      if ( (*(_WORD *)v4 & 0x1FF) == 0x72 )
        v17 = (unsigned __int16 **)(v4 + 48);
      if ( (unsigned __int8)sub_197B2A0(
                              (__int64 *)a1,
                              v17,
                              *(_DWORD *)(v4 + 32),
                              1,
                              (__int64)&ptr,
                              &v32,
                              *(double *)a3.m128_u64,
                              a4) )
      {
        result = 1;
        if ( (_BYTE)v37 )
        {
          sub_190D5E0((__int64)v36, a3);
          result = 1;
        }
      }
      else
      {
        if ( (_BYTE)v37 )
          sub_190D5E0((__int64)v36, a3);
        v25 = *(_QWORD *)a1;
        if ( v7 == *(_QWORD *)(v4 + 8) && v14 == *(_QWORD *)(v4 + 16) && !v32 )
        {
          v21 = sub_C94450(v4);
          sub_1910D40(v25, v21, v14, 1, v22, v23, a3, a4);
        }
        else
        {
          v30 = *(_QWORD *)(v4 + 24);
          v28 = ptr;
          v26 = v34;
          v29 = *(_BYTE *)(v4 + 3) & 7;
          v31 = *(_QWORD *)v4 >> 16;
          v18 = sub_C94450(v4);
          v19 = (_QWORD *)v14;
          v20 = v26;
          if ( (*(_BYTE *)(v14 + 87) & 0x20) != 0 )
            v19 = *(_QWORD **)(v14 + 184);
          v36 = v38;
          v4 = 1;
          v37 = 0x800000000LL;
          v27 = v18;
          if ( !(unsigned __int8)sub_183E070(v25, v19, v7, (__int64)v28, v20, v18, (__m128i)a3, (__int64)&v36, 0, 0) )
            v4 = sub_183DF50(
                   *(_QWORD *)a1,
                   v27,
                   v7,
                   v14,
                   (v31 & 8) != 0,
                   (v31 & 0x10) != 0,
                   (__int64)v36,
                   (unsigned int)v37,
                   (v31 & 0x20) != 0,
                   (v31 & 0x40) != 0,
                   (v31 & 0x80u) != 0LL,
                   v29,
                   v30);
          if ( v36 != v38 )
            free(v36);
        }
        result = v4;
      }
      if ( ptr != v35 )
      {
        v24 = result;
        free(ptr);
        return v24;
      }
    }
    else
    {
      return 1;
    }
  }
  return result;
}
