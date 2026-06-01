__int64 __fastcall sub_3C4370(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  unsigned int v7; // esi
  __int64 **v8; // rdi
  __int64 v9; // rdi
  __int64 v11; // r12
  __int64 i; // rbp
  __int64 v13; // rax
  char v14; // dl
  unsigned int v15; // eax
  _QWORD *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rbp
  __int64 module_data; // rax
  _QWORD v21[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( a2 == 4 )
  {
    v15 = *a5;
    if ( *a5 > 0x2F )
    {
      v16 = (_QWORD *)*((_QWORD *)a5 + 1);
      *((_QWORD *)a5 + 1) = v16 + 1;
    }
    else
    {
      v16 = (_QWORD *)(*((_QWORD *)a5 + 2) + v15);
      *a5 = v15 + 8;
    }
    if ( *v16 == a1 )
    {
      v18 = *(int *)(*(_QWORD *)(a1 + 8) + 28LL);
      if ( (int)v18 > 0 )
      {
        v19 = 0;
        do
        {
          switch_dbctx();
          module_data = get_module_data();
          *(_DWORD *)(a1 + 4 * v19 + 200) = *(_DWORD *)(module_data + 604);
          *(_BYTE *)(a1 + v19 + 212) = *(_BYTE *)(module_data + 718);
          *(_BYTE *)(a1 + v19++ + 215) = *(_BYTE *)(module_data + 716);
          *(_DWORD *)(module_data + 604) &= ~0x1000u;
          *(_BYTE *)(module_data + 718) = 1;
          *(_BYTE *)(module_data + 716) = 0;
        }
        while ( v18 != v19 );
      }
      v21[0] = &off_4E81B8;
      v21[1] = a1 + 152;
      create_byfunc_merge_handler();
    }
  }
  else if ( a2 > 4 )
  {
    if ( a2 == 8 )
    {
      v11 = *(int *)(*(_QWORD *)(a1 + 8) + 28LL);
      if ( (int)v11 > 0 )
      {
        for ( i = 0; i != v11; ++i )
        {
          switch_dbctx();
          v13 = get_module_data();
          *(_DWORD *)(v13 + 604) = *(_DWORD *)(a1 + 4 * i + 200);
          *(_BYTE *)(v13 + 718) = *(_BYTE *)(a1 + i + 212);
          v14 = *(_BYTE *)(a1 + i + 215);
          *(_BYTE *)(v13 + 716) = v14;
        }
      }
    }
  }
  else if ( a2 - 2 <= 1 )
  {
    v7 = *a5;
    if ( *a5 > 0x2F )
    {
      v8 = (__int64 **)*((_QWORD *)a5 + 1);
      *((_QWORD *)a5 + 1) = v8 + 1;
    }
    else
    {
      v8 = (__int64 **)(*((_QWORD *)a5 + 2) + v7);
      *a5 = v7 + 8;
    }
    v9 = **v8;
    if ( a2 != 2 )
      return sub_2B3050(v9);
    v17 = *(_QWORD *)(a1 + 8);
    v21[0] = v9;
    sub_2B85A0(v9, v17, a3, a4);
    sub_1774C0(a1 + 152, v21);
  }
  return v22 - __readfsqword(0x28u);
}
