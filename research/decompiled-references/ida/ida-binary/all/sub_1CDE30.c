__int64 __fastcall sub_1CDE30(size_t *a1, __int64 a2)
{
  const char *v3; // rsi
  const void *v4; // rbp
  __int64 v5; // rax

  switch ( a2 )
  {
    case 0LL:
      v3 = "CustomIDAMemo[debugging=\"true\"]";
      v4 = (const void *)sub_1E7800(2165563983LL);
      goto LABEL_4;
    case 1LL:
    case 2LL:
    case 6LL:
      return 0;
    case 3LL:
      v4 = (const void *)sub_1E7800(2165563945LL);
      sub_1CDB20(a1, "TCpuRegs", "background-color");
      v3 = "CustomIDAMemo[debugging=\"true\"]";
      goto LABEL_4;
    case 4LL:
      v3 = "CustomIDAMemo";
      v4 = (const void *)sub_1E7800(2165563977LL);
      goto LABEL_4;
    case 5LL:
      v3 = "CustomIDAMemo";
      v4 = (const void *)sub_1E7800(2165563978LL);
      goto LABEL_4;
    case 7LL:
      v3 = "CustomIDAMemo";
      v4 = (const void *)sub_1E7800(2165563979LL);
      goto LABEL_4;
    default:
      v5 = sub_1E1110(a2 - 8);
      v3 = "TCpuRegs";
      v4 = (const void *)v5;
LABEL_4:
      if ( !v4 )
        return 0;
      sub_1CDB20(a1, v3, v4);
      return 1;
  }
}
