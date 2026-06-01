__int64 __fastcall dwarf_set_frame_undefined_value(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a1 + 8336);
  *(_QWORD *)(a1 + 8344) = a2;
  return result;
}

