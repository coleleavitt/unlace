__int64 __fastcall sub_D9ADF0(__int64 a1, __int64 (__fastcall *a2)(__int64, _QWORD), __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  void *v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  char v15; // bl
  int v17; // eax
  __int64 v18; // [rsp+0h] [rbp-68h]
  void *v19; // [rsp+8h] [rbp-60h]
  void *v20; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v21; // [rsp+18h] [rbp-50h]
  void *v22; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 176);
  v5 = sub_DFDA20(v4, 16);
  v6 = *(void **)v5;
  v7 = *(_QWORD *)(v5 + 8);
  sub_DFDA50(v4, 16);
  v8 = *(_QWORD *)(a1 + 176);
  v9 = sub_DFDA20(v8, 16);
  v19 = *(void **)v9;
  v18 = *(_QWORD *)(v9 + 8);
  sub_DFDA50(v8, 16);
  v10 = *(_QWORD *)(a1 + 176);
  v11 = ((unsigned __int64)(unsigned int)v18 + 63) >> 6;
  if ( v11 == 1 )
  {
    v21 = v18;
    if ( (unsigned int)v18 > 0x40 )
      sub_21E1730(&v20, v19, 0);
    else
      v20 = v19;
  }
  else
  {
    sub_21E18D0(&v20, v18, v11, v19);
  }
  v12 = ((unsigned __int64)(unsigned int)v7 + 63) >> 6;
  if ( v12 == 1 )
  {
    v23 = v7;
    if ( (unsigned int)v7 <= 0x40 )
    {
      v22 = v6;
      v13 = sub_21E2070(&v20, &v22);
      if ( v13 < 0 )
        v14 = 2;
      else
        v14 = v13 != 0 ? 3 : 0;
      goto LABEL_8;
    }
    sub_21E1730(&v22, v6, 0);
  }
  else
  {
    sub_21E18D0(&v22, (unsigned int)v7, v12, v6);
  }
  v17 = sub_21E2070(&v20, &v22);
  if ( v17 < 0 )
    v14 = 2;
  else
    v14 = v17 != 0 ? 3 : 0;
  if ( v23 > 0x40 && v22 )
    operator delete[](v22);
LABEL_8:
  if ( v21 > 0x40 && v20 )
    operator delete[](v20);
  v15 = a2(a3, v14);
  *(_BYTE *)sub_DFD980(v10, 8) = v15;
  return 1;
}

