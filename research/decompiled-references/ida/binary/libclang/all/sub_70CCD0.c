__int64 __fastcall sub_70CCD0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r15
  __int64 *v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // r12
  char v7; // al
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int8 v17; // r13
  __int64 v18; // r15
  char v19; // r13
  __int64 v20; // rax
  char v21; // [rsp+Fh] [rbp-39h]

  v3 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v4 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *v5;
  if ( *(_BYTE *)(*v5 + 16) != 13 )
  {
LABEL_11:
    v10 = *(_QWORD *)(*(_QWORD *)(*v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v14) = *(_BYTE *)(v10 + 16);
    goto LABEL_12;
  }
  v7 = sub_B08710(*v5);
  v8 = *v4;
  if ( !v7 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v14) = *(_BYTE *)(v10 + 16);
    goto LABEL_12;
  }
  v9 = *v4;
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 56 <= 1 )
    goto LABEL_4;
  v10 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(unsigned __int8 *)(v10 + 16);
  if ( (unsigned int)(v14 - 56) > 1 )
  {
LABEL_12:
    if ( (_BYTE)v14 != 13 )
      return 0;
LABEL_6:
    if ( (unsigned __int8)sub_B08710(v10) )
    {
      v11 = *v3;
      if ( ((unsigned int)*(unsigned __int8 *)(*v3 + 16) - 56 <= 1
         || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 56 <= 1
         && (v11 = sub_B0D320(*v3)) != 0)
        && (*(_BYTE *)(v11 + 18) & 0x78) == 0 )
      {
        v17 = *(_BYTE *)(a1[270] + 192LL);
        v18 = sub_6F6DE0((__int64)a1, *v3);
        v19 = (v17 >> 5) & 3;
        if ( v18 == sub_707CF0(a1, v10) )
        {
          if ( v19 == 2 )
            return 1;
          if ( v19 == 1 )
          {
            if ( sub_6B3140(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF0LL]
                                      & 0xFFFFFFFFFFFFFFF0LL)) )
            {
              v20 = sub_B088A0(*v4, a1);
              if ( sub_6B3140(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL)) )
                return 1;
            }
          }
        }
      }
    }
    return 0;
  }
  v15 = sub_B0D320(*v4);
  v9 = *v4;
  v8 = v15;
  if ( !v15 )
  {
LABEL_5:
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v10 + 16) != 13 )
      return 0;
    goto LABEL_6;
  }
LABEL_4:
  if ( (*(_BYTE *)(v8 + 18) & 0x78) != 0 )
    goto LABEL_5;
  v21 = (*(_BYTE *)(a1[270] + 192LL) >> 5) & 3;
  v13 = sub_6F6DE0((__int64)a1, v9);
  if ( v13 != sub_707CF0(a1, v6) )
    goto LABEL_11;
  if ( v21 != 2 )
  {
    if ( v21 != 1 )
      goto LABEL_11;
    if ( !sub_6B3140(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v8 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)) )
      goto LABEL_11;
    v16 = sub_B088A0(*v3, a1);
    if ( !sub_6B3140(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL)) )
      goto LABEL_11;
  }
  return 1;
}

