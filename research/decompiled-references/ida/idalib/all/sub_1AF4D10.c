unsigned __int64 __fastcall sub_1AF4D10(__int64 *a1, unsigned int **a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v6; // ecx
  unsigned int v7; // edx
  _QWORD *v10; // rax
  __int64 v11; // r9
  _BYTE v13[168]; // [rsp+10h] [rbp-A8h] BYREF

  if ( !a3 )
  {
    v6 = 4474;
    v7 = a4;
    goto LABEL_6;
  }
  if ( (*a2)[2] != 23 )
  {
    v7 = **a2;
    v6 = 4474;
    goto LABEL_6;
  }
  if ( a3 > 2 )
  {
    v6 = 4475;
    v7 = *a2[2];
LABEL_6:
    sub_168B9F0((__int64)v13, a1, v7, v6, 0);
    sub_15F7200(v13);
    return 1;
  }
  v10 = (_QWORD *)sub_168B6C0((__int64)a1);
  return sub_F008C0(v10, a4, a5, a2, a3, v11);
}
