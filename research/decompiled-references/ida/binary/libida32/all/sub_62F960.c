__int64 __fastcall sub_62F960(__int64 a1, __int64 a2, const char *a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r15
  __int64 v7; // rax
  FILE *v8; // rbx
  __int64 v9; // rsi
  char *v10; // rax
  char *v11; // rdx
  char v12; // cl
  const char *v13; // rdi
  unsigned __int8 v14; // al
  unsigned __int8 v15; // al
  __int64 v16; // rdx
  unsigned int v17; // eax
  int v18; // r8d
  char v19; // dl
  int v20; // r8d
  int v21; // eax
  unsigned int v22; // r8d
  int v23; // eax
  char v24; // r12
  unsigned int v25; // ebp
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // ah
  int v31; // eax
  __int64 (__fastcall *v32)(FILE *, __int64, __int64); // r14
  bool v33; // al
  unsigned __int64 i; // r13
  __int64 v35; // r12
  __int64 v36; // rax
  unsigned __int8 ptr; // [rsp+16h] [rbp-1452h] BYREF
  unsigned __int8 v38; // [rsp+17h] [rbp-1451h] BYREF
  unsigned int v39; // [rsp+18h] [rbp-1450h]
  unsigned int v40; // [rsp+1Ch] [rbp-144Ch]
  char s[1023]; // [rsp+20h] [rbp-1448h] BYREF
  char v42; // [rsp+41Fh] [rbp-1049h] BYREF
  _BYTE v43[4104]; // [rsp+420h] [rbp-1048h] BYREF
  unsigned __int64 v44; // [rsp+1428h] [rbp-40h]

  v6 = a2;
  v44 = __readfsqword(0x28u);
  if ( !a2 )
    v6 = *(_QWORD *)(a1 + 8);
  if ( !a3 )
    a3 = ".";
  v7 = sub_62A410((__int64)v43, 4096, a3, a4, a5, a6);
  v8 = (FILE *)fopenWB(v7);
  if ( !v8 )
    return 0;
  if ( *(int *)(v6 + 16) > 0 )
  {
    v9 = 0;
    v10 = s;
    while ( (_DWORD)v9 )
    {
      if ( v10 >= v43 )
      {
        if ( !under_debugger )
          interr(518);
        goto LABEL_81;
      }
      *v10++ = 44;
      if ( v10 < v43 )
      {
LABEL_13:
        v11 = **(char ***)(*(_QWORD *)(v6 + 24) + 8 * v9);
        if ( v10 == &v42 )
          goto LABEL_10;
        while ( 1 )
        {
          v12 = *v11++;
          *v10 = v12;
          if ( !v12 )
            break;
          if ( ++v10 == &v42 )
            goto LABEL_10;
        }
        if ( *(_DWORD *)(v6 + 16) <= (int)++v9 )
        {
LABEL_18:
          if ( v10 < v43 )
            goto LABEL_19;
          if ( !under_debugger )
            interr(519);
LABEL_81:
          BUG();
        }
      }
      else
      {
LABEL_10:
        v42 = 0;
        v10 = &v42;
        if ( *(_DWORD *)(v6 + 16) <= (int)++v9 )
          goto LABEL_18;
      }
    }
    if ( v10 >= v43 )
    {
      if ( !under_debugger )
        interr(520);
      goto LABEL_81;
    }
    goto LABEL_13;
  }
  v10 = s;
LABEL_19:
  *v10 = 0;
  v13 = *(const char **)(v6 + 8);
  v14 = 0;
  if ( v13 )
    v14 = strlen(v13);
  ptr = v14;
  v15 = strlen(s);
  v16 = *(_QWORD *)(v6 + 40) & 0xFFFFFF0000LL;
  v38 = v15;
  v17 = *(_DWORD *)(v6 + 32) & 0xFFFFFCBB;
  v18 = v17 | 0x304;
  v39 = v17 | 0x304;
  if ( v16 != 0x804020000LL )
  {
    if ( *(_BYTE *)(v6 + 45) )
      goto LABEL_24;
    goto LABEL_23;
  }
  BYTE1(v17) |= 3u;
  v27 = *(_BYTE *)(v6 + 45) == 0;
  v18 = v17;
  v39 = v17;
  if ( v27 )
  {
LABEL_23:
    v18 &= ~0x100u;
    v39 = v18;
  }
LABEL_24:
  if ( !*(_DWORD *)(v6 + 48) )
    v39 = v18 & 0xFFFFFDFF;
  v19 = sub_62A2C0(*(_QWORD *)(v6 + 64));
  v21 = v20;
  v22 = v20 & 0xFFFFFFDF;
  v23 = v21 | 0x20;
  if ( !v19 )
    v23 = v22;
  v39 = v23;
  v24 = v23;
  if ( qfwrite(v8, (void *)"IDATIL") != 6 )
    goto LABEL_29;
  if ( (unsigned int)fwritebytes(v8) )
    goto LABEL_29;
  if ( (unsigned int)fwritebytes(v8) )
    goto LABEL_29;
  if ( qfwrite(v8, &ptr) != 1 )
    goto LABEL_29;
  v28 = qfwrite(v8, *(void **)(v6 + 8));
  if ( ptr != v28 )
    goto LABEL_29;
  if ( qfwrite(v8, &v38) != 1 )
    goto LABEL_29;
  v29 = qfwrite(v8, s);
  if ( v38 != v29
    || qfwrite(v8, (void *)(v6 + 36)) != 1
    || qfwrite(v8, (void *)(v6 + 37)) != 1
    || qfwrite(v8, (void *)(v6 + 38)) != 1
    || qfwrite(v8, (void *)(v6 + 39)) != 1
    || qfwrite(v8, (void *)(v6 + 40)) != 1
    || qfwrite(v8, (void *)(v6 + 41)) != 1 )
  {
    goto LABEL_29;
  }
  v30 = BYTE1(v39);
  if ( (v39 & 4) != 0 )
  {
    if ( qfwrite(v8, (void *)(v6 + 42)) != 1
      || qfwrite(v8, (void *)(v6 + 43)) != 1
      || qfwrite(v8, (void *)(v6 + 44)) != 1 )
    {
      goto LABEL_29;
    }
    v30 = BYTE1(v39);
  }
  if ( (v30 & 1) != 0 )
  {
    if ( qfwrite(v8, (void *)(v6 + 45)) != 1 )
      goto LABEL_29;
    v30 = BYTE1(v39);
  }
  if ( (v30 & 2) == 0 || !(unsigned int)fwritebytes(v8) )
  {
    if ( (unsigned __int8)sub_62DF00(*(_QWORD *)(v6 + 56), v8, v24 & 1) )
    {
      v25 = sub_62DF00(*(_QWORD *)(v6 + 64), v8, v24 & 1);
      if ( (_BYTE)v25 )
      {
        v31 = *(_DWORD *)(v6 + 32);
        if ( (v31 & 2) == 0 )
        {
LABEL_52:
          if ( (v31 & 0x80u) == 0 )
          {
LABEL_53:
            qfclose(v8);
            *(_DWORD *)(v6 + 32) &= ~0x40u;
            return v25;
          }
          v32 = sub_62A170;
          v33 = (unsigned int)fwritebytes(v8) == 0;
          if ( (v24 & 1) == 0 )
            v32 = (__int64 (__fastcall *)(FILE *, __int64, __int64))qfwrite;
          for ( i = 0; v33; ++i )
          {
            if ( i >= *(int *)(v6 + 84) )
              goto LABEL_53;
            v35 = *(_QWORD *)(*(_QWORD *)(v6 + 88) + 8 * i);
            v40 = *(_DWORD *)(v35 + 20);
            if ( (unsigned int)fwritebytes(v8)
              || (unsigned int)fwritebytes(v8)
              || (unsigned int)fwritebytes(v8)
              || (unsigned int)fwritebytes(v8) )
            {
              break;
            }
            v36 = v32(v8, *(_QWORD *)(v35 + 24), v40);
            v33 = v40 == v36;
          }
          goto LABEL_29;
        }
        if ( (unsigned __int8)sub_62DF00(*(_QWORD *)(v6 + 72), v8, v24 & 1) )
        {
          v31 = *(_DWORD *)(v6 + 32);
          goto LABEL_52;
        }
      }
    }
  }
LABEL_29:
  qfclose(v8);
  return 0;
}

