__int64 __fastcall sub_8CEA20(__int64 a1, unsigned int *a2, int *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  char v9; // al
  __int64 v10; // r9
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // ebp
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v20; // [rsp+18h] [rbp-60h]
  __int64 v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  int v23[18]; // [rsp+30h] [rbp-48h] BYREF

  if ( *a3 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
    if ( v5 && (v6 = *a2, (unsigned int)v6 < *(_DWORD *)(v5 - 4)) && (v7 = *(_QWORD *)(v5 + 8 * v6)) != 0 )
    {
      return sub_B39350(v7, *(unsigned int *)(a1 + 8));
    }
    else
    {
      v9 = sub_892DC0((__int64)a2);
      v11 = *(_DWORD *)(a1 + 584);
      if ( v9 )
        v11 = *(_DWORD *)(a1 + 580);
      v12 = sub_B68280(*(_QWORD *)(a1 + 16), a2, 0, 0, 1, v10);
      v13 = a1;
      v14 = a1 + 208;
      v15 = (**(__int64 (__fastcall ***)(__int64, __int64))(v14 - 208))(v13, v12);
      *(_QWORD *)v19 = 0;
      v20 = 0;
      v16 = v15;
      v21 = 1;
      v22 = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v19, a3);
      v17 = sub_8ACED0(v14, v11, v16, v19, (int *)&qword_18C26B0);
      sub_8CBC10(v14, v17);
      sub_3EBD70((__int64)v23, (__int64)v19);
      v18 = sub_8ACED0(v14, v16, v11, v23, (int *)&qword_18C26B0);
      sub_8CBC10(v14, v18);
      sub_25A130((char *)v23);
      sub_25A130((char *)v19);
      return v16;
    }
  }
  else if ( (unsigned __int8)sub_892DC0((__int64)a2) )
  {
    return *(unsigned int *)(a1 + 580);
  }
  else
  {
    return *(unsigned int *)(a1 + 584);
  }
}

