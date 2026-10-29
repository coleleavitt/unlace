__int64 __fastcall sub_422C30(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  v5[1] = __readfsqword(0x28u);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v3 + 24LL))(v3, *(_QWORD *)(a1 + 48), v5);
  if ( !(_BYTE)result )
    return sub_359480(a1, (__int64)a2);
  *a2 = v5[0];
  ++*(_QWORD *)(a1 + 48);
  return result;
}
