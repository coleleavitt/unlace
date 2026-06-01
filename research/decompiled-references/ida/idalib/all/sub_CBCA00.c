__int64 __fastcall sub_CBCA00(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  __int64 v3; // r12
  __int64 *v4; // r14
  __int64 v5; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // r13
  __int64 v12; // r12
  int v13; // eax
  __int64 v14; // r15
  unsigned int v15; // r12d
  __int64 v16; // r8
  unsigned int v17; // r14d
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // r14d
  int v22; // eax
  unsigned int v23; // r12d
  __int64 v24; // rax
  char v25; // al
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // [rsp+8h] [rbp-60h]
  int v30; // [rsp+1Ch] [rbp-4Ch]
  __int64 v31[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 584);
  v3 = *(_QWORD *)(a2 + 8);
  if ( !(_BYTE)v2 )
  {
    v4 = (__int64 *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v5 + 16) != 13 || (v2 = 1, ((*(_WORD *)(v5 + 18) >> 3) & 0x1FF) != 0x1B3) )
    {
      v7 = *(_QWORD *)(a2 + 8);
      v8 = sub_CE6180(*(_QWORD *)(a1 + 488), v7);
      v11 = HIDWORD(v8);
      if ( BYTE4(v8) )
        return (unsigned int)sub_CB2AD0(a1, (unsigned int)v8, v3, a2, v10);
      v12 = *v4;
      v13 = *(unsigned __int8 *)(*v4 + 16);
      if ( (_BYTE)v13 == 14 )
        goto LABEL_6;
      v19 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v19 + 16) == 14 )
      {
        v12 = sub_F63050(*v4, v7, v19, v9);
        if ( v12 )
        {
LABEL_6:
          if ( !*(_BYTE *)(a1 + 586) )
          {
            v31[0] = a2 | 2;
            v24 = sub_CBC410(a1, v31, 0, 0, 1, 0);
            v2 = 0;
            if ( !BYTE4(v24) )
              return v2;
            v31[0] = a2 | 4;
            v25 = sub_CA4BA0(a1, v24, v31);
            v2 = 0;
            if ( !v25 )
              return v2;
          }
          v14 = *(_QWORD *)(v12 + 32);
          v15 = 0;
          v17 = sub_CB1440(a1, v14);
          while ( (unsigned __int8)sub_CB2AD0(a1, v17, v14, a2, v16) )
          {
            v31[0] = a2 | 4;
            v2 = sub_CA4D80(a1, v17, v15, v31);
            if ( !(_BYTE)v2 )
              break;
            if ( v15 == 1 )
              return v2;
            v15 = 1;
          }
          return (unsigned int)v11;
        }
        v12 = *v4;
        v13 = *(unsigned __int8 *)(*v4 + 16);
      }
      if ( (unsigned int)(v13 - 57) <= 1 || (v28 = sub_CAEB00(v12, v7, v19, v9), v2 = v11, (v12 = v28) != 0) )
      {
        if ( *(_BYTE *)(a1 + 586)
          || (v31[0] = a2 | 2, v26 = sub_CBC410(a1, v31, 0, 0, 1, 0), v2 = 0, BYTE4(v26))
          && (v31[0] = a2 | 4, v27 = sub_CA4BA0(a1, v26, v31), v2 = 0, v27) )
        {
          v29 = *(_QWORD *)(v12 + 32);
          v21 = sub_CB1440(a1, v29);
          v22 = *(_DWORD *)(v12 + 20);
          v23 = 0;
          v30 = v22;
          if ( !v22 )
            return 1;
          while ( (unsigned __int8)sub_CB2AD0(a1, v21, v29, a2, v20) )
          {
            v31[0] = a2 | 4;
            if ( !(unsigned __int8)sub_CA4D80(a1, v21, v23, v31) )
              break;
            if ( ++v23 == v30 )
              return 1;
          }
          return (unsigned int)v11;
        }
      }
    }
  }
  return v2;
}
