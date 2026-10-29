__int64 sub_A39F0()
{
  const char *v0; // rsi
  const char *v1; // rsi

  v0 = (const char *)qword_251008;
  if ( !qword_251010 )
    v0 = s1;
  sub_C41C0("TracingFile", v0);
  v1 = s1;
  if ( n )
    v1 = (const char *)qword_250AC8;
  sub_C41C0("TracingCondition", v1);
  sub_C40D0("TracingWindowOpt", (unsigned int)dword_250AA4);
  sub_C40D0("TracingWindowOptMask", 1);
  sub_C40D0("TracingStepOpt", (unsigned int)dword_2440D8);
  sub_C40D0("TracingStepOptMask", 31);
  sub_C40D0("TracingInsnOpt", (unsigned int)dword_250AA0);
  sub_C40D0("TracingInsnOptMask", 1);
  sub_C40D0("TracingBblkOpt", (unsigned int)dword_250A9C);
  sub_C40D0("TracingBblkOptMask", 1);
  sub_C40D0("TracingFuncOpt", (unsigned int)dword_2440D4);
  sub_C40D0("TracingFuncOptMask", 1);
  sub_C40D0("TracingHighlight", (unsigned __int8)byte_2440DC);
  sub_C40D0("TracingBufferSize", (unsigned int)dword_250A54);
  return sub_C40D0("TracingMemorySize", (unsigned int)dword_250A50);
}

