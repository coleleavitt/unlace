void __fastcall sub_7CB740(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 i; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r14
  _QWORD *v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  char v21; // dl
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  char v26; // dl
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rdi
  _BYTE *v30; // rax
  int v31; // r14d
  int v32; // ecx
  __int64 v33; // rdi
  _WORD *v34; // rdx
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // rdi
  _BYTE *v38; // rax
  int v39; // [rsp+8h] [rbp-40h]
  __int64 v40; // [rsp+8h] [rbp-40h]

  sub_7C8100((__int64 *)a1, a2);
  if ( *(_BYTE *)(a1 + 36) )
  {
    v4 = sub_7D3880(a2);
    v5 = *(_QWORD *)(v4 + 16) + 8LL * *(unsigned int *)(v4 + 24);
    for ( i = *(_QWORD *)(sub_7D3880(a2) + 16); v5 != i; i += 8 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)i + 104LL);
      v8 = *(_QWORD *)(v7 + 96);
      v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v8 & 1) == 0 )
      {
        if ( v9 <= 3 )
        {
LABEL_19:
          v11 = 0;
          goto LABEL_8;
        }
        v22 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
        v11 = (__int64)v22;
        if ( (v9 & 2) == 0 )
          goto LABEL_8;
        v23 = v22[2275];
        if ( v23 )
        {
          v24 = v22[274];
          v22[284] += 24LL;
          v25 = (v24 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v11 + 2200) >= v25 + 24 && v24 )
          {
            *(_QWORD *)(v11 + 2192) = v25 + 24;
          }
          else
          {
            v40 = v23;
            v25 = sub_7C2590(v11 + 2192, 24, 3);
            v23 = v40;
          }
          *(_QWORD *)v25 = v23;
          *(_DWORD *)(v25 + 8) = 0;
          *(_QWORD *)(v25 + 16) = v7;
          *(_QWORD *)(v7 + 96) = v25 | 5;
          v26 = v25;
          v10 = v25 & 0xFFFFFFFFFFFFFFF8LL;
          v11 = v10;
          LOBYTE(v9) = v26 & 0xFA | 4;
LABEL_6:
          if ( (v9 & 4) != 0 && v10 )
          {
            v35 = *(_QWORD *)v11;
            v36 = *(_DWORD *)(*(_QWORD *)v11 + 12LL);
            if ( *(_DWORD *)(v11 + 8) != v36 )
            {
              *(_DWORD *)(v11 + 8) = v36;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 144LL))(v35, v7);
            }
            v11 = *(_QWORD *)(v11 + 16);
          }
          goto LABEL_8;
        }
        v9 = v7 & 0xFFFFFFFFFFFFFFFALL;
        v8 = v7 & 0xFFFFFFFFFFFFFFFALL | 1;
        *(_QWORD *)(v7 + 96) = v8;
      }
      v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      v11 = v10;
      if ( v9 )
        goto LABEL_6;
LABEL_8:
      if ( sub_782740(v11) )
      {
        do
        {
          v12 = *(_QWORD *)(v11 + 96);
          if ( (v12 & 1) != 0 )
            goto LABEL_19;
          v13 = v12 >> 1;
          if ( (v12 & 2) != 0 )
            goto LABEL_19;
          if ( (v12 & 1) != 0 )
          {
            v14 = v12 & 0xFFFFFFFFFFFFFFF8LL;
            v15 = *(_QWORD *)(v11 + 96) & 0xFFFFFFFFFFFFFFFELL;
            v16 = v14;
          }
          else
          {
            if ( (v12 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
              goto LABEL_19;
            v17 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v13 & 1) == 0 )
            {
              v11 = (__int64)v17;
              goto LABEL_8;
            }
            v16 = v17[2275];
            if ( v16 )
            {
              v18 = v17[274];
              v17[284] += 24LL;
              v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v17[275] >= v19 + 24 && v18 )
              {
                v17[274] = v19 + 24;
                v20 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v20 = sub_7C2590((__int64)(v17 + 274), 24, 3);
              }
              *(_QWORD *)v20 = v16;
              *(_DWORD *)(v20 + 8) = 0;
              *(_QWORD *)(v20 + 16) = v11;
              *(_QWORD *)(v11 + 96) = v20 | 5;
              v21 = v20;
              v14 = v20 & 0xFFFFFFFFFFFFFFF8LL;
              v16 = v14;
              LOBYTE(v15) = v21 & 0xFA | 4;
            }
            else
            {
              *(_QWORD *)(v11 + 96) = v11 & 0xFFFFFFFFFFFFFFFALL | 1;
              LOBYTE(v15) = v11 & 0xFA;
              if ( (v11 & 0xFFFFFFFFFFFFFFFALL) == 0 )
                goto LABEL_15;
              v14 = v11 & 0xFFFFFFFFFFFFFFF8LL;
              v16 = v11 & 0xFFFFFFFFFFFFFFF8LL;
            }
          }
          if ( (v15 & 4) != 0 && v14 )
          {
            v27 = *(_QWORD *)v16;
            v28 = *(_DWORD *)(*(_QWORD *)v16 + 12LL);
            if ( *(_DWORD *)(v16 + 8) != v28 )
            {
              *(_DWORD *)(v16 + 8) = v28;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 144LL))(v27, v11);
            }
            v11 = *(_QWORD *)(v16 + 16);
            goto LABEL_8;
          }
LABEL_15:
          v11 = v16;
        }
        while ( sub_782740(v16) );
      }
      if ( (*(_BYTE *)(v11 + 180) & 7) == 1 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 48) + 74LL) & 1) != 0 )
        {
          v37 = *(_QWORD *)a1;
          v38 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
          if ( *(_BYTE **)(*(_QWORD *)a1 + 24LL) == v38 )
          {
            sub_26240F0(v37, ";", 1);
          }
          else
          {
            *v38 = 59;
            ++*(_QWORD *)(v37 + 32);
          }
        }
        v29 = *(_QWORD *)a1;
        v30 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
        if ( *(_BYTE **)(*(_QWORD *)a1 + 24LL) == v30 )
        {
          sub_26240F0(v29, "\n", 1);
        }
        else
        {
          *v30 = 10;
          ++*(_QWORD *)(v29 + 32);
        }
        v31 = *(_DWORD *)(a1 + 32);
        v32 = 0;
        if ( v31 )
        {
          do
          {
            while ( 1 )
            {
              v33 = *(_QWORD *)a1;
              v34 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
              if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v34 <= 1u )
                break;
              ++v32;
              *v34 = 8224;
              *(_QWORD *)(v33 + 32) += 2LL;
              if ( v31 == v32 )
                goto LABEL_48;
            }
            v39 = v32;
            sub_26240F0(v33, "  ", 2);
            v32 = v39 + 1;
          }
          while ( v31 != v39 + 1 );
        }
LABEL_48:
        sub_7C5C80(a1, v11);
      }
    }
  }
}

