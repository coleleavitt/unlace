__int64 __fastcall sub_7EFB00(__int64 a1, char **a2, __int64 a3)
{
  unsigned int v3; // r12d
  char *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned int v9; // eax
  __int64 v10; // r13
  char *v11; // r14
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rcx
  char *v15; // rax
  int v16; // [rsp+8h] [rbp-70h]
  __int64 v17; // [rsp+8h] [rbp-70h]
  unsigned int v18; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+18h] [rbp-60h]
  unsigned int v20; // [rsp+24h] [rbp-54h] BYREF
  char *v21; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v22[9]; // [rsp+30h] [rbp-48h] BYREF

  v22[1] = __readfsqword(0x28u);
  v21 = *a2;
  if ( !__CFADD__(a3, v21) )
  {
    v5 = &v21[a3];
    if ( sub_7E30F0((_DWORD *)(a1 + 12), (unsigned __int64 *)&v21)
      && (unsigned __int8)sub_7E1CF0((__int64 *)(a1 + 16), (const void **)&v21, (unsigned __int64)v5)
      && (unsigned __int8)sub_7E56B0(a1 + 40, (const void **)&v21, v5 - v21)
      && (unsigned __int8)sub_7E1CF0((__int64 *)(a1 + 80), (const void **)&v21, (unsigned __int64)v5)
      && sub_7E30F0(v22, (unsigned __int64 *)&v21) )
    {
      v6 = LODWORD(v22[0]);
      v16 = v22[0];
      sub_7EF750((__int64 *)(a1 + 104), LODWORD(v22[0]));
      if ( v16 )
      {
        v7 = 88 * v6;
        v8 = 0;
        v17 = v7;
        while ( (unsigned __int8)sub_7E5730(v8 + *(_QWORD *)(a1 + 104), (const void **)&v21, v5 - v21) )
        {
          v8 += 88;
          if ( v17 == v8 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        LOBYTE(v9) = sub_7E30F0(&v20, (unsigned __int64 *)&v21);
        v3 = v9;
        if ( (_BYTE)v9 )
        {
          v10 = v20;
          v18 = v20;
          sub_44D2A0((__int64 *)(a1 + 128), v20);
          v11 = v21;
          if ( !v18 )
          {
LABEL_18:
            *a2 = v11;
            return v3;
          }
          v12 = 8 * v10;
          v13 = 0;
          v19 = v12;
          while ( 1 )
          {
            v14 = *(_QWORD *)(a1 + 128);
            v22[0] = v11;
            *(_QWORD *)(v13 + v14) = unpack_dq(v22) - 1;
            v15 = v11;
            v11 = (char *)v22[0];
            v21 = (char *)v22[0];
            if ( (unsigned __int64)v15 >= v22[0] )
              break;
            v13 += 8;
            if ( v19 == v13 )
              goto LABEL_18;
          }
        }
      }
    }
  }
  return 0;
}
