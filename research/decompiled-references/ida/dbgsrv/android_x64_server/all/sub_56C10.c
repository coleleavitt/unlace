/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56C10
// Address: 0x0000000000056C10

//----- (0000000000056C10) ----------------------------------------------------
unsigned __int64 __fastcall sub_56C10(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rbx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // [rsp-8h] [rbp-38h]

  v17 = result;
  v7 = a6;
  v8 = a5;
  v11 = *a2;
  if ( a5 == -1 )
  {
    v14 = a4;
    result = qlseek(a1, 0, 1);
    a4 = v14;
    v8 = result;
    if ( v7 != -1 )
      goto LABEL_3;
  }
  else if ( a6 != -1 )
  {
    goto LABEL_3;
  }
  v15 = a4;
  result = qlsize(a1);
  a4 = v15;
  v7 = result;
LABEL_3:
  v12 = v7 - v8;
  if ( ((v12 | v8) & 0x8000000000000000LL) != 0LL )
  {
    v16 = 0;
    goto LABEL_14;
  }
  v13 = *a2;
  if ( !a3 || !v13 )
  {
    if ( v12 >= a3 * v13 )
      return result;
    goto LABEL_13;
  }
  result = 0xFFFFFFFFFFFFFFFFLL / v13;
  if ( v12 < a3 * v13 || result < a3 )
  {
LABEL_13:
    v16 = v12 / a3;
LABEL_14:
    *a2 = v16;
    result = sub_5EC20(
               1,
               (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
               a4,
               v11,
               v16,
               ". Do you want to continue with the new value?",
               v17);
    if ( (_DWORD)result != 1 )
      sub_5E5B0(0);
  }
  return result;
}
// 56C1A: variable 'result' is possibly undefined
