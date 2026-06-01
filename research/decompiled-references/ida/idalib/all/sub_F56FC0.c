__int64 __fastcall sub_F56FC0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = sub_A63CE0(a1);
  result = sub_A97D20((__int64)a1, *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0LL));
  if ( (unsigned int)result > 0x3D )
    return 61;
  return result;
}
