__int64 __fastcall sub_20D4A40(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _BYTE *v4; // rbp
  int v5; // eax
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  int v8; // ebp
  int i; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  char *v12; // rax
  size_t v13; // rdx
  size_t v14; // rsi
  __int64 v15; // rdx
  _BYTE *v16; // r14
  __int64 (__fastcall *v17)(__int64, __int64); // rdx
  __int64 (__fastcall *v18)(__int64, __int64); // rdx
  void (*v20)(); // rax
  size_t v21; // rax
  int v22; // [rsp+8h] [rbp-40h]
  unsigned int v23; // [rsp+Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_BYTE **)(a1 + 16);
  v23 = *(_DWORD *)(a2 + 32);
  v5 = *(_DWORD *)(a2 + 36);
  *(_QWORD *)(a2 + 32) = -1;
  v22 = v5;
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
  if ( v6 == sub_20CEB40 )
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 64LL))(v4);
  else
    v6(a2, (__int64)v4);
  if ( (v4[9] & 0xC0) == 0x40 )
  {
LABEL_6:
    v8 = *(_DWORD *)(a2 + 36);
    if ( v8 != -1 )
      goto LABEL_7;
LABEL_29:
    v21 = j__strlen("...");
    sub_20D1ED0((_QWORD *)a2, v21, "...");
    goto LABEL_20;
  }
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
  if ( v7 == sub_20CEB60 )
  {
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v4 + 72LL))(v4, a2);
    goto LABEL_6;
  }
  v7(a2, (__int64)v4);
  v8 = *(_DWORD *)(a2 + 36);
  if ( v8 == -1 )
    goto LABEL_29;
LABEL_7:
  if ( v8 )
  {
    for ( i = 1; v8 != i; ++i )
    {
      v10 = *(_QWORD *)(a2 + 16);
      v11 = *(_QWORD *)(a2 + 24);
      v12 = *(char **)(a2 + 8);
      if ( v10 + 2 > v11 )
      {
        v13 = v10 + 994;
        v14 = 2 * v11;
        if ( v13 > v14 )
        {
          *(_QWORD *)(a2 + 24) = v13;
          v14 = v13;
        }
        else
        {
          *(_QWORD *)(a2 + 24) = v14;
        }
        v12 = (char *)realloc(v12, v14);
        *(_QWORD *)(a2 + 8) = v12;
        if ( !v12 )
          abort();
        v10 = *(_QWORD *)(a2 + 16);
      }
      *(_WORD *)&v12[v10] = 8236;
      v15 = *(_QWORD *)a2;
      *(_QWORD *)(a2 + 16) += 2LL;
      v16 = *(_BYTE **)(a1 + 16);
      v17 = *(__int64 (__fastcall **)(__int64, __int64))(v15 + 16);
      *(_DWORD *)(a2 + 32) = i;
      if ( v17 == sub_20CEB40 )
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v16 + 64LL))(v16, a2);
      else
        v17(a2, (__int64)v16);
      if ( (v16[9] & 0xC0) != 0x40 )
      {
        v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
        if ( v18 == sub_20CEB60 )
          (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v16 + 72LL))(v16, a2);
        else
          v18(a2, (__int64)v16);
      }
    }
  }
  else
  {
    v20 = *(void (**)())(*(_QWORD *)a2 + 40LL);
    if ( v20 != nullsub_1307 )
      ((void (__fastcall *)(__int64, _QWORD, __int64))v20)(a2, *(_QWORD *)(a2 + 16), v3);
    *(_QWORD *)(a2 + 16) = v3;
  }
LABEL_20:
  *(_DWORD *)(a2 + 36) = v22;
  *(_DWORD *)(a2 + 32) = v23;
  return v23;
}
