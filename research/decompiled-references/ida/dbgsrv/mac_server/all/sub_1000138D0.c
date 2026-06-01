/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000138D0
// Address: 0x00000001000138D0

//----- (00000001000138D0) ----------------------------------------------------
char __fastcall sub_1000138D0(__int64 a1, unsigned int *a2, unsigned __int64 a3, __int64 a4, off_t a5, __int64 a6)
{
  __int64 v6; // rax
  off_t v8; // rbx
  _DWORD *v10; // r9
  __int64 v11; // r12
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  int v15; // eax
  off_t v16; // rax
  __int64 v17; // r14
  _DWORD *v18; // r13
  __int64 v19; // rax
  __int64 v21; // [rsp+0h] [rbp-30h]

  v21 = v6;
  v8 = a5;
  v10 = a2;
  v11 = *a2;
  if ( a5 == -1 )
  {
    v21 = a4;
    v16 = qlseek(a1, 0, 1);
    v10 = a2;
    a4 = v21;
    v8 = v16;
    if ( a6 != -1 )
      goto LABEL_3;
  }
  else if ( a6 != -1 )
  {
    goto LABEL_3;
  }
  v17 = a4;
  v18 = v10;
  v19 = qlsize(a1);
  v10 = v18;
  a4 = v17;
  a6 = v19;
LABEL_3:
  v12 = a6 - v8;
  LODWORD(v13) = 0;
  if ( ((v12 | v8) & 0x8000000000000000LL) != 0LL )
    goto LABEL_13;
  v14 = (unsigned int)*v10;
  if ( v14 == 0 || a3 == 0 )
  {
    LOBYTE(v15) = 0;
    goto LABEL_9;
  }
  LOBYTE(v15) = (a3 * (unsigned __int128)(unsigned int)*v10) >> 64 != 0;
  if ( is_mul_ok(a3, v14) )
  {
LABEL_9:
    if ( v12 >= a3 * v14 )
      return v15;
  }
  if ( (a3 | v12) >> 32 )
    v13 = v12 / a3;
  else
    LODWORD(v13) = (unsigned int)v12 / (unsigned int)a3;
LABEL_13:
  *v10 = v13;
  v15 = sub_10001D6D0(
          1,
          (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
          a4,
          v11,
          (unsigned int)v13,
          ". Do you want to continue with the new value?",
          v21);
  if ( v15 != 1 )
    sub_10001D7A0(0);
  return v15;
}
// 1000138DD: variable 'v6' is possibly undefined
