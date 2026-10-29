__int64 __fastcall sub_3F69D0(__int64 a1, void *a2, int a3, __int64 a4, unsigned int *a5, __int64 a6)
{
  char v7; // bp
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned int v12; // r12d
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rsi
  void *v21; // [rsp+0h] [rbp-488h] BYREF
  void *v22; // [rsp+8h] [rbp-480h] BYREF
  void *v23; // [rsp+10h] [rbp-478h] BYREF
  __int128 v24; // [rsp+18h] [rbp-470h]
  void *ptr; // [rsp+30h] [rbp-458h] BYREF
  __int128 v26; // [rsp+38h] [rbp-450h]
  _BYTE v27[1032]; // [rsp+50h] [rbp-438h] BYREF
  unsigned __int64 v28; // [rsp+458h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  if ( a4 )
    return 0;
  v7 = a3;
  if ( (_BYTE)a3 != 65 || a6 != 4 )
  {
    v9 = (unsigned int)(a3 - 67);
    if ( (unsigned __int8)(a3 - 67) > 0x14u )
      return 0;
    v10 = 1048833;
    if ( !_bittest64(&v10, v9) )
      return 0;
  }
  v11 = sub_3BDE50(*(_QWORD **)(a1 + 88), (__int64)a2);
  v21 = a2;
  if ( v11 < *(_QWORD *)(a1 + 96) || v11 >= *(_QWORD *)(a1 + 104) )
    return 0;
  if ( a2 == *(void **)(a1 + 32) )
  {
    v14 = *(_QWORD *)(a1 + 48);
  }
  else
  {
    v20 = *(_QWORD *)(a1 + 24);
    ptr = a2;
    if ( sub_7BF130(&ptr, v20, a1 + 40) <= 0 )
    {
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 32) = a2;
      return 0;
    }
    *(_QWORD *)(a1 + 32) = a2;
    v14 = *(_QWORD *)(a1 + 48);
  }
  if ( v14 <= 0xA )
    return 0;
  v12 = strncmp(*(const char **)(a1 + 40), "$ chooser\\", 0xAu);
  if ( v12 )
    return 0;
  if ( v7 == 65 )
  {
    v15 = *a5;
    v16 = *(_QWORD *)(a1 + 24);
    if ( (_DWORD)v15 == -1 )
      v15 = -1;
    ptr = (void *)v15;
    sub_7BE7C0(&v21, v16, 0, &ptr, 8, 65);
  }
  v17 = *(_QWORD *)(a1 + 24);
  v23 = nullptr;
  v24 = 0;
  if ( sub_7BEED0(&v21, v17, &v23, 1, 0, 87) <= 0 )
    goto LABEL_21;
  if ( (v24 & 3) == 0 )
  {
    sub_7BEF30(&v21, *(_QWORD *)(a1 + 24), v23, v24, 0, 87);
LABEL_21:
    v18 = *(_QWORD *)(a1 + 24);
    v22 = v21;
    ptr = nullptr;
    v26 = 0;
    if ( sub_7BEED0(&v22, v18, &ptr, 1, 0, 75) > 0 )
      sub_7BEF30(&v22, v18, ptr, v26, 0, 75);
    if ( ptr )
    {
      *(_QWORD *)&v26 = 0;
      qfree(ptr);
    }
    v19 = sub_7BE950(&v21, *(_QWORD *)(a1 + 24), 0, v27, 1024, 67);
    if ( v19 >= 0 )
      sub_7BE7C0(&v21, *(_QWORD *)(a1 + 24), 0, v27, v19, 67);
    v12 = 1;
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  return v12;
}
