__int64 __fastcall sub_8D62F0(__int64 a1, unsigned int *a2, int *a3)
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
  int v19[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v20; // [rsp+18h] [rbp-90h]
  __int64 v21; // [rsp+20h] [rbp-88h]
  __int64 v22; // [rsp+28h] [rbp-80h]
  int v23; // [rsp+30h] [rbp-78h]
  int v24; // [rsp+40h] [rbp-68h] BYREF
  char v25; // [rsp+44h] [rbp-64h]
  __int64 v26; // [rsp+48h] [rbp-60h]
  int v27; // [rsp+50h] [rbp-58h]
  char v28; // [rsp+54h] [rbp-54h]
  __int64 v29; // [rsp+58h] [rbp-50h]
  int v30; // [rsp+60h] [rbp-48h]

  if ( *a3 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
    if ( v5 )
    {
      v6 = *a2;
      if ( (unsigned int)v6 < *(_DWORD *)(v5 - 4) )
      {
        v7 = *(_QWORD *)(v5 + 8 * v6);
        if ( v7 )
          return sub_B39350(v7, *(unsigned int *)(a1 + 8));
      }
    }
    v9 = sub_892DC0((__int64)a2);
    v11 = *(_DWORD *)(a1 + 592);
    if ( v9 )
      v11 = *(_DWORD *)(a1 + 588);
    v12 = sub_B68280(*(_QWORD *)(a1 + 16), a2, 0, 0, 1, v10);
    v13 = a1;
    v14 = a1 + 216;
    v15 = (**(__int64 (__fastcall ***)(__int64, __int64))(v14 - 216))(v13, v12);
    *(_QWORD *)v19 = 0;
    v16 = v15;
    v20 = 0;
    v21 = 1;
    v22 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v19, a3);
    v23 = 0;
    v17 = sub_8AD5A0(v14, v11, v16, v19, (int *)&qword_18C26B0);
    sub_8D33D0(v14, v17);
    v25 &= 0xFCu;
    v28 &= 0xFCu;
    v24 = 0;
    v26 = 0;
    v27 = 1;
    v29 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v24, v19);
    v30 = v23;
    sub_1831620(qword_1C7F2C0, &v24);
    v30 = -v30;
    v18 = sub_8AD5A0(v14, v16, v11, &v24, (int *)&qword_18C26B0);
    sub_8D33D0(v14, v18);
    sub_25A130((char *)&v24);
    sub_25A130((char *)v19);
  }
  else if ( (unsigned __int8)sub_892DC0((__int64)a2) )
  {
    return *(unsigned int *)(a1 + 588);
  }
  else
  {
    return *(unsigned int *)(a1 + 592);
  }
  return v16;
}

