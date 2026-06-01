__int64 __fastcall sub_BC3DA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // ebp
  void *v10; // rbx
  unsigned int v12; // r15d
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // eax
  int v19; // [rsp+14h] [rbp-74h] BYREF
  __int64 v20; // [rsp+18h] [rbp-70h] BYREF
  __int64 v21[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v23[9]; // [rsp+40h] [rbp-48h] BYREF

  v7 = a2;
  if ( !(unsigned __int8)sub_BCED40(a1 + 1728, a2) )
  {
    v8 = a3;
    a3 = a2;
    v7 = v8;
  }
  v20 = 0;
  v22[0] = 0;
  v22[1] = 0;
  v23[0] = 1;
  v23[1] = 0;
  if ( (unsigned __int8)sub_1408CB0(a1 + 1848, a3, &v20, &v19)
    && sub_BB04C0(*(_QWORD **)(a1 + 1096), *(_DWORD *)(a1 + 1104), v20)
    && (v9 = sub_BCED40(a1 + 1728, v7), (_BYTE)v9)
    && !sub_BB1FE0(a1, v20, (__int64)v22) )
  {
    v12 = v19 + 1;
    sub_1579480(v21, a1 + 1224);
    sub_993400(a1 + 2208, v12);
    v13 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
    v18 = sub_BF5550((int)a1 + 2184, v13, v14, v15, v16, v17);
    sub_BC37F0(a1, a4, 0, nullptr, v18, a5);
    sub_BB0560(v21[0], v21[1]);
  }
  else
  {
    v9 = 0;
  }
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v22);
  sub_182CBA0(v10, v23);
  return v9;
}

