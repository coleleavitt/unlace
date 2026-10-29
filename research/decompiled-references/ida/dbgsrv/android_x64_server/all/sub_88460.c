/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_88460
// Address: 0x0000000000088460

//----- (0000000000088460) ----------------------------------------------------
unsigned __int64 __fastcall sub_88460(__int64 a1, __int64 a2, char a3, double a4, __m128 a5)
{
  __int64 v5; // r15
  int v6; // eax
  int qerrno; // eax
  int v8; // eax
  __int64 v9; // rax
  char v11[8]; // [rsp+8h] [rbp-30h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( a3 )
  {
    v5 = *(_QWORD *)(a1 + 432);
    v6 = sub_862A0(a1, v5, 0, nullptr, a4, a5);
    if ( !v6 && *(_QWORD *)(a1 + 64) )
      v6 = sub_871E0(a1, v5, a4, a5);
    if ( v6 )
    {
      qerrno = get_qerrno();
      longjmp((struct __jmp_buf_tag *)(a1 + 344), qerrno);
    }
  }
  v11[0] = 1;
  v12 = 0;
  v8 = *(__int16 *)(*(_QWORD *)(a1 + 432) + 24LL);
  if ( v8 > 44 )
  {
    if ( (unsigned __int16)v8 == 126 )
    {
      sub_88460(a1, v11, 1);
      v9 = ~v12;
      goto LABEL_17;
    }
    if ( (unsigned __int16)v8 == 45 )
    {
      sub_88460(a1, v11, 1);
      v9 = -v12;
      goto LABEL_17;
    }
  }
  else
  {
    if ( (unsigned __int16)v8 == 33 )
    {
      sub_88460(a1, v11, 1);
      v9 = v12 == 0;
      goto LABEL_17;
    }
    if ( (unsigned __int16)v8 == 43 )
    {
      sub_88460(a1, v11, 1);
      v9 = v12;
LABEL_17:
      *(_QWORD *)(a2 + 8) = v9;
      *(_BYTE *)a2 = v11[0];
      return __readfsqword(0x28u);
    }
  }
  sub_88600(a1, a2, a4, a5);
  return __readfsqword(0x28u);
}
