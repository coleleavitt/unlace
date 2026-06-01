void __fastcall sub_B1D280(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4, unsigned int **a5, int a6)
{
  unsigned int v8; // r8d
  unsigned int v9; // edx
  unsigned __int64 v10; // rax
  int v11; // edx
  unsigned int *v13; // [rsp+10h] [rbp-40h] BYREF
  int *v14; // [rsp+18h] [rbp-38h] BYREF

  if ( (unsigned int)a2 < a3 )
  {
    if ( a3 > 9 )
      goto LABEL_4;
    v10 = sub_B1CED0(a1, a2, a3);
    v11 = 1 << (a3 - 1);
    if ( *(_DWORD *)(a1 + 16) >= 2u )
      v11 = 2 << (a3 - 1);
    if ( v11 + 5 * (int)a2 >= (unsigned int)(5 * v10 + HIDWORD(v10)) )
    {
LABEL_4:
      v13 = nullptr;
      v14 = nullptr;
      sub_B1D280(a1, (unsigned int)a2, a3 >> 1, a4, &v13);
      sub_B1D280(a1, (unsigned int)a2, a3 - (a3 >> 1), &a4[a3 >> 1], &v14);
      if ( v14 )
        v8 = *(v14 - 1);
      else
        v8 = 0;
      if ( v13 )
        v9 = *(v13 - 1);
      else
        v9 = 0;
      sub_B1C500(a1, a2, v9, v13, v8, v14, a5);
      if ( v14 )
        sub_186B220(v14 - 2);
      if ( v13 )
        sub_186B220(v13 - 2);
    }
    else
    {
      sub_B191A0(a1, a2, a3, a4, a5);
    }
  }
  else
  {
    sub_B1D0B0(a1, a3, (__int64)a4, a5, (int)a5, a6);
  }
}

