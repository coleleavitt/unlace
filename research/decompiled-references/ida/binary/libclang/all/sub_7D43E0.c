__int64 __fastcall sub_7D43E0(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // r12
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r14
  _QWORD *v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rax
  char v24; // dl
  _QWORD *v25; // rax
  __int64 v26; // r15
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  char v29; // dl
  __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // rdi
  int v33; // eax

  v4 = *(_QWORD *)(sub_798D40(a1) + 18200);
  if ( v4 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 80LL))(v4, *(_QWORD *)(a1 + 72), 1);
  v5 = *(_QWORD *)(a1 + 80);
  if ( !v5 )
    v5 = sub_7D0C20(a1);
  *((_DWORD *)a2 + 2) = 0;
  v6 = *(unsigned int *)(v5 + 116);
  if ( *((unsigned int *)a2 + 3) < v6 )
    sub_25D6060(a2, a2 + 2, v6, 8);
  v7 = *(_QWORD *)(v5 + 120);
  result = *(unsigned int *)(v5 + 128);
  v9 = v7 + 8 * result;
  if ( v9 != v7 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)v7 + 104LL);
      v11 = *(_QWORD *)(v10 + 96);
      v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v11 & 1) == 0 )
      {
        if ( v12 <= 3 )
        {
LABEL_23:
          v14 = 0;
          goto LABEL_12;
        }
        v25 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
        v14 = (__int64)v25;
        if ( (v12 & 2) == 0 )
          goto LABEL_12;
        v26 = v25[2275];
        if ( v26 )
        {
          v27 = v25[274];
          v25[284] += 24LL;
          v28 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v14 + 2200) >= v28 + 24 && v27 )
            *(_QWORD *)(v14 + 2192) = v28 + 24;
          else
            v28 = sub_7CF9B0(v14 + 2192, 24, 3);
          *(_QWORD *)v28 = v26;
          *(_DWORD *)(v28 + 8) = 0;
          *(_QWORD *)(v28 + 16) = v10;
          *(_QWORD *)(v10 + 96) = v28 | 5;
          v29 = v28;
          v13 = v28 & 0xFFFFFFFFFFFFFFF8LL;
          v14 = v13;
          LOBYTE(v12) = v29 & 0xFA | 4;
LABEL_10:
          if ( (v12 & 4) != 0 && v13 )
          {
            v32 = *(_QWORD *)v14;
            v33 = *(_DWORD *)(*(_QWORD *)v14 + 12LL);
            if ( *(_DWORD *)(v14 + 8) != v33 )
            {
              *(_DWORD *)(v14 + 8) = v33;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 144LL))(v32, v10);
            }
            v14 = *(_QWORD *)(v14 + 16);
          }
          goto LABEL_12;
        }
        v12 = v10 & 0xFFFFFFFFFFFFFFFALL;
        v11 = v10 & 0xFFFFFFFFFFFFFFFALL | 1;
        *(_QWORD *)(v10 + 96) = v11;
      }
      v13 = v11 & 0xFFFFFFFFFFFFFFF8LL;
      v14 = v13;
      if ( v12 )
        goto LABEL_10;
LABEL_12:
      if ( sub_782740(v14) )
      {
        do
        {
          v15 = *(_QWORD *)(v14 + 96);
          if ( (v15 & 1) != 0 )
            goto LABEL_23;
          v16 = v15 >> 1;
          if ( (v15 & 2) != 0 )
            goto LABEL_23;
          if ( (v15 & 1) != 0 )
          {
            v17 = v15 & 0xFFFFFFFFFFFFFFF8LL;
            v18 = *(_QWORD *)(v14 + 96) & 0xFFFFFFFFFFFFFFFELL;
            v19 = v17;
          }
          else
          {
            if ( (v15 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
              goto LABEL_23;
            v20 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v16 & 1) == 0 )
            {
              v14 = (__int64)v20;
              goto LABEL_12;
            }
            v19 = v20[2275];
            if ( v19 )
            {
              v21 = v20[274];
              v20[284] += 24LL;
              v22 = ((v21 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 24;
              if ( v20[275] >= v22 && v21 )
              {
                v20[274] = v22;
                v23 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v23 = sub_7CF9B0((__int64)(v20 + 274), 24, 3);
              }
              *(_QWORD *)v23 = v19;
              *(_DWORD *)(v23 + 8) = 0;
              *(_QWORD *)(v23 + 16) = v14;
              *(_QWORD *)(v14 + 96) = v23 | 5;
              v24 = v23;
              v17 = v23 & 0xFFFFFFFFFFFFFFF8LL;
              v19 = v17;
              LOBYTE(v18) = v24 & 0xFA | 4;
            }
            else
            {
              *(_QWORD *)(v14 + 96) = v14 & 0xFFFFFFFFFFFFFFFALL | 1;
              LOBYTE(v18) = v14 & 0xFA;
              if ( (v14 & 0xFFFFFFFFFFFFFFFALL) == 0 )
                goto LABEL_19;
              v17 = v14 & 0xFFFFFFFFFFFFFFF8LL;
              v19 = v14 & 0xFFFFFFFFFFFFFFF8LL;
            }
          }
          if ( (v18 & 4) != 0 && v17 )
          {
            v30 = *(_QWORD *)v19;
            v31 = *(_DWORD *)(*(_QWORD *)v19 + 12LL);
            if ( *(_DWORD *)(v19 + 8) != v31 )
            {
              *(_DWORD *)(v19 + 8) = v31;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 144LL))(v30, v14);
            }
            v14 = *(_QWORD *)(v19 + 16);
            goto LABEL_12;
          }
LABEL_19:
          v14 = v19;
        }
        while ( sub_782740(v19) );
      }
      result = *((unsigned int *)a2 + 2);
      if ( *((unsigned int *)a2 + 3) < (unsigned __int64)(result + 1) )
      {
        v7 += 8;
        sub_25D6060(a2, a2 + 2, result + 1, 8);
        result = *a2;
        *(_QWORD *)(*a2 + 8LL * (unsigned int)(*((_DWORD *)a2 + 2))++) = v14;
        if ( v9 == v7 )
          return result;
      }
      else
      {
        v7 += 8;
        *(_QWORD *)(*a2 + 8 * result) = v14;
        ++*((_DWORD *)a2 + 2);
        if ( v9 == v7 )
          return result;
      }
    }
  }
  return result;
}

