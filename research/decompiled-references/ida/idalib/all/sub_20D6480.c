void __fastcall sub_20D6480(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 i; // r12
  _BYTE *v6; // r14
  unsigned int v7; // ebx
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  __int64 (__fastcall *v9)(__int64, __int64); // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rsi
  char *v12; // rax
  size_t v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  __int64 v16; // rdi
  void *v17; // rax
  size_t v18; // rsi
  __int64 v19; // rsi
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  void *v22; // rax
  size_t v23; // r8
  size_t v24; // rsi
  void (*v25)(); // rax
  __int64 v26; // [rsp+0h] [rbp-48h]
  __int64 v27; // [rsp+0h] [rbp-48h]
  char v28; // [rsp+Fh] [rbp-39h]

  if ( a1[1] )
  {
    v4 = 0;
    v28 = 1;
    v26 = *(_QWORD *)(a2 + 16);
    for ( i = v26; ; *(_QWORD *)(a2 + 16) = i )
    {
      while ( 1 )
      {
        v6 = *(_BYTE **)(*a1 + 8 * v4);
        v7 = v6[9] & 0x3F;
        if ( v7 > 0x11 )
        {
          v15 = *(_QWORD *)(a2 + 24);
          v16 = i + 1;
          ++*(_DWORD *)(a2 + 40);
          v17 = *(void **)(a2 + 8);
          if ( i + 1 <= v15 )
          {
            v19 = i;
          }
          else
          {
            v18 = 2 * v15;
            if ( i + 993 > v18 )
            {
              *(_QWORD *)(a2 + 24) = i + 993;
              v18 = i + 993;
            }
            else
            {
              *(_QWORD *)(a2 + 24) = v18;
            }
            v17 = realloc(v17, v18);
            *(_QWORD *)(a2 + 8) = v17;
            if ( !v17 )
LABEL_44:
              abort();
            v19 = *(_QWORD *)(a2 + 16);
            v16 = v19 + 1;
          }
          *(_QWORD *)(a2 + 16) = v16;
          *((_BYTE *)v17 + v19) = 40;
        }
        v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
        if ( v8 == sub_20CEB40 )
          (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v6 + 64LL))(v6, a2);
        else
          v8(a2, (__int64)v6);
        if ( (v6[9] & 0xC0) != 0x40 )
        {
          v9 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
          if ( v9 == sub_20CEB60 )
            (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v6 + 72LL))(v6, a2);
          else
            v9(a2, (__int64)v6);
        }
        v10 = *(_QWORD *)(a2 + 16);
        if ( v7 <= 0x11 )
          break;
        v20 = *(_QWORD *)(a2 + 24);
        v21 = v10 + 1;
        --*(_DWORD *)(a2 + 40);
        v22 = *(void **)(a2 + 8);
        if ( v10 + 1 > v20 )
        {
          v23 = v10 + 993;
          v24 = 2 * v20;
          if ( v23 > v24 )
          {
            *(_QWORD *)(a2 + 24) = v23;
            v24 = v23;
          }
          else
          {
            *(_QWORD *)(a2 + 24) = v24;
          }
          v22 = realloc(v22, v24);
          *(_QWORD *)(a2 + 8) = v22;
          if ( !v22 )
            goto LABEL_44;
          v10 = *(_QWORD *)(a2 + 16);
          v21 = v10 + 1;
        }
        *(_QWORD *)(a2 + 16) = v21;
        ++v4;
        *((_BYTE *)v22 + v10) = 41;
        v10 = *(_QWORD *)(a2 + 16);
        if ( v10 != i )
          goto LABEL_11;
LABEL_29:
        v25 = *(void (**)())(*(_QWORD *)a2 + 40LL);
        if ( v25 != nullsub_1307 )
          ((void (__fastcall *)(__int64, __int64, __int64))v25)(a2, v10, v26);
        *(_QWORD *)(a2 + 16) = v26;
        if ( a1[1] == v4 )
          return;
        i = v26;
        if ( !v28 )
        {
          v10 = v26;
          goto LABEL_12;
        }
      }
      ++v4;
      if ( v10 == i )
        goto LABEL_29;
LABEL_11:
      if ( v4 == a1[1] )
        return;
LABEL_12:
      v11 = *(_QWORD *)(a2 + 24);
      v12 = *(char **)(a2 + 8);
      if ( v10 + 2 <= v11 )
      {
        v14 = v10;
      }
      else
      {
        v13 = 2 * v11;
        if ( v10 + 994 > v13 )
        {
          *(_QWORD *)(a2 + 24) = v10 + 994;
          v13 = v10 + 994;
        }
        else
        {
          *(_QWORD *)(a2 + 24) = v13;
        }
        v27 = v10;
        v12 = (char *)realloc(v12, v13);
        *(_QWORD *)(a2 + 8) = v12;
        if ( !v12 )
          goto LABEL_44;
        v14 = *(_QWORD *)(a2 + 16);
        v10 = v27;
      }
      v26 = v10;
      *(_WORD *)&v12[v14] = 8236;
      v28 = 0;
      i = *(_QWORD *)(a2 + 16) + 2LL;
    }
  }
}
