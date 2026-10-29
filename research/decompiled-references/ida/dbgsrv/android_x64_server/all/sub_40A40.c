/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40A40
// Address: 0x0000000000040A40

//----- (0000000000040A40) ----------------------------------------------------
__int64 __fastcall sub_40A40(unsigned __int64 a1, unsigned int a2, __int64 a3, unsigned __int8 *a4, int a5, char a6)
{
  unsigned int v6; // r14d
  unsigned __int64 v8; // rbp
  int v10; // r12d
  __int64 v11; // rbx
  unsigned int v12; // r13d
  unsigned __int8 *v14; // rsi
  __int64 v15; // r13
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rax
  char v20; // [rsp+Ch] [rbp-6Ch]
  _DWORD *v21; // [rsp+18h] [rbp-60h]
  int v22; // [rsp+20h] [rbp-58h]
  unsigned int v23; // [rsp+24h] [rbp-54h]
  _QWORD v24[8]; // [rsp+38h] [rbp-40h] BYREF

  v24[1] = __readfsqword(0x28u);
  v6 = 0;
  if ( !*(_BYTE *)(a1 + 1149) )
  {
    v8 = a1;
    if ( *(_DWORD *)(a1 + 1140) != -1 )
    {
      v10 = a5;
      v11 = a3;
      v12 = a2;
      if ( *(_BYTE *)(a1 + 664) )
      {
        a1 = (unsigned __int64)a4;
        sub_40C90(a4, a5, (int)"WRITE MEMORY %a %d bytes:\n", a3, (unsigned int)a5);
      }
      if ( a6 )
      {
        a1 = v8;
        sub_3AAD0(v8, 0, 1);
      }
      if ( a2 == -1 )
        v12 = *(_DWORD *)(v8 + 1140);
      v21 = (_DWORD *)__errno(a1);
      *v21 = 0;
      if ( v10 <= 0 )
      {
        v6 = v10;
        if ( a6 )
LABEL_27:
          sub_402C0(v8, 0, 1);
      }
      else
      {
        v23 = v12;
        v20 = a6;
        v22 = v10;
        v14 = a4;
        while ( 1 )
        {
          v15 = v11 & 7;
          v16 = 8 - v15;
          if ( 8 - (int)v15 > v10 )
            v16 = v10;
          v17 = 8;
          if ( (unsigned __int64)v16 < 8 )
            v17 = v16;
          __memcpy_chk(v24, v14, v17, 8);
          v18 = v11 - v15;
          if ( v16 != 8 )
          {
            v19 = ptrace(PTRACE_PEEKTEXT, v23, v11 - v15, 0);
            if ( *v21 )
              break;
            v24[0] = ((v24[0] & (0xFFFFFFFFFFFFFFFFLL >> (64 - 8 * (unsigned __int8)v16))) << (8 * (unsigned __int8)v15))
                   | ~(0xFFFFFFFFFFFFFFFFLL >> (64 - 8 * (unsigned __int8)v16) << (8 * (unsigned __int8)v15)) & v19;
          }
          *v21 = 0;
          ptrace(PTRACE_POKETEXT, *(unsigned int *)(v8 + 1140), v18, v24[0]);
          if ( *v21 )
          {
            *v21 = 0;
            ptrace(PTRACE_POKEDATA, *(unsigned int *)(v8 + 1140), v18, v24[0]);
            if ( *v21 )
              break;
          }
          v14 += v16;
          v11 += v16;
          v10 -= v16;
          if ( v10 <= 0 )
          {
            v6 = v22;
            goto LABEL_26;
          }
        }
        v6 = 0;
LABEL_26:
        if ( v20 )
          goto LABEL_27;
      }
    }
  }
  return v6;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 33BE0: using guessed type __int64 __fastcall __memcpy_chk(_QWORD, _QWORD, _QWORD, _QWORD);
