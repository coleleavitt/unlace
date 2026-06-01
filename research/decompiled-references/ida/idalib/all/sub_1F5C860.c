void __fastcall sub_1F5C860(__int64 *a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // r14d
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r15
  _QWORD *v13; // rdx
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  _BYTE *v17; // rdi
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+8h] [rbp-C0h]
  _BYTE v20[184]; // [rsp+10h] [rbp-B8h] BYREF

  sub_1F58FC0(a1, a2);
  v19 = 0x1000000000LL;
  v5 = *a1;
  ptr = v20;
  v6 = *(unsigned int *)(v5 + 24);
  *(_DWORD *)(v5 + 24) = v6 + 1;
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v6);
  if ( (_DWORD)v7 )
  {
    v8 = v7 - 1;
    v9 = 16;
    v10 = 0;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v5 + 8);
      v3 = *(unsigned int *)(v11 + 13072);
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 13064) + 8 * v3 - 8);
      --*(_DWORD *)(v11 + 13072);
      if ( v10 + 1 > (unsigned __int64)v9 )
      {
        sub_2237220(&ptr, v20, v10 + 1, 8);
        *((_QWORD *)ptr + (unsigned int)v19) = v12;
      }
      else
      {
        *((_QWORD *)ptr + v10) = v12;
      }
      --v8;
      v10 = (unsigned int)(v19 + 1);
      v5 = *a1;
      LODWORD(v19) = v19 + 1;
      if ( v8 == -1 )
        break;
      v9 = HIDWORD(v19);
    }
    v13 = ptr;
  }
  else
  {
    v10 = 0;
    v13 = v20;
  }
  sub_C08BC0(a2, *(_QWORD **)(*(_QWORD *)(v5 + 8) + 144LL), v13, v10, v3, v4);
  v14 = sub_1EE7490(*a1);
  v15 = *a1;
  *(_DWORD *)(a2 + 16) = v14;
  v16 = sub_1EE7490(v15);
  v17 = ptr;
  *(_DWORD *)(a2 + 20) = v16;
  if ( v17 != v20 )
    free(v17);
}
