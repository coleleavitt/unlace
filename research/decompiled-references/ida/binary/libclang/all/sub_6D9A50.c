__int64 __fastcall sub_6D9A50(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int8 v5; // si
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  __int16 v15; // r8
  unsigned int v16; // ecx
  unsigned int v17; // r13d
  unsigned __int8 v18; // al
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned int v23; // [rsp+Ch] [rbp-3Ch]
  unsigned int v24; // [rsp+Ch] [rbp-3Ch]
  void *v25; // [rsp+10h] [rbp-38h] BYREF
  int v26; // [rsp+18h] [rbp-30h]

  v2 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a2 & 7) == 0 && (a2 & 8) == 0 && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)v2 + 16LL) - 2) <= 4u )
    return *(_QWORD *)v2;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
                                  + 16LL)
                       - 2) > 4u )
    return 0;
  v3 = sub_B107B0(a2);
  v5 = *(_BYTE *)(v3 + 16);
  v6 = v3;
  v7 = v3;
  if ( (unsigned __int8)(v5 - 2) > 4u )
    return 0;
  if ( v4 )
  {
    v9 = *(_QWORD *)(v3 + 32);
    v10 = *(_QWORD *)(v6 + 32) & 7LL;
    if ( v4 <= 7 )
    {
      v14 = (unsigned int)v10 | (unsigned int)v4 | v9 & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v11 = v10 | v4;
      v12 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v9 & 8) != 0 )
      {
        v11 |= *(__int64 *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL));
        v12 = (_QWORD *)*v12;
      }
      v13 = sub_6C3980(a1, (unsigned __int64)v12, v11);
      v5 = *(_BYTE *)(v6 + 16);
      v14 = v13;
    }
    v15 = *(_WORD *)(v6 + 18) >> 6;
    v16 = (*(_BYTE *)(v6 + 18) >> 3) & 7;
    v17 = v15 & 7;
    if ( (unsigned int)v5 - 2 > 1 )
    {
      if ( v5 == 5 )
      {
        return *(_QWORD *)(sub_6C5C30((__int64)a1, v14, v15 & 7, v16) & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        v21 = *(_QWORD *)(v6 + 48);
        v22 = *(_QWORD *)(v6 + 40);
        if ( v5 == 4 )
          return *(_QWORD *)(sub_6D9640((__int64)a1, v14, v22, v17, v16, v21) & 0xFFFFFFFFFFFFFFF0LL);
        else
          return *(_QWORD *)(sub_6C5920((__int64)a1, v14, v22, v17, v16, v21) & 0xFFFFFFFFFFFFFFF0LL);
      }
    }
    else
    {
      v18 = *(_BYTE *)(v6 + 19);
      v19 = *(_QWORD *)(v6 + 40);
      if ( (v18 & 2) != 0 )
      {
        v20 = *(_QWORD *)(v19 + 16);
        v26 = *(_DWORD *)(v19 + 8);
        if ( (unsigned int)v26 > 0x40 )
        {
          v23 = v16;
          sub_2585B30(&v25);
          v16 = v23;
        }
        else
        {
          v25 = *(void **)v19;
        }
      }
      else
      {
        v26 = 8 * ((v18 >> 2) & 0x1F);
        if ( v26 > 64 )
        {
          v24 = v16;
          sub_2585A50(&v25, v19, 0);
          v16 = v24;
        }
        else
        {
          v25 = (void *)v19;
        }
        v20 = 0;
      }
      v7 = *(_QWORD *)(sub_6C55D0((__int64)a1, v14, (__int64)&v25, v20, v17, v16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)v26 > 0x40 )
      {
        if ( v25 )
          operator delete[](v25);
      }
    }
  }
  return v7;
}

