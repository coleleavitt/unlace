__int64 __fastcall sub_A63D50(__int64 a1, unsigned int **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // r12d
  unsigned int v15; // ebx
  _DWORD *v16; // r13
  __int64 v17; // [rsp+0h] [rbp-78h]
  unsigned int v18; // [rsp+Ch] [rbp-6Ch]
  _DWORD *v19; // [rsp+18h] [rbp-60h] BYREF
  __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h]

  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  if ( v7 )
  {
    a3 = *(unsigned int *)a2;
    if ( (unsigned int)a3 < *(_DWORD *)(v7 - 4) )
    {
      v8 = *(_QWORD *)(v7 + 8 * a3);
      if ( v8 )
        return sub_B39350(v8, *(unsigned int *)(a1 + 8));
    }
  }
  v10 = sub_A63A20((__int64 *)a1, a2[4], a3, a4, a5, a6, v17);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  if ( v11 )
  {
    v12 = *(unsigned int *)a2;
    if ( (unsigned int)v12 < *(_DWORD *)(v11 - 4) )
    {
      v8 = *(_QWORD *)(v11 + 8 * v12);
      if ( v8 )
        return sub_B39350(v8, *(unsigned int *)(a1 + 8));
    }
  }
  v18 = v10;
  v13 = sub_99A610(a1, (unsigned int *)a2);
  v14 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v13);
  v19 = nullptr;
  v15 = sub_A47740(a1);
  sub_9C76A0(&v19, (unsigned __int64 *)(a1 + 784), (unsigned int *)(a1 + 792));
  v20 = 1;
  v21 = 0;
  v16 = v19;
  v22 = 1;
  v23 = 0;
  sub_182CBA0(qword_1C7F2C0, &v22);
  BYTE4(v22) &= ~1u;
  LODWORD(v22) = 1;
  sub_9F2330(a1, v15, (__int64)&v20, v18);
  sub_25A130((char *)&v20);
  v20 = 1;
  v21 = 0;
  v22 = 1;
  v23 = 0;
  sub_182CBA0(qword_1C7F2C0, &v22);
  BYTE4(v22) &= ~1u;
  LODWORD(v22) = 1;
  sub_9F2070(a1, v15, (__int64)&v20, v14);
  sub_25A130((char *)&v20);
  sub_A48A40(a1, v15);
  --*v16;
  return v14;
}

