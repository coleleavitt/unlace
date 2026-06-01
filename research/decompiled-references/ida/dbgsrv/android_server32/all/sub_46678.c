/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46678
// Address: 0x00046678

//----- (00046678) --------------------------------------------------------
int __fastcall sub_46678(int a1, int a2)
{
  _DWORD *v3; // r0
  const char *v4; // r5
  char *v5; // r6
  int v6; // r0
  size_t v7; // r2
  size_t v8; // r6
  void *v9; // r6
  void *v10; // r6
  int qerrno; // [sp+4h] [bp-14h]
  int v13; // [sp+Ch] [bp-Ch]
  int v15; // [sp+14h] [bp-4h] BYREF
  unsigned __int8 v16[8]; // [sp+18h] [bp+0h] BYREF
  void *v17; // [sp+20h] [bp+8h] BYREF
  int v18; // [sp+24h] [bp+Ch]
  int v19; // [sp+28h] [bp+10h]
  int v20; // [sp+2Ch] [bp+14h]
  int v21; // [sp+30h] [bp+18h]

  v16[0] = 2;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = nullptr;
  v15 = -1;
  qerrno = get_qerrno();
  v13 = a1;
  v3 = *(_DWORD **)(a1 + 56);
  v4 = nullptr;
  v5 = nullptr;
  if ( v3 )
  {
    v5 = sub_408D0(v3, *(_DWORD *)(v13 + 60), &v15);
    v6 = *(_DWORD *)(v13 + 56);
    if ( *(_DWORD *)(v6 + 4) )
      v4 = *(const char **)v6;
    else
      v4 = &byte_B3CBE;
  }
  if ( v16[0] == 5 )
  {
    sub_448A0((int)v17, v16);
  }
  else if ( v16[0] == 7 && v17 )
  {
    v18 = 0;
    qfree(v17);
    v19 = 0;
    v17 = nullptr;
  }
  v16[0] = 2;
  v7 = 0;
  v17 = nullptr;
  if ( v5 )
    v7 = strlen(v5);
  v16[0] = 7;
  sub_266B8(&v17, v5, v7);
  v8 = 0;
  set_idcv_attr(a2, "file", v16, 0);
  if ( v16[0] == 5 )
  {
    sub_448A0((int)v17, v16);
  }
  else if ( v16[0] == 7 && v17 )
  {
    v18 = 0;
    qfree(v17);
    v19 = 0;
    v17 = nullptr;
  }
  v16[0] = 2;
  v17 = nullptr;
  if ( v4 )
    v8 = strlen(v4);
  v16[0] = 7;
  sub_266B8(&v17, v4, v8);
  set_idcv_attr(a2, "func", v16, 0);
  v9 = (void *)v15;
  if ( v16[0] == 5 )
  {
    sub_448A0((int)v17, v16);
  }
  else if ( v16[0] == 7 && v17 )
  {
    v18 = 0;
    qfree(v17);
    v19 = 0;
    v17 = nullptr;
  }
  v16[0] = 2;
  v17 = v9;
  set_idcv_attr(a2, "line", v16, 0);
  v10 = *(void **)(v13 + 60);
  if ( v16[0] == 5 )
  {
    sub_448A0((int)v17, v16);
  }
  else if ( v16[0] == 7 && v17 )
  {
    v18 = 0;
    qfree(v17);
    v19 = 0;
    v17 = nullptr;
  }
  v16[0] = 2;
  v17 = v10;
  set_idcv_attr(a2, "pc", v16, 0);
  set_qerrno(qerrno);
  if ( v16[0] == 5 )
  {
    sub_448A0((int)v17, v16);
  }
  else if ( v16[0] == 7 && v17 )
  {
    v18 = 0;
    qfree(v17);
    v19 = 0;
    v17 = nullptr;
  }
  return _stack_chk_guard - v21;
}
// B3CBE: using guessed type char byte_B3CBE;
