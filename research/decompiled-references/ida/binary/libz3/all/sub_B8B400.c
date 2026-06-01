void __fastcall sub_B8B400(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v5; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int *v10; // r8
  unsigned int *v11; // r13
  unsigned int *v12; // rax
  unsigned int *v13; // r15
  void *v14; // rdi
  __int64 v15; // rcx
  int v16; // edx
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  int *v24; // rdx
  int v25; // r9d
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rax
  int v29; // r9d
  int v30; // esi
  __int64 v31; // rdx
  unsigned int v32; // ecx
  int v33; // edx
  _DWORD *v34; // rax
  int *v35; // rcx
  int v36; // eax
  unsigned int *v37; // [rsp+0h] [rbp-88h]
  __int64 v38; // [rsp+8h] [rbp-80h]
  __int64 v39; // [rsp+8h] [rbp-80h]
  void *v40; // [rsp+8h] [rbp-80h]
  void *v41; // [rsp+8h] [rbp-80h]
  __int64 v42; // [rsp+10h] [rbp-78h]
  __int64 v43; // [rsp+10h] [rbp-78h]
  unsigned int v44; // [rsp+1Ch] [rbp-6Ch] BYREF
  _QWORD v45[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v46[2]; // [rsp+30h] [rbp-58h] BYREF
  int v47; // [rsp+40h] [rbp-48h]

  v5 = a1 + 168;
  v7 = *(_DWORD *)(v5 + 8);
  v8 = *(_QWORD *)(v5 - 16);
  v44 = a2;
  *(_DWORD *)(v8 + 4LL * a2) = v7;
  *(_DWORD *)(v5 + 8) = v7 + 1;
  *(_BYTE *)(*(_QWORD *)(v5 - 24) + a2) = 1;
  sub_B76360((unsigned int **)v5, &v44);
  sub_B76360((unsigned int **)(a1 + 160), &v44);
  v9 = *(_QWORD *)(a1 + 48);
  v45[0] = 0;
  v46[0] = 1;
  v10 = *(unsigned int **)(v9 + 8LL * a2);
  v47 = 0;
  v45[1] = 0;
  v46[1] = 0;
  if ( v10 )
  {
    v11 = v10;
    v37 = &v10[*(v10 - 1)];
    if ( v10 != v37 )
    {
      do
      {
        v12 = (unsigned int *)(*(_QWORD *)(a1 + 40) + ((unsigned __int64)*v11 << 6));
        v13 = v12;
        if ( *((_BYTE *)v12 + 60) )
        {
          v14 = qword_1C7F2C0;
          v15 = *(_QWORD *)(a1 + 24) + 40LL * *v12;
          if ( (*(_BYTE *)(v15 + 4) & 1) != 0 )
          {
            v42 = *(_QWORD *)(a1 + 24) + 40LL * *v12;
            v40 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v45, v15);
            v15 = v42;
            v14 = v40;
          }
          else
          {
            v16 = *(_DWORD *)v15;
            BYTE4(v45[0]) &= ~1u;
            LODWORD(v45[0]) = v16;
          }
          if ( (*(_BYTE *)(v15 + 20) & 1) != 0 )
          {
            v39 = v15;
            sub_182C690(v14, v46, v15 + 16);
            v15 = v39;
          }
          else
          {
            v17 = *(_DWORD *)(v15 + 16);
            BYTE4(v46[0]) &= ~1u;
            LODWORD(v46[0]) = v17;
          }
          v47 = *(_DWORD *)(v15 + 32);
          v18 = *(_QWORD *)(a1 + 24) + 40LL * v13[1];
          if ( (v46[0] & 0x100000000LL) != 0
            || LODWORD(v46[0]) != 1
            || (*(_BYTE *)(v18 + 20) & 1) != 0
            || *(_DWORD *)(v18 + 16) != 1 )
          {
            v38 = *(_QWORD *)(a1 + 24) + 40LL * v13[1];
            sub_1852000(qword_1C7F2C0, v45, v18);
            v19 = v38;
          }
          else
          {
            v43 = *(_QWORD *)(a1 + 24) + 40LL * v13[1];
            v41 = qword_1C7F2C0;
            sub_1832A70(qword_1C7F2C0, v45, v18);
            sub_182CBA0(v41, v46);
            BYTE4(v46[0]) &= ~1u;
            v19 = v43;
            LODWORD(v46[0]) = 1;
          }
          v47 -= *(_DWORD *)(v19 + 32);
          sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v45, (__int64)(v13 + 2), (__int64)v45);
          v47 += v13[10];
          if ( !(LODWORD(v45[0]) | v47) )
          {
            v22 = v13[1];
            v23 = *(_QWORD *)(a1 + 152);
            v24 = (int *)(v23 + 4 * v22);
            v25 = *v24;
            if ( *v24 == -1 )
            {
              sub_B8B400(a1, (unsigned int)v22, a3);
            }
            else if ( *(_BYTE *)(*(_QWORD *)(a1 + 144) + v22) )
            {
              v26 = *(_QWORD *)(a1 + 160);
              if ( v26 )
              {
                v27 = *(_DWORD *)(v26 - 4);
                v28 = (unsigned int)(v27 - 1);
                if ( v25 < *(_DWORD *)(v23 + 4LL * *(unsigned int *)(v26 + 4 * v28)) )
                {
                  while ( 1 )
                  {
                    v29 = v27;
                    *(_DWORD *)(v26 - 4) = v28;
                    v27 = v28;
                    if ( *v24 >= *(_DWORD *)(v23 + 4LL * *(unsigned int *)(v26 + 4LL * (unsigned int)(v29 - 2))) )
                      break;
                    LODWORD(v28) = v28 - 1;
                  }
                }
              }
              else
              {
                v35 = (int *)(v23 + 4LL * MEMORY[0x3FFFFFFFC]);
                if ( v25 < *v35 )
                {
                  v36 = MEMORY[0xFFFFFFFFFFFFFFFC];
                  do
                    MEMORY[0xFFFFFFFFFFFFFFFC] = --v36;
                  while ( *v35 > *v24 );
                }
              }
            }
          }
        }
        ++v11;
      }
      while ( v37 != v11 );
    }
  }
  v20 = *(_QWORD *)(a1 + 160);
  v21 = 0x3FFFFFFFCLL;
  if ( v20 )
    v21 = 4LL * (unsigned int)(*(_DWORD *)(v20 - 4) - 1);
  if ( a2 == *(_DWORD *)(v20 + v21) )
  {
    v30 = 0;
    do
    {
      v31 = *(_QWORD *)(a1 + 168);
      ++v30;
      v32 = *(_DWORD *)(v31 + 4LL * (unsigned int)--*(_DWORD *)(v31 - 4));
      *(_BYTE *)(*(_QWORD *)(a1 + 144) + v32) = 0;
      v33 = *(_DWORD *)(a1 + 180);
      v34 = (_DWORD *)(*a3 + 4LL * v32);
      *v34 = v33;
    }
    while ( a2 != v32 );
    if ( v30 == 1 )
      *v34 = -1;
    else
      *(_DWORD *)(a1 + 180) = v33 + 1;
    --*(_DWORD *)(*(_QWORD *)(a1 + 160) - 4LL);
  }
  sub_25A130((char *)v45);
}

