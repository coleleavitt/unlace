unsigned __int64 __fastcall sub_2B5C20(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r12
  __int64 v6; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 v11; // rbx
  _QWORD v13[3]; // [rsp+0h] [rbp-88h] BYREF
  int v14; // [rsp+18h] [rbp-70h]
  __int64 v15; // [rsp+20h] [rbp-68h]
  int v16; // [rsp+28h] [rbp-60h]
  int v17; // [rsp+2Ch] [rbp-5Ch]
  __int64 v18; // [rsp+30h] [rbp-58h]
  __int64 v19; // [rsp+38h] [rbp-50h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v4 = a3;
  v6 = *(int *)(a2 + 4LL * a4 + 16);
  v20 = __readfsqword(0x28u);
  switch_dbctx(v6);
  v8 = sub_2B0CC0(a1, 0);
  if ( v8 != -1 )
  {
    v9 = *(int *)(a2 + 4 * v4 + 16);
    v10 = v8;
    v19 = a1;
    v13[2] = &unk_4091C0;
    v14 = 2;
    v15 = a2;
    v16 = v4;
    v17 = a4;
    v13[0] = off_4B4F90;
    v18 = 0;
    v13[1] = switch_dbctx(v9);
    v11 = sub_2B0CC0(a1, 1);
    switch_dbctx(v6);
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD *))netnode_copy2)(v10, 1, v11, 0, v13);
  }
  return v20 - __readfsqword(0x28u);
}
