void __fastcall sub_9D9720(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // r12
  __int64 i; // rbx
  char v4; // al
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r14
  char v9[32]; // [rsp+Ch] [rbp-98h] BYREF
  char v10[32]; // [rsp+2Ch] [rbp-78h] BYREF
  char v11[88]; // [rsp+4Ch] [rbp-58h] BYREF

  v1 = a1[4];
  if ( v1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (int)v2 > 0 )
    {
      for ( i = 0; v2 != i; ++i )
      {
        while ( 1 )
        {
          v4 = *(_BYTE *)(a1[82] + 4 * i + 3);
          if ( (v4 & 0x30) != 0 )
            goto LABEL_7;
          v5 = *(_QWORD *)(a1[85] + 8 * i);
          v6 = a1[83] + (i << 6);
          v7 = *(_QWORD *)(a1[86] + 8 * i);
          if ( !v5 )
            break;
          if ( v7 )
          {
            if ( sub_3ED680((__int64)qword_1C7F2C0, a1[83] + (i << 6), v5 + 16) )
            {
              if ( sub_3ED680((__int64)qword_1C7F2C0, v6 + 32, v5 + 48) || sub_9B0850(v6, v7 + 16) )
                goto LABEL_7;
LABEL_23:
              sub_9D85F0(a1, i, v5 + 16);
              goto LABEL_7;
            }
            if ( !sub_9B0850(v6, v7 + 16) )
              goto LABEL_23;
          }
          else
          {
            v8 = v5 + 16;
            if ( !sub_3ED680((__int64)qword_1C7F2C0, a1[83] + (i << 6), v5 + 16) )
              goto LABEL_12;
            if ( !sub_3ED680((__int64)qword_1C7F2C0, v6 + 32, v5 + 48) )
            {
              sub_9D85F0(a1, i, v5 + 16);
              goto LABEL_13;
            }
          }
LABEL_7:
          if ( v2 == ++i )
            return;
        }
        if ( !v7 )
        {
          if ( (v4 & 0x40) != 0 && ((*(_BYTE *)(v6 + 20) & 1) != 0 || *(_DWORD *)(v6 + 16) != 1 || *(_DWORD *)(v6 + 32)) )
          {
            sub_9A9130((__int64)v9, a1[83] + (i << 6));
            sub_894960((__int64)v10, (__int64)v9);
            sub_25A130(v9);
            sub_9D85F0(a1, i, (__int64)v10);
            sub_25A130(v11);
            sub_25A130(v10);
          }
          goto LABEL_7;
        }
        v8 = v7 + 16;
        if ( sub_9B0850(a1[83] + (i << 6), v8) )
          goto LABEL_7;
LABEL_12:
        sub_9D85F0(a1, i, v8);
LABEL_13:
        ;
      }
    }
  }
}

