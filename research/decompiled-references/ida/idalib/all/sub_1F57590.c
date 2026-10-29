void __fastcall sub_1F57590(__int64 *a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // r13
  int v10; // r15d
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int *v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rdi
  unsigned int v24; // eax
  _BYTE *v25; // rdi
  __int64 v26; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+18h] [rbp-C0h]
  _BYTE v29[184]; // [rsp+20h] [rbp-B8h] BYREF

  v28 = 0x1000000000LL;
  v4 = *a1;
  v5 = *(unsigned int *)(*a1 + 24);
  v6 = *(_QWORD *)(*a1 + 32);
  ptr = v29;
  v7 = v5;
  v8 = *(_QWORD *)(v6 + 8 * v5);
  *(_DWORD *)(v4 + 24) = v7 + 2;
  v9 = *(_QWORD *)(v6 + 8LL * (unsigned int)(v7 + 1));
  if ( (_DWORD)v8 )
  {
    v10 = v8 - 1;
    v11 = 16;
    LODWORD(v12) = 0;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v4 + 8);
      v14 = *(_QWORD *)(*(_QWORD *)(v13 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v13 + 13072))-- - 8);
      v15 = (unsigned int)v12;
      v16 = (unsigned int)v12 + 1LL;
      if ( v16 > v11 )
      {
        v26 = v14;
        sub_2237220(&ptr, v29, v16, 8);
        *((_QWORD *)ptr + (unsigned int)v28) = v26;
      }
      else
      {
        *((_QWORD *)ptr + v15) = v14;
      }
      --v10;
      v12 = (unsigned int)(v28 + 1);
      LODWORD(v28) = v28 + 1;
      if ( v10 == -1 )
        break;
      v4 = *a1;
      v11 = HIDWORD(v28);
    }
    v17 = ptr;
  }
  else
  {
    v12 = 0;
    v17 = v29;
  }
  sub_EEDD10((__int64)a2, v17, v12);
  v18 = *a1;
  if ( (_DWORD)v9 )
  {
    v19 = *(unsigned int *)(v18 + 24);
    *(_DWORD *)(v18 + 24) = v19 + 1;
    v20 = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 8 * v19);
    v21 = &a2[2 * a2[1] + 4];
    v21[1] = v20;
    *v21 = HIDWORD(v20);
  }
  v22 = sub_1EE7490(v18);
  v23 = *a1;
  a2[2] = v22;
  v24 = sub_1EE7490(v23);
  v25 = ptr;
  a2[3] = v24;
  if ( v25 != v29 )
    free(v25);
}
