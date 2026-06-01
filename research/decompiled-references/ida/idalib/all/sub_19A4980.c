_QWORD *__fastcall sub_19A4980(__int64 a1, int a2, __int64 *a3, unsigned __int64 a4, __int64 a5)
{
  __int64 *v6; // rbx
  __int64 *v7; // r14
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned int v18; // eax
  __int64 *v19; // rsi
  unsigned int v20; // ecx
  unsigned int v21; // edx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  __int64 *v25; // rsi
  unsigned int v26; // ecx
  _QWORD *v29; // [rsp+18h] [rbp-D0h]
  _BYTE v30[200]; // [rsp+20h] [rbp-C8h] BYREF

  v6 = a3;
  v7 = &a3[a4];
  v29 = sub_B978D0(*(_QWORD **)(a1 + 248), *(_QWORD *)(a1 + 544), a2);
  v8 = (__int64)(v29 + 5);
  if ( !v29 )
    v8 = 0;
  sub_17A2E00(a1, a5, v8);
  if ( v7 != v6 )
  {
    while ( 1 )
    {
      v9 = *v6;
      v10 = *(_QWORD *)(*v6 + 48);
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v11 + 16) != 13 || ((*(_WORD *)(v11 + 18) >> 3) & 0x1FF) != 0x1B3 )
        break;
      if ( a4 > 1 )
      {
        v24 = sub_B73090(*v6);
        v25 = (__int64 *)(a1 + 8);
        v26 = 5457;
      }
      else
      {
        v12 = *(_QWORD *)(v9 + 40);
        if ( (v12 & 7) != 0 || (v12 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          if ( (v10 & 0xF) == 0 && (byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL] & 0xF) == 0 )
            goto LABEL_11;
          v18 = sub_B73090(*v6);
          v19 = (__int64 *)(a1 + 8);
          v20 = 5458;
          goto LABEL_17;
        }
        v24 = sub_B73090(*v6);
        v25 = (__int64 *)(a1 + 8);
        v26 = 4794;
      }
      sub_168B9F0((__int64)v30, v25, v24, v26, 0);
      sub_15F7200(v30);
      *(_QWORD *)(v9 + 48) = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18720LL);
LABEL_11:
      sub_B8C080(v9, v8);
      v16 = *(_QWORD *)(v9 + 40);
      if ( (v16 & 7) == 0 && (v16 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        sub_17DE630(a1, a5, v9, v13, v14, v15);
        sub_17B7670(a1, v9, a5, 1, v22, v23);
      }
      if ( v7 == ++v6 )
        return v29;
    }
    if ( !sub_B74820(*v6) )
    {
      v21 = *(_DWORD *)(v9 + 100);
      if ( v21 )
      {
        sub_168B9F0((__int64)v30, (__int64 *)(a1 + 8), v21, 0x757u, 0);
        sub_15F7200(v30);
        *(_DWORD *)(v9 + 100) = 0;
      }
      goto LABEL_11;
    }
    v18 = sub_B74790(v9);
    v19 = (__int64 *)(a1 + 8);
    v20 = 4943;
LABEL_17:
    sub_168B9F0((__int64)v30, v19, v18, v20, 0);
    sub_15F7200(v30);
    goto LABEL_11;
  }
  return v29;
}
