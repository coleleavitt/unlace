__int64 sub_212770()
{
  const char *v0; // rsi
  const char *v1; // rsi

  v0 = (const char *)qword_8CBC68;
  if ( !qword_8CBC70 )
    v0 = &s1;
  sub_234450("TracingFile", v0);
  v1 = &s1;
  if ( n )
    v1 = (const char *)qword_8CB6C8;
  sub_234450("TracingCondition", v1);
  sub_234360("TracingWindowOpt", dword_8CB6A4);
  sub_234360("TracingWindowOptMask", 1);
  sub_234360("TracingStepOpt", dword_8BA504);
  sub_234360("TracingStepOptMask", 31);
  sub_234360("TracingInsnOpt", dword_8CB6A0);
  sub_234360("TracingInsnOptMask", 1);
  sub_234360("TracingBblkOpt", dword_8CB69C);
  sub_234360("TracingBblkOptMask", 1);
  sub_234360("TracingFuncOpt", dword_8BA500);
  sub_234360("TracingFuncOptMask", 1);
  sub_234360("TracingHighlight", (unsigned __int8)byte_8BA508);
  sub_234360("TracingBufferSize", qword_8CB658);
  return sub_234360("TracingMemorySize", qword_8CB650);
}
