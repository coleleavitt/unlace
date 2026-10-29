__int64 sub_A3DF0()
{
  const char *v0; // rsi
  const char *v1; // rsi

  v0 = (const char *)qword_2520E8;
  if ( !qword_2520F0 )
    v0 = s1;
  sub_C5600("TracingFile", v0);
  v1 = s1;
  if ( n )
    v1 = (const char *)qword_251B48;
  sub_C5600("TracingCondition", v1);
  sub_C5510("TracingWindowOpt", dword_251B24);
  sub_C5510("TracingWindowOptMask", 1);
  sub_C5510("TracingStepOpt", dword_245124);
  sub_C5510("TracingStepOptMask", 31);
  sub_C5510("TracingInsnOpt", dword_251B20);
  sub_C5510("TracingInsnOptMask", 1);
  sub_C5510("TracingBblkOpt", dword_251B1C);
  sub_C5510("TracingBblkOptMask", 1);
  sub_C5510("TracingFuncOpt", dword_245120);
  sub_C5510("TracingFuncOptMask", 1);
  sub_C5510("TracingHighlight", (unsigned __int8)byte_245128);
  sub_C5510("TracingBufferSize", qword_251AD8);
  return sub_C5510("TracingMemorySize", qword_251AD0);
}

