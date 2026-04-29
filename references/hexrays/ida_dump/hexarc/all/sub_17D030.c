__int64 __fastcall sub_17D030(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4, int a5)
{
  unsigned int v7; // ebp
  char v9[8]; // [rsp+0h] [rbp-48h] BYREF
  char *v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  sub_11D380((__int64)v9, a3);
  sub_17CF50(a1, (__int64)v9);
  if ( v9[0] == 10 )
  {
    v7 = 0;
    if ( *v10 != 6 )
      goto LABEL_3;
    sub_116350((char *)a2, v10);
LABEL_8:
    *(_DWORD *)(a2 + 4) = a4;
    v7 = 1;
    goto LABEL_3;
  }
  v7 = 0;
  if ( v9[0] == 3 )
  {
    sub_116350((char *)a2, v9);
    if ( !a4 )
      a4 = a5 * (sub_32A9A0(*(_QWORD *)(a2 + 8), 0) + 1);
    goto LABEL_8;
  }
LABEL_3:
  sub_1166E0((__int64)v9);
  return v7;
}
