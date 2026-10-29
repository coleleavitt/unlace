__int64 __fastcall sub_B893C0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int *v9; // rax
  unsigned int *v10; // r15
  unsigned int *v11; // r12
  void *v12; // rdi
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rsi
  int *v19; // rcx
  int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // rax
  void *v23; // rbx
  int v25; // esi
  __int64 v26; // rdx
  unsigned int v27; // ecx
  int v28; // edx
  _DWORD *v29; // rax
  __int64 v30; // rdi
  int v31; // r8d
  __int64 v32; // rdx
  int v33; // r9d
  int *v34; // rsi
  int v35; // edx
  unsigned int *v36; // [rsp+0h] [rbp-78h]
  void *v37; // [rsp+8h] [rbp-70h]
  __int64 v38; // [rsp+10h] [rbp-68h]
  unsigned int v40; // [rsp+1Ch] [rbp-5Ch] BYREF
  _QWORD v41[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v42[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = a1 + 168;
  v6 = *(_DWORD *)(v5 + 8);
  v7 = *(_QWORD *)(v5 - 16);
  v40 = a2;
  *(_DWORD *)(v7 + 4LL * a2) = v6;
  *(_DWORD *)(v5 + 8) = v6 + 1;
  *(_BYTE *)(*(_QWORD *)(v5 - 24) + a2) = 1;
  sub_B76360((unsigned int **)v5, &v40);
  sub_B76360((unsigned int **)(a1 + 160), &v40);
  v8 = *(_QWORD *)(a1 + 48);
  v41[0] = 0;
  v42[0] = 1;
  v41[1] = 0;
  v9 = *(unsigned int **)(v8 + 8LL * a2);
  v42[1] = 0;
  if ( v9 )
  {
    v36 = &v9[*(v9 - 1)];
    if ( v9 != v36 )
    {
      v10 = v9;
      do
      {
        v11 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 56LL * *v10);
        if ( *((_BYTE *)v11 + 52) )
        {
          v12 = qword_1C7F2C0;
          v13 = *(_QWORD *)(a1 + 24) + 32LL * *v11;
          if ( (*(_BYTE *)(v13 + 4) & 1) != 0 )
          {
            v38 = *(_QWORD *)(a1 + 24) + 32LL * *v11;
            sub_182C690(qword_1C7F2C0, v41, v13);
            v13 = v38;
          }
          else
          {
            v14 = *(_DWORD *)v13;
            BYTE4(v41[0]) &= ~1u;
            LODWORD(v41[0]) = v14;
          }
          if ( (*(_BYTE *)(v13 + 20) & 1) != 0 )
          {
            sub_182C690(v12, v42, v13 + 16);
          }
          else
          {
            v15 = *(_DWORD *)(v13 + 16);
            BYTE4(v42[0]) &= ~1u;
            LODWORD(v42[0]) = v15;
          }
          v16 = *(_QWORD *)(a1 + 24) + 32LL * v11[1];
          if ( (v42[0] & 0x100000000LL) != 0
            || LODWORD(v42[0]) != 1
            || (*(_BYTE *)(v16 + 20) & 1) != 0
            || *(_DWORD *)(v16 + 16) != 1 )
          {
            sub_1852000(qword_1C7F2C0, v41, v16);
          }
          else
          {
            v37 = qword_1C7F2C0;
            sub_1832A70(qword_1C7F2C0, v41, v16);
            sub_182CBA0(v37, v42);
            BYTE4(v42[0]) &= ~1u;
            LODWORD(v42[0]) = 1;
          }
          sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v41, (__int64)(v11 + 2), (__int64)v41);
          if ( !LODWORD(v41[0]) )
          {
            v17 = v11[1];
            v18 = *(_QWORD *)(a1 + 152);
            v19 = (int *)(v18 + 4 * v17);
            v20 = *v19;
            if ( *v19 == -1 )
            {
              sub_B893C0(a1, v11[1], a3);
            }
            else if ( *(_BYTE *)(*(_QWORD *)(a1 + 144) + v17) )
            {
              v30 = *(_QWORD *)(a1 + 160);
              if ( v30 )
              {
                v31 = *(_DWORD *)(v30 - 4);
                v32 = (unsigned int)(v31 - 1);
                if ( v20 < *(_DWORD *)(v18 + 4LL * *(unsigned int *)(v30 + 4 * v32)) )
                {
                  while ( 1 )
                  {
                    v33 = v31;
                    *(_DWORD *)(v30 - 4) = v32;
                    v31 = v32;
                    if ( *v19 >= *(_DWORD *)(v18 + 4LL * *(unsigned int *)(v30 + 4LL * (unsigned int)(v33 - 2))) )
                      break;
                    LODWORD(v32) = v32 - 1;
                  }
                }
              }
              else
              {
                v34 = (int *)(v18 + 4LL * MEMORY[0x3FFFFFFFC]);
                if ( v20 < *v34 )
                {
                  v35 = MEMORY[0xFFFFFFFFFFFFFFFC];
                  do
                    MEMORY[0xFFFFFFFFFFFFFFFC] = --v35;
                  while ( *v34 > *v19 );
                }
              }
            }
          }
        }
        ++v10;
      }
      while ( v36 != v10 );
    }
  }
  v21 = *(_QWORD *)(a1 + 160);
  v22 = 0x3FFFFFFFCLL;
  if ( v21 )
    v22 = 4LL * (unsigned int)(*(_DWORD *)(v21 - 4) - 1);
  if ( a2 == *(_DWORD *)(v21 + v22) )
  {
    v25 = 0;
    do
    {
      v26 = *(_QWORD *)(a1 + 168);
      ++v25;
      v27 = *(_DWORD *)(v26 + 4LL * (unsigned int)--*(_DWORD *)(v26 - 4));
      *(_BYTE *)(*(_QWORD *)(a1 + 144) + v27) = 0;
      v28 = *(_DWORD *)(a1 + 180);
      v29 = (_DWORD *)(*a3 + 4LL * v27);
      *v29 = v28;
    }
    while ( a2 != v27 );
    if ( v25 == 1 )
      *v29 = -1;
    else
      *(_DWORD *)(a1 + 180) = v28 + 1;
    --*(_DWORD *)(*(_QWORD *)(a1 + 160) - 4LL);
  }
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v41);
  return sub_182CBA0(v23, v42);
}

