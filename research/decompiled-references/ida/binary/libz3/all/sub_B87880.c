void __fastcall sub_B87880(_QWORD *a1, unsigned int a2, unsigned int **a3)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rax
  unsigned int *v7; // rdx
  unsigned int *v8; // rax
  unsigned int *v9; // r12
  unsigned int *v10; // r14
  unsigned int *v11; // r13
  __int64 v12; // rdx
  void *v13; // rdi
  int v14; // ecx
  int v15; // edx
  __int64 v16; // rdx
  unsigned int v17; // edx
  void *v18; // rbx
  __int64 v19; // rbx
  bool v20; // zf
  unsigned int v21; // edx
  void *v22; // [rsp+8h] [rbp-90h]
  void *v23; // [rsp+8h] [rbp-90h]
  __int64 v24; // [rsp+10h] [rbp-88h]
  unsigned int i; // [rsp+28h] [rbp-70h]
  unsigned int v27[4]; // [rsp+2Ch] [rbp-6Ch] BYREF
  unsigned int v28; // [rsp+3Ch] [rbp-5Ch] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v30[9]; // [rsp+50h] [rbp-48h] BYREF

  v4 = a1[3];
  v27[0] = a2;
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v6 = a1[19];
  if ( v6 )
    *(_DWORD *)(v6 - 4) = 0;
  sub_8C3430(a1 + 19, v5, 0xFFFFFFFF);
  *(_DWORD *)(a1[19] + 4LL * v27[0]) = 0;
  sub_B76360(a3, v27);
  v7 = *a3;
  v29[0] = 0;
  v29[1] = 0;
  v30[0] = 1;
  v30[1] = 0;
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
            v11 = (unsigned int *)(a1[5] + 56LL * *v10);
            if ( *((_BYTE *)v11 + 52) )
            {
              v12 = a1[3] + 32LL * *v11;
              v13 = qword_1C7F2C0;
              if ( (*(_BYTE *)(v12 + 4) & 1) != 0 )
              {
                v24 = a1[3] + 32LL * *v11;
                v22 = qword_1C7F2C0;
                sub_182C690(qword_1C7F2C0, v29, v12);
                v12 = v24;
                v13 = v22;
              }
              else
              {
                v14 = *(_DWORD *)v12;
                BYTE4(v29[0]) &= ~1u;
                LODWORD(v29[0]) = v14;
              }
              if ( (*(_BYTE *)(v12 + 20) & 1) != 0 )
              {
                sub_182C690(v13, v30, v12 + 16);
              }
              else
              {
                v15 = *(_DWORD *)(v12 + 16);
                BYTE4(v30[0]) &= ~1u;
                LODWORD(v30[0]) = v15;
              }
              v16 = a1[3] + 32LL * v11[1];
              if ( (v30[0] & 0x100000000LL) != 0
                || LODWORD(v30[0]) != 1
                || (*(_BYTE *)(v16 + 20) & 1) != 0
                || *(_DWORD *)(v16 + 16) != 1 )
              {
                sub_1852000(qword_1C7F2C0, v29, v16);
              }
              else
              {
                v23 = qword_1C7F2C0;
                sub_1832A70(qword_1C7F2C0, v29, v16);
                sub_182CBA0(v23, v30);
                BYTE4(v30[0]) &= ~1u;
                LODWORD(v30[0]) = 1;
              }
              v17 = v11[2];
              v18 = qword_1C7F2C0;
              if ( v17 )
              {
                if ( LODWORD(v29[0]) )
                {
                  if ( (v30[0] & 0x100000000LL) != 0 || LODWORD(v30[0]) != 1 || (v11[7] & 1) != 0 || v11[6] != 1 )
                  {
                    sub_1851D20(qword_1C7F2C0, v29, v11 + 2, v29);
                  }
                  else
                  {
                    sub_1831A80(qword_1C7F2C0, v29, v11 + 2, v29);
                    sub_182CBA0(v18, v30);
                    BYTE4(v30[0]) &= ~1u;
                    LODWORD(v30[0]) = 1;
                  }
                }
                else
                {
                  if ( (v11[3] & 1) != 0 )
                  {
                    sub_182C690(qword_1C7F2C0, v29, v11 + 2);
                  }
                  else
                  {
                    BYTE4(v29[0]) &= ~1u;
                    LODWORD(v29[0]) = v17;
                  }
                  if ( (v11[7] & 1) != 0 )
                  {
                    sub_182C690(v18, v30, v11 + 6);
                  }
                  else
                  {
                    v21 = v11[6];
                    BYTE4(v30[0]) &= ~1u;
                    LODWORD(v30[0]) = v21;
                  }
                }
              }
              else
              {
                if ( (v29[0] & 0x100000000LL) != 0 )
                  sub_182C690(qword_1C7F2C0, v29, v29);
                else
                  BYTE4(v29[0]) &= ~1u;
                if ( (v30[0] & 0x100000000LL) != 0 )
                  sub_182C690(v18, v30, v30);
                else
                  BYTE4(v30[0]) &= ~1u;
              }
              if ( !LODWORD(v29[0]) )
              {
                v19 = v11[1];
                v20 = *(_DWORD *)(a1[19] + 4 * v19) == -1;
                v28 = v11[1];
                if ( v20 )
                  break;
              }
            }
            if ( v9 == ++v10 )
              goto LABEL_27;
          }
          sub_B76360(a3, &v28);
          ++v10;
          *(_DWORD *)(a1[19] + 4 * v19) = 0;
        }
        while ( v9 != v10 );
LABEL_27:
        v7 = *a3;
      }
    }
  }
  sub_25A130((char *)v29);
}

