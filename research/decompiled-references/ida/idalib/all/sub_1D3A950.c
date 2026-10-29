bool __fastcall sub_1D3A950(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 *v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v12; // rax
  int v13; // ecx
  __int64 *v14; // [rsp+8h] [rbp-50h]
  __int64 *v15; // [rsp+8h] [rbp-50h]
  __int64 v16[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = a2;
  v6 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 25 <= 1 )
  {
    v8 = *v6;
    v9 = *(unsigned __int8 *)(*v6 + 16);
    if ( v9 == 25 || v9 == 26 )
      goto LABEL_9;
    goto LABEL_4;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
  {
    v8 = *v6;
    v7 = 0;
    if ( (unsigned __int8)(*(_BYTE *)(*v6 + 16) - 25) <= 1u )
      return (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7) == (v6[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v6[1] | (unsigned __int8)a3) & 7);
    goto LABEL_4;
  }
  v15 = v6;
  v12 = sub_F63050(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, v6, a4);
  v6 = v15;
  v7 = v12;
  v8 = *v15;
  v13 = *(unsigned __int8 *)(*v15 + 16);
  if ( v13 != 25 && v13 != 26 )
  {
LABEL_4:
    v10 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25;
    if ( (unsigned int)v10 <= 1 )
    {
      v14 = v6;
      v8 = sub_F63050(v8, a2, v6, v10);
      v6 = v14;
      goto LABEL_6;
    }
    return (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7) == (v6[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v6[1] | (unsigned __int8)a3) & 7);
  }
LABEL_6:
  if ( !v7 || !v8 )
    return (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7) == (v6[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v6[1] | (unsigned __int8)a3) & 7);
LABEL_9:
  v16[0] = 0;
  if ( sub_1BE5E50(a1, a2, a3, v16) )
    v4 = v16[0];
  return sub_A82490(*(_QWORD *)(a1 + 248), v4, a3);
}
