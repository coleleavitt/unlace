__int64 __fastcall sub_7C8E40(__int64 *a1, char **a2, __int64 a3)
{
  char *v3; // rbx
  unsigned int v4; // r14d
  __int64 v7; // r13
  __int64 v8; // rax
  char *v9; // r14
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rax
  char *v13; // rsi
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // r14
  unsigned int v19; // eax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // r15
  int v24; // [rsp+0h] [rbp-78h]
  __int64 v25; // [rsp+8h] [rbp-70h]
  int v26; // [rsp+8h] [rbp-70h]
  unsigned int v27; // [rsp+24h] [rbp-54h] BYREF
  char *v28; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v29[9]; // [rsp+30h] [rbp-48h] BYREF

  v29[1] = __readfsqword(0x28u);
  v28 = *a2;
  v3 = &v28[a3];
  if ( !__CFADD__(a3, v28) && sub_7BFDB0(&v27, (unsigned __int64 *)&v28) )
  {
    v7 = v27;
    sub_7C8700(a1, v27);
    if ( (_DWORD)v7 )
    {
      v8 = 8 * v7;
      v9 = v28;
      v10 = 0;
      v11 = 0;
      v25 = v8;
      while ( 1 )
      {
        v29[0] = v9;
        v12 = unpack_dq(v29, v3);
        v13 = v9;
        v9 = (char *)v29[0];
        v28 = (char *)v29[0];
        if ( (unsigned __int64)v13 >= v29[0] )
          break;
        v11 += v12;
        *(_QWORD *)(*a1 + v10) = v11;
        v10 += 8;
        if ( v10 == v25 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( sub_7BFDB0(v29, (unsigned __int64 *)&v28) )
      {
        v14 = LODWORD(v29[0]);
        v15 = v29[0];
        if ( LODWORD(v29[0]) != a1[4] )
        {
          v26 = v29[0];
          sub_7BB3C0(a1 + 3, LODWORD(v29[0]));
          v15 = v26;
        }
        if ( v15 )
        {
          v16 = 3 * v14;
          v17 = 0;
          v18 = 8 * v16;
          while ( (unsigned __int8)sub_7BE9B0((__int64 *)(v17 + a1[3]), (const void **)&v28, (unsigned __int64)v3) )
          {
            v17 += 24;
            if ( v18 == v17 )
              goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          LOBYTE(v19) = sub_7BFDB0(v29, (unsigned __int64 *)&v28);
          v4 = v19;
          if ( (_BYTE)v19 )
          {
            v20 = LODWORD(v29[0]);
            v24 = v29[0];
            sub_7C8BC0(a1 + 6, LODWORD(v29[0]));
            if ( !v24 )
            {
LABEL_21:
              *a2 = v28;
              return v4;
            }
            v21 = 7 * v20;
            v22 = 0;
            v23 = 8 * v21;
            while ( (unsigned __int8)sub_7C8780(v22 + a1[6], (unsigned __int64 *)&v28, v3 - v28) )
            {
              v22 += 56;
              if ( v23 == v22 )
                goto LABEL_21;
            }
          }
        }
      }
    }
  }
  return 0;
}

