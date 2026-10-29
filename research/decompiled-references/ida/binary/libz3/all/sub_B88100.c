void __fastcall sub_B88100(_QWORD *a1, unsigned int a2, unsigned int **a3)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rax
  unsigned int *v7; // rax
  unsigned int *v8; // r9
  unsigned int *v9; // r12
  unsigned int *v10; // r14
  unsigned int *v11; // rax
  unsigned int *v12; // r13
  __int64 v13; // rdx
  void *v14; // rdi
  int *v15; // rbx
  int v16; // edx
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned int v20; // edx
  void *v21; // rbx
  __int64 v22; // rbx
  bool v23; // zf
  unsigned int v24; // edx
  void *v25; // [rsp+0h] [rbp-98h]
  void *v26; // [rsp+0h] [rbp-98h]
  unsigned int i; // [rsp+18h] [rbp-80h]
  unsigned int v29[4]; // [rsp+1Ch] [rbp-7Ch] BYREF
  unsigned int v30; // [rsp+2Ch] [rbp-6Ch] BYREF
  _QWORD v31[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v32[2]; // [rsp+40h] [rbp-58h] BYREF
  int v33; // [rsp+50h] [rbp-48h]

  v4 = a1[3];
  v29[0] = a2;
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v6 = a1[19];
  if ( v6 )
    *(_DWORD *)(v6 - 4) = 0;
  sub_8C3430(a1 + 19, v5, 0xFFFFFFFF);
  *(_DWORD *)(a1[19] + 4LL * v29[0]) = 0;
  sub_B76360(a3, v29);
  v7 = *a3;
  v31[0] = 0;
  v31[1] = 0;
  v32[0] = 1;
  v32[1] = 0;
  v33 = 0;
  for ( i = 0; v7; ++i )
  {
    if ( i >= *(v7 - 1) )
      break;
    v8 = *(unsigned int **)(a1[6] + 8LL * v7[i]);
    if ( v8 )
    {
      v9 = &v8[*(v8 - 1)];
      if ( v9 != v8 )
      {
        v10 = *(unsigned int **)(a1[6] + 8LL * v7[i]);
        do
        {
          while ( 1 )
          {
            v11 = (unsigned int *)(a1[5] + ((unsigned __int64)*v10 << 6));
            v12 = v11;
            if ( *((_BYTE *)v11 + 60) )
            {
              v13 = a1[3];
              v14 = qword_1C7F2C0;
              v15 = (int *)(v13 + 40LL * *v11);
              if ( (v15[1] & 1) != 0 )
              {
                v25 = qword_1C7F2C0;
                sub_182C690(qword_1C7F2C0, v31, v13 + 40LL * *v11);
                v14 = v25;
              }
              else
              {
                v16 = *v15;
                BYTE4(v31[0]) &= ~1u;
                LODWORD(v31[0]) = v16;
              }
              if ( (v15[5] & 1) != 0 )
              {
                sub_182C690(v14, v32, v15 + 4);
              }
              else
              {
                v17 = v15[4];
                BYTE4(v32[0]) &= ~1u;
                LODWORD(v32[0]) = v17;
              }
              v33 = v15[8];
              v18 = a1[3];
              v19 = v18 + 40LL * v12[1];
              if ( (v32[0] & 0x100000000LL) != 0
                || LODWORD(v32[0]) != 1
                || (*(_BYTE *)(v19 + 20) & 1) != 0
                || *(_DWORD *)(v19 + 16) != 1 )
              {
                sub_1852000(qword_1C7F2C0, v31, v18 + 40LL * v12[1]);
              }
              else
              {
                v26 = qword_1C7F2C0;
                sub_1832A70(qword_1C7F2C0, v31, v18 + 40LL * v12[1]);
                sub_182CBA0(v26, v32);
                BYTE4(v32[0]) &= ~1u;
                LODWORD(v32[0]) = 1;
              }
              v33 -= *(_DWORD *)(v19 + 32);
              v20 = v12[2];
              v21 = qword_1C7F2C0;
              if ( v20 )
              {
                if ( LODWORD(v31[0]) )
                {
                  if ( (v32[0] & 0x100000000LL) != 0 || LODWORD(v32[0]) != 1 || (v12[7] & 1) != 0 || v12[6] != 1 )
                  {
                    sub_1851D20(qword_1C7F2C0, v31, v12 + 2, v31);
                  }
                  else
                  {
                    sub_1831A80(qword_1C7F2C0, v31, v12 + 2, v31);
                    sub_182CBA0(v21, v32);
                    BYTE4(v32[0]) &= ~1u;
                    LODWORD(v32[0]) = 1;
                  }
                }
                else
                {
                  if ( (v12[3] & 1) != 0 )
                  {
                    sub_182C690(qword_1C7F2C0, v31, v12 + 2);
                  }
                  else
                  {
                    BYTE4(v31[0]) &= ~1u;
                    LODWORD(v31[0]) = v20;
                  }
                  if ( (v12[7] & 1) != 0 )
                  {
                    sub_182C690(v21, v32, v12 + 6);
                  }
                  else
                  {
                    v24 = v12[6];
                    BYTE4(v32[0]) &= ~1u;
                    LODWORD(v32[0]) = v24;
                  }
                }
              }
              else
              {
                if ( (v31[0] & 0x100000000LL) != 0 )
                  sub_182C690(qword_1C7F2C0, v31, v31);
                else
                  BYTE4(v31[0]) &= ~1u;
                if ( (v32[0] & 0x100000000LL) != 0 )
                  sub_182C690(v21, v32, v32);
                else
                  BYTE4(v32[0]) &= ~1u;
              }
              v33 += v12[10];
              if ( !(LODWORD(v31[0]) | v33) )
              {
                v22 = v12[1];
                v23 = *(_DWORD *)(a1[19] + 4 * v22) == -1;
                v30 = v12[1];
                if ( v23 )
                  break;
              }
            }
            if ( v9 == ++v10 )
              goto LABEL_27;
          }
          sub_B76360(a3, &v30);
          ++v10;
          *(_DWORD *)(a1[19] + 4 * v22) = 0;
        }
        while ( v9 != v10 );
LABEL_27:
        v7 = *a3;
      }
    }
  }
  sub_25A130((char *)v31);
}

