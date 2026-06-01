char __fastcall sub_9FD4A0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 i; // rbx
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r14
  char v9[32]; // [rsp+Ch] [rbp-F8h] BYREF
  char v10[32]; // [rsp+2Ch] [rbp-D8h] BYREF
  char v11[32]; // [rsp+4Ch] [rbp-B8h] BYREF
  _BYTE v12[152]; // [rsp+6Ch] [rbp-98h] BYREF

  v1 = a1[4];
  if ( v1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (int)v2 > 0 )
    {
      for ( i = 0; i != v2; ++i )
      {
        while ( 1 )
        {
          LOBYTE(v1) = *(_BYTE *)(a1[90] + 4 * i + 3);
          if ( (v1 & 0x30) != 0 )
            goto LABEL_7;
          v4 = a1[91] + 96 * i;
          v5 = *(_QWORD *)(a1[93] + 8 * i);
          v6 = *(_QWORD *)(a1[94] + 8 * i);
          if ( !v5 )
            break;
          if ( v6 )
          {
            if ( sub_3ED680((__int64)qword_1C7F2C0, a1[91] + 96 * i, v5 + 16) )
            {
              LOBYTE(v1) = sub_9B0850(v4 + 32, v5 + 48);
              if ( (_BYTE)v1 )
                goto LABEL_7;
              LOBYTE(v1) = sub_9F4890(v4, v6 + 16);
              if ( (_BYTE)v1 )
                goto LABEL_7;
LABEL_23:
              LOBYTE(v1) = sub_9FD3E0(a1, i, v5 + 16);
              goto LABEL_7;
            }
            LOBYTE(v1) = sub_9F4890(v4, v6 + 16);
            if ( !(_BYTE)v1 )
              goto LABEL_23;
          }
          else
          {
            v7 = v5 + 16;
            if ( !sub_3ED680((__int64)qword_1C7F2C0, a1[91] + 96 * i, v5 + 16) )
              goto LABEL_12;
            LOBYTE(v1) = sub_9B0850(v4 + 32, v5 + 48);
            if ( !(_BYTE)v1 )
            {
              LOBYTE(v1) = sub_9FD3E0(a1, i, v5 + 16);
              goto LABEL_13;
            }
          }
LABEL_7:
          if ( ++i == v2 )
            return v1;
        }
        if ( !v6 )
        {
          if ( (v1 & 0x40) != 0 )
          {
            if ( *(_DWORD *)v4
              || (*(_BYTE *)(v4 + 52) & 1) != 0
              || *(_DWORD *)(v4 + 48) != 1
              || (LODWORD(v1) = *(_DWORD *)(v4 + 64), (_DWORD)v1) )
            {
              sub_9A9130((__int64)v9, v4 + 32);
              sub_894960((__int64)v10, (__int64)v9);
              sub_9D4F70((__int64)v12, (__int64)v10);
              sub_25A130(v11);
              sub_25A130(v10);
              sub_25A130(v9);
              sub_9FD3E0(a1, i, (__int64)v12);
              LOBYTE(v1) = sub_2A6060((__int64)v12);
            }
          }
          goto LABEL_7;
        }
        v7 = v6 + 16;
        LOBYTE(v1) = sub_9F4890(a1[91] + 96 * i, v7);
        if ( (_BYTE)v1 )
          goto LABEL_7;
LABEL_12:
        LOBYTE(v1) = sub_9FD3E0(a1, i, v7);
LABEL_13:
        ;
      }
    }
  }
  return v1;
}

