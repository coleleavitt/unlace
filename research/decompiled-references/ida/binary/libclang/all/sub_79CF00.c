char __fastcall sub_79CF00(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  char v6; // al
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned int *v9; // r9
  __int64 v10; // r8
  int *v11; // rcx
  int v12; // edi
  unsigned int v13; // eax
  __int64 *v14; // rsi
  __int64 v15; // r10
  __int64 v16; // r10
  signed __int64 v17; // r8
  __int64 v18; // r11
  __int64 v19; // rdi
  __int64 v20; // rdi
  signed __int64 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 *v26; // rdx
  unsigned int v27; // eax
  unsigned __int64 v28; // r10
  __int64 v29; // rdi
  unsigned __int64 *v30; // r10
  signed __int64 *v31; // rdx
  _QWORD *v32; // rax
  unsigned int v33; // eax
  _QWORD *v34; // rax
  int v35; // esi
  __int64 v36; // rsi
  int v37; // r11d
  _QWORD v39[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 == a2 )
  {
    if ( *(_QWORD *)(a1 + 24) == a2 )
      *(_OWORD *)(a1 + 16) = 0;
    else
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    do
    {
      v4 = *(_QWORD *)(v3 + 8);
      v5 = v3;
      v3 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( (v4 & 0xFFFFFFFFFFFFFFF8LL) != a2 );
    *(_QWORD *)(v5 + 8) = v4 & 7 | *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(a1 + 24) == a2 )
      *(_QWORD *)(a1 + 24) = v5;
  }
  v6 = *(_BYTE *)(a2 + 28);
  *(_QWORD *)(a2 + 8) &= 7uLL;
  LODWORD(v7) = (v6 & 0x7F) - 16;
  if ( (unsigned int)v7 <= 0x3E )
  {
    LOBYTE(v7) = sub_792DE0(a2);
    if ( !(_BYTE)v7 )
    {
      v7 = *(_QWORD *)(a2 + 40);
      if ( v7 > 7 || (_DWORD)v7 )
      {
        v8 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
          v8 = *(_QWORD *)v8;
        while ( 1 )
        {
          v9 = *(unsigned int **)sub_79CC40(v8);
          if ( !v9 )
            goto LABEL_23;
          v10 = *(_QWORD *)(a2 + 40);
          if ( (*(_BYTE *)v9 & 1) != 0 )
          {
            v11 = (int *)(v9 + 2);
            v12 = 3;
          }
          else
          {
            v27 = v9[4];
            v11 = *((int **)v9 + 1);
            if ( !v27 )
              goto LABEL_59;
            v12 = v27 - 1;
          }
          v13 = v12 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
          v14 = (__int64 *)&v11[4 * v13];
          v15 = *v14;
          if ( *v14 == v10 )
            goto LABEL_15;
          v35 = 1;
          while ( v15 != -1 )
          {
            v37 = v35 + 1;
            v13 = v12 & (v13 + v35);
            v14 = (__int64 *)&v11[4 * v13];
            v15 = *v14;
            if ( v10 == *v14 )
              goto LABEL_15;
            v35 = v37;
          }
          v36 = 16;
          if ( (*(_BYTE *)v9 & 1) == 0 )
          {
            v27 = v9[4];
LABEL_59:
            v36 = 4LL * v27;
          }
          v14 = (__int64 *)&v11[v36];
LABEL_15:
          v16 = v14[1];
          v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (v16 & 0xFFFFFFFFFFFFFFFCLL) <= 7 )
            goto LABEL_48;
          v18 = (v17 >> 2) & 1;
          if ( ((v17 >> 2) & 1) != 0 )
          {
            if ( (_BYTE)v18 )
            {
              v28 = v16 & 0xFFFFFFFFFFFFFFF8LL;
              v29 = *(_QWORD *)v28;
              if ( (*(_BYTE *)(*(_QWORD *)v28 + 28LL) & 0x7F) != 0 )
                v20 = *(_QWORD *)(sub_793320(v29) + 88);
              else
                v20 = *(_QWORD *)(v29 + 88);
              v39[0] = 0;
LABEL_44:
              v30 = nullptr;
              v31 = v39;
              while ( 1 )
              {
                while ( 1 )
                {
                  v32 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
                  if ( (v17 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                  {
                    *v31 = v17;
                    v22 = v39[0];
                    v23 = v14[1];
                    goto LABEL_22;
                  }
                  if ( a2 == *v32 )
                    break;
                  *v31 = v17;
                  v17 = v32[1];
                  v21 = v32 + 1;
                  if ( (v17 & 4) == 0 )
                  {
                    v30 = (unsigned __int64 *)v31;
                    if ( a2 != (v17 & 0xFFFFFFFFFFFFFFF8LL) )
                      goto LABEL_21;
                    goto LABEL_52;
                  }
                  v30 = (unsigned __int64 *)v31;
                  v31 = v32 + 1;
                }
                v17 = v32[1];
                v32[1] = *(_QWORD *)(v20 + 17336) | 4LL;
                *(_QWORD *)(v20 + 17336) = v32;
                if ( (v17 & 4) == 0 )
                {
                  if ( a2 != (v17 & 0xFFFFFFFFFFFFFFF8LL) )
                  {
                    v21 = v31;
                    goto LABEL_21;
                  }
                  if ( !v30 )
                  {
LABEL_53:
                    v22 = v39[0];
                    v23 = v14[1];
                    goto LABEL_22;
                  }
LABEL_52:
                  v34 = (_QWORD *)(*v30 & 0xFFFFFFFFFFFFFFF8LL);
                  *v30 = *v34 & 0xFFFFFFFFFFFFFFFBLL;
                  v34[1] = *(_QWORD *)(v20 + 17336) | 4LL;
                  *(_QWORD *)(v20 + 17336) = v34;
                  goto LABEL_53;
                }
              }
            }
            v39[0] = 0;
          }
          else
          {
            v19 = v16 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_BYTE *)((v16 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F) != 0 )
              v19 = sub_793320(v19);
            v39[0] = 0;
            v20 = *(_QWORD *)(v19 + 88);
            if ( (_BYTE)v18 )
              goto LABEL_44;
          }
          v21 = v39;
          if ( a2 == (v16 & 0xFFFFFFFFFFFFFFF8LL) )
          {
            v14[1] = v16 & 3;
LABEL_48:
            *v14 = -2;
            v33 = *v9;
            ++v9[1];
            *v9 = (2 * (v33 >> 1) - 2) | v33 & 1;
            goto LABEL_23;
          }
LABEL_21:
          *v21 = v17;
          v22 = v39[0];
          v23 = v14[1];
LABEL_22:
          v24 = v22 | v23 & 3;
          v14[1] = v24;
          if ( (v24 & 0xFFFFFFFFFFFFFFFCLL) <= 7 )
            goto LABEL_48;
LABEL_23:
          v7 = *(_BYTE *)(v8 + 8) & 0x7F;
          if ( (_BYTE)v7 == 60 )
          {
            if ( *(char *)(v8 + 12) < 0 )
              return v7;
          }
          else
          {
            if ( (unsigned __int8)v7 > 0x17u )
              return v7;
            v25 = 8388688;
            if ( !_bittest64(&v25, v7) )
              return v7;
          }
          v7 = *(_QWORD *)(sub_79A2E0(v8) + 16);
          v26 = (unsigned __int64 *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
          v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v7 & 4) != 0 )
          {
            v8 = *v26;
            if ( !*v26 )
              return v7;
          }
          else if ( !v26 )
          {
            return v7;
          }
        }
      }
    }
  }
  return v7;
}

