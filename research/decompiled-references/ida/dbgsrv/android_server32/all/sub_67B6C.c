/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67B6C
// Address: 0x00067B6C

//----- (00067B6C) --------------------------------------------------------
int __fastcall sub_67B6C(int a1, int a2)
{
  _DWORD *v4; // r5
  char *v5; // r1
  int v6; // r0
  unsigned int v7; // r1
  signed int v8; // r2
  int v9; // r0
  int v10; // r4
  int v12; // [sp+8h] [bp-1Ch]
  void *v13[3]; // [sp+10h] [bp-14h] BYREF
  int v14; // [sp+1Ch] [bp-8h] BYREF

  v4 = (_DWORD *)sub_6762C();
  if ( *(_DWORD *)(a1 + 12) )
    v5 = *(char **)(a1 + 8);
  else
    v5 = &byte_B3CBE;
  v6 = (*(int (__fastcall **)(_DWORD *, char *, int *))(*v4 + 244))(v4, v5, &v14);
  if ( v6 < 0 )
    goto LABEL_14;
  v7 = v4[71];
  v8 = v7;
  if ( !v7 )
    v8 = v4[83];
  if ( v6 >= v8 )
  {
LABEL_14:
    if ( !under_debugger )
      interr(30056);
    __debugbreak();
  }
  v12 = v6;
  memset(v13, 0, sizeof(v13));
  if ( !v7 )
    v7 = v4[83];
  sub_5F718((int)v13, v7);
  v9 = sub_67638();
  if ( (*(int (__fastcall **)(_DWORD *, int, int, void *, _DWORD))(*v4 + 112))(v4, v9, v14, v13[0], 0) <= 0 )
  {
    v10 = throw_idc_exception(a2, "failed to read register value");
  }
  else
  {
    *(_DWORD *)(a2 + 8) = *((_DWORD *)v13[0] + 6 * v12 + 2);
    v10 = 0;
  }
  sub_5F79C(v13);
  return v10;
}
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
