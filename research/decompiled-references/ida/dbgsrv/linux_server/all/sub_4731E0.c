/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4731E0
// Address: 0x00000000004731E0

//----- (00000000004731E0) ----------------------------------------------------
__int64 __fastcall sub_4731E0(__int64 a1, int a2)
{
  __time_t v3; // r12
  int v4; // ebx
  int v5; // eax
  __time_t v6; // rax
  unsigned __int64 v7; // rdx
  int v8; // eax
  const char *v9; // rax
  char v11; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v3 = sub_481E10();
  if ( (*(int (__fastcall **)(_QWORD))(qword_4C83E0 + 272))(*(_QWORD *)(a1 + 88)) > 0 )
  {
LABEL_16:
    *(_DWORD *)(a1 + 76) = -1;
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v4 = sub_46F010(*(_QWORD *)(a1 + 32));
      if ( v4 <= 0 )
        break;
      *(_DWORD *)(a1 + 76) = a2;
      v5 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(qword_4C83E0 + 264))(*(_QWORD *)(a1 + 88), &v11, 1);
      v4 = v5;
      if ( v5 >= 0 )
        goto LABEL_16;
      if ( v5 == -1 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(qword_4C83E0 + 232))(*(_QWORD *)(a1 + 88), 0xFFFFFFFFLL);
        if ( v8 == 5 )
        {
          v9 = "irs";
LABEL_14:
          *(_QWORD *)(a1 + 64) = v9;
          return (unsigned int)v4;
        }
        if ( v8 == 6 || v8 == 1 )
        {
          v9 = "openssl";
          goto LABEL_14;
        }
        *(_DWORD *)(a1 + 72) = 0;
        *(_QWORD *)(a1 + 64) = "";
      }
      if ( a2 != -1 )
      {
        v6 = sub_481E10();
        v7 = v6 - v3;
        v3 = v6;
        a2 -= v7 / 0x3E8;
        if ( a2 < 0 )
          a2 = 0;
      }
    }
    *(_QWORD *)(a1 + 64) = "irs";
  }
  return (unsigned int)v4;
}
// 4C83E0: using guessed type __int64 qword_4C83E0;
