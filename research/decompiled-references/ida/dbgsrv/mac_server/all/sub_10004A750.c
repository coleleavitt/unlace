/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004A750
// Address: 0x000000010004A750

//----- (000000010004A750) ----------------------------------------------------
unsigned __int64 __fastcall sub_10004A750(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rax
  int qerrno; // eax
  char v9[8]; // [rsp+0h] [rbp-30h] BYREF
  __int64 v10; // [rsp+8h] [rbp-28h]

  if ( a3 )
  {
    v3 = *(_QWORD *)(a1 + 496);
    v4 = sub_100048770(a1, v3, 0, nullptr);
    if ( *(_QWORD *)(a1 + 64) != 0 && v4 == 0 )
      v4 = sub_100049580(a1, v3);
    if ( v4 )
    {
      qerrno = get_qerrno();
      longjmp((int *)(a1 + 344), qerrno);
    }
  }
  v9[0] = 1;
  v10 = 0;
  v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 496) + 24LL);
  if ( v5 > 0x2C )
  {
    if ( v5 == 126 )
    {
      sub_10004A750(a1, v9, 1);
      v6 = ~v10;
      goto LABEL_15;
    }
    if ( v5 == 45 )
    {
      sub_10004A750(a1, v9, 1);
      v6 = -v10;
      goto LABEL_15;
    }
    return sub_10004A8B0(a1, a2);
  }
  if ( v5 == 33 )
  {
    sub_10004A750(a1, v9, 1);
    v6 = v10 == 0;
    goto LABEL_15;
  }
  if ( v5 != 43 )
    return sub_10004A8B0(a1, a2);
  sub_10004A750(a1, v9, 1);
  v6 = v10;
LABEL_15:
  *(_QWORD *)(a2 + 8) = v6;
  *(_BYTE *)a2 = v9[0];
  return __stack_chk_guard;
}
