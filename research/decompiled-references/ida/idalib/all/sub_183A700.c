unsigned __int64 __fastcall sub_183A700(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  _QWORD v19[4]; // [rsp+18h] [rbp-20h] BYREF

  v4 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 52LL) & 1) != 0 )
  {
    v6 = *v4;
    if ( *(_BYTE *)(*v4 + 16) == 42 )
      goto LABEL_3;
    v14 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v14 + 16) == 42 )
    {
      v6 = sub_F63050(*v4, a2, v14, a4);
      if ( v6 )
      {
        v5 = *a1;
LABEL_3:
        v7 = *(_QWORD *)(v6 + 32);
        v8 = *(_QWORD *)(v5 + 248);
        v9 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v9 & 8) != 0 )
        {
          v19[0] = *(_QWORD *)(v6 + 32);
          v15 = *(__int64 *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL))
              | ((unsigned __int8)v7 | (unsigned __int8)v9) & 7;
          v10 = *(__int64 *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFFFF000001FFLL
              | ((unsigned __int8)v7 | (unsigned __int8)v9) & 7;
          v16 = sub_6D5440(v19);
          v11 = v16;
          if ( (v15 & 0xFFFFFFFF000001F8LL) != 0 )
          {
            v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
            v18 = v10 | v16 & 7;
            if ( (v16 & 8) != 0 )
            {
              v18 |= *(__int64 *)((char *)&qword_18 + (v16 & 0xFFFFFFFFFFFFFFF0LL));
              v17 = (_QWORD *)*v17;
            }
            a2 = sub_A70C40(v8, (__int64)v17, v18);
            goto LABEL_6;
          }
        }
        else
        {
          v19[0] = *(_QWORD *)(v6 + 32);
          LODWORD(v10) = ((unsigned __int8)v7 | (unsigned __int8)v9) & 7;
          v11 = sub_6D5440(v19);
        }
        a2 = v11 & 0xFFFFFFFFFFFFFFF8LL | (unsigned int)v10 | v11 & 7;
LABEL_6:
        v12 = sub_A70010(
                v8,
                *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7);
        LOBYTE(a2) = v12;
        v4 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
      }
    }
  }
  return v4[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v4[1] | (unsigned __int8)a2) & 7;
}
