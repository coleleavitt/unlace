__int64 __fastcall sub_118880(__int64 a1, __int64 a2)
{
  if ( (unsigned int)sub_924A0(
                       0,
                       (__int64)"AUTOHIDE NONE\nHIDECANCEL\nDo you want to restore the following database snapshot:\n%s",
                       (const char *)(*(_QWORD *)(*(_QWORD *)(a1 + 8544) + 16 * a2) + 10LL)) == 1 )
  {
    sub_8F660((__int64)"Restore snapshot is not supported in this version of IDA\n");
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8584) + 64LL))(*(_QWORD *)(a1 + 8584), 1);
  }
  return -1;
}

