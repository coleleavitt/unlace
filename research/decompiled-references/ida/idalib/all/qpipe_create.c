int __fastcall qpipe_create(_QWORD *a1)
{
  int result; // eax
  _QWORD v2[3]; // [rsp+0h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  result = pipe((int *)v2);
  if ( result )
    return *__errno_location();
  *a1 = v2[0];
  return result;
}
