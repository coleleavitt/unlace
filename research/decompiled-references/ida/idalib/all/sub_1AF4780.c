unsigned __int64 __fastcall sub_1AF4780(__int64 *a1, char *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char *v10; // rdi
  unsigned int **v11; // rax
  unsigned int *v12; // r8
  unsigned int *v13; // r14
  unsigned int v14; // edx
  _QWORD *v16; // rax
  _BYTE v18[200]; // [rsp+8h] [rbp-C8h] BYREF

  if ( !a4 )
    return 1;
  sub_15F2480(*a1);
  v10 = &a2[8 * a3];
  if ( v10 == a2 )
  {
LABEL_12:
    v16 = (_QWORD *)sub_168B6C0((__int64)a1);
    return sub_F00A80(v16, a5, a6, a2, a3, a4);
  }
  else
  {
    v11 = (unsigned int **)a2;
    v12 = nullptr;
    v13 = nullptr;
    while ( 1 )
    {
      v14 = (*v11)[2];
      if ( v14 == 65 )
      {
        v13 = *v11;
      }
      else if ( v14 == 18 )
      {
        v12 = *v11;
      }
      if ( v12 && v13 )
        break;
      if ( v10 == (char *)++v11 )
        goto LABEL_12;
    }
    sub_168B9F0((__int64)v18, a1, *v12, 0x1209u, 0);
    sub_15F7200(v18);
    sub_168B9F0((__int64)v18, a1, *v13, 0x1825u, 0);
    sub_15F7200(v18);
    return 1;
  }
}
