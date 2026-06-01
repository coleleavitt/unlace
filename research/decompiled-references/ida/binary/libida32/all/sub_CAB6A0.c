__int64 __fastcall sub_CAB6A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r12d
  unsigned __int64 v6; // r14
  __int64 v8; // rbp
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r15d
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rbp
  __int64 v21; // rax
  char v22; // al
  int v23; // eax
  unsigned int v24; // r15d
  __int64 v25; // rbp
  unsigned int v26; // r14d
  int v27; // [rsp+Ch] [rbp-4Ch]
  __int64 v28[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = *(unsigned __int8 *)(a1 + 584);
  v6 = *(_QWORD *)(a2 + 16);
  if ( (_BYTE)v5 )
  {
    return (unsigned int)sub_CA37C0(a1, *(_QWORD *)(a2 + 16), a3, a4, a5);
  }
  else
  {
    v8 = a2;
    LOBYTE(v9) = 1;
    if ( (*(_BYTE *)(a2 + 1) & 6) == 0 )
    {
      a2 = *(_QWORD *)(a2 + 8);
      v9 = (unsigned __int64)sub_CC2440(*(_QWORD *)(a1 + 488), a2) >> 32;
    }
    v10 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v10 + 16) != 14 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v15 + 16) != 14 )
        BUG();
      v10 = sub_F3F310(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v15, a4);
    }
    v14 = sub_CC2440(*(_QWORD *)(a1 + 488), *(_QWORD *)(v10 + 32));
    v27 = v14;
    switch ( ((*(_BYTE *)(v8 + 2) >> 3) + 28) & 0x1F )
    {
      case 0:
      case 1:
      case 2:
      case 8:
        return (unsigned int)sub_CA89D0(a1, v6, v11, v12, v13);
      case 3:
        if ( (_BYTE)v9 || *(_BYTE *)(a1 + 586) )
          goto LABEL_32;
        v28[0] = v6 | 2;
        v21 = sub_C986D0(a1, v28, 0, 0, 1, 0);
        if ( !BYTE4(v21) )
          return 0;
        v28[0] = v8 | 4;
        if ( !(unsigned __int8)sub_C80E60(a1, v21, v28) )
          return v5;
LABEL_32:
        v28[0] = v6 | 2;
        v24 = sub_C9B2B0(a1, v28, 13, 1u, 0, 1, 0);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v6) )
          return v5;
        v25 = v8 | 4;
        v28[0] = v25;
        if ( !(unsigned __int8)sub_C81650(a1, 13, v24, v28) )
          return v5;
        v26 = 0;
        break;
      case 4:
        if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v6) )
        {
          v20 = v8 | 4;
          v28[0] = v20;
          if ( (unsigned __int8)sub_C80100(a1, v14, 1u, v28) )
          {
            v28[0] = v20;
            if ( (unsigned __int8)sub_C7E9B0(a1, v14, v28) )
            {
              v28[0] = v20;
              v16 = sub_C81040(a1, v14, 1u, v28);
              if ( (_BYTE)v16 )
              {
                if ( *(_BYTE *)(a1 + 584) )
                {
                  v28[0] = v20;
                  return (unsigned int)sub_C7EAC0(a1, v28);
                }
                return v16;
              }
            }
          }
        }
        return v5;
      case 5:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v6) )
          return v5;
        if ( !(unsigned __int8)sub_C8E220(a1, v6, v17, v18) )
          return v5;
        v28[0] = v8 | 4;
        if ( !(unsigned __int8)sub_C7E290(a1, v28) )
          return v5;
        v19 = sub_C8D700(a1, *(_QWORD *)(v8 + 8));
        if ( v19 == 10 )
          return 1;
        v28[0] = v8 | 4;
        return (unsigned int)sub_C7C7D0(a1, 10, v19, v28);
      case 6:
        return (unsigned int)sub_CA5940(a1, v6, v11, v12, v13);
      case 7:
        if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, v6) )
        {
          v22 = *(_BYTE *)(v6 + 1) >> 1;
          v28[0] = v8 | 4;
          if ( (v22 & 3) == 1 )
          {
            if ( (unsigned __int8)sub_C853C0(a1, 1, v28) )
            {
              v28[0] = v8 | 4;
              return (unsigned int)sub_C877A0(a1, v28);
            }
          }
          else
          {
            v23 = sub_C8D700(a1, *(_QWORD *)(v8 + 8));
            return (unsigned int)sub_C80210(a1, v23, 1u, v28);
          }
        }
        return v5;
      default:
        v28[0] = v8 | 4;
        return (unsigned int)sub_C872A0(a1, v28);
    }
    while ( 1 )
    {
      v28[0] = v25;
      if ( !(unsigned __int8)sub_C80B80(a1, 13, v24, v28) )
        break;
      v28[0] = v25;
      if ( !(unsigned __int8)sub_C80210(a1, v27, v26, v28) )
        break;
      v28[0] = v25;
      if ( !(unsigned __int8)sub_C7E9B0(a1, v27, v28) )
        break;
      v28[0] = v25;
      if ( !(unsigned __int8)sub_C81040(a1, v27, v26, v28) )
        break;
      if ( v26 == 1 )
        return 1;
      v26 = 1;
    }
  }
  return v5;
}

