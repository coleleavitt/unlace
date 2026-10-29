__int64 __fastcall find_reg_value(_DWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v5; // ebx
  char *v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // r8d
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 (__fastcall *v13)(__int64, int); // rax
  void *v14; // rdi
  __int64 v15; // rdx
  _QWORD *v16; // rax
  unsigned __int64 v18; // rax
  int v19; // [rsp+4h] [rbp-12Ch]
  void *ptr; // [rsp+10h] [rbp-120h] BYREF
  __int128 v21; // [rsp+18h] [rbp-118h]
  char v22; // [rsp+28h] [rbp-108h]
  _QWORD v23[3]; // [rsp+30h] [rbp-100h] BYREF
  char v24; // [rsp+48h] [rbp-E8h] BYREF
  _QWORD v25[5]; // [rsp+108h] [rbp-28h] BYREF

  v5 = a2;
  v25[0] = __readfsqword(0x28u);
  v23[1] = 0xFFFFFFFFLL;
  v7 = &v24;
  v23[0] = -1;
  v23[2] = 0;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 24;
    *((_WORD *)v7 - 11) = 0;
    *((_WORD *)v7 - 10) = 0;
    *((_DWORD *)v7 - 1) = 0;
    *((_WORD *)v7 - 9) = 0;
    *((_QWORD *)v7 - 2) = 0;
    *((_DWORD *)v7 - 2) = 0;
  }
  while ( v25 != (_QWORD *)v7 );
  if ( (int)decode_insn(v23, a2, v25, a4, 0, 0) <= 0 )
    return 0;
  v8 = sub_375980(0x53u, a1, v23, a3);
  if ( v8 )
    return v8 == 1;
  v9 = *(_QWORD **)(qword_2CA1698 + 320);
  if ( !v9 )
    return 0xFFFFFFFFLL;
  v10 = 0x10000;
  v11 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v9[1] + 32LL) + 8LL) - 1);
  if ( (unsigned int)v11 <= 7 )
  {
    v10 = dword_238A060[v11];
    if ( v10 != 0x10000 )
    {
      v10 |= a3;
      if ( a3 >= 0x10000 )
        v10 = 0x10000;
    }
  }
  v22 = 0;
  LODWORD(v12) = -1;
  v21 = 0;
  ptr = nullptr;
  v13 = *(unsigned __int64 (__fastcall **)(__int64, int))(*v9 + 16LL);
  if ( v13 != sub_4DC6B0 )
  {
    v19 = v10;
    v18 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD, __int64))v13)(v9, a2, 0, 0xFFFFFFFFLL);
    v10 = v19;
    v5 = v18;
    v12 = HIDWORD(v18);
  }
  reg_finder_find((int)v9, (int)&ptr, v5, v12, v10, 0, 0);
  v14 = ptr;
  if ( (unsigned __int8)(v22 - 10) > 1u )
  {
LABEL_18:
    if ( ptr )
    {
      *(_QWORD *)&v21 = 0;
      qfree(ptr);
    }
    return 0;
  }
  v15 = *(_QWORD *)ptr;
  if ( (_QWORD)v21 != 1 )
  {
    v16 = (char *)ptr + 16;
    if ( 16LL * (_QWORD)v21 != 16 )
    {
      while ( *v16 == v15 )
      {
        v16 += 2;
        if ( v16 == (_QWORD *)((char *)ptr + 16 * (_QWORD)v21) )
          goto LABEL_23;
      }
      goto LABEL_18;
    }
  }
LABEL_23:
  *a1 = v15;
  if ( v14 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v14);
  }
  return 1;
}

