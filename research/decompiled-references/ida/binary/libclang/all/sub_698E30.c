void __fastcall sub_698E30(char *a1, char *a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rdi
  void (__fastcall *v5)(char *, char *, __int64); // rax
  volatile signed __int32 *v6; // rbp
  volatile signed __int32 *v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdi

  v3 = *((_QWORD **)a1 + 22);
  *(_QWORD *)a1 = off_49F5060;
  if ( v3 )
  {
    v4 = (_QWORD *)v3[6];
    if ( v4 != v3 + 8 )
      free(v4);
    operator delete();
    a2 = (_BYTE *)(elf_gnu_hash_indexes + 448);
    operator delete(v3, 0x468u);
  }
  v5 = *((void (__fastcall **)(char *, char *, __int64))a1 + 19);
  *((_QWORD *)a1 + 22) = 0;
  if ( v5 )
  {
    a2 = a1 + 136;
    v5(a1 + 136, a1 + 136, 3);
  }
  v6 = *((volatile signed __int32 **)a1 + 14);
  if ( v6 )
  {
    v7 = v6 + 2;
    if ( *((_QWORD *)v6 + 1) == 0x100000001LL )
    {
      v9 = *(_QWORD *)v6;
      v10 = *((_QWORD *)a1 + 14);
      *((_QWORD *)v6 + 1) = 0;
      (*(void (__fastcall **)(__int64, char *, volatile signed __int32 *))(v9 + 16))(v10, a2, v7);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 24LL))(v6);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v8 = _InterlockedExchangeAdd(v7, 0xFFFFFFFF);
      }
      else
      {
        v8 = *((_DWORD *)v6 + 2);
        *((_DWORD *)v6 + 2) = v8 - 1;
      }
      if ( v8 == 1 )
        sub_6111C0(v6);
    }
  }
  *(_QWORD *)a1 = &off_4A32C48;
  sub_10979A0(a1);
  operator delete(a1, 0xB8u);
}

