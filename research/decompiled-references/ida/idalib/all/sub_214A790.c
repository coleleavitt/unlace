__int64 __fastcall sub_214A790(__int64 a1)
{
  _DWORD **v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r12
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  void (*v10)(); // rax
  unsigned int v11; // r12d
  __int64 v12; // rdi
  void (*v13)(); // rax
  __int64 v14; // [rsp+0h] [rbp-58h] BYREF
  __int64 v15; // [rsp+8h] [rbp-50h]
  _QWORD v16[4]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v17; // [rsp+30h] [rbp-28h]

  v2 = *(_DWORD ***)(a1 + 8);
  if ( *v2[6] == 9 )
  {
    (*((void (__fastcall **)(_DWORD **))*v2 + 19))(v2);
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    v10 = *(void (**)())(*(_QWORD *)v9 + 240LL);
    if ( v10 != nullsub_1397 )
      ((void (__fastcall *)(__int64, _QWORD))v10)(v9, 0);
  }
  else
  {
    v14 = 0;
    v15 = 0;
    v3 = sub_2153C00(v2);
    v4 = sub_2124B50(v3);
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 160LL))(*(_QWORD *)(a1 + 8), &v14);
    if ( (_BYTE)v5 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v17 = 259;
      v16[0] = "expected region type after '.data_region' directive";
      return (unsigned int)sub_21543E0(v6, v16, 0, 0);
    }
    if ( v15 == 3 )
    {
      if ( *(_WORD *)v14 != 29802 || *(_BYTE *)(v14 + 2) != 56 )
        goto LABEL_9;
      v11 = 1;
    }
    else
    {
      if ( v15 != 4 )
      {
LABEL_9:
        v8 = *(_QWORD *)(a1 + 8);
        v16[0] = "unknown region type in '.data_region' directive";
        v17 = 259;
        return (unsigned int)sub_2153E90(v8, v4, v16, 0, 0);
      }
      if ( *(_DWORD *)v14 == 909210730 )
      {
        v11 = 2;
      }
      else
      {
        if ( *(_DWORD *)v14 != 842232938 )
          goto LABEL_9;
        v11 = 3;
      }
    }
    (*(void (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8), &v14, v14);
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    v13 = *(void (**)())(*(_QWORD *)v12 + 240LL);
    if ( v13 != nullsub_1397 )
    {
      ((void (__fastcall *)(__int64, _QWORD))v13)(v12, v11);
      return v5;
    }
  }
  return 0;
}
