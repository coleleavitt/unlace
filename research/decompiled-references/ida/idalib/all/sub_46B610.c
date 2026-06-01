__int64 __fastcall sub_46B610(__int64 a1, int a2, int a3, void *a4)
{
  __int64 v5; // rdi
  _QWORD *v7; // rdi
  unsigned __int16 v8; // ax
  _QWORD *v9; // rbp
  unsigned __int64 v11; // [rsp+8h] [rbp-70h] BYREF
  int v12; // [rsp+10h] [rbp-68h] BYREF
  void *v13; // [rsp+18h] [rbp-60h]
  __int128 v14; // [rsp+20h] [rbp-58h]
  void *ptr; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+38h] [rbp-40h]
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v5 = *(int *)(a1 + 4LL * a3 + 16);
  v17 = __readfsqword(0x28u);
  v12 = 0;
  v7 = *(_QWORD **)(switch_dbctx(v5) + 1672);
  v14 = 0;
  v13 = nullptr;
  ptr = nullptr;
  v16 = 0;
  v8 = sub_3BE900(v7, (unsigned __int64)a4, 4);
  sub_46AE10(&v12, (__int64)a4, v8);
  v9 = *(_QWORD **)(switch_dbctx(*(int *)(a1 + 4LL * a2 + 16)) + 1672);
  v11 = sub_3BE900(v9, (unsigned __int64)a4, 0);
  sub_46AFC0(&v12, (__int64 *)&v11, a4);
  sub_3D07C0(v9, a4, v11);
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    qfree(ptr);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return 1;
}
