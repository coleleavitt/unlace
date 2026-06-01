/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AA6D0
// Address: 0x00000000000AA6D0

//----- (00000000000AA6D0) ----------------------------------------------------
__int64 __fastcall sub_AA6D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned int v4; // r14d
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r14
  const char *v9; // rax
  const char *v10; // rbx
  size_t v11; // rax
  size_t v12; // rbp
  char **v13; // r13
  size_t v14; // r12
  char *v15; // rdi
  _QWORD v17[8]; // [rsp+8h] [rbp-40h] BYREF

  v17[1] = __readfsqword(0x28u);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  v4 = -1;
  if ( v3 && !*(_BYTE *)(a1 + 8) )
  {
    v5 = v3;
    sub_AB240((__int64)a2);
    v6 = *a2;
    v7 = a2[1];
    v4 = 0;
    sub_A9D20(v17, v5, 0, v7);
    if ( v7 > 0 )
    {
      while ( 1 )
      {
        v8 = sub_A95E0(v5);
        if ( v8 < 0 )
          break;
        sub_A9D70(v17);
        v6 += v8;
        v7 -= v8;
        if ( v7 <= 0 )
        {
          v4 = 0;
          goto LABEL_15;
        }
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v6);
      *(_BYTE *)(a1 + 8) = 1;
      v4 = -1;
      if ( (unsigned int)sub_A9600(v5) != -15059582 )
      {
        v9 = (const char *)sub_A9610(v5);
        v10 = v9;
        if ( v9 && (v11 = strlen(v9)) != 0 )
        {
          v12 = v11;
          v13 = (char **)(a1 + 16);
          v14 = v11 + 1;
          if ( *(_QWORD *)(a1 + 32) >= v11 + 1 )
          {
            v15 = *v13;
          }
          else
          {
            v15 = (char *)qvector_reserve(a1 + 16, *v13, v11 + 1, 1u);
            *v13 = v15;
          }
          *(_QWORD *)(a1 + 24) = v14;
          memmove(v15, v10, v12);
          *(_BYTE *)(*(_QWORD *)(a1 + 16) + v12) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 24) = 0;
        }
      }
    }
LABEL_15:
    sub_A9D40(v17);
  }
  return v4;
}
