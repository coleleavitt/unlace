unsigned __int64 __fastcall sub_19C60(__int64 *a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  _QWORD **v5; // rbx
  void *v6; // rdi
  void *v8; // rax
  const void *v9; // rsi
  _QWORD v10[3]; // [rsp+0h] [rbp-B8h] BYREF
  int v11; // [rsp+18h] [rbp-A0h] BYREF
  void *v12; // [rsp+20h] [rbp-98h]
  int *v13; // [rsp+28h] [rbp-90h]
  int *v14; // [rsp+30h] [rbp-88h]
  __int64 v15; // [rsp+38h] [rbp-80h]
  void *v16; // [rsp+40h] [rbp-78h]
  __int128 v17; // [rsp+48h] [rbp-70h]
  __int64 v18; // [rsp+58h] [rbp-60h]
  int v19; // [rsp+60h] [rbp-58h]
  __int64 *v20; // [rsp+68h] [rbp-50h]
  __int64 v21; // [rsp+70h] [rbp-48h]
  unsigned __int64 v22; // [rsp+78h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  sub_19AA0(a1, a2);
  if ( *(_BYTE *)(a1[1] + 2216) )
    sub_EC40();
  sub_198E0(a2);
  v3 = *(_QWORD *)(a2 + 120);
  v10[0] = &unk_3CB00;
  v10[1] = 31;
  v11 = 0;
  v12 = 0;
  v13 = &v11;
  v14 = &v11;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( v3 )
  {
    v8 = (void *)qalloc_or_throw();
    v9 = *(const void **)(a2 + 112);
    v16 = v8;
    *((_QWORD *)&v17 + 1) = v3;
    memcpy(v8, v9, 16 * v3);
    *(_QWORD *)&v17 = v3;
  }
  v4 = *a1;
  v21 = a2;
  v20 = a1;
  v18 = 0;
  v19 = -1;
  v10[0] = &off_3C228;
  (*(void (__fastcall **)(__int64 *, _QWORD *, __int64))(v4 + 368))(a1, v10, a2 + 112);
  v10[0] = &unk_3CB00;
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  v5 = (_QWORD **)v12;
  if ( v12 )
  {
    do
    {
      sub_10FE0(v5[3]);
      v6 = v5;
      v5 = (_QWORD **)v5[2];
      operator delete(v6, 0x28u);
    }
    while ( v5 );
  }
  return v22 - __readfsqword(0x28u);
}
