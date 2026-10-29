__int64 __fastcall find_sp_value(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  int v5; // r12d
  __int64 (*v6)(); // rax
  int v8; // r8d
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 (__fastcall *v11)(__int64, int); // rax
  void *v12; // rdi
  __int64 v13; // rdx
  _QWORD *v14; // rax
  unsigned __int64 v15; // rax
  int v16; // [rsp+Ch] [rbp-54h]
  void *ptr; // [rsp+10h] [rbp-50h] BYREF
  __int128 v18; // [rsp+18h] [rbp-48h]
  char v19; // [rsp+28h] [rbp-38h]
  unsigned __int64 v20; // [rsp+38h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(qword_2CA1698 + 320);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v5 = a2;
  if ( a3 == -1 )
  {
    v6 = *(__int64 (**)())(*v3 + 48LL);
    if ( v6 == sub_4DC700 )
      return 0;
    a3 = ((__int64 (__fastcall *)(_QWORD))v6)(*(_QWORD *)(qword_2CA1698 + 320));
    if ( a3 == -1 )
      return 0;
  }
  v8 = 0x10000;
  v9 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v3[1] + 32LL) + 8LL) - 1);
  if ( (unsigned int)v9 <= 7 )
  {
    v8 = dword_238A060[v9];
    if ( v8 != 0x10000 )
    {
      v8 |= a3;
      if ( a3 >= 0x10000 )
        v8 = 0x10000;
    }
  }
  v19 = 0;
  LODWORD(v10) = -1;
  v18 = 0;
  ptr = nullptr;
  v11 = *(unsigned __int64 (__fastcall **)(__int64, int))(*v3 + 16LL);
  if ( v11 != sub_4DC6B0 )
  {
    v16 = v8;
    v15 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD, __int64))v11)(v3, a2, 0, 0xFFFFFFFFLL);
    v8 = v16;
    v5 = v15;
    v10 = HIDWORD(v15);
  }
  reg_finder_find((int)v3, (int)&ptr, v5, v10, v8, -1, 0);
  v12 = ptr;
  if ( (unsigned __int8)(v19 - 12) > 1u )
  {
LABEL_18:
    if ( ptr )
    {
      *(_QWORD *)&v18 = 0;
      qfree(ptr);
    }
    return 0;
  }
  v13 = *(_QWORD *)ptr;
  if ( (_QWORD)v18 != 1 )
  {
    v14 = (char *)ptr + 16;
    if ( 16LL * (_QWORD)v18 != 16 )
    {
      while ( v13 == *v14 )
      {
        v14 += 2;
        if ( v14 == (_QWORD *)((char *)ptr + 16 * (_QWORD)v18) )
          goto LABEL_20;
      }
      goto LABEL_18;
    }
  }
LABEL_20:
  *a1 = v13;
  if ( v12 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v12);
  }
  return 1;
}

