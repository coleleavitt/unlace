/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D1A20
// Address: 0x00000000000D1A20

//----- (00000000000D1A20) ----------------------------------------------------
int __fastcall sub_D1A20(__int64 a1, __int64 a2, char *a3, unsigned int a4, unsigned __int8 a5)
{
  __int64 v8; // rax
  const char *v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  char *v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  char *v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // r12
  char v23; // bp
  char v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // rdx
  char *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  char *v34; // rdx
  __int64 v35; // rcx
  unsigned int v38; // [rsp+Ch] [rbp-3Ch]
  unsigned __int64 v39; // [rsp+10h] [rbp-38h]

  v8 = *(_QWORD *)(a2 + 16);
  if ( a5 )
  {
    v9 = *(const char **)(a1 + 8);
    LODWORD(v8) = strcmp(v9, *(const char **)(v8 + 8));
    if ( (_DWORD)v8 )
    {
      LODWORD(v8) = strcmp(v9, *(const char **)(*(_QWORD *)a2 + 8LL));
      if ( (_DWORD)v8 )
      {
LABEL_4:
        v10 = *(unsigned int *)(a1 + 20);
        v11 = *(_QWORD *)(a1 + 32);
        v12 = v11 >> 8;
        if ( (v11 & 1) != 0 )
          v12 = *(_QWORD *)(*(_QWORD *)a3 + v12);
        v13 = *(_QWORD *)(a1 + 24);
        v14 = &a3[v12];
        v15 = 2;
        if ( (v11 & 2) != 0 )
          v15 = a4;
        LODWORD(v8) = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)v13 + 48LL))(
                        v13,
                        a2,
                        v14,
                        v15,
                        a5);
        if ( (unsigned int)v10 >= 2 )
        {
          v16 = a1 + 16 * v10 + 24;
          LODWORD(v8) = *(_DWORD *)(a1 + 16);
          v17 = (_QWORD *)(a1 + 40);
          if ( (v8 & 2) != 0 || *(_DWORD *)(a2 + 60) == 1 )
          {
            do
            {
              if ( *(_BYTE *)(a2 + 78) )
                break;
              v18 = v17[1];
              v19 = v18 >> 8;
              if ( (v18 & 1) != 0 )
                v19 = *(_QWORD *)(*(_QWORD *)a3 + v19);
              v20 = &a3[v19];
              v21 = a4;
              if ( (v18 & 2) == 0 )
                v21 = 2;
              LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64, _QWORD))(*(_QWORD *)*v17 + 48LL))(
                              *v17,
                              a2,
                              v20,
                              v21,
                              a5);
              v17 += 2;
            }
            while ( (unsigned __int64)v17 < v16 );
          }
          else if ( (v8 & 1) != 0 )
          {
            do
            {
              if ( *(_BYTE *)(a2 + 78) || *(_DWORD *)(a2 + 60) == 1 && *(_DWORD *)(a2 + 48) == 1 )
                break;
              v32 = v17[1];
              v33 = v32 >> 8;
              if ( (v32 & 1) != 0 )
                v33 = *(_QWORD *)(*(_QWORD *)a3 + v33);
              v34 = &a3[v33];
              v35 = a4;
              if ( (v32 & 2) == 0 )
                v35 = 2;
              LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64, _QWORD))(*(_QWORD *)*v17 + 48LL))(
                              *v17,
                              a2,
                              v34,
                              v35,
                              a5);
              v17 += 2;
            }
            while ( (unsigned __int64)v17 < v16 );
          }
          else
          {
            do
            {
              if ( *(_BYTE *)(a2 + 78) || *(_DWORD *)(a2 + 60) == 1 )
                break;
              v28 = v17[1];
              v29 = v28 >> 8;
              if ( (v28 & 1) != 0 )
                v29 = *(_QWORD *)(*(_QWORD *)a3 + v29);
              v30 = &a3[v29];
              v31 = a4;
              if ( (v28 & 2) == 0 )
                v31 = 2;
              LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, __int64, _QWORD))(*(_QWORD *)*v17 + 48LL))(
                              *v17,
                              a2,
                              v30,
                              v31,
                              a5);
              v17 += 2;
            }
            while ( (unsigned __int64)v17 < v16 );
          }
        }
        return v8;
      }
      goto LABEL_20;
    }
LABEL_37:
    if ( *(char **)(a2 + 8) == a3 && *(_DWORD *)(a2 + 52) != 1 )
    {
      *(_DWORD *)(a2 + 52) = a4;
      LODWORD(v8) = a4;
    }
    return v8;
  }
  if ( a1 == v8 )
    goto LABEL_37;
  if ( a1 != *(_QWORD *)a2 )
    goto LABEL_4;
LABEL_20:
  if ( *(char **)(a2 + 32) == a3 || *(char **)(a2 + 40) == a3 )
  {
    if ( a4 == 1 )
      *(_DWORD *)(a2 + 56) = 1;
  }
  else
  {
    LODWORD(v8) = a4;
    *(_DWORD *)(a2 + 56) = a4;
    if ( *(_DWORD *)(a2 + 68) != 4 )
    {
      if ( *(_DWORD *)(a1 + 20) )
      {
        v39 = a1 + 16LL * *(unsigned int *)(a1 + 20) + 24;
        v22 = (_QWORD *)(a1 + 24);
        v23 = 0;
        v38 = a5;
        v24 = 0;
        do
        {
          *(_WORD *)(a2 + 76) = 0;
          v25 = v22[1];
          v26 = v25 >> 8;
          if ( (v25 & 1) != 0 )
            v26 = *(_QWORD *)(*(_QWORD *)a3 + v26);
          (*(void (__fastcall **)(_QWORD, __int64, char *, char *, _QWORD, _QWORD))(*(_QWORD *)*v22 + 40LL))(
            *v22,
            a2,
            a3,
            &a3[v26],
            (unsigned int)((v25 & 2) == 0) + 1,
            v38);
          if ( *(_BYTE *)(a2 + 78) )
            break;
          if ( *(_BYTE *)(a2 + 77) )
          {
            if ( *(_BYTE *)(a2 + 76) )
            {
              if ( *(_DWORD *)(a2 + 48) == 1 )
              {
                v24 = 1;
                goto LABEL_65;
              }
              v24 = 1;
              v23 = 1;
              if ( (*(_BYTE *)(a1 + 16) & 2) == 0 )
                goto LABEL_65;
            }
            else
            {
              v23 = 1;
              if ( (*(_BYTE *)(a1 + 16) & 1) == 0 )
                break;
            }
          }
          v22 += 2;
        }
        while ( (unsigned __int64)v22 < v39 );
        v27 = (v24 & 1) == 0;
        v24 = v23;
        if ( v27 )
          goto LABEL_61;
      }
      else
      {
        v24 = 0;
LABEL_61:
        *(_QWORD *)(a2 + 40) = a3;
        ++*(_DWORD *)(a2 + 64);
        if ( *(_DWORD *)(a2 + 60) == 1 && *(_DWORD *)(a2 + 48) == 2 )
          *(_BYTE *)(a2 + 78) = 1;
      }
LABEL_65:
      LODWORD(v8) = v24 & 1;
      *(_DWORD *)(a2 + 68) = 4 - v8;
    }
  }
  return v8;
}
