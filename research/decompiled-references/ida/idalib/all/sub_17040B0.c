unsigned __int64 __fastcall sub_17040B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // bl
  int v7; // ebp
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r13
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // rdx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD v25[6]; // [rsp+18h] [rbp-30h] BYREF

  v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  v7 = v6;
  if ( (unsigned int)v6 - 53 <= 1 || ((v6 + 52) & 0x7Fu) <= 1 )
  {
    a2 = sub_B72ED0(a2);
    v6 = *(_BYTE *)(a2 + 28) & 0x7F;
    v7 = v6;
  }
  if ( (unsigned int)(v7 - 58) > 9 )
  {
    if ( v6 == 20 )
      return sub_A82070(a1, a2, 0, a4, a5, a6);
    v10 = sub_B8BF30(a2);
    v15 = v10;
    if ( v10 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v16 + 16) - 25 > 1 )
        v16 = sub_F63050(v16, a2, v11, v12);
      a2 = sub_B8C330(v15);
      v25[0] = *(_QWORD *)(v16 + 24);
      v17 = sub_F67970(v25, a2);
      v18 = v17 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      switch ( v6 )
      {
        case 0x12u:
          v17 = sub_BA8670(a2);
          v18 = v17 & 0xFFFFFFFFFFFFFFF0LL;
          break;
        case 0x21u:
          v22 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
            v22 = (_QWORD *)*v22;
          if ( !v22 )
            BUG();
          v23 = *(v22 - 2);
          if ( v23 )
          {
            v18 = v23 & 0xFFFFFFFFFFFFFFF0LL;
            v17 = v18;
          }
          else
          {
            a2 = (__int64)(v22 - 8);
            v17 = sub_A7AA70(a1, (__int64)(v22 - 8), (__int64)v22, v12, v13, v14);
            v18 = v17 & 0xFFFFFFFFFFFFFFF0LL;
          }
          break;
        case 0x4Bu:
          v17 = *(_QWORD *)(a2 + 56);
          v18 = v17 & 0xFFFFFFFFFFFFFFF0LL;
          break;
        default:
          if ( (unsigned int)(v7 - 26) > 0x1A )
            return 0;
          v17 = *(_QWORD *)(a2 + 48);
          v18 = v17 & 0xFFFFFFFFFFFFFFF0LL;
          break;
      }
    }
    if ( v18 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v19 = v17 & 0xFFFFFFFFFFFFFFF0LL;
          v20 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
          v21 = *(unsigned __int8 *)(v20 + 16);
          if ( (unsigned int)(v21 - 43) <= 1 )
            goto LABEL_16;
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
            break;
LABEL_23:
          if ( (_BYTE)v21 == 42 )
            goto LABEL_24;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
            goto LABEL_30;
          v20 = sub_F63050(v20, a2, v21, v12);
          if ( v20 )
          {
LABEL_24:
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 32)
                                                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                                                          + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 25 > 1 )
              return v17;
            v17 = *(_QWORD *)(v20 + 32);
          }
          else
          {
            v20 = *(_QWORD *)v19;
            v21 = *(unsigned __int8 *)(*(_QWORD *)v19 + 16LL);
LABEL_30:
            if ( (_BYTE)v21 == 11 )
              goto LABEL_31;
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11 )
            {
              v20 = sub_F63050(v20, a2, v21, v12);
              if ( !v20 )
              {
                v20 = *(_QWORD *)v19;
                LODWORD(v21) = *(unsigned __int8 *)(*(_QWORD *)v19 + 16LL);
                goto LABEL_46;
              }
LABEL_31:
              v17 = *(_QWORD *)(v20 + 32);
            }
            else
            {
LABEL_46:
              v24 = (unsigned int)(v21 - 25);
              if ( (unsigned int)v24 > 1 )
              {
                if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                   - 25 > 1 )
                  return v17;
                v20 = sub_F63050(v20, a2, v24, v12);
                if ( !v20 )
                  return v17;
              }
              v17 = *(_QWORD *)(v20 + 24);
            }
          }
        }
        v20 = sub_F63050(v20, a2, v21, v12);
        if ( !v20 )
        {
          v20 = *(_QWORD *)v19;
          v21 = *(unsigned __int8 *)(*(_QWORD *)v19 + 16LL);
          goto LABEL_23;
        }
LABEL_16:
        while ( (*(_BYTE *)(v20 + 18) & 0x10) != 0 )
        {
          v20 = *(_QWORD *)(*(_QWORD *)(v20 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v20 + 16) - 43 > 1 )
            v20 = sub_F63050(v20, a2, v21, v12);
        }
        v17 = *(_QWORD *)(v20 + 32);
      }
    }
    return 0;
  }
  v8 = *(_QWORD *)(a2 + 48);
  if ( v8 )
    return v8 & 0xFFFFFFFFFFFFFFF0LL;
  else
    return sub_A7AA70(a1, a2, a3, a4, a5, a6);
}
