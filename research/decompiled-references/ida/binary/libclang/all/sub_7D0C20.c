__int64 __fastcall sub_7D0C20(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  char v4; // dl
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r13
  __int64 v7; // rdi
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  signed __int64 v13; // rdx
  __int64 v14; // rax
  char v15; // al
  unsigned __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64, __int64); // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE *v20; // rdi
  char *v21; // rcx
  char *v22; // rax
  __int64 v23; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  int v34; // eax
  unsigned __int64 v35; // [rsp+8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+8h] [rbp-50h]
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int64 v38; // [rsp+18h] [rbp-40h]
  _BYTE v39[56]; // [rsp+20h] [rbp-38h] BYREF

  v38 = 0x200000000LL;
  v2 = *(_QWORD *)(a1 + 64);
  ptr = v39;
  if ( (v2 & 1) == 0 )
  {
    v3 = v2 >> 1;
    if ( (v2 & 2) == 0 )
    {
      if ( (v2 & 1) != 0 )
      {
        v4 = v2 & 0xFE;
      }
      else
      {
        if ( (v2 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
          goto LABEL_21;
        v25 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCLL);
        v6 = (unsigned __int64)v25;
        if ( (v3 & 1) == 0 )
        {
          v9 = 0;
          goto LABEL_12;
        }
        v26 = v25[2275];
        if ( v26 )
        {
          v27 = v25[274];
          v25[284] += 24LL;
          v28 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v25[275] >= v28 + 24 && v27 )
            v25[274] = v28 + 24;
          else
            v28 = sub_7CF9B0((__int64)(v25 + 274), 24, 3);
          *(_QWORD *)v28 = v26;
          *(_DWORD *)(v28 + 8) = 0;
          v2 = v28 | 5;
          *(_QWORD *)(v28 + 16) = a1;
          *(_QWORD *)(a1 + 64) = v28 | 5;
          v4 = v28 & 0xFA | 4;
        }
        else
        {
          v2 = a1 & 0xFFFFFFFFFFFFFFFALL | 1;
          *(_QWORD *)(a1 + 64) = v2;
          v4 = a1 & 0xFA;
          if ( (a1 & 0xFFFFFFFFFFFFFFFALL) == 0 )
            goto LABEL_21;
        }
      }
      v5 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      v6 = v5;
      if ( (v4 & 4) != 0 )
      {
        if ( !v5 )
          goto LABEL_21;
        v7 = *(_QWORD *)v5;
        v8 = *(_DWORD *)(*(_QWORD *)v5 + 12LL);
        if ( *(_DWORD *)(v5 + 8) != v8 )
        {
          *(_DWORD *)(v5 + 8) = v8;
          v35 = v5;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 144LL))(v7, a1);
          v5 = v35;
        }
        v6 = *(_QWORD *)(v5 + 16);
      }
      while ( v6 )
      {
        while ( 1 )
        {
          v9 = (unsigned int)v38;
LABEL_12:
          v10 = *(_QWORD *)(v6 + 80);
          v11 = v9;
          if ( v10 )
          {
            *(_QWORD *)(a1 + 80) = v10;
            goto LABEL_24;
          }
          v12 = v9 + 1;
          if ( HIDWORD(v38) < v12 )
          {
            sub_25D6060(&ptr, v39, v12, 8);
            v11 = (unsigned int)v38;
          }
          *((_QWORD *)ptr + v11) = v6;
          v13 = *(_QWORD *)(v6 + 64);
          LODWORD(v38) = v38 + 1;
          if ( (v13 & 1) != 0 )
            goto LABEL_21;
          v14 = v13 >> 1;
          if ( (v13 & 2) != 0 )
            goto LABEL_21;
          if ( (v13 & 1) != 0 )
          {
            v15 = v13 & 0xFE;
            goto LABEL_19;
          }
          if ( (v13 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
            goto LABEL_21;
          v29 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v14 & 1) != 0 )
            break;
          v6 = (unsigned __int64)v29;
        }
        v30 = v29[2275];
        if ( v30 )
        {
          v31 = v29[274];
          v29[284] += 24LL;
          v32 = (v31 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v29[275] >= v32 + 24 && v31 )
            v29[274] = v32 + 24;
          else
            v32 = sub_7CF9B0((__int64)(v29 + 274), 24, 3);
          *(_QWORD *)v32 = v30;
          *(_DWORD *)(v32 + 8) = 0;
          *(_QWORD *)(v32 + 16) = v6;
          *(_QWORD *)(v6 + 64) = v32 | 5;
          v16 = v32 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_20;
        }
        v13 = v6 & 0xFFFFFFFFFFFFFFFALL | 1;
        *(_QWORD *)(v6 + 64) = v13;
        v15 = v6 & 0xFA;
        if ( (v6 & 0xFFFFFFFFFFFFFFFALL) == 0 )
          break;
LABEL_19:
        v16 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v15 & 4) == 0 )
        {
          v6 = v16;
          continue;
        }
LABEL_20:
        if ( !v16 )
          break;
        v33 = *(_QWORD *)v16;
        v34 = *(_DWORD *)(*(_QWORD *)v16 + 12LL);
        if ( *(_DWORD *)(v16 + 8) != v34 )
        {
          *(_DWORD *)(v16 + 8) = v34;
          v36 = v16;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v33 + 144LL))(v33, v6);
          v16 = v36;
        }
        v6 = *(_QWORD *)(v16 + 16);
      }
LABEL_21:
      v10 = *(_QWORD *)(a1 + 80);
      if ( v10 )
        goto LABEL_23;
      goto LABEL_22;
    }
  }
  if ( *(_QWORD *)(a1 + 80) )
    return *(_QWORD *)(a1 + 80);
LABEL_22:
  v17 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 104LL);
  v18 = sub_798D40(a1);
  v19 = v17(a1, v18);
  *(_QWORD *)(a1 + 80) = v19;
  v10 = v19;
LABEL_23:
  v9 = (unsigned int)v38;
LABEL_24:
  v20 = ptr;
  v21 = (char *)ptr + 8 * v9;
  if ( ptr != v21 )
  {
    v22 = (char *)ptr;
    do
    {
      v23 = *(_QWORD *)v22;
      v22 += 8;
      *(_QWORD *)(v23 + 80) = v10;
      v10 = *(_QWORD *)(a1 + 80);
    }
    while ( v22 != v21 );
  }
  if ( v20 != v39 )
    free(v20);
  return v10;
}

