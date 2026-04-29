unsigned __int64 __fastcall sub_35C9A0(unsigned int *a1, int a2, int a3, int a4, unsigned int a5)
{
  __int64 v7; // r14
  double v8; // xmm0_8
  _QWORD *v9; // r13
  int v10; // ebp
  __int64 v11; // rbx
  __int64 v12; // r14
  int func_qty; // eax
  unsigned int v15; // esi
  __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // [rsp+0h] [rbp-A8h]
  unsigned int v19; // [rsp+4h] [rbp-A4h]
  unsigned int v20; // [rsp+8h] [rbp-A0h]
  unsigned int v21; // [rsp+10h] [rbp-98h]
  unsigned int v22; // [rsp+14h] [rbp-94h]
  unsigned int v23; // [rsp+1Ch] [rbp-8Ch]
  unsigned int v24; // [rsp+20h] [rbp-88h]
  unsigned int v25; // [rsp+24h] [rbp-84h]
  unsigned int v26; // [rsp+28h] [rbp-80h]
  unsigned int v27; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v28; // [rsp+30h] [rbp-78h]
  unsigned int v29; // [rsp+34h] [rbp-74h]
  _BYTE v30[40]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v7 = a5;
  qstrftime(v30, 40, "%d/%m/%Y %H:%M:%S", a2);
  v8 = 0.0;
  if ( a4 )
    v8 = (double)(int)v7 * 100.0 / (double)a4;
  v9 = *(_QWORD **)a1;
  v10 = a3 - a2;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 936LL) <= 1u )
  {
    v29 = a1[97];
    v18 = a1[92];
    v28 = a1[96];
    v25 = a1[93];
    v19 = a1[91];
    v15 = a1[89];
    v20 = a1[90];
    v27 = a1[95];
    v26 = a1[94];
    v16 = a1[84];
    v21 = a1[88];
    v22 = a1[87];
    v24 = a1[86];
    v23 = a1[85];
    v17 = ((__int64 (*)(void))get_func_qty)();
    sub_37E110(
      (_DWORD)v9,
      (unsigned int)"%s %5d %5zu %5d %5d %4d %4.1f %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d %3d\n",
      (unsigned int)v30,
      v10,
      v17,
      a4,
      v8,
      (unsigned int)(a4 - v7),
      v7,
      v16,
      v23,
      v24,
      v22,
      v21,
      v15,
      v20,
      v19,
      v18,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  else
  {
    v11 = v9[52];
    v12 = v9[116];
    if ( v11 == -1 )
      v11 = v9[51];
    func_qty = get_func_qty(v8);
    sub_37E110(
      (_DWORD)v9,
      (unsigned int)"%s %5d %5zu %5d INTERR AT %a: %s\n",
      (unsigned int)v30,
      v10,
      func_qty,
      a4,
      v11,
      v12);
  }
  return v31 - __readfsqword(0x28u);
}
