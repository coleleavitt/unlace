__int64 __fastcall sub_397700(__int64 a1, const char *a2, __int64 a3, char a4, __int64 a5, double a6)
{
  bool v7; // zf
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rax
  _QWORD *v14; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdi
  char v23; // r12
  __int64 v24; // rdi
  __int64 tinfo_property; // rax
  __int64 v26; // rdx
  _QWORD v27[7]; // [rsp+0h] [rbp-38h] BYREF

  v7 = *a2 == 0;
  v27[1] = __readfsqword(0x28u);
  if ( v7 )
  {
    set_tinfo(a3, 0);
LABEL_3:
    sub_395A90(a1, 0, a6, v9, v10, v11);
    return 1;
  }
  v13 = *(_QWORD *)(a1 + 32);
  v14 = a2;
  if ( v13 )
    *(_DWORD *)(v13 + 108) |= 8u;
  apply_tinfo(a3, a2, 1);
  if ( a5 && (unsigned __int8)sub_384940(a3, (__int64)a2, v17, v18, v19, v20) )
  {
    a2 = s1;
    if ( *(_QWORD *)(a5 + 8) )
      a2 = *(const char **)a5;
    set_name(a3, a2, 0);
  }
  v21 = *(_QWORD *)(a1 + 32);
  if ( v21 )
  {
    *(_DWORD *)(v21 + 108) &= ~8u;
    if ( (*(_BYTE *)a1 & 2) == 0 )
    {
      a2 = nullptr;
      sub_395A90(a1, 0, a6, v17, v18, v19);
    }
  }
  v22 = *(_QWORD *)(a1 + 24);
  v23 = 1;
  if ( *(_QWORD *)(v22 + 40) == a3 )
  {
    *(_DWORD *)a1 |= 2u;
    if ( a4 )
      sub_2167E0(v22, (__int64)a2, v17);
    v23 = 0;
  }
  while ( 1 )
  {
    v24 = *v14;
    v27[0] = 0;
    tinfo_property = get_tinfo_property(v24, 13);
    v27[0] = tinfo_property;
    if ( !(_BYTE)tinfo_property )
      break;
    v26 = *v14;
    *v14 = tinfo_property;
    v27[0] = v26;
    clear_tinfo_t(v27);
  }
  clear_tinfo_t(v27);
  if ( (get_tinfo_property(*v14, 2) & 0xF) == 0xC || v23 )
    goto LABEL_3;
  return 1;
}
