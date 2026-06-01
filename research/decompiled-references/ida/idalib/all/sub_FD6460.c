__int64 __fastcall sub_FD6460(unsigned __int8 *a1, _BYTE *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_BYTE *, void *))(*(_QWORD *)a2 + 24LL))(a2, &unk_26FAE05);
  if ( (_BYTE)result )
  {
    result = *a1;
    a2[116] = result;
  }
  return result;
}
