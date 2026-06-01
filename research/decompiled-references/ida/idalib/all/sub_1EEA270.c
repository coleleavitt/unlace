void __fastcall sub_1EEA270(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  int v4; // eax
  unsigned __int64 v5; // rdx
  int v6; // ebx
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-E0h]
  _QWORD v14[2]; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+28h] [rbp-C0h]
  _BYTE v17[184]; // [rsp+30h] [rbp-B8h] BYREF

  v3 = a2 + 24;
  if ( !a2 )
    v3 = 0;
  sub_1EACA60(a1, v3);
  v4 = sub_1EE7490(*a1);
  v5 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 36) = v4;
  v6 = v5;
  ptr = v17;
  v16 = 0x1000000000LL;
  if ( v5 <= 0x10 )
  {
    if ( (_DWORD)v5 )
      goto LABEL_5;
LABEL_14:
    v12 = (unsigned int)v16;
    goto LABEL_9;
  }
  sub_2237220(&ptr, v17, v5, 8);
  if ( !v6 )
    goto LABEL_14;
LABEL_5:
  v7 = 0;
  do
  {
    v8 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    v9 = (unsigned int)v16;
    v10 = (unsigned int)v16 + 1LL;
    if ( v10 > HIDWORD(v16) )
    {
      v13 = v8;
      sub_2237220(&ptr, v17, v10, 8);
      v9 = (unsigned int)v16;
      v11 = ptr;
      v8 = v13;
    }
    else
    {
      v11 = ptr;
    }
    v11[v9] = v8;
    ++v7;
    v12 = (unsigned int)(v16 + 1);
    LODWORD(v16) = v16 + 1;
  }
  while ( v7 != v6 );
LABEL_9:
  v14[1] = v12;
  v14[0] = ptr;
  sub_EB8020((__int64)v14, (char *)(a2 + 40));
  if ( ptr != v17 )
    free(ptr);
}
