unsigned __int64 __fastcall sub_155D0(__int64 a1, __int64 a2, char a3, double a4)
{
  __int64 v5; // r14
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // rax
  char v16; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v17; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 408) == -1 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v8 = qlseek(*(_QWORD *)(v5 + 472), 0, 1) - *(_QWORD *)(v5 + 480);
    qlseek(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 472LL), a2 + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 480LL), 0);
    if ( a3 )
    {
      sub_397B0(*(_QWORD *)(a1 + 16), &v16);
      if ( v16 != 1 )
        goto LABEL_9;
      sub_397B0(*(_QWORD *)(a1 + 16), &v17);
      v13 = *(_QWORD *)(a1 + 16);
      v14 = 32;
      if ( *(_BYTE *)(v13 + 508) == 2 )
        v14 = 40;
      if ( (unsigned __int8)v17 != v14 )
      {
LABEL_9:
        qlseek(*(_QWORD *)(v5 + 472), v8 + *(_QWORD *)(v5 + 480), 0);
        return v18 - __readfsqword(0x28u);
      }
      v15 = qlseek(*(_QWORD *)(v13 + 472), 0, 1);
      qlseek(*(_QWORD *)(v13 + 472), v15 + 6, 0);
    }
    v9 = *(_QWORD *)(a1 + 16);
    v10 = *(_QWORD *)(v9 + 472);
    if ( *(_BYTE *)(v9 + 508) == 2 )
    {
      v12 = qlseek(v10, 0, 1);
      qlseek(*(_QWORD *)(v9 + 472), v12 + 24, 0);
      sub_396B0(*(_QWORD *)(a1 + 16), &v17, 8, 1);
      *(_QWORD *)(a1 + 408) = v17;
    }
    else
    {
      v11 = qlseek(v10, 0, 1);
      qlseek(*(_QWORD *)(v9 + 472), v11 + 20, 0);
      sub_39740(*(_QWORD *)(a1 + 16), &v17);
      *(_QWORD *)(a1 + 408) = (unsigned int)v17;
    }
    sub_EAA0((__int64)"Initial value of $gp %a\n", a4);
    qlseek(*(_QWORD *)(v5 + 472), v8 + *(_QWORD *)(v5 + 480), 0);
  }
  return v18 - __readfsqword(0x28u);
}

