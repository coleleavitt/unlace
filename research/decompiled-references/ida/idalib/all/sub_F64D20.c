unsigned __int64 __fastcall sub_F64D20(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+8h] [rbp-10h] BYREF

  v3 = *a1;
  v1 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v1 + 16) == 7
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 7
    && (v1 = sub_F62E70(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL))) != 0 )
  {
    v3 = *(_QWORD *)(v1 + 32);
  }
  return sub_6D5440(&v3);
}
