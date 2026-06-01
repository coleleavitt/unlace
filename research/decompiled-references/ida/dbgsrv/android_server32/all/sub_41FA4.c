/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41FA4
// Address: 0x00041FA4

//----- (00041FA4) --------------------------------------------------------
int sub_41FA4()
{
  _DWORD *v0; // r7
  void *lexer; // r0
  int v2; // r0
  int *v3; // r0
  unsigned __int8 *v4; // r0
  int v5; // r5
  _DWORD *v7; // r4
  _DWORD *v8; // r4
  _DWORD *v9; // r4
  _DWORD *v10; // r4
  void *v11; // [sp+14h] [bp-1010h] BYREF
  int v12; // [sp+18h] [bp-100Ch]
  int v13; // [sp+1Ch] [bp-1008h]
  char v14[4100]; // [sp+20h] [bp-1004h] BYREF

  qatexit((int)sub_42314);
  dword_DE374 = (int)qmutex_create();
  dword_DE360 = (int)qmutex_create();
  if ( !dword_DE360 || !dword_DE374 )
  {
    if ( !under_debugger )
      interr(486);
LABEL_31:
    __debugbreak();
  }
  if ( !(sub_9B7B4((int)&dword_DE394, 0, 0) << 31) && _cxa_guard_acquire(&dword_DE394) )
  {
    v7 = operator new(0x50u);
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 0;
    v7[5] = 0;
    v7[6] = 0;
    memset(v7 + 8, 0, 0x29u);
    dword_DE390 = (int)v7;
    _cxa_guard_release(&dword_DE394);
  }
  v0 = (_DWORD *)dword_DE390;
  lexer = create_lexer(nullptr, 0, 0, 0);
  v0[4] = lexer;
  sub_55934((int)lexer, (int)sub_38B1C);
  v2 = dword_DD60C;
  v0[5] = off_DD610;
  v0[6] = v2;
  if ( !(sub_9B7B4((int)&dword_DE394, 0, 0) << 31) && _cxa_guard_acquire(&dword_DE394) )
  {
    v8 = operator new(0x50u);
    *v8 = 0;
    v8[1] = 0;
    v8[2] = 0;
    v8[3] = 0;
    v8[4] = 0;
    v8[5] = 0;
    v8[6] = 0;
    memset(v8 + 8, 0, 0x29u);
    dword_DE390 = (int)v8;
    _cxa_guard_release(&dword_DE394);
  }
  sub_411F4(dword_DE390, "object", 0);
  if ( !(sub_9B7B4((int)&dword_DE394, 0, 0) << 31) && _cxa_guard_acquire(&dword_DE394) )
  {
    v9 = operator new(0x50u);
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0;
    v9[3] = 0;
    v9[4] = 0;
    v9[5] = 0;
    v9[6] = 0;
    memset(v9 + 8, 0, 0x29u);
    dword_DE390 = (int)v9;
    _cxa_guard_release(&dword_DE394);
  }
  sub_411F4(dword_DE390, "typeinfo", 0);
  if ( !(sub_9B7B4((int)&dword_DE394, 0, 0) << 31) && _cxa_guard_acquire(&dword_DE394) )
  {
    v10 = operator new(0x50u);
    *v10 = 0;
    v10[1] = 0;
    v10[2] = 0;
    v10[3] = 0;
    v10[4] = 0;
    v10[5] = 0;
    v10[6] = 0;
    memset(v10 + 8, 0, 0x29u);
    dword_DE390 = (int)v10;
    _cxa_guard_release(&dword_DE394);
  }
  sub_411F4(dword_DE390, "exception", 0);
  if ( off_DD61C[0] )
    ((void (*)(void))off_DD61C[0])();
  if ( !byte_DE500 )
    goto LABEL_34;
  v3 = (int *)off_DD644(off_DD644);
  v4 = sub_55120(v3, v14, 4096, (int)"idc.idc", nullptr, 0);
  if ( !v4 )
    goto LABEL_34;
  v12 = 0;
  v11 = nullptr;
  v13 = 0;
  if ( compile_idc_file((char *)v4, (int)&v11, 0) )
  {
    v0[3] = sub_50108(v0[4]);
    v5 = 0;
  }
  else
  {
    v5 = 1;
    sub_2BC80((int)"%s");
  }
  if ( v11 )
  {
    v12 = 0;
    qfree(v11);
    v13 = 0;
    v11 = nullptr;
  }
  if ( !v5 )
  {
LABEL_34:
    if ( install_extlang((int)dword_DD648) )
    {
      if ( !under_debugger )
        interr(1447);
      goto LABEL_31;
    }
  }
  return 4132;
}
// DD60C: using guessed type int dword_DD60C;
// DD610: using guessed type char **off_DD610;
// DD61C: using guessed type int *off_DD61C[4];
// DD644: using guessed type int (__fastcall *off_DD644)(_DWORD);
// DD648: using guessed type int dword_DD648[3];
// DE360: using guessed type int dword_DE360;
// DE374: using guessed type int dword_DE374;
// DE390: using guessed type int dword_DE390;
// DE394: using guessed type int dword_DE394;
// DE500: using guessed type char byte_DE500;
// E0550: using guessed type char under_debugger;
