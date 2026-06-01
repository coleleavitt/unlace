__int64 __fastcall sub_2AE180(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = operator new(0x48u);
  *(_QWORD *)(result + 8) = a2;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_BYTE *)(result + 64) = 0;
  *(_QWORD *)result = &gruser_model_data_t___vtable;
  *(_OWORD *)(result + 24) = 0;
  *(_OWORD *)(result + 48) = 0;
  return result;
}
