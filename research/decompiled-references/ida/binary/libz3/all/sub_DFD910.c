void __fastcall sub_DFD910(__int64 a1, __int64 a2)
{
  const char *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  const char *v8; // r9
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 *v13; // rax
  _DWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // edi
  unsigned int v18; // edx
  const char *v19; // r10
  __int64 *i; // rax
  __int64 v21; // rax
  unsigned int v22; // edx
  const char *v23; // r10
  __int64 *j; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // [rsp+8h] [rbp-60h]
  int v33; // [rsp+10h] [rbp-58h]
  unsigned int v34; // [rsp+1Ch] [rbp-4Ch]
  _BYTE v35[64]; // [rsp+28h] [rbp-40h] BYREF

  sub_17F9A60(v35, "model");
  v4 = "user_functions";
  if ( (unsigned __int8)sub_1859630(&qword_1C7F4C8, "user_functions", v35, 1) && !*(_BYTE *)(a1 + 193) )
  {
    v9 = *(_QWORD *)(a1 + 624);
    v10 = v9 + 24LL * *(unsigned int *)(a1 + 632);
    if ( v9 != v10 )
    {
      while ( *(_DWORD *)(v9 + 4) != 2 )
      {
        v9 += 24;
        if ( v10 == v9 )
          goto LABEL_21;
      }
      while ( v10 != v9 )
      {
        v11 = *(_QWORD *)(v9 + 16);
        if ( !v11 )
          BUG();
        v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v11 & 7) != 0 )
        {
          v13 = *(unsigned __int64 **)v12;
          v5 = *(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8);
          if ( *(_QWORD *)v12 == v5 )
          {
            v12 = *v13;
          }
          else
          {
            while ( 1 )
            {
              v12 = *v13;
              v4 = (const char *)v13;
              if ( *v13 > 1 )
                break;
              if ( (unsigned __int64 *)v5 == ++v13 )
              {
                v12 = *((_QWORD *)v4 + 1);
                break;
              }
            }
          }
        }
        v14 = *(_DWORD **)(v12 + 24);
        if ( !v14 || *v14 == -1 )
        {
          v16 = *(unsigned int *)(a2 + 32);
          v17 = *(_DWORD *)(v12 + 12);
          v4 = *(const char **)(a2 + 24);
          v18 = v16 - 1;
          v16 *= 24;
          v8 = &v4[v16];
          v5 = 24LL * (v17 & v18);
          v19 = &v4[v5];
          if ( v5 != v16 )
          {
            for ( i = (__int64 *)&v4[v5]; v8 != (const char *)i; i += 3 )
            {
              v5 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v5 + 12) == v17 && v12 == v5 )
                  goto LABEL_16;
              }
              else if ( !v5 )
              {
                goto LABEL_30;
              }
            }
          }
          for ( ; v19 != v4; v4 += 24 )
          {
            v26 = *(_QWORD *)v4;
            if ( *(_QWORD *)v4 > 1u )
            {
              if ( *(_DWORD *)(v26 + 12) == v17 && v12 == v26 )
                goto LABEL_16;
            }
            else if ( !v26 )
            {
              break;
            }
          }
LABEL_30:
          v21 = *(unsigned int *)(a2 + 56);
          v4 = *(const char **)(a2 + 48);
          v22 = v21 - 1;
          v21 *= 16;
          v8 = &v4[v21];
          v5 = 16LL * (v17 & v22);
          v23 = &v4[v5];
          if ( v5 != v21 )
          {
            for ( j = (__int64 *)&v4[v5]; v8 != (const char *)j; j += 2 )
            {
              v5 = *j;
              if ( (unsigned __int64)*j > 1 )
              {
                if ( *(_DWORD *)(v5 + 12) == v17 && v12 == v5 )
                  goto LABEL_16;
              }
              else if ( !v5 )
              {
                goto LABEL_37;
              }
            }
          }
          for ( ; v23 != v4; v4 += 16 )
          {
            v31 = *(_QWORD *)v4;
            if ( *(_QWORD *)v4 > 1u )
            {
              if ( *(_DWORD *)(v31 + 12) == v17 && v12 == v31 )
                goto LABEL_16;
            }
            else if ( !v31 )
            {
              break;
            }
          }
LABEL_37:
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, const char *))(*(_QWORD *)a2 + 40LL))(
                  a2,
                  *(_QWORD *)(v12 + 40),
                  v5,
                  v6,
                  v7,
                  v8);
          v33 = v25;
          if ( *(_DWORD *)(v12 + 32) )
          {
            v32 = sub_186B270(0x38u);
            v34 = *(_DWORD *)(v12 + 32);
            sub_DFBCB0(a1);
            sub_13478B0(v32, *(_QWORD *)(a1 + 296), v34);
            sub_1349280(v32, v33, v27, v28, v29, v30);
            LODWORD(v4) = v12;
            sub_135F980(a2, v12, v32);
          }
          else
          {
            LODWORD(v4) = v12;
            sub_135F9B0(a2, v12, v25);
          }
        }
LABEL_16:
        v15 = v9 + 24;
        if ( v10 == v9 + 24 )
          break;
        while ( 1 )
        {
          v9 = v15;
          if ( *(_DWORD *)(v15 + 4) == 2 )
            break;
          v15 += 24;
          if ( v10 == v15 )
            goto LABEL_21;
        }
      }
    }
LABEL_21:
    sub_1376780(a2, (_DWORD)v4, v5, v6, v7, (_DWORD)v8);
  }
  sub_18572D0(v35);
}

