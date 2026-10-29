__int64 *sub_5675D0()
{
  __int64 *result; // rax
  __int64 *v1; // rcx

  qword_4ADDAE8 = 25;
  qword_4ADDAE0 = (__int64)"json-compilation-database";
  qword_4ADDAF0 = (__int64)"Reads JSON formatted compilation databases";
  qword_4ADDB00 = (__int64)sub_1F4A3A0;
  qword_4ADDB10 = (__int64)&qword_4ADDAE0;
  result = &qword_4ADDAC0;
  qword_4ADDAF8 = 42;
  qword_4ADDB08 = 0;
  v1 = (__int64 *)qword_4ADDAC0;
  if ( !qword_4ADDAC0 )
    v1 = &qword_4ADDAC8;
  *v1 = (__int64)&qword_4ADDB08;
  qword_4ADDAC0 = (__int64)&qword_4ADDB08;
  return result;
}

