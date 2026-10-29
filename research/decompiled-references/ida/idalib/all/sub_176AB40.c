__int64 __fastcall sub_176AB40(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v4; // rax
  void **v5; // r15
  __int64 result; // rax
  __int64 *v7; // r12
  __int64 *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int16 **v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // ebx
  char v16; // al
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // [rsp+0h] [rbp-118h]
  __int64 v20; // [rsp+0h] [rbp-118h]
  __int64 v21; // [rsp+0h] [rbp-118h]
  __int64 v22; // [rsp+0h] [rbp-118h]
  void *v23; // [rsp+8h] [rbp-110h]
  __int64 v24; // [rsp+10h] [rbp-108h]
  unsigned __int8 v25; // [rsp+1Fh] [rbp-F9h]
  __int64 v26; // [rsp+20h] [rbp-F8h]
  __int64 v27; // [rsp+28h] [rbp-F0h]
  char v28; // [rsp+3Fh] [rbp-D9h] BYREF
  void *v29; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-D0h]
  _BYTE v31[64]; // [rsp+50h] [rbp-C8h] BYREF
  void *ptr; // [rsp+90h] [rbp-88h] BYREF
  __int64 v33; // [rsp+98h] [rbp-80h]
  _BYTE v34[120]; // [rsp+A0h] [rbp-78h] BYREF

  if ( *(_DWORD *)(a2 + 32) != 1 )
  {
    if ( *(_DWORD *)(a2 + 32) <= 1u )
      goto LABEL_6;
    v4 = a2 + 40;
    if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
      v4 = a2 + 48;
    if ( !sub_BFDFF0(*(_QWORD *)(v4 + 8)) )
      goto LABEL_6;
  }
  v7 = (__int64 *)(a2 + 40);
  v8 = (__int64 *)(a2 + 48);
  if ( (*(_WORD *)a2 & 0x1FF) != 0x72 )
    v8 = (__int64 *)(a2 + 40);
  if ( sub_BFDFF0(*v8) || (*(_QWORD *)a2 & 0x200000LL) != 0 )
  {
LABEL_6:
    v5 = sub_176A2F0(a1, *(_QWORD *)(a2 + 8), a3);
    if ( ((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFF0LL) != 0
      && (v9 = sub_17473B0((__int64)a1, *(_QWORD *)(a2 + 16))) != 0 )
    {
      v10 = *(_QWORD *)a2;
      v11 = *a1;
      v28 = 0;
      v29 = v31;
      v30 = 0x800000000LL;
      sub_14EE070((__int64)&ptr, v11, 0, (v10 & 0x200000) != 0);
      v12 = (unsigned __int16 **)(a2 + 40);
      if ( (*(_WORD *)a2 & 0x1FF) == 0x72 )
        v12 = (unsigned __int16 **)(a2 + 48);
      if ( (unsigned __int8)sub_175C6E0(a1, v12, *(_DWORD *)(a2 + 32), 1, (__int64)&v29, &v28) )
      {
        result = 1;
        if ( (_BYTE)v33 )
        {
          sub_190D5E0(ptr);
          result = 1;
        }
      }
      else
      {
        if ( (_BYTE)v33 )
          sub_190D5E0(ptr);
        if ( *(_DWORD *)(*a1 + 12632) || v5 != *(void ***)(a2 + 8) || v9 != *(_QWORD *)(a2 + 16) || v28 )
        {
          v24 = *a1;
          v26 = *(_QWORD *)(a2 + 24);
          v23 = v29;
          v19 = (unsigned int)v30;
          v25 = *(_BYTE *)(a2 + 3) & 7;
          v27 = *(_QWORD *)a2 >> 16;
          v13 = sub_C94450(a2);
          v14 = v9;
          v15 = v13;
          if ( (*(_BYTE *)(v9 + 87) & 0x20) != 0 )
            v14 = *(_QWORD *)(v9 + 184);
          ptr = v34;
          v33 = 0x800000000LL;
          v16 = sub_183E070(v24, v14, v5, v23, v19, v13, &ptr, 0, 0);
          v17 = 1;
          if ( !v16 )
            v17 = sub_183DF50(
                    *a1,
                    v15,
                    (_DWORD)v5,
                    v9,
                    (v27 & 8) != 0,
                    (v27 & 0x10) != 0,
                    (__int64)ptr,
                    (unsigned int)v33,
                    (v27 & 0x20) != 0,
                    (v27 & 0x40) != 0,
                    (unsigned int)(char)v27 >> 31,
                    v25,
                    v26);
          if ( ptr != v34 )
          {
            v20 = v17;
            free(ptr);
            v17 = v20;
          }
          result = v17;
        }
        else
        {
          v22 = *a1;
          v18 = sub_C94450(a2);
          sub_1910D40(v22, v18, v9, 1);
          result = a2;
        }
      }
      if ( v29 != v31 )
      {
        v21 = result;
        free(v29);
        return v21;
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
      v7 = (__int64 *)(a2 + 48);
    return sub_175C980(a1, *v7, 0, *(double *)a3.m128_u64);
  }
  return result;
}
