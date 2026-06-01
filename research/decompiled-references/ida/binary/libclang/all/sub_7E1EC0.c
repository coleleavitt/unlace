__int64 __fastcall sub_7E1EC0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  char v17; // r14
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdi
  __int64 v21; // r9
  __int64 result; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rax
  char v33; // dl
  _QWORD *v34; // rax
  __int64 v35; // r14
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  char v38; // dl
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // rdi
  int v42; // eax
  unsigned __int64 v43; // [rsp+8h] [rbp-50h]
  __int64 v44; // [rsp+8h] [rbp-50h]
  unsigned __int64 v45[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = sub_7D3880(a2);
  v4 = *(_QWORD *)(v3 + 16) + 8LL * *(unsigned int *)(v3 + 24);
  v5 = *(_QWORD *)(sub_7D3880(a2) + 16);
  if ( v4 != v5 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)v5 + 104LL);
      v7 = *(_QWORD *)(v6 + 96);
      v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v7 & 1) != 0 )
        goto LABEL_3;
      if ( v8 <= 3 )
      {
LABEL_29:
        v10 = 0;
        goto LABEL_6;
      }
      v34 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
      v10 = (__int64)v34;
      if ( (v8 & 2) != 0 )
        break;
LABEL_6:
      if ( sub_782740(v10) )
      {
        do
        {
          v11 = *(_QWORD *)(v10 + 96);
          if ( (v11 & 1) != 0 )
            goto LABEL_29;
          v12 = v11 >> 1;
          if ( (v11 & 2) != 0 )
            goto LABEL_29;
          if ( (v11 & 1) != 0 )
          {
            v13 = v11 & 0xFFFFFFFFFFFFFFF8LL;
            v14 = *(_QWORD *)(v10 + 96) & 0xFFFFFFFFFFFFFFFELL;
            v15 = v13;
          }
          else
          {
            if ( (v11 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
              goto LABEL_29;
            v29 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v12 & 1) == 0 )
            {
              v10 = (__int64)v29;
              goto LABEL_6;
            }
            v15 = v29[2275];
            if ( v15 )
            {
              v30 = v29[274];
              v29[284] += 24LL;
              v31 = ((v30 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 24;
              if ( v29[275] >= v31 && v30 )
              {
                v29[274] = v31;
                v32 = (v30 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v32 = sub_7DAE50((__int64)(v29 + 274), 24, 3);
              }
              *(_QWORD *)v32 = v15;
              *(_DWORD *)(v32 + 8) = 0;
              *(_QWORD *)(v32 + 16) = v10;
              *(_QWORD *)(v10 + 96) = v32 | 5;
              v33 = v32;
              v13 = v32 & 0xFFFFFFFFFFFFFFF8LL;
              v15 = v13;
              LOBYTE(v14) = v33 & 0xFA | 4;
            }
            else
            {
              *(_QWORD *)(v10 + 96) = v10 & 0xFFFFFFFFFFFFFFFALL | 1;
              LOBYTE(v14) = v10 & 0xFA;
              if ( (v10 & 0xFFFFFFFFFFFFFFFALL) == 0 )
                goto LABEL_13;
              v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
              v15 = v10 & 0xFFFFFFFFFFFFFFF8LL;
            }
          }
          if ( (v14 & 4) != 0 && v13 )
          {
            v39 = *(_QWORD *)v15;
            v40 = *(_DWORD *)(*(_QWORD *)v15 + 12LL);
            if ( *(_DWORD *)(v15 + 8) != v40 )
            {
              *(_DWORD *)(v15 + 8) = v40;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 144LL))(v39, v10);
            }
            v10 = *(_QWORD *)(v15 + 16);
            goto LABEL_6;
          }
LABEL_13:
          v10 = v15;
        }
        while ( sub_782740(v15) );
      }
      v16 = v10;
      v17 = 0;
      if ( v10 )
      {
        do
        {
          if ( (*(_BYTE *)(v16 + 180) & 7u) <= 1 )
            goto LABEL_23;
          while ( 1 )
          {
            v18 = *(_QWORD *)(v16 + 96);
            if ( (v18 & 1) != 0 )
            {
              if ( v17 )
                goto LABEL_27;
              v17 = 1;
              v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v18 & 1) != 0 )
                goto LABEL_26;
            }
            else
            {
              if ( (v18 & 2) == 0 )
              {
                v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
                if ( (v18 & 1) != 0 )
                  goto LABEL_26;
                if ( v19 <= 3 )
                  goto LABEL_27;
                goto LABEL_20;
              }
              if ( v17 )
                goto LABEL_27;
              v17 = 1;
              v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v18 & 1) != 0 )
                goto LABEL_39;
            }
            if ( v19 <= 3 )
            {
              v17 = 1;
              v16 = v18 & 0xFFFFFFFFFFFFFFF8LL;
              goto LABEL_34;
            }
LABEL_20:
            v20 = v18 & 0xFFFFFFFFFFFFFFFCLL;
            if ( (v19 & 2) != 0 )
              break;
            if ( v10 == v20 )
              goto LABEL_27;
            v16 = v20;
            if ( (*(_BYTE *)(v20 + 180) & 7u) <= 1 )
            {
LABEL_23:
              v21 = *a1;
              v45[0] = v16;
              result = sub_7E09C0((__int64)a1, v16, v16, (__int64 *)v45, a1, v21);
              if ( !(_BYTE)result )
                return result;
            }
          }
          v26 = *(_QWORD *)(v20 + 18200);
          if ( v26 )
          {
            v27 = *(_QWORD *)(v20 + 2192);
            *(_QWORD *)(v20 + 2272) += 24LL;
            v28 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( *(_QWORD *)(v20 + 2200) >= v28 + 24 && v27 )
            {
              *(_QWORD *)(v20 + 2192) = v28 + 24;
            }
            else
            {
              v44 = v26;
              v28 = sub_7DAE50(v20 + 2192, 24, 3);
              v26 = v44;
            }
            *(_QWORD *)v28 = v26;
            *(_DWORD *)(v28 + 8) = 0;
            *(_QWORD *)(v28 + 16) = v16;
            *(_QWORD *)(v16 + 96) = v28 | 5;
            v23 = v28 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_40:
            if ( !v23 )
              break;
            v24 = *(_QWORD *)v23;
            v25 = *(_DWORD *)(*(_QWORD *)v23 + 12LL);
            if ( *(_DWORD *)(v23 + 8) != v25 )
            {
              *(_DWORD *)(v23 + 8) = v25;
              v43 = v23;
              (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v24 + 144LL))(v24, v16);
              v23 = v43;
            }
            v16 = *(_QWORD *)(v23 + 16);
            continue;
          }
          v19 = v16 & 0xFFFFFFFFFFFFFFFALL;
          v18 = v16 & 0xFFFFFFFFFFFFFFFALL | 1;
          *(_QWORD *)(v16 + 96) = v18;
LABEL_26:
          if ( !v19 )
            break;
LABEL_39:
          v23 = v18 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v19 & 4) != 0 )
            goto LABEL_40;
          v16 = v18 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_34:
          ;
        }
        while ( v10 != v16 && v16 );
      }
LABEL_27:
      v5 += 8;
      if ( v4 == v5 )
        return 1;
    }
    v35 = v34[2275];
    if ( v35 )
    {
      v36 = v34[274];
      v34[284] += 24LL;
      v37 = (v36 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v10 + 2200) >= v37 + 24 && v36 )
        *(_QWORD *)(v10 + 2192) = v37 + 24;
      else
        v37 = sub_7DAE50(v10 + 2192, 24, 3);
      *(_QWORD *)v37 = v35;
      *(_DWORD *)(v37 + 8) = 0;
      *(_QWORD *)(v37 + 16) = v6;
      *(_QWORD *)(v6 + 96) = v37 | 5;
      v38 = v37;
      v9 = v37 & 0xFFFFFFFFFFFFFFF8LL;
      v10 = v9;
      LOBYTE(v8) = v38 & 0xFA | 4;
    }
    else
    {
      v8 = v6 & 0xFFFFFFFFFFFFFFFALL;
      v7 = v6 & 0xFFFFFFFFFFFFFFFALL | 1;
      *(_QWORD *)(v6 + 96) = v7;
LABEL_3:
      v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      v10 = v9;
      if ( !v8 )
        goto LABEL_6;
    }
    if ( (v8 & 4) != 0 && v9 )
    {
      v41 = *(_QWORD *)v10;
      v42 = *(_DWORD *)(*(_QWORD *)v10 + 12LL);
      if ( *(_DWORD *)(v10 + 8) != v42 )
      {
        *(_DWORD *)(v10 + 8) = v42;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 144LL))(v41, v6);
      }
      v10 = *(_QWORD *)(v10 + 16);
    }
    goto LABEL_6;
  }
  return 1;
}

