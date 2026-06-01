/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AA860
// Address: 0x00000000000AA860

//----- (00000000000AA860) ----------------------------------------------------
__int64 __fastcall sub_AA860(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rbp
  unsigned int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // r15
  int v11; // r14d
  const char *v12; // rax
  const char *v13; // rbp
  size_t v14; // rax
  size_t v15; // r12
  char **v16; // r15
  size_t v17; // r14
  char *v18; // rdi
  _QWORD v21[8]; // [rsp+8h] [rbp-40h] BYREF

  v21[1] = __readfsqword(0x28u);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_A9D20(v21, v7, 1u, a3);
  v8 = 0;
  if ( !a3 )
    goto LABEL_18;
  do
  {
    while ( 1 )
    {
      v9 = a4;
      if ( (int)sub_A9620(v7) <= 0 )
        break;
      v9 = a2;
      v10 = sub_A95F0(v7);
      if ( v10 <= 0 )
        goto LABEL_7;
      sub_A9D70(v21);
      a3 -= v10;
      a2 += v10;
      if ( !a3 )
      {
        v8 = 0;
        goto LABEL_18;
      }
    }
    v10 = -1;
LABEL_7:
    v11 = sub_A9600(v7);
  }
  while ( v11 == -21015 );
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v9);
  if ( v10 )
  {
    *(_BYTE *)(a1 + 8) = 1;
    if ( v11 != -15059582 )
    {
      v12 = (const char *)sub_A9610(v7);
      v13 = v12;
      if ( v12 && (v14 = strlen(v12)) != 0 )
      {
        v15 = v14;
        v16 = (char **)(a1 + 16);
        v17 = v14 + 1;
        if ( *(_QWORD *)(a1 + 32) >= v14 + 1 )
        {
          v18 = *v16;
        }
        else
        {
          v18 = (char *)qvector_reserve(a1 + 16, *v16, v14 + 1, 1u);
          *v16 = v18;
        }
        *(_QWORD *)(a1 + 24) = v17;
        memmove(v18, v13, v15);
        *(_BYTE *)(*(_QWORD *)(a1 + 16) + v15) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 24) = 0;
      }
    }
  }
  v8 = -1;
LABEL_18:
  sub_A9D40(v21);
  return v8;
}
// AA91C: conditional instruction was optimized away because rbx.8!=0
