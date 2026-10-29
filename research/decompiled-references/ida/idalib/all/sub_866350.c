__int64 __fastcall sub_866350(int *a1, _BOOL8 a2, unsigned int **a3, __int64 *a4, _QWORD *a5, __int64 *a6)
{
  unsigned int *v7; // rax
  unsigned int v9; // eax
  unsigned int *v10; // rdx
  unsigned int v11; // ecx
  __int64 *v12; // r10
  unsigned int **v13; // r11
  __int64 v15; // rax
  unsigned int v18; // [rsp+1Ch] [rbp-9Ch]
  unsigned int *v19; // [rsp+30h] [rbp-88h] BYREF
  __int64 v20; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v21[56]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-40h]

  v7 = *a3;
  v22 = __readfsqword(0x28u);
  v19 = v7;
  v20 = *a4;
  v9 = sub_865EC0(a1, a2, &v19, &v20, (__int64)a5, a6);
  if ( v9 )
  {
    v10 = v19;
    v11 = v9;
    v12 = a4;
    v13 = a3;
    if ( *v19 + 2143027200 <= 0x40000 || *v19 == -2146631680 )
    {
LABEL_13:
      v15 = v20;
      *v13 = v10;
      *v12 = v15;
      return v11;
    }
    v18 = v9;
    while ( (unsigned int)sub_865EC0(a1, a2, &v19, &v20, (__int64)v21, a6) )
    {
      sub_8652E0(2 - a2, (__int64)a5, (__int64)v21, a6);
      if ( !a6 )
        v20 = *a5 + a5[1];
      v10 = v19;
      if ( *v19 + 2143027200 <= 0x40000 || *v19 == -2146631680 )
      {
        v11 = v18;
        v13 = a3;
        v12 = a4;
        goto LABEL_13;
      }
    }
  }
  return 0;
}
