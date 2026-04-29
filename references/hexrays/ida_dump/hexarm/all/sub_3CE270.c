__int64 __fastcall sub_3CE270(__int64 a1, unsigned int a2, int a3, int a4, int *a5)
{
  unsigned int v7; // esi
  __int64 **v8; // rdi
  __int64 v9; // rdi
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rax
  char v15; // dl
  unsigned int v16; // eax
  _QWORD *v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rbp
  __int64 module_data; // rax
  unsigned __int64 v26[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+18h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  if ( a2 == 4 )
  {
    v16 = *a5;
    if ( (unsigned int)*a5 > 0x2F )
    {
      v17 = *((_QWORD **)a5 + 1);
      *((_QWORD *)a5 + 1) = v17 + 1;
    }
    else
    {
      v17 = (_QWORD *)(*((_QWORD *)a5 + 2) + v16);
      *a5 = v16 + 8;
    }
    if ( *v17 == a1 )
    {
      v22 = *(_QWORD *)(a1 + 8);
      v23 = *(int *)(v22 + 28);
      if ( (int)v23 > 0 )
      {
        v24 = 0;
        while ( 1 )
        {
          switch_dbctx(*(int *)(v22 + 4LL * (int)v24 + 16));
          module_data = get_module_data((unsigned int)dword_4EB8F8);
          *(_DWORD *)(a1 + 4 * v24 + 200) = *(_DWORD *)(module_data + 604);
          *(_BYTE *)(a1 + v24 + 212) = *(_BYTE *)(module_data + 718);
          *(_BYTE *)(a1 + v24++ + 215) = *(_BYTE *)(module_data + 716);
          *(_DWORD *)(module_data + 604) &= ~0x1000u;
          *(_BYTE *)(module_data + 718) = 1;
          *(_BYTE *)(module_data + 716) = 0;
          if ( v23 == v24 )
            break;
          v22 = *(_QWORD *)(a1 + 8);
        }
      }
      v26[0] = (unsigned __int64)&off_4E33B8;
      v26[1] = a1 + 152;
      create_byfunc_merge_handler(a1 + 8, v26);
    }
  }
  else if ( a2 > 4 )
  {
    if ( a2 == 8 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      v12 = *(int *)(v11 + 28);
      if ( (int)v12 > 0 )
      {
        v13 = 0;
        while ( 1 )
        {
          switch_dbctx(*(int *)(v11 + 4LL * (int)v13 + 16));
          v14 = get_module_data((unsigned int)dword_4EB8F8);
          *(_DWORD *)(v14 + 604) = *(_DWORD *)(a1 + 4 * v13 + 200);
          *(_BYTE *)(v14 + 718) = *(_BYTE *)(a1 + v13 + 212);
          v15 = *(_BYTE *)(a1 + v13++ + 215);
          *(_BYTE *)(v14 + 716) = v15;
          if ( v13 == v12 )
            break;
          v11 = *(_QWORD *)(a1 + 8);
        }
      }
    }
  }
  else if ( a2 - 2 <= 1 )
  {
    v7 = *a5;
    if ( (unsigned int)*a5 > 0x2F )
    {
      v8 = *((__int64 ***)a5 + 1);
      *((_QWORD *)a5 + 1) = v8 + 1;
    }
    else
    {
      v8 = (__int64 **)(*((_QWORD *)a5 + 2) + v7);
      *a5 = v7 + 8;
    }
    v9 = **v8;
    if ( a2 != 2 )
      return sub_2B64F0(v9);
    v18 = *(_QWORD *)(a1 + 8);
    v26[0] = v9;
    sub_2BB3A0(v9, v18, a3, a4);
    sub_179740((_QWORD *)(a1 + 152), v26, v19, v20, v21);
  }
  return v27 - __readfsqword(0x28u);
}
